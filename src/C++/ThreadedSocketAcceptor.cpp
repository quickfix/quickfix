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

#include "ThreadedSocketAcceptor.h"
#include "Settings.h"
#include "Utility.h"

namespace FIX
{
ThreadedSocketAcceptor::ThreadedSocketAcceptor(
  Application& application,
  MessageStoreFactory& factory,
  const SessionSettings& settings )
throw( ConfigError& )
    : Acceptor( application, factory, settings ),
    m_port( 0 ), m_socket( 0 ), m_stop( false )
{ socket_init(); }

ThreadedSocketAcceptor::ThreadedSocketAcceptor(
  Application& application,
  MessageStoreFactory& factory,
  const SessionSettings& settings,
  LogFactory& logFactory )
throw( ConfigError& )
    : Acceptor( application, factory, settings, logFactory ),
    m_port( 0 ), m_socket( 0 ), m_stop( false )
{ socket_init(); }

ThreadedSocketAcceptor::ThreadedSocketAcceptor(
  Application& application,
  MessageStoreFactory& factory,
  const SessionSettings& settings,
  bool& threw, ConfigError& ex )
    : Acceptor( application, factory, settings, threw, ex ),
    m_port( 0 ), m_socket( 0 ), m_stop( false )
{ socket_init(); }

ThreadedSocketAcceptor::ThreadedSocketAcceptor(
  Application& application,
  MessageStoreFactory& factory,
  const SessionSettings& settings,
  LogFactory& logFactory,
  bool& threw, ConfigError& ex )
    : Acceptor( application, factory, settings, logFactory, threw, ex ),
    m_port( 0 ), m_socket( 0 ), m_stop( false )
{ socket_init(); }

ThreadedSocketAcceptor::~ThreadedSocketAcceptor()
{ socket_term(); }

bool ThreadedSocketAcceptor::onStart( const SessionSettings& s )
{
  m_port = ( short ) s.get().getLong( "SocketAcceptPort" );
  m_socket = socket_createAcceptor( m_port );

  int socket = 0;
  while ( ( !m_stop && ( socket = socket_accept( m_socket ) ) >= 0 ) )
  {
    ThreadedSocketConnection * pConnection =
      new ThreadedSocketConnection( socket, getApplication() );

    ThreadPair* pair = new ThreadPair( this, pConnection );

    int thread;
    if ( !thread_spawn( &socketThread, pair, thread ) )
      delete pair;
    addThread( socket, thread );
  }
  return true;
}

void ThreadedSocketAcceptor::onStop()
{
  m_stop = true;
  socket_close( m_socket );

  m_mutex.lock();

  SocketToThread::iterator i;
  for ( i = m_threads.begin(); i != m_threads.end(); ++i )
    socket_close( i->first );
  for ( i = m_threads.begin(); i != m_threads.end(); ++i )
    thread_join( i->second );

  m_mutex.unlock();
}

void ThreadedSocketAcceptor::addThread( int s, int t )
{
  m_mutex.lock();
  m_threads[ s ] = t;
  m_mutex.unlock();
}

void ThreadedSocketAcceptor::removeThread( int s )
{
  m_mutex.lock();
  m_threads.erase( s );
  m_mutex.unlock();
}

void* ThreadedSocketAcceptor::socketThread( void* p )
{
  ThreadPair * pair = reinterpret_cast < ThreadPair* > ( p );

  ThreadedSocketAcceptor* pAcceptor = pair->first;
  ThreadedSocketConnection* pConnection = pair->second;
  delete pair;

  while ( pConnection->read() ) {}
  pAcceptor->removeThread( pConnection->getSocket() );
  delete pConnection;
  return 0;
}
}
