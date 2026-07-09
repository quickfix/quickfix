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

#include <HttpConnection.h>
#include <SocketMonitor.h>
#include <Utility.h>

#include "catch_amalgamated.hpp"

#ifndef _MSC_VER
#include <fcntl.h>
#include <sys/socket.h>
#include <unistd.h>
#endif

using namespace FIX;

TEST_CASE("HttpConnectionTests") {
#ifndef _MSC_VER
  // Reproduces #747: HttpServer::onConnect() closes the accepted socket twice --
  // once inside HttpConnection::disconnect() and again through
  // SocketMonitor::drop(). If the descriptor is recycled between the two closes,
  // the second close silently tears down an unrelated socket.
  SECTION("disconnectDoesNotDoubleCloseAcceptedSocket") {
    int sp[2];
    REQUIRE(::socketpair(AF_UNIX, SOCK_STREAM, 0, sp) == 0);

    SocketMonitor monitor;
    // SocketServer::accept() tracks the accepted socket in the monitor.
    REQUIRE(monitor.addConnect(sp[0]));

    // Shut down the peer (without freeing its descriptor) so the next read()
    // sees EOF and drives disconnect().
    REQUIRE(::shutdown(sp[1], SHUT_RDWR) == 0);

    {
      HttpConnection connection(sp[0]);
      while (connection.read()) {}
    }

    // Claim the lowest free descriptor. On the buggy path disconnect() has
    // already closed sp[0], so the kernel hands it back here -- the victim now
    // lives at the descriptor onConnect() is about to drop.
    int victim = ::socket(AF_INET, SOCK_STREAM, 0);
    REQUIRE(victim >= 0);

    // onConnect() unconditionally drops the accepted socket after read() ends.
    monitor.drop(sp[0]);

    // The second close must not have clobbered the recycled descriptor.
    CHECK(::fcntl(victim, F_GETFD) != -1);

    ::close(victim);
    ::close(sp[1]);
  }
#endif
}
