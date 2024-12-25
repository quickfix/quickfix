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

#include <SocketMonitor.h>
#include <Utility.h>

#include "catch_amalgamated.hpp"

using namespace FIX;

TEST_CASE("SocketMonitorTests") {
  SocketMonitor monitor;
  int socket = 101;

  SECTION("addWrite_ReadSocketDoesNotExist_False") {
    CHECK(!monitor.addWrite(socket));

    socket_close(socket);
  }

  SECTION("addWrite_WriteSocketAlreadyExists_False") {
    CHECK(monitor.addRead(socket));
    CHECK(monitor.addWrite(socket));
    CHECK(!monitor.addWrite(socket));

    socket_close(socket);
  }

  SECTION("Unsignal_SocketExists_WriteSocketErased") {
    CHECK(monitor.addRead(socket));
    CHECK(monitor.addWrite(socket));
    CHECK(monitor.addConnect(socket));

    monitor.signal(socket);
    monitor.unsignal(socket);

    socket_close(socket);
  }

  SECTION("Unsignal_SocketDoesNotExist_WriteSocketErased") {
    CHECK(monitor.addRead(socket));
    CHECK(monitor.addConnect(socket));

    monitor.signal(socket);
    monitor.unsignal(socket);

    socket_close(socket);
  }
}
