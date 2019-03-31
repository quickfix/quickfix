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

#ifndef FIX_SOCKETACCEPTOR_H
#define FIX_SOCKETACCEPTOR_H

#ifdef _MSC_VER
#pragma warning( disable : 4503 4355 4786 4290 )
#endif

#include "Acceptor.h"
#include "SocketServer.h"
#include "SocketConnection.h"

namespace FIX
{
/// Socket implementation of Acceptor.
class SocketAcceptor : public Acceptor, SocketServer::Strategy
{
  friend class SocketConnection;
public:
  SocketAcceptor( Application&, MessageStoreFactory&,
                  const SessionSettings& ) EXCEPT ( ConfigError );
  SocketAcceptor( Application&, MessageStoreFactory&,
                  const SessionSettings&, LogFactory& ) EXCEPT ( ConfigError );

  virtual ~SocketAcceptor();

private:
  bool readSettings( const SessionSettings& );

  typedef std::set < SessionID > Sessions;
  typedef std::map < int, Sessions > PortToSessions;
  typedef std::map < socket_handle, SocketConnection* > SocketConnections;

  void onConfigure( const SessionSettings& ) EXCEPT ( ConfigError );
  void onInitialize( const SessionSettings& ) EXCEPT ( RuntimeError );

  void onStart();
  bool onPoll( double timeout );
  void onStop();

  void onConnect( SocketServer&, socket_handle, socket_handle );
  void onWrite( SocketServer&, socket_handle );
  bool onData( SocketServer&, socket_handle );
  void onDisconnect( SocketServer&, socket_handle );
  void onError( SocketServer& );
  void onTimeout( SocketServer& );

  SocketServer* m_pServer;
  PortToSessions m_portToSessions;
  SocketConnections m_connections;
};
/*! @} */
}

#endif //FIX_SOCKETACCEPTOR_H
