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

#ifndef FIX_SOCKETCONNECTOR_H
#define FIX_SOCKETCONNECTOR_H

#ifdef _MSC_VER
#pragma warning( disable : 4503 4355 4786 4290 )
#endif

#include "SocketMonitor.h"
#include <string>

namespace FIX
{
/// Connects sockets to remote ports and addresses.
class SocketConnector
{
public:
  class Strategy;

  SocketConnector( int timeout = 0 );

  socket_handle connect( const std::string& address, int port, bool noDelay,
                 int sendBufSize, int rcvBufSize,
                 const std::string& sourceAddress = "", int sourcePort = 0);
  socket_handle connect( const std::string& address, int port, bool noDelay,
               int sendBufSize, int rcvBufSize, Strategy& );
  void block( Strategy& strategy, bool poll = 0, double timeout = 0.0 );
  SocketMonitor& getMonitor() { return m_monitor; }

private:
  SocketMonitor m_monitor;

public:
  class Strategy
  {
  public:
    virtual ~Strategy() {}
    virtual void onConnect( SocketConnector&, socket_handle socket ) = 0;
    virtual void onWrite( SocketConnector&, socket_handle socket ) = 0;
    virtual bool onData( SocketConnector&, socket_handle socket ) = 0;
    virtual void onDisconnect( SocketConnector&, socket_handle socket ) = 0;
    virtual void onError( SocketConnector& ) = 0;
    virtual void onTimeout( SocketConnector& ) {};
  };
};
}

#endif //FIX_SOCKETCONNECTOR_H
