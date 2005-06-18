/****************************************************************************
** Copyright (c) 2001-2005 quickfixengine.org  All rights reserved.
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

#include "SocketServer.h"
#include "Utility.h"
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
  ServerWrapper( int socket, SocketServer& server,
                 SocketServer::Strategy& strategy )
: m_socket( socket ), m_server( server ), m_strategy( strategy ) {}

private:
  void onEvent( SocketMonitor&, int socket )
  { QF_STACK_PUSH(ServerWrapper::onEvent)

    if ( socket == m_socket )
    {
      m_strategy.onConnect( m_server, m_server.accept() );
    }
    else
        m_strategy.onData( m_server, socket );

    QF_STACK_POP
  }

  void onError( SocketMonitor&, int socket )
  { QF_STACK_PUSH(ServerWrapper::onError)

    m_strategy.onDisconnect( m_server, socket );
    m_server.getMonitor().drop( socket );

    QF_STACK_POP
  }

  void onError( SocketMonitor& )
  { QF_STACK_PUSH(ServerWrapper::onEvent)
    m_strategy.onError( m_server );
    QF_STACK_POP
  }

  void onTimeout( SocketMonitor& )
  { QF_STACK_PUSH(ServerWrapper::onTimeout)
    m_strategy.onTimeout( m_server );
    QF_STACK_POP
  };

  int m_socket;
  SocketServer& m_server;
  SocketServer::Strategy& m_strategy;
};

SocketServer::SocketServer( int port, int timeout, bool reuse, bool noDelay )
: m_port( port ), m_monitor( timeout ), m_noDelay( noDelay )
{
  m_socket = socket_createAcceptor( port, reuse );
  if ( m_socket < 0 )
    throw std::exception();
  if( m_noDelay )
    socket_setsockopt( m_socket, TCP_NODELAY );
  m_monitor.add( m_socket );
}

int SocketServer::accept()
{ QF_STACK_PUSH(SocketServer::accept)

  int result = socket_accept( m_socket );
  if( m_noDelay )
    socket_setsockopt( result, TCP_NODELAY );
  if ( result >= 0 )
    m_monitor.add( result );
  return result;

  QF_STACK_POP
}

void SocketServer::close()
{ QF_STACK_PUSH(SocketServer::close)

  socket_close( m_socket );
  socket_invalidate( m_socket );

  QF_STACK_POP
}

bool SocketServer::block( Strategy& strategy, bool poll )
{ QF_STACK_PUSH(SocketServer::block)

  if ( socket_isValid( m_socket ) )
  {
    ServerWrapper wrapper( m_socket, *this, strategy );
    m_monitor.block( wrapper, poll );
    return true;
  }
  return false;

  QF_STACK_POP
}
}
