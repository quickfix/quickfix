/* ====================================================================
* The QuickFIX Software License, Version 1.0
*
* Copyright (c) 2001 ThoughtWorks, Inc.  All rights
* reserved.
*
* Redistribution and use in source and binary forms, with or without
* modification, are permitted provided that the following conditions
* are met:
*
* 1. Redistributions of source code must retain the above copyright
*    notice, this list of conditions and the following disclaimer.
*
* 2. Redistributions in binary form must reproduce the above copyright
*    notice, this list of conditions and the following disclaimer in
*    the documentation and/or other materials provided with the
*    distribution.
*
* 3. The end-user documentation included with the redistribution,
*    if any, must include the following acknowledgment:
*       "This product includes software developed by
*        ThoughtWorks, Inc. (http://www.thoughtworks.com/)."
*    Alternately, this acknowledgment may appear in the software itself,
*    if and wherever such third-party acknowledgments normally appear.
*
* 4. The names "QuickFIX" and "ThoughtWorks, Inc." must
*    not be used to endorse or promote products derived from this
*    software without prior written permission. For written
*    permission, please contact quickfix-users@lists.sourceforge.net.
*
* 5. Products derived from this software may not be called "QuickFIX",
*    nor may "QuickFIX" appear in their name, without prior written
*    permission of ThoughtWorks, Inc.
*
* THIS SOFTWARE IS PROVIDED ``AS IS'' AND ANY EXPRESSED OR IMPLIED
* WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE IMPLIED WARRANTIES
* OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE ARE
* DISCLAIMED.  IN NO EVENT SHALL THOUGHTWORKS INC OR
* ITS CONTRIBUTORS BE LIABLE FOR ANY DIRECT, INDIRECT, INCIDENTAL,
* SPECIAL, EXEMPLARY, OR CONSEQUENTIAL DAMAGES (INCLUDING, BUT NOT
* LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS OR SERVICES; LOSS OF
* USE, DATA, OR PROFITS; OR BUSINESS INTERRUPTION) HOWEVER CAUSED AND
* ON ANY THEORY OF LIABILITY, WHETHER IN CONTRACT, STRICT LIABILITY,
* OR TORT (INCLUDING NEGLIGENCE OR OTHERWISE) ARISING IN ANY WAY OUT
* OF THE USE OF THIS SOFTWARE, EVEN IF ADVISED OF THE POSSIBILITY OF
* SUCH DAMAGE.
* ====================================================================
*/

#ifdef _MSC_VER
#include "stdafx.h"
#else
#include "config.h"
#endif

#include "ThreadedSocketConnection.h"
#include "ThreadedSocketAcceptor.h"
#include "ThreadedSocketInitiator.h"
#include "Utility.h"

namespace FIX
{
ThreadedSocketConnection::ThreadedSocketConnection( int s, Application& application )
    : m_socket( s ), m_application( application ),
    m_pSession( 0 ), m_deleted( false ),
m_queueThreadSpawned( false ), m_queueThread( 0 ) {}

ThreadedSocketConnection::ThreadedSocketConnection( const SessionID& sessionID, int s,
    Application& application )

    : m_socket( s ), m_application( application ),
    m_pSession( Session::lookupSession( sessionID ) ), m_deleted( false ),
    m_queueThreadSpawned( false ), m_queueThread( 0 )
{
  if ( m_pSession ) m_pSession->setResponder( this );
}

ThreadedSocketConnection::~ThreadedSocketConnection()
{
  m_deleted = true;
  m_queue.signal();

  if ( m_queueThreadSpawned == true )
    thread_join( m_queueThread );

  char * buffer = 0;
  while ( m_queue.pop( buffer ) )
    if ( buffer ) delete [] buffer;

  if ( m_pSession )
  {
    m_pSession->setResponder( 0 );
    Session::unregisterSession( m_pSession->getSessionID() );
  }
}

bool ThreadedSocketConnection::send( const std::string& msg )
{
  return socket_send( m_socket, msg.c_str(), msg.length() );
}

void ThreadedSocketConnection::disconnect()
{
  socket_close( m_socket );
}

bool ThreadedSocketConnection::read()
{
  std::string msg;
  int bytes = 0;
  char* buffer = 0;
  try
  {
    if ( !m_queueThreadSpawned )
      m_queueThreadSpawned = thread_spawn( &queueThread, this, m_queueThread );

    if ( !socket_isValid( m_socket ) )
      return false;

    socket_fionread( m_socket, bytes );
    if ( bytes == 0 ) bytes = 4096;
    buffer = new char[ bytes + 1 ];
    int result = recv( m_socket, buffer, bytes, 0 );
  if ( result <= 0 ) { throw std::exception(); }
    buffer[ result ] = '\0';
    m_queue.push( buffer );
    return true;
  }
  catch ( std::exception& )
  {
    delete [] buffer;
    m_queue.push( 0 );
    return false;
  }
}

bool ThreadedSocketConnection::readMessage( std::string& msg )
throw( MessageParseError& )
{
  try
  {
    return m_parser.readFixMessage( msg );
  }
  catch ( MessageParseError& ) {}
  return true;
}

void ThreadedSocketConnection::readQueue()
{
  while ( !m_deleted )
  {
    try
    {
      processStream();
      if ( !m_queue.size() )
        m_queue.wait();

      char* buffer = 0;
      while ( m_queue.pop( buffer ) )
      {
        if ( buffer == 0 ) throw std::exception();
        m_parser.addToStream( buffer );
        processStream();
        delete [] buffer;
      }
    }
    catch ( RecvFailed& )
    {
      m_pSession->disconnect();
    }
    catch ( InvalidMessage& )
    {
      if ( !m_pSession->isLoggedOn() )
        m_pSession->disconnect();
    }
    catch ( std::exception& )
    { break; }
  }

  if ( m_pSession )
    m_pSession->disconnect();
  else
    disconnect();
}

void ThreadedSocketConnection::processStream()
{
  std::string msg;
  while ( readMessage( msg ) )
  {
    if ( !m_pSession )
    {
      if ( !setSession( msg ) )
      { disconnect(); continue; }
    }
    m_pSession->next( msg );
  }

  if ( m_pSession )
    m_pSession->next();
}

bool ThreadedSocketConnection::setSession( const std::string& msg )
{
  m_pSession = Session::lookupSession( msg, true );
  if ( !m_pSession ) return false;
  SessionID sessionID = m_pSession->getSessionID();
  // see if the session frees up within 5 seconds
  for ( int i = 1; i <= 5; ++i )
  {
    m_pSession = Session::registerSession( sessionID );
    if ( m_pSession ) break;
    process_sleep( 1 );
  }
  if ( !m_pSession ) return false;
  m_pSession->setResponder( this );
  return true;
}

void* ThreadedSocketConnection::queueThread( void* p )
{
  ThreadedSocketConnection * pConnection = reinterpret_cast < ThreadedSocketConnection* > ( p );
  pConnection->readQueue();
  return 0;
}
} // namespace FIX
