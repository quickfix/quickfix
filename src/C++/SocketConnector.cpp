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
  void onEvent( SocketMonitor&, int socket )
  { QF_STACK_PUSH(ConnectorWrapper::onEvent)

    m_strategy.onData( m_connector, socket );

    QF_STACK_POP
  }

  void onError( SocketMonitor&, int socket )
  { QF_STACK_PUSH(ConnectorWrapper::onError)

    m_strategy.onDisconnect( m_connector, socket );
    m_connector.getMonitor().drop( socket );

    QF_STACK_POP
  }

  void onError( SocketMonitor& )
  { QF_STACK_PUSH(ConnectorWrapper::onError)
    m_strategy.onError( m_connector ); 
    QF_STACK_POP
  }

  void onTimeout( SocketMonitor& )
  { QF_STACK_PUSH(ConnectorWrapper::onTimeout)
    m_strategy.onTimeout( m_connector );
    QF_STACK_POP
  };

  SocketConnector& m_connector;
  SocketConnector::Strategy& m_strategy;
};

SocketConnector::SocketConnector( int timeout )
: m_monitor( timeout ) {}

int SocketConnector::connect( const std::string& address, int port, bool noDelay )
{ QF_STACK_PUSH(SocketConnector::connect)

  int socket = socket_createConnector( address.c_str(), port );

  if ( socket != -1 )
  {
    if( noDelay ) 
      socket_setsockopt( socket, TCP_NODELAY );
    m_monitor.add( socket );
    return socket;
  }
  else
  {
    socket_close( socket );
    return 0;
  }

  QF_STACK_POP
}

int SocketConnector::connect( const std::string& address, int port, bool noDelay,
                              Strategy& strategy )
{ QF_STACK_PUSH(SocketConnector::connect)

  int socket = connect( address, port, noDelay );

  if( socket )
    strategy.onConnect( *this, socket );
  return socket;

  QF_STACK_POP
}

void SocketConnector::block( Strategy& strategy, bool poll )
{ QF_STACK_PUSH(SocketConnector::block)

  ConnectorWrapper wrapper( *this, strategy );
  m_monitor.block( wrapper, poll );

  QF_STACK_POP
}
}
