/****************************************************************************
** Copyright (c) 2001-2004 quickfixengine.org  All rights reserved.
**
** This file is part of the QuickFIX FIX Engine
**
** This file may be distributed under the terms of the quickfixengine.org
** license as defined by quickfixengine.org and appearing in the file
** LICENSE included in the packaging of this file.
**
** This file is provided AS IS with NO WARRANTY OF ANY KIND, INCLUDING THE
** WARRANTY OF DESIGN, MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE.
**
** See http://www.quickfixengine.org/LICENSE for licensing information.
**
** Contact ask@quickfixengine.org if any conditions of this licensing are
** not clear to you.
**
****************************************************************************/

#ifdef _MSC_VER
#include "stdafx.h"
#else
#include "config.h"
#endif
#include "CallStack.h"

#include "ThreadedSocketConnection.h"
#include "ThreadedSocketAcceptor.h"
#include "ThreadedSocketInitiator.h"
#include "Session.h"
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
{ QF_STACK_PUSH(ThreadedSocketConnection::send)
  return socket_send( m_socket, msg.c_str(), msg.length() );
  QF_STACK_POP
}

void ThreadedSocketConnection::disconnect()
{ QF_STACK_PUSH(ThreadedSocketConnection::disconnect)
  socket_close( m_socket );
  QF_STACK_POP
}

bool ThreadedSocketConnection::read()
{ QF_STACK_PUSH(ThreadedSocketConnection::read)

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

  QF_STACK_POP
}

bool ThreadedSocketConnection::readMessage( std::string& msg )
throw( MessageParseError& )
{ QF_STACK_PUSH(ThreadedSocketConnection::readMessage)

  try
  {
    return m_parser.readFixMessage( msg );
  }
  catch ( MessageParseError& ) {}
  return true;

  QF_STACK_POP
}

void ThreadedSocketConnection::readQueue()
{ QF_STACK_PUSH(ThreadedSocketConnection::readQueue)

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

  QF_STACK_POP
}

void ThreadedSocketConnection::processStream()
{ QF_STACK_PUSH(ThreadedSocketConnection::processStream)

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

  QF_STACK_POP
}

bool ThreadedSocketConnection::setSession( const std::string& msg )
{ QF_STACK_PUSH(ThreadedSocketConnection::setSession)

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

  QF_STACK_POP
}

THREAD_PROC ThreadedSocketConnection::queueThread( void* p )
{ QF_STACK_TRY
  QF_STACK_PUSH(ThreadedSocketConnection::queueThread)

  ThreadedSocketConnection * pConnection = reinterpret_cast < ThreadedSocketConnection* > ( p );
  pConnection->readQueue();
  return 0;

  QF_STACK_POP
  QF_STACK_CATCH
}
} // namespace FIX
