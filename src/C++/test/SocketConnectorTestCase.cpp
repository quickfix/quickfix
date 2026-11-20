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
#pragma warning(disable : 4503 4355 4786)
#include "stdafx.h"
#else
#include "config.h"
#endif

#include "TestHelper.h"
#include <SocketConnector.h>
#include <SocketServer.h>
#ifdef _MSC_VER
#include <stdlib.h>
#endif

#include "catch_amalgamated.hpp"

using namespace FIX;

struct SocketConnectorTestStrategy : public SocketConnector::Strategy {
  void onConnect(SocketConnector &, socket_handle) { connect++; }
  void onWrite(SocketConnector &, socket_handle) {}
  bool onData(SocketConnector &, socket_handle) { return true; }
  void onDisconnect(SocketConnector &, socket_handle) { disconnect++; }
  void onError(SocketConnector &) {}

  int connect = 0;
  int disconnect = 0;
};

TEST_CASE("SocketConnectorTests") {
  SECTION("accept") {
    SocketConnector object;
    SocketServer server(0);
    socket_handle socket = server.add(TestSettings::port, true, true);
    CHECK(object.connect("127.0.0.1", TestSettings::port, false, 1024, 1024));
    CHECK(server.accept(socket));
    server.close();
  }

#ifndef _MSC_VER
  SECTION("connect_to_dead_port_fires_disconnect_once") {
    // Bind a server to get a free port, then close it so nothing is listening.
    SocketServer server(0);
    socket_handle serverSocket = server.add(0, true, true);
    uint16_t port = socket_hostport(serverSocket);
    server.close();

    SocketConnector connector(1);
    SocketConnectorTestStrategy strategy;
    connector.connect("127.0.0.1", port, false, 1024, 1024);

    // The error drops the socket, and the drop is reported from the monitor's
    // dropped queue at the start of the next block().
    for (int i = 0; i < 5 && strategy.disconnect == 0; ++i) {
      process_sleep(0.1);
      connector.block(strategy);
    }
    CHECK(1 == strategy.disconnect);

    // Further blocks must not fire disconnect again: the socket must have been
    // dropped from the monitor when the error was first processed.
    connector.block(strategy);
    connector.block(strategy);
    CHECK(1 == strategy.disconnect);
  }
#endif

  SECTION("locally_dropped_connection_is_reported_exactly_once") {
    // A session that ends the connection itself (answering a Logout, logon or
    // heartbeat timeout) goes through SocketConnection::disconnect(), which only
    // drops the socket from the monitor. The connector must still report the
    // socket through onDisconnect: the initiator reconnects a session only
    // after that callback.
    SocketServer server(0);
    socket_handle serverSocket = server.add(0, true, true);
    uint16_t port = socket_hostport(serverSocket);

    SocketConnector connector(1);
    SocketConnectorTestStrategy strategy;
    socket_handle socket = connector.connect("127.0.0.1", port, false, 1024, 1024);
    REQUIRE(socket != INVALID_SOCKET_HANDLE);

    for (int i = 0; i < 20 && strategy.connect == 0; ++i) {
      connector.block(strategy, true);
      process_sleep(0.05);
    }
    REQUIRE(1 == strategy.connect);

    CHECK(connector.getMonitor().drop(socket));

    connector.block(strategy, true);
    connector.block(strategy, true);
    CHECK(1 == strategy.disconnect);

    connector.block(strategy, true);
    CHECK(1 == strategy.disconnect);

    server.close();
  }
}
