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

#include "ThreadedSocketAcceptor.h"
#include "Settings.h"
#include "Utility.h"

namespace FIX
{
ThreadedSocketAcceptor::ThreadedSocketAcceptor(
  Application& application,
  MessageStoreFactory& factory,
  const SessionSettings& settings ) throw( ConfigError& )
: Acceptor( application, factory, settings ),
  m_port( 0 ), m_socket( 0 ), m_stop( false )
{ socket_init(); }

ThreadedSocketAcceptor::ThreadedSocketAcceptor(
  Application& application,
  MessageStoreFactory& factory,
  const SessionSettings& settings,
  LogFactory& logFactory ) throw( ConfigError& )
: Acceptor( application, factory, settings, logFactory ),
    m_port( 0 ), m_socket( 0 ), m_stop( false )
{ socket_init(); }

ThreadedSocketAcceptor::~ThreadedSocketAcceptor()
{ socket_term(); }

void ThreadedSocketAcceptor::onConfigure( const SessionSettings& s )
throw ( ConfigError& )
{ QF_STACK_PUSH(ThreadedSocketAcceptor::onConfigure)

  m_port = ( short ) s.get().getLong( "SocketAcceptPort" );
  if( s.get().has( SOCKET_REUSE_ADDRESS ) )
    m_reuseAddress = ( bool ) s.get().getBool( SOCKET_REUSE_ADDRESS );

  QF_STACK_POP
}

void ThreadedSocketAcceptor::onInitialize( const SessionSettings& s ) 
throw ( RuntimeError& )
{ QF_STACK_PUSH(ThreadedSocketAcceptor::onInitialize)

  m_socket = socket_createAcceptor( m_port, m_reuseAddress );
  if( m_socket < 0 )
    throw RuntimeError( "Unable to create, bind, or listen to port " + IntConvertor::convert(m_port) );

  QF_STACK_POP
}

void ThreadedSocketAcceptor::onStart()
{ QF_STACK_PUSH(ThreadedSocketAcceptor::onStart)

  int socket = 0;
  while ( ( !m_stop && ( socket = socket_accept( m_socket ) ) >= 0 ) )
  {
    ThreadedSocketConnection * pConnection =
      new ThreadedSocketConnection( socket, getApplication() );

    ThreadPair* pair = new ThreadPair( this, pConnection );

    unsigned thread;
    if ( !thread_spawn( &socketThread, pair, thread ) )
      delete pair;
    addThread( socket, thread );
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

  SocketToThread::iterator i;
  for ( i = m_threads.begin(); i != m_threads.end(); ++i )
    socket_close( i->first );
  for ( i = m_threads.begin(); i != m_threads.end(); ++i )
    thread_join( i->second );

  QF_STACK_POP
}

void ThreadedSocketAcceptor::addThread( int s, int t )
{ QF_STACK_PUSH(ThreadedSocketAcceptor::addThread)

  Locker l(m_mutex);
  m_threads[ s ] = t;

  QF_STACK_POP
}

void ThreadedSocketAcceptor::removeThread( int s )
{ QF_STACK_PUSH(ThreadedSocketAcceptor::removeThread)

  Locker l(m_mutex);
  thread_detach(m_threads[s]);
  m_threads.erase( s );

  QF_STACK_POP
}

THREAD_PROC ThreadedSocketAcceptor::socketThread( void* p )
{ QF_STACK_TRY
  QF_STACK_PUSH(ThreadedSocketAcceptor::socketThread)

  ThreadPair * pair = reinterpret_cast < ThreadPair* > ( p );

  ThreadedSocketAcceptor* pAcceptor = pair->first;
  ThreadedSocketConnection* pConnection = pair->second;
  delete pair;

  while ( pConnection->read() ) {}
  if( !pAcceptor->m_stop )
    pAcceptor->removeThread( pConnection->getSocket() );
  delete pConnection;
  return 0;

  QF_STACK_POP
  QF_STACK_CATCH
}
}
