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
#else
#include <poll.h>
#endif
#include <set>

#include "catch_amalgamated.hpp"

using namespace FIX;

namespace {
// Waits up to a second until the socket has something to read. UNIX uses
// poll(): FD_SET() is undefined for a descriptor >= FD_SETSIZE.
bool waitReadable(socket_handle socket) {
#ifdef _MSC_VER
  fd_set readSet;
  FD_ZERO(&readSet);
  FD_SET(socket, &readSet);
  timeval timeout = {1, 0};
  return select(0, &readSet, 0, 0, &timeout) > 0;
#else
  pollfd readable = {socket, POLLIN, 0};
  return poll(&readable, 1, 1000) > 0;
#endif
}
} // namespace

struct SocketConnectorTestStrategy : public SocketConnector::Strategy {
  void onConnect(SocketConnector &, socket_handle) { connect++; }
  // Like a connection with a queued message: writes it and stops waiting for
  // the socket to become writable. A write to a socket whose read has failed
  // and which has not been reported yet would go to a closed descriptor.
  void onWrite(SocketConnector &connector, socket_handle socket) {
    if (unreported.count(socket)) {
      writesToClosed++;
    }
    connector.getMonitor().unsignal(socket);
  }
  // Like a connection: reading fails once the peer has closed the socket.
  bool onData(SocketConnector &, socket_handle socket) {
    char buffer[64];
    if (socket_recv(socket, buffer, sizeof(buffer)) > 0) {
      return true;
    }
    readFailures++;
    unreported.insert(socket);
    return false;
  }
  // Like an initiator, whose onDisconnect disconnects the session and so
  // drops the socket again.
  void onDisconnect(SocketConnector &connector, socket_handle socket) {
    disconnect++;
    unreported.erase(socket);
    connector.getMonitor().drop(socket);
  }
  void onError(SocketConnector &) {}

  int connect = 0;
  int disconnect = 0;
  int readFailures = 0;
  int writesToClosed = 0;
  std::set<socket_handle> unreported;
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

    // Each block() waits up to the connector's one-second timeout and returns
    // as soon as the monitor reports the refused socket. The error drops the
    // socket, and the drop is reported from the monitor's dropped queue at the
    // start of the following block().
    for (int i = 0; i < 5 && strategy.disconnect == 0; ++i) {
      connector.block(strategy);
    }
    CHECK(1 == strategy.disconnect);

    // Another block() must not fire disconnect again: the socket must have been
    // dropped from the monitor when the error was first processed.
    connector.block(strategy, true);
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

    // Each block() waits up to the connector's one-second timeout and returns
    // as soon as the connect completes.
    for (int i = 0; i < 5 && strategy.connect == 0; ++i) {
      connector.block(strategy);
    }
    REQUIRE(1 == strategy.connect);

    CHECK(connector.getMonitor().drop(socket));

    // The dropped queue is drained at the start of the next block(), so the
    // socket must be reported by exactly this call.
    connector.block(strategy, true);
    CHECK(1 == strategy.disconnect);

    connector.block(strategy, true);
    CHECK(1 == strategy.disconnect);

