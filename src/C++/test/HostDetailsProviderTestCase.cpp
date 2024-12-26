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

#include "HostDetailsProvider.h"
#include <SessionSettings.h>
#include <chrono>
#include <thread>

#include "catch_amalgamated.hpp"

using namespace FIX;

TEST_CASE("HostDetailsProviderTests") {
  SECTION("getHost_PrioritizeTopHosts") {
    Dictionary settings;

    settings.setString("SocketConnectHost", "127.0.0.0");
    settings.setString("SocketConnectPort", "8000");
    settings.setString("SocketConnectSourceHost", "192.0.0.0");
    settings.setString("SocketConnectSourcePort", "7000");

    settings.setString("SocketConnectHost1", "127.0.0.1");
    settings.setString("SocketConnectPort1", "8001");
    settings.setString("SocketConnectSourceHost1", "192.0.0.1");
    settings.setString("SocketConnectSourcePort1", "7001");

    settings.setString("SocketConnectHost2", "127.0.0.2");
    settings.setString("SocketConnectPort2", "8002");
    settings.setString("SocketConnectSourceHost2", "192.0.0.2");
    settings.setString("SocketConnectSourcePort2", "7002");

    settings.setString("SocketConnectHost3", "127.0.0.3");
    settings.setString("SocketConnectPort3", "8003");
    settings.setString("SocketConnectSourceHost3", "192.0.0.3");
    settings.setString("SocketConnectSourcePort3", "7003");

    settings.setString(HOST_SELECTION_POLICY, HostDetailsProvider::HOST_SELECTION_POLICY_PRIORITY);
    settings.setInt(HOST_SELECTION_POLICY_PRIORITY_START_OVER_INTERVAL, 20);

    HostDetailsProvider detailsProvider;
    HostDetails host;
    detailsProvider.getTime = []() { return 0; };

    // First time ever should return first host
    host = detailsProvider.getHost(SessionID(), settings);
    CHECK(host.address == "127.0.0.0");
    CHECK(std::to_string(host.port) == "8000");
    CHECK(host.sourceAddress == "192.0.0.0");
    CHECK(std::to_string(host.sourcePort) == "7000");

    // Second time with startOverIntervalInSeconds not reached should return second host
    host = detailsProvider.getHost(SessionID(), settings);
    CHECK(host.address == "127.0.0.1");
    CHECK(std::to_string(host.port) == "8001");
    CHECK(host.sourceAddress == "192.0.0.1");
    CHECK(std::to_string(host.sourcePort) == "7001");

    // Third time with startOverIntervalInSeconds not reached should return third host
    host = detailsProvider.getHost(SessionID(), settings);
    CHECK(host.address == "127.0.0.2");
    CHECK(std::to_string(host.port) == "8002");
    CHECK(host.sourceAddress == "192.0.0.2");
    CHECK(std::to_string(host.sourcePort) == "7002");

    // Return top host, startOverIntervalInSeconds has elapsed
    detailsProvider.getTime = []() { return 21; };
    host = detailsProvider.getHost(SessionID(), settings);
    CHECK(host.address == "127.0.0.0");
    CHECK(std::to_string(host.port) == "8000");
    CHECK(host.sourceAddress == "192.0.0.0");
    CHECK(std::to_string(host.sourcePort) == "7000");
  }

  SECTION("getHost_RotateHosts") {
    Dictionary settings;

    settings.setString("SocketConnectHost", "127.0.0.0");
    settings.setString("SocketConnectPort", "8000");
    settings.setString("SocketConnectSourceHost", "192.0.0.0");
    settings.setString("SocketConnectSourcePort", "7000");

    settings.setString("SocketConnectHost1", "127.0.0.1");
    settings.setString("SocketConnectPort1", "8001");
    settings.setString("SocketConnectSourceHost1", "192.0.0.1");
    settings.setString("SocketConnectSourcePort1", "7001");

    settings.setString("SocketConnectHost2", "127.0.0.2");
    settings.setString("SocketConnectPort2", "8002");
    settings.setString("SocketConnectSourceHost2", "192.0.0.2");
    settings.setString("SocketConnectSourcePort2", "7002");

    settings.setString("SocketConnectHost3", "127.0.0.3");
    settings.setString("SocketConnectPort3", "8003");
    settings.setString("SocketConnectSourceHost3", "192.0.0.3");
    settings.setString("SocketConnectSourcePort3", "7003");

    int startOvertIntervalInSeconds = 20;

    HostDetailsProvider detailsProvider;
    detailsProvider.getTime = []() { return 0; };

    HostDetails host;

    host = detailsProvider.getHost(SessionID(), settings);
    CHECK(host.address == "127.0.0.0");
    CHECK(std::to_string(host.port) == "8000");
    CHECK(host.sourceAddress == "192.0.0.0");
    CHECK(std::to_string(host.sourcePort) == "7000");

    host = detailsProvider.getHost(SessionID(), settings);
    CHECK(host.address == "127.0.0.1");
    CHECK(std::to_string(host.port) == "8001");
    CHECK(host.sourceAddress == "192.0.0.1");
    CHECK(std::to_string(host.sourcePort) == "7001");

    host = detailsProvider.getHost(SessionID(), settings);
    CHECK(host.address == "127.0.0.2");
    CHECK(std::to_string(host.port) == "8002");
    CHECK(host.sourceAddress == "192.0.0.2");
    CHECK(std::to_string(host.sourcePort) == "7002");

    // Should return the next host regardless of interval since last connection
    detailsProvider.getTime = []() { return 21; };
    host = detailsProvider.getHost(SessionID(), settings);
    CHECK(host.address == "127.0.0.3");
    CHECK(std::to_string(host.port) == "8003");
    CHECK(host.sourceAddress == "192.0.0.3");
    CHECK(std::to_string(host.sourcePort) == "7003");

    // Return first host to complete the cycle
    host = detailsProvider.getHost(SessionID(), settings);
    CHECK(host.address == "127.0.0.0");
    CHECK(std::to_string(host.port) == "8000");
    CHECK(host.sourceAddress == "192.0.0.0");
    CHECK(std::to_string(host.sourcePort) == "7000");
  }
}
