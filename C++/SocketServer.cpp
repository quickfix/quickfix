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

#include "SocketServer.h"
#include "Utility.h"
#include "Exceptions.h"
#ifndef _MSC_VER
#include <unistd.h>
#include <sys/ioctl.h>
#include <sys/types.h>
#include <sys/stat.h>
#endif
#include <exception>

namespace FIX
{
/// Handles events from SocketMonitor for server connections.
class ServerWrapper : public SocketMonitor::Strategy
{
public:
  ServerWrapper( std::set<socket_handle> sockets, SocketServer& server,
                 SocketServer::Strategy& strategy )
: m_sockets( sockets ), m_server( server ), m_strategy( strategy ) {}

private:
  void onConnect( SocketMonitor&, socket_handle socket )
  {
  }

  void onEvent( SocketMonitor& monitor, socket_handle socket )
  {
    if( m_sockets.find(socket) != m_sockets.end() )
    {
      m_strategy.onConnect( m_server, socket, m_server.accept(socket) );
    }
    else
    {
      if( !m_strategy.onData( m_server, socket ) )
        onError( monitor, socket );
    }
  }

  void onWrite( SocketMonitor&, socket_handle socket )
  {
    m_strategy.onWrite( m_server, socket );
  }

  void onError( SocketMonitor& monitor, socket_handle socket )
  {
    m_strategy.onDisconnect( m_server, socket );
    monitor.drop( socket );
  }

  void onError( SocketMonitor& )
  {
    m_strategy.onError( m_server );
  }

  void onTimeout( SocketMonitor& )
  {
    m_strategy.onTimeout( m_server );
  };

  typedef std::set<socket_handle>
    Sockets;

  Sockets m_sockets;
  SocketServer& m_server;
  SocketServer::Strategy& m_strategy;
};

SocketServer::SocketServer( int timeout )
: m_monitor( timeout ) {}

socket_handle SocketServer::add( int port, bool reuse, bool noDelay,
                       int sendBufSize, int rcvBufSize )
  EXCEPT ( SocketException& )
{
  if( m_portToInfo.find(port) != m_portToInfo.end() )
    return m_portToInfo[port].m_socket;

  socket_handle socket = socket_createAcceptor( port, reuse );
  if( socket == INVALID_SOCKET_HANDLE)
    throw SocketException();
  if( noDelay )
    socket_setsockopt( socket, TCP_NODELAY );
  if( sendBufSize )
    socket_setsockopt( socket, SO_SNDBUF, sendBufSize );
  if( rcvBufSize )
    socket_setsockopt( socket, SO_RCVBUF, rcvBufSize );
  m_monitor.addRead( socket );

  SocketInfo info( socket, port, noDelay, sendBufSize, rcvBufSize );
  m_socketToInfo[socket] = info;
  m_portToInfo[port] = info;
  return socket;
}

socket_handle SocketServer::accept(socket_handle socket )
{
  SocketInfo info = m_socketToInfo[socket];

  socket_handle result = socket_accept( socket );
  if( info.m_noDelay )
    socket_setsockopt( result, TCP_NODELAY );
  if( info.m_sendBufSize )
    socket_setsockopt( result, SO_SNDBUF, info.m_sendBufSize );
  if( info.m_rcvBufSize )
    socket_setsockopt( result, SO_RCVBUF, info.m_rcvBufSize );
  if ( result != INVALID_SOCKET_HANDLE)
    m_monitor.addConnect( result );
  return result;
}

void SocketServer::close()
{
  SocketToInfo::iterator i = m_socketToInfo.begin();
  for( ; i != m_socketToInfo.end(); ++i )
  {
    socket_handle s = i->first;
    socket_close( s );
    socket_invalidate( s );
  }
}

bool SocketServer::block( Strategy& strategy, bool poll, double timeout )
{
  std::set<socket_handle> sockets;
  SocketToInfo::iterator i = m_socketToInfo.begin();
  for( ; i != m_socketToInfo.end(); ++i )
  {
    if( !socket_isValid(i->first) )
      return false;
    sockets.insert( i->first );
  }

  ServerWrapper wrapper( sockets, *this, strategy );
  m_monitor.block( wrapper, poll, timeout );
  return true;
}

int SocketServer::socketToPort(socket_handle socket )
{
  SocketToInfo::iterator find = m_socketToInfo.find( socket );
  if( find == m_socketToInfo.end() ) return 0;
  return find->second.m_port;
}
 
socket_handle SocketServer::portToSocket( int port )
{
  PortToInfo::iterator find = m_portToInfo.find( port );
  if( find == m_portToInfo.end() ) return 0;
  return find->second.m_socket;
}
}
