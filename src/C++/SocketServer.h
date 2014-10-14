/* -*- C++ -*- */

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

#ifndef FIX_SOCKETSERVER_H
#define FIX_SOCKETSERVER_H

#ifdef _MSC_VER
#pragma warning( disable : 4503 4355 4786 4290 )
#endif

#include "SocketMonitor.h"
#include "Exceptions.h"
#include <map>
#include <set>
#include <queue>

namespace FIX
{
/// Information about listening socket
struct SocketInfo
{
  SocketInfo()
  : m_socket( -1 ), m_port( 0 ), m_noDelay( false ),
    m_sendBufSize( 0 ), m_rcvBufSize( 0 ) {}
  
  SocketInfo( int socket, short port, bool noDelay, int sendBufSize, int rcvBufSize )
  : m_socket( socket ), m_port( port ), m_noDelay( noDelay ), 
    m_sendBufSize( sendBufSize ), m_rcvBufSize( rcvBufSize ) {}

  int m_socket;
  short m_port;
  bool m_noDelay;
  int m_sendBufSize;
  int m_rcvBufSize;
};

/// Listens for and accepts incoming socket connections on a port.
class SocketServer
{
public:
  class Strategy;

  SocketServer( int timeout = 0 );

  int add( int port, bool reuse = false, bool noDelay = false, 
           int sendBufSize = 0, int rcvBufSize = 0 ) throw( SocketException& );
  int accept( int socket );
  void close();
  bool block( Strategy& strategy, bool poll = 0, double timeout = 0.0 );

  size_t numConnections() { return m_monitor.numSockets() - 1; }
  SocketMonitor& getMonitor() { return m_monitor; }

  int socketToPort( int socket );
  int portToSocket( int port );

private:
  typedef std::map<int, SocketInfo>
    SocketToInfo;
  typedef std::map<int, SocketInfo>
    PortToInfo;

  SocketToInfo m_socketToInfo;  
  PortToInfo m_portToInfo;
  SocketMonitor m_monitor;

public:
  class Strategy
  {
  public:
    virtual ~Strategy() {}
    virtual void onConnect( SocketServer&, int acceptSocket, int socket ) = 0;
    virtual void onWrite( SocketServer&, int socket ) = 0;
    virtual bool onData( SocketServer&, int socket ) = 0;
    virtual void onDisconnect( SocketServer&, int socket ) = 0;
    virtual void onError( SocketServer& ) = 0;
    virtual void onTimeout( SocketServer& ) {};
  };
};
}

#endif //FIX_SOCKETSERVER_H
