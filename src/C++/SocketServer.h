/* -*- C++ -*- */

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

#ifndef FIX_SOCKETSERVER_H
#define FIX_SOCKETSERVER_H

#ifdef _MSC_VER
#pragma warning( disable : 4503 4355 4786 4290 )
#endif

#include "SocketMonitor.h"
#include <set>
#include <queue>

namespace FIX
{
/// Listens for and accepts incoming socket connections on a port.
class SocketServer
{
public:
  class Strategy;

  SocketServer( int port, int timeout = 0, bool reuse = false, bool noDelay = false );

  int accept();
  void close();
  bool block( Strategy& strategy, bool poll = 0 );

  int numConnections() { return m_monitor.numSockets() - 1; }
  SocketMonitor& getMonitor() { return m_monitor; }

private:
  int m_port;
  int m_socket;
  bool m_noDelay;
  sockaddr_in m_address;
  socklen_t m_socklen;
  SocketMonitor m_monitor;

public:
  class Strategy
  {
  public:
    virtual ~Strategy() {}
    virtual void onConnect( SocketServer&, int socket ) = 0;
    virtual void onData( SocketServer&, int socket ) = 0;
    virtual void onDisconnect( SocketServer&, int socket ) = 0;
    virtual void onError( SocketServer& ) = 0;
    virtual void onTimeout( SocketServer& ) {};
  };
};
}

#endif //FIX_SOCKETSERVER_H
