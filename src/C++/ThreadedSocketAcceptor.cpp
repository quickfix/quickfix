/****************************************************************************
** Copyright (c) 2001-2014
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

#include "ThreadedSocketAcceptor.h"
#include "Settings.h"
#include "Utility.h"

namespace FIX
{
ThreadedSocketAcceptor::ThreadedSocketAcceptor(
  Application& application,
  MessageStoreFactory& factory,
  const SessionSettings& settings ) EXCEPT ( ConfigError )
: Acceptor( application, factory, settings )
{ socket_init(); }

ThreadedSocketAcceptor::ThreadedSocketAcceptor(
  Application& application,
  MessageStoreFactory& factory,
  const SessionSettings& settings,
  LogFactory& logFactory ) EXCEPT ( ConfigError )
: Acceptor( application, factory, settings, logFactory )
{ 
  socket_init(); 
}

ThreadedSocketAcceptor::~ThreadedSocketAcceptor()
{ 
  socket_term(); 
}

void ThreadedSocketAcceptor::onConfigure( const SessionSettings& s )
EXCEPT ( ConfigError )
{
  std::set<SessionID> sessions = s.getSessions();
  std::set<SessionID>::iterator i;
  for( i = sessions.begin(); i != sessions.end(); ++i )
  {
    const Dictionary& settings = s.get( *i );
    settings.getInt( SOCKET_ACCEPT_PORT );
    if( settings.has(SOCKET_REUSE_ADDRESS) )
      settings.getBool( SOCKET_REUSE_ADDRESS );
    if( settings.has(SOCKET_NODELAY) )
      settings.getBool( SOCKET_NODELAY );
  }
}

void ThreadedSocketAcceptor::onInitialize( const SessionSettings& s )
EXCEPT ( RuntimeError )
{
  short port = 0;
  std::set<int> ports;

  std::set<SessionID> sessions = s.getSessions();
  std::set<SessionID>::iterator i = sessions.begin();
  for( ; i != sessions.end(); ++i )
  {
    const Dictionary& settings = s.get( *i );
    port = (short)settings.getInt( SOCKET_ACCEPT_PORT );

    m_portToSessions[port].insert( *i );

    if( ports.find(port) != ports.end() )
      continue;
    ports.insert( port );

    const bool reuseAddress = settings.has( SOCKET_REUSE_ADDRESS ) ? 
      settings.getBool( SOCKET_REUSE_ADDRESS ) : true;

    const bool noDelay = settings.has( SOCKET_NODELAY ) ? 
      settings.getBool( SOCKET_NODELAY ) : false;

    const int sendBufSize = settings.has( SOCKET_SEND_BUFFER_SIZE ) ?
      settings.getInt( SOCKET_SEND_BUFFER_SIZE ) : 0;

    const int rcvBufSize = settings.has( SOCKET_RECEIVE_BUFFER_SIZE ) ?
      settings.getInt( SOCKET_RECEIVE_BUFFER_SIZE ) : 0;

    socket_handle socket = socket_createAcceptor( port, reuseAddress );
    if( socket == INVALID_SOCKET_HANDLE )
    {
      SocketException e;
      socket_close( socket );
      throw RuntimeError( "Unable to create, bind, or listen to port " 
                         + IntConvertor::convert( (unsigned short)port ) + " (" + e.what() + ")" );
    }
    if( noDelay )
      socket_setsockopt( socket, TCP_NODELAY );
    if( sendBufSize )
      socket_setsockopt( socket, SO_SNDBUF, sendBufSize );
    if( rcvBufSize )
      socket_setsockopt( socket, SO_RCVBUF, rcvBufSize );

    m_socketToPort[socket] = port;
    m_sockets.insert( socket );
  }    
}

void ThreadedSocketAcceptor::onStart()
{
  Sockets::iterator i;
  for( i = m_sockets.begin(); i != m_sockets.end(); ++i )
  {
    Locker l( m_mutex );
    int port = m_socketToPort[*i];
    AcceptorThreadInfo* info = new AcceptorThreadInfo( this, *i, port );
    thread_id thread;
    thread_spawn( &socketAcceptorThread, info, thread );
    addThread( *i, thread );
  }
}

bool ThreadedSocketAcceptor::onPoll( double timeout )
{
  return false;
}

void ThreadedSocketAcceptor::onStop()
{ 
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
}

void ThreadedSocketAcceptor::addThread(socket_handle s, thread_id t )
{
  Locker l(m_mutex);

  m_threads[ s ] = t;
}

void ThreadedSocketAcceptor::removeThread(socket_handle s )
{
  Locker l(m_mutex);
  SocketToThread::iterator i = m_threads.find( s );
  if ( i != m_threads.end() )
  {
    thread_detach( i->second );
    m_threads.erase( i );
  }
}

THREAD_PROC ThreadedSocketAcceptor::socketAcceptorThread( void* p )
{
  AcceptorThreadInfo * info = reinterpret_cast < AcceptorThreadInfo* > ( p );

  ThreadedSocketAcceptor* pAcceptor = info->m_pAcceptor;
  socket_handle s = info->m_socket;
  int port = info->m_port;
  delete info;

  int noDelay = 0;
  int sendBufSize = 0;
  int rcvBufSize = 0;
  socket_getsockopt( s, TCP_NODELAY, noDelay );
  socket_getsockopt( s, SO_SNDBUF, sendBufSize );
  socket_getsockopt( s, SO_RCVBUF, rcvBufSize );

  socket_handle socket = 0;
  while ( ( !pAcceptor->isStopped() && ( socket = socket_accept( s ) ) != INVALID_SOCKET_HANDLE ) )
  {
    if( noDelay )
      socket_setsockopt( socket, TCP_NODELAY );
    if( sendBufSize )
      socket_setsockopt( socket, SO_SNDBUF, sendBufSize );
    if( rcvBufSize )
      socket_setsockopt( socket, SO_RCVBUF, rcvBufSize );

    Sessions sessions = pAcceptor->m_portToSessions[port];

    ThreadedSocketConnection * pConnection =
      new ThreadedSocketConnection
        ( socket, sessions, pAcceptor->getLog() );

    ConnectionThreadInfo* info = new ConnectionThreadInfo( pAcceptor, pConnection );

    {
      Locker l( pAcceptor->m_mutex );

      std::stringstream stream;
      stream << "Accepted connection from " << socket_peername( socket ) << " on port " << port;

      if( pAcceptor->getLog() )
        pAcceptor->getLog()->onEvent( stream.str() );

      thread_id thread;
      if ( !thread_spawn( &socketConnectionThread, info, thread ) )
      {
        delete info;
        delete pConnection;
      }
      else
        pAcceptor->addThread( socket, thread );
    }
  }

  if( !pAcceptor->isStopped() )
    pAcceptor->removeThread( s );

  return 0;
}

THREAD_PROC ThreadedSocketAcceptor::socketConnectionThread( void* p )
{
  ConnectionThreadInfo * info = reinterpret_cast < ConnectionThreadInfo* > ( p );

  ThreadedSocketAcceptor* pAcceptor = info->m_pAcceptor;
  ThreadedSocketConnection* pConnection = info->m_pConnection;
  delete info;

  socket_handle socket = pConnection->getSocket();

  while ( pConnection->read() ) {}
  delete pConnection;
  if( !pAcceptor->isStopped() )
    pAcceptor->removeThread( socket );
  return 0;
}
}