    server.close();
  }

  SECTION("peer_closed_connection_is_reported_exactly_once") {
    // The peer closes the connection, so onData() fails. The strategy's
    // onDisconnect drops the socket once more, as an initiator does when it
    // disconnects the session; the connection must still be reported once.
    SocketServer server(0);
    socket_handle serverSocket = server.add(0, true, true);
    uint16_t port = socket_hostport(serverSocket);

    SocketConnector connector(1);
    SocketConnectorTestStrategy strategy;
    socket_handle socket = connector.connect("127.0.0.1", port, false, 1024, 1024);
    REQUIRE(socket != INVALID_SOCKET_HANDLE);

    for (int i = 0; i < 5 && strategy.connect == 0; ++i) {
      connector.block(strategy);
    }
    REQUIRE(1 == strategy.connect);

    socket_handle accepted = server.accept(serverSocket);
    REQUIRE(accepted != INVALID_SOCKET_HANDLE);
    CHECK(server.getMonitor().drop(accepted));

    // Each block() waits up to the connector's one-second timeout and returns
    // once it has seen the closed connection.
    for (int i = 0; i < 5 && strategy.readFailures == 0; ++i) {
      connector.block(strategy);
    }
    REQUIRE(1 == strategy.readFailures);

    // The block() that saw the closed connection has already reported it.
    CHECK(1 == strategy.disconnect);

    connector.block(strategy, true);
    CHECK(1 == strategy.disconnect);

    server.close();
  }

  SECTION("connection_opened_after_a_drop_is_not_reported") {
    // An initiator opens connections in onTimeout(), right after block()
    // returns. A connection closed during block() must be reported before
    // that: otherwise the late report hits the new connection, which may get
    // the same socket number (UNIX hands out the lowest free descriptor).
    SocketServer server(0);
    socket_handle serverSocket = server.add(0, true, true);
    uint16_t port = socket_hostport(serverSocket);

    SocketConnector connector(1);
    SocketConnectorTestStrategy strategy;
    REQUIRE(connector.connect("127.0.0.1", port, false, 1024, 1024) != INVALID_SOCKET_HANDLE);

    for (int i = 0; i < 5 && strategy.connect == 0; ++i) {
      connector.block(strategy);
    }
    REQUIRE(1 == strategy.connect);

    socket_handle accepted = server.accept(serverSocket);
    REQUIRE(accepted != INVALID_SOCKET_HANDLE);
    CHECK(server.getMonitor().drop(accepted));

    for (int i = 0; i < 5 && strategy.readFailures == 0; ++i) {
      connector.block(strategy);
    }
    REQUIRE(1 == strategy.readFailures);
    CHECK(1 == strategy.disconnect);

    // Like onTimeout(): open the next connection as soon as block() returns.
    REQUIRE(connector.connect("127.0.0.1", port, false, 1024, 1024) != INVALID_SOCKET_HANDLE);

    for (int i = 0; i < 5 && strategy.connect < 2; ++i) {
      connector.block(strategy);
    }
    CHECK(2 == strategy.connect);

    connector.block(strategy, true);
    CHECK(1 == strategy.disconnect);

    server.close();
  }

  SECTION("socket_dropped_outside_block_is_reported_before_connecting") {
    // A TLS handshake timeout drops a socket inside onTimeout(), outside
    // block(), and onTimeout() connects right after it. The initiator reports
    // the drop first, so the new connection, which may get the same socket
    // number, connects and is never reported.
    SocketServer server(0);
    socket_handle serverSocket = server.add(0, true, true);
    uint16_t port = socket_hostport(serverSocket);

    SocketConnector connector(1);
    SocketConnectorTestStrategy strategy;
    socket_handle socket = connector.connect("127.0.0.1", port, false, 1024, 1024);
    REQUIRE(socket != INVALID_SOCKET_HANDLE);

    for (int i = 0; i < 5 && strategy.connect == 0; ++i) {
      connector.block(strategy);
    }
    REQUIRE(1 == strategy.connect);

    CHECK(connector.getMonitor().drop(socket));
    connector.processDropped(strategy);
    CHECK(1 == strategy.disconnect);

    REQUIRE(connector.connect("127.0.0.1", port, false, 1024, 1024) != INVALID_SOCKET_HANDLE);

    for (int i = 0; i < 5 && strategy.connect < 2; ++i) {
      connector.block(strategy);
    }
    CHECK(2 == strategy.connect);

    connector.block(strategy, true);
    CHECK(1 == strategy.disconnect);

    server.close();
  }

  SECTION("no_write_to_a_socket_after_a_failed_read") {
    // poll() can report the closed connection (POLLIN) and a writable socket
    // (POLLOUT) in the same pass. The failed read must be reported before the
    // write is dispatched, or the initiator writes to a closed descriptor.
    SocketServer server(0);
    socket_handle serverSocket = server.add(0, true, true);
    uint16_t port = socket_hostport(serverSocket);

    SocketConnector connector(1);
    SocketConnectorTestStrategy strategy;
    socket_handle socket = connector.connect("127.0.0.1", port, false, 1024, 1024);
    REQUIRE(socket != INVALID_SOCKET_HANDLE);

    for (int i = 0; i < 5 && strategy.connect == 0; ++i) {
      connector.block(strategy);
    }
    REQUIRE(1 == strategy.connect);

    socket_handle accepted = server.accept(serverSocket);
    REQUIRE(accepted != INVALID_SOCKET_HANDLE);
    CHECK(server.getMonitor().drop(accepted));
    REQUIRE(waitReadable(socket));

    // An outgoing message is queued, as SocketConnection::signal() does.
    REQUIRE(connector.getMonitor().addWrite(socket));

    connector.block(strategy);
    REQUIRE(1 == strategy.readFailures);
    CHECK(0 == strategy.writesToClosed);
    CHECK(1 == strategy.disconnect);

    server.close();
  }
}
