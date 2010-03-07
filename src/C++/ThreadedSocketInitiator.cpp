/****************************************************************************
** Copyright (c) quickfixengine.org  All rights reserved.
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

#include "ThreadedSocketInitiator.h"
#include "Session.h"
#include "Settings.h"

namespace FIX
{
ThreadedSocketInitiator::ThreadedSocketInitiator(
  Application& application,
  MessageStoreFactory& factory,
  const SessionSettings& settings ) throw( ConfigError )
: Initiator( application, factory, settings ),
  m_lastConnect( 0 ), m_reconnectInterval( 30 ), m_noDelay( false ), 
  m_sendBufSize( 0 ), m_rcvBufSize( 0 ) 
{ 
  socket_init(); 
}

ThreadedSocketInitiator::ThreadedSocketInitiator(
  Application& application,
  MessageStoreFactory& factory,
  const SessionSettings& settings,
  LogFactory& logFactory ) throw( ConfigError )
: Initiator( application, factory, settings, logFactory ),
  m_lastConnect( 0 ), m_reconnectInterval( 30 ), m_noDelay( false ), 
  m_sendBufSize( 0 ), m_rcvBufSize( 0 ) 
{ 
  socket_init(); 
}

ThreadedSocketInitiator::~ThreadedSocketInitiator()
{ 
  socket_term(); 
}

void ThreadedSocketInitiator::onConfigure( const SessionSettings& s )
throw ( ConfigError )
{ QF_STACK_PUSH(ThreadedSocketInitiator::onConfigure)

  try { m_reconnectInterval = s.get().getLong( "ReconnectInterval" ); }
  catch ( std::exception& ) {}
  if( s.get().has( SOCKET_NODELAY ) )
    m_noDelay = s.get().getBool( SOCKET_NODELAY );
  if( s.get().has( SOCKET_SEND_BUFFER_SIZE ) )
    m_sendBufSize = s.get().getLong( SOCKET_SEND_BUFFER_SIZE );
  if( s.get().has( SOCKET_RECEIVE_BUFFER_SIZE ) )
    m_rcvBufSize = s.get().getLong( SOCKET_RECEIVE_BUFFER_SIZE );

  QF_STACK_POP
}

void ThreadedSocketInitiator::onInitialize( const SessionSettings& s )
throw ( RuntimeError )
{ QF_STACK_PUSH(ThreadedSocketInitiator::onInitialize)
  QF_STACK_POP
}

void ThreadedSocketInitiator::onStart()
{ QF_STACK_PUSH(ThreadedSocketInitiator::onStart)

  while ( !isStopped() )
  {
    time_t now;
    ::time( &now );

    if ( (now - m_lastConnect) >= m_reconnectInterval )
    {
      Locker l( m_mutex );
      connect();
      m_lastConnect = now;
    }

    process_sleep( 1 );
  }

  QF_STACK_POP
}

bool ThreadedSocketInitiator::onPoll( double timeout )
{ QF_STACK_PUSH(ThreadedSocketInitiator::onPoll)

  return false;

  QF_STACK_POP
}

void ThreadedSocketInitiator::onStop()
{ QF_STACK_PUSH(ThreadedSocketInitiator::onStop)

  SocketToThread threads;
  SocketToThread::iterator i;
  
  {
    Locker l(m_mutex);

    time_t start = 0;
    time_t now = 0;

    ::time( &start );
    while ( isLoggedOn() )
    {
      if( ::time(&now) -5 >= start )
        break;
    }

    threads = m_threads;
    m_threads.clear();
  }   

  for ( i = threads.begin(); i != threads.end(); ++i )
    socket_close( i->first );
  
  for ( i = threads.begin(); i != threads.end(); ++i )
    thread_join( i->second );
  threads.clear();

  QF_STACK_POP
}

void ThreadedSocketInitiator::doConnect( const SessionID& s, const Dictionary& d )
{ QF_STACK_PUSH(ThreadedSocketInitiator::doConnect)

  try
  {
    Session* session = Session::lookupSession( s );
    if( !session->isSessionTime(UtcTimeStamp()) ) return;

    Log* log = session->getLog();

    std::string address;
    short port = 0;
    getHost( s, d, address, port );

    int socket = socket_createConnector();
    if( m_noDelay )
      socket_setsockopt( socket, TCP_NODELAY );
    if( m_sendBufSize )
      socket_setsockopt( socket, SO_SNDBUF, m_sendBufSize );
    if( m_rcvBufSize )
      socket_setsockopt( socket, SO_RCVBUF, m_rcvBufSize );

    setPending( s );
    log->onEvent( "Connecting to " + address + " on port " + IntConvertor::convert((unsigned short)port) );

    ThreadedSocketConnection* pConnection =
      new ThreadedSocketConnection( s, socket, address, port, getApplication(), getLog() );

    ThreadPair* pair = new ThreadPair( this, pConnection );

    {
      Locker l( m_mutex );
      thread_id thread;
      if ( thread_spawn( &socketThread, pair, thread ) )
      {
        addThread( socket, thread );
      }
      else
      {
        delete pair;
        pConnection->disconnect();
        delete pConnection;
        setDisconnected( s );
      }
    }
  }
  catch ( std::exception& ) {}

  QF_STACK_POP
}

void ThreadedSocketInitiator::addThread( int s, thread_id t )
{ QF_STACK_PUSH(ThreadedSocketInitiator::addThread)

  Locker l(m_mutex);

  m_threads[ s ] = t;
  QF_STACK_POP
}

void ThreadedSocketInitiator::removeThread( int s )
{ QF_STACK_PUSH(ThreadedSocketInitiator::removeThread)

  Locker l(m_mutex);
  SocketToThread::iterator i = m_threads.find( s );

  if ( i != m_threads.end() )
  {
    thread_detach( i->second );
    m_threads.erase( i );
  }

  QF_STACK_POP
}

THREAD_PROC ThreadedSocketInitiator::socketThread( void* p )
{ QF_STACK_TRY
  QF_STACK_PUSH(ThreadedSocketInitiator::socketThread)

  ThreadPair * pair = reinterpret_cast < ThreadPair* > ( p );

  ThreadedSocketInitiator* pInitiator = pair->first;
  ThreadedSocketConnection* pConnection = pair->second;
  FIX::SessionID sessionID = pConnection->getSession()->getSessionID();
  FIX::Session* pSession = FIX::Session::lookupSession( sessionID );
  int socket = pConnection->getSocket();
  delete pair;

  pInitiator->lock();

  if( !pConnection->connect() )
  {
    pInitiator->getLog()->onEvent( "Connection failed" );
    pConnection->disconnect();
    delete pConnection;
    pInitiator->removeThread( socket );
    pInitiator->setDisconnected( sessionID );
    return 0;
  }

  pInitiator->setConnected( sessionID );
  pInitiator->getLog()->onEvent( "Connection succeeded" );

  pSession->next();

  while ( pConnection->read() ) {}

  delete pConnection;
  if( !pInitiator->isStopped() )
    pInitiator->removeThread( socket );
  
  pInitiator->setDisconnected( sessionID );
  return 0;

  QF_STACK_POP
  QF_STACK_CATCH
}

void ThreadedSocketInitiator::getHost( const SessionID& s, const Dictionary& d,
                                       std::string& address, short& port )
{ QF_STACK_PUSH(ThreadedSocketInitiator::getHost)

  int num = 0;
  SessionToHostNum::iterator i = m_sessionToHostNum.find( s );
  if ( i != m_sessionToHostNum.end() ) num = i->second;

  std::stringstream hostStream;
  hostStream << SOCKET_CONNECT_HOST << num;
  std::string hostString = hostStream.str();

  std::stringstream portStream;
  std::string portString = portStream.str();
  portStream << SOCKET_CONNECT_PORT << num;

  if( d.has(hostString) && d.has(portString) )
  {
    address = d.getString( hostString );
    port = ( short ) d.getLong( portString );
  }
  else
  {
    num = 0;
    address = d.getString( SOCKET_CONNECT_HOST );
    port = ( short ) d.getLong( SOCKET_CONNECT_PORT );
  }

  m_sessionToHostNum[ s ] = ++num;

  QF_STACK_POP
}

}
