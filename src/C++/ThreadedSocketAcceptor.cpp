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

#include "ThreadedSocketAcceptor.h"
#include "Settings.h"
#include "Utility.h"

namespace FIX
{
ThreadedSocketAcceptor::ThreadedSocketAcceptor(
  Application& application,
  MessageStoreFactory& factory,
  const SessionSettings& settings ) throw( ConfigError )
: Acceptor( application, factory, settings ), m_stop( false )
{ socket_init(); }

ThreadedSocketAcceptor::ThreadedSocketAcceptor(
  Application& application,
  MessageStoreFactory& factory,
  const SessionSettings& settings,
  LogFactory& logFactory ) throw( ConfigError )
: Acceptor( application, factory, settings, logFactory ), m_stop( false )
{ socket_init(); }

ThreadedSocketAcceptor::~ThreadedSocketAcceptor()
{ socket_term(); }

void ThreadedSocketAcceptor::onConfigure( const SessionSettings& s )
throw ( ConfigError )
{ QF_STACK_PUSH(ThreadedSocketAcceptor::onConfigure)

  std::set<SessionID> sessions = s.getSessions();
  std::set<SessionID>::iterator i;
  for( i = sessions.begin(); i != sessions.end(); ++i )
  {
    const Dictionary& settings = s.get( *i );
    settings.getLong( SOCKET_ACCEPT_PORT );
    if( settings.has(SOCKET_REUSE_ADDRESS) )
      settings.getBool( SOCKET_REUSE_ADDRESS );
    if( settings.has(SOCKET_NODELAY) )
      settings.getBool( SOCKET_NODELAY );
  }

  QF_STACK_POP
}

void ThreadedSocketAcceptor::onInitialize( const SessionSettings& s )
throw ( RuntimeError )
{ QF_STACK_PUSH(ThreadedSocketAcceptor::onInitialize)

  short port = 0;
  bool reuseAddress = false;
  bool noDelay = false;

  std::set<int> ports;

  std::set<SessionID> sessions = s.getSessions();
  std::set<SessionID>::iterator i = sessions.begin();
  for( ; i != sessions.end(); ++i )
  {
    Dictionary settings = s.get( *i );
    port = (short)settings.getLong( SOCKET_ACCEPT_PORT );

    m_portToSessions[port].insert( *i );

    if( ports.find(port) != ports.end() )
      continue;
    ports.insert( port );

    if( settings.has( SOCKET_REUSE_ADDRESS ) )
      reuseAddress = s.get().getBool( SOCKET_REUSE_ADDRESS );
    if( settings.has( SOCKET_NODELAY ) )
      noDelay = s.get().getBool( SOCKET_NODELAY );

    int socket = socket_createAcceptor( port, reuseAddress );
    if( socket < 0 )
      throw RuntimeError( "Unable to create, bind, or listen to port " + IntConvertor::convert( (unsigned short)port ) );
    if( noDelay )
      socket_setsockopt( socket, TCP_NODELAY );

    m_socketToPort[socket] = port;
    m_sockets.insert( socket );
  }    

  QF_STACK_POP
}

void ThreadedSocketAcceptor::onStart()
{ QF_STACK_PUSH(ThreadedSocketAcceptor::onStart)

  m_stop = false;

  Sockets::iterator i;
  for( i = m_sockets.begin(); i != m_sockets.end(); ++i )
  {
    Locker l( m_mutex );
    int port = m_socketToPort[*i];
    AcceptorThreadInfo* info = new AcceptorThreadInfo( this, *i, port );
    unsigned thread;
    thread_spawn( &socketAcceptorThread, info, thread );
    addThread( *i, thread );
  }

  QF_STACK_POP
}

bool ThreadedSocketAcceptor::onPoll()
{ QF_STACK_PUSH(ThreadedSocketAcceptor::onPoll)

  return false;

  QF_STACK_POP
}

void ThreadedSocketAcceptor::onStop()
{ QF_STACK_PUSH(ThreadedSocketAcceptor::onStop)

  m_stop = true;

  Locker l(m_mutex);

  time_t start = 0;
  time_t now = 0;

  ::time( &start );
  while ( isLoggedOn() )
  {
    if( ::time(&now) -5 >= start )
      break;
  }

  SocketToThread threads;
  {
    Locker locker( m_mutex );
    threads = m_threads;
  }

  SocketToThread::iterator i;
  for ( i = threads.begin(); i != threads.end(); ++i )
    socket_close( i->first );
  for ( i = threads.begin(); i != threads.end(); ++i )
    thread_join( i->second );
  threads.clear();

  QF_STACK_POP
}

void ThreadedSocketAcceptor::addThread( int s, int t )
{ QF_STACK_PUSH(ThreadedSocketAcceptor::addThread)

  Locker l(m_mutex);
#ifdef _MSC_VER
  HANDLE handle;
  DuplicateHandle(
    GetCurrentProcess(),
    GetCurrentThread(),
    GetCurrentProcess(),
    &handle, 0, FALSE, DUPLICATE_SAME_ACCESS );
  t = ( int ) handle;
#endif
  m_threads[ s ] = t;

  QF_STACK_POP
}

void ThreadedSocketAcceptor::removeThread( int s )
{ QF_STACK_PUSH(ThreadedSocketAcceptor::removeThread)

  Locker l(m_mutex);
  SocketToThread::iterator i = m_threads.find( s );
  if ( i != m_threads.end() )
  {
#ifdef _MSC_VER
    CloseHandle( ( HANDLE ) i->second );
#endif
    thread_detach( i->second );
    m_threads.erase( i );
  }

  QF_STACK_POP
}

THREAD_PROC ThreadedSocketAcceptor::socketAcceptorThread( void* p )
{ QF_STACK_TRY
  QF_STACK_PUSH(ThreadedSocketAcceptor::socketAcceptorThread)

  AcceptorThreadInfo * info = reinterpret_cast < AcceptorThreadInfo* > ( p );

  ThreadedSocketAcceptor* pAcceptor = info->m_pAcceptor;
  int s = info->m_socket;
  int port = info->m_port;
  delete info;

  int noDelay = 0;
  socket_getsockopt( s, TCP_NODELAY, noDelay );

  int socket = 0;
  while ( ( !pAcceptor->m_stop && ( socket = socket_accept( s ) ) >= 0 ) )
  {
    if( noDelay )
      socket_setsockopt( socket, TCP_NODELAY );

    Sessions sessions = pAcceptor->m_portToSessions[port];

    ThreadedSocketConnection * pConnection =
      new ThreadedSocketConnection( socket, sessions, pAcceptor->getApplication() );

    ConnectionThreadInfo* info = new ConnectionThreadInfo( pAcceptor, pConnection );

    {
      Locker l( pAcceptor->m_mutex );
      unsigned thread;
      if ( !thread_spawn( &socketConnectionThread, info, thread ) )
        delete info;
      pAcceptor->addThread( socket, thread );
    }
  }

  if( !pAcceptor->m_stop )
    pAcceptor->removeThread( s );
  return 0;

  QF_STACK_POP
}

THREAD_PROC ThreadedSocketAcceptor::socketConnectionThread( void* p )
{ QF_STACK_TRY
  QF_STACK_PUSH(ThreadedSocketAcceptor::socketConnectionThread)

  ConnectionThreadInfo * info = reinterpret_cast < ConnectionThreadInfo* > ( p );

  ThreadedSocketAcceptor* pAcceptor = info->m_pAcceptor;
  ThreadedSocketConnection* pConnection = info->m_pConnection;
  delete info;

  int socket = pConnection->getSocket();

  while ( pConnection->read() ) {}
  delete pConnection;
  if( !pAcceptor->m_stop )
    pAcceptor->removeThread( socket );
  return 0;

  QF_STACK_POP
  QF_STACK_CATCH
}
}
