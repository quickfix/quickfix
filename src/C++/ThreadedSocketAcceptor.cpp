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
: Acceptor( application, factory, settings ),
  m_port( 0 ), m_reuseAddress( true ), m_noDelay( false ), m_socket( 0 ), m_stop( false )
{ socket_init(); }

ThreadedSocketAcceptor::ThreadedSocketAcceptor(
  Application& application,
  MessageStoreFactory& factory,
  const SessionSettings& settings,
  LogFactory& logFactory ) throw( ConfigError )
: Acceptor( application, factory, settings, logFactory ),
  m_port( 0 ), m_reuseAddress( true ), m_noDelay( false ), m_socket( 0 ), m_stop( false )
{ socket_init(); }

ThreadedSocketAcceptor::~ThreadedSocketAcceptor()
{ socket_term(); }

void ThreadedSocketAcceptor::onConfigure( const SessionSettings& s )
throw ( ConfigError )
{ QF_STACK_PUSH(ThreadedSocketAcceptor::onConfigure)

  m_port = ( short ) s.get().getLong( "SocketAcceptPort" );
  if( s.get().has( SOCKET_REUSE_ADDRESS ) )
    m_reuseAddress = ( bool ) s.get().getBool( SOCKET_REUSE_ADDRESS );
  if( s.get().has( SOCKET_NODELAY ) )
    m_noDelay = ( bool ) s.get().getBool( SOCKET_NODELAY );

  QF_STACK_POP
}

void ThreadedSocketAcceptor::onInitialize( const SessionSettings& s )
throw ( RuntimeError )
{ QF_STACK_PUSH(ThreadedSocketAcceptor::onInitialize)

  m_socket = socket_createAcceptor( m_port, m_reuseAddress );

  if( m_socket < 0 )
    throw RuntimeError( "Unable to create, bind, or listen to port " + IntConvertor::convert( (unsigned short)m_port ) );
  if( m_noDelay )
    socket_setsockopt( m_socket, TCP_NODELAY );

  QF_STACK_POP
}

void ThreadedSocketAcceptor::onStart()
{ QF_STACK_PUSH(ThreadedSocketAcceptor::onStart)

  m_stop = false;
  int socket = 0;
  while ( ( !m_stop && ( socket = socket_accept( m_socket ) ) >= 0 ) )
  {
    if( m_noDelay )
      socket_setsockopt( socket, TCP_NODELAY );

    ThreadedSocketConnection * pConnection =
      new ThreadedSocketConnection( socket, getApplication() );

    ThreadPair* pair = new ThreadPair( this, pConnection );

    {
      Locker l( m_mutex );
      unsigned thread;
      if ( !thread_spawn( &socketThread, pair, thread ) )
        delete pair;
      addThread( socket, thread );
    }
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
  socket_close( m_socket );

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

THREAD_PROC ThreadedSocketAcceptor::socketThread( void* p )
{ QF_STACK_TRY
  QF_STACK_PUSH(ThreadedSocketAcceptor::socketThread)

  ThreadPair * pair = reinterpret_cast < ThreadPair* > ( p );

  ThreadedSocketAcceptor* pAcceptor = pair->first;
  ThreadedSocketConnection* pConnection = pair->second;
  delete pair;

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
