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

#include "SocketConnector.h"
#include "Utility.h"
#ifndef _MSC_VER
#include <unistd.h>
#include <sys/ioctl.h>
#include <sys/types.h>
#include <sys/stat.h>
#endif
#include <iostream>

namespace FIX
{
/// Handles events from SocketMonitor for client connections.
class ConnectorWrapper : public SocketMonitor::Strategy
{
public:
  ConnectorWrapper( SocketConnector& connector,
                    SocketConnector::Strategy& strategy )
: m_connector( connector ), m_strategy( strategy ) {}

private:
  void onConnect( SocketMonitor&, int socket )
  {    
    m_strategy.onConnect( m_connector, socket );
  }

  void onWrite( SocketMonitor&, int socket )
  {
    m_strategy.onWrite( m_connector, socket );
  }

  void onEvent( SocketMonitor&, int socket )
  {
    if( !m_strategy.onData( m_connector, socket ) )
      m_strategy.onDisconnect( m_connector, socket );
  }

  void onError( SocketMonitor&, int socket )
  {
    m_strategy.onDisconnect( m_connector, socket );
  }

  void onError( SocketMonitor& )
  {
    m_strategy.onError( m_connector );
  }

  void onTimeout( SocketMonitor& )
  {
    m_strategy.onTimeout( m_connector );
  };

  SocketConnector& m_connector;
  SocketConnector::Strategy& m_strategy;
};

SocketConnector::SocketConnector( int timeout )
: m_monitor( timeout ) {}

int SocketConnector::connect( const std::string& address, int port, bool noDelay,
                              int sendBufSize, int rcvBufSize )
{
  int socket = socket_createConnector();

  if ( socket != -1 )
  {
    if( noDelay )
      socket_setsockopt( socket, TCP_NODELAY );
    if( sendBufSize )
      socket_setsockopt( socket, SO_SNDBUF, sendBufSize );
    if( rcvBufSize )
      socket_setsockopt( socket, SO_RCVBUF, rcvBufSize );
    m_monitor.addConnect( socket );
    socket_connect( socket, address.c_str(), port );
  }
  return socket;
}

int SocketConnector::connect( const std::string& address, int port, bool noDelay, 
                              int sendBufSize, int rcvBufSize, Strategy& strategy )
{
  int socket = connect( address, port, noDelay, sendBufSize, rcvBufSize );
  return socket;
}

void SocketConnector::block( Strategy& strategy, bool poll, double timeout )
{
  ConnectorWrapper wrapper( *this, strategy );
  m_monitor.block( wrapper, poll, timeout );
}
}
