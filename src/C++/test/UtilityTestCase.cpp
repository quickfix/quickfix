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

#include <Utility.h>

#include "catch_amalgamated.hpp"

using namespace FIX;

namespace {
THREAD_PROC startTestThread(void *p) { return 0; }
} // namespace

TEST_CASE("UtilityTests") {
  SECTION("error_strerror") {
    std::string expected = "(errno[5]:Input/output error)";

    auto error_number = EIO;
    CHECK(expected == FIX::error_strerror(error_number));

    errno = error_number;
    CHECK(expected == FIX::error_strerror());
  }

#ifdef _MSC_VER
  SECTION("error_wsaerror") {
    std::string expected = "(wsaerror[10048]:Only one usage of each socket address (protocol/network address/port) "
                           "is normally permitted. )";
    CHECK(expected == FIX::error_wsaerror(WSAEADDRINUSE));
  }
#endif

  SECTION("stringReplace_ReplacesAll") {
    std::string actual = "1~2~3~4";
    string_replace("~", "|", actual);
    std::string expected = "1|2|3|4";
    CHECK(expected == actual);
  }

  SECTION("stringConcat_ConcatsStrings") {
    std::string actual = string_concat("ABC", "123", "!@#", 0);
    std::string expected = "ABC123!@#";
    CHECK(expected == actual);
  }

  SECTION("stringToLower_UpperCaseCharactersAllLower") {
    std::string actual = string_toLower("ABCD");
    std::string expected = "abcd";

    CHECK(expected == actual);
  }

  SECTION("stringStrip_AllTabCharacters_NothingStripped") {
    std::string actual = string_strip("\t\t\t");
    std::string expected = "\t\t\t";
    CHECK(expected == actual);
  }

  SECTION("socketBind_HostnameEmpty_SocketSet") {
    int socket = 5000;
    std::string hostname = "";
    int port = 1000;
    int actual = socket_bind(socket, hostname.c_str(), port);
    // -1 expected as not a real socket to connect to
    CHECK(-1 == actual);
  }

  SECTION("socketBind_HostnameSet_SocketSet") {
    int socket = 5000;
    std::string hostname = "hostname";
    int port = 1000;
    int actual = socket_bind(socket, hostname.c_str(), port);
    // -1 expected as not a real socket to connect to
    CHECK(-1 == actual);
  }

  SECTION("socketDisconnected_SocketDoesNotExist_True") {
    int socket = 5000;
    CHECK(socket_disconnected(socket));
  }

  SECTION("socketFionRead_SocketDoesNotExist_False") {
    int bytes = 10;
    int socket = 5000;
    CHECK(!socket_fionread(socket, bytes));
  }

  SECTION("socketGetSockOpt_TCPNoDelaySet_SocketSet") {
    int socket = 5000;
    int opt = TCP_NODELAY;
    int optval = 1;
    int actual = socket_getsockopt(socket, opt, optval);
    // -1 expected as not a real socket to connect to
    CHECK(-1 == actual);
  }

#ifndef _MSC_VER
  SECTION("socketIsBad_SocketDoesNotExist_True") {
    int socket = 5000;
    CHECK(socket_isBad(socket));
  }
#endif

  SECTION("socketFionRead_SocketDoesNotExist_False") {
    int bytes = 10;
    int socket = 5000;
    CHECK(!socket_fionread(socket, bytes));
  }

  SECTION("socketGetSockOpt_TCPNoDelaySet_SocketSet") {
    int socket = 5000;
    int opt = TCP_NODELAY;
    int optval = 1;
    int actual = socket_getsockopt(socket, opt, optval);
    // -1 expected as not a real socket to connect to
    CHECK(-1 == actual);
  }

#ifndef _MSC_VER
  SECTION("socketIsBad_SocketDoesNotExist_True") {
    socket_handle socket = 5000;
    CHECK(socket_isBad(socket));
  }
#endif

  SECTION("socketHostPort_SocketNameUnknown") {
    socket_handle socket = 5000;
    CHECK(0 == socket_hostport(socket));
  }

  SECTION("socketHostPort_SocketNameExists") {
    socket_handle actualSocket = socket_createConnector();
    socket_setsockopt(actualSocket, TCP_NODELAY);
    std::string address = "127.0.0.1";
    socket_connect(actualSocket, address.c_str(), 1000);
    CHECK(0 != socket_hostport(actualSocket));
  }

  SECTION("socketHostName_SocketNum_SocketNameUnknown") {
    socket_handle socket = 5000;
    CHECK(0 == socket_hostname(socket));
  }

  SECTION("socketHostName_SocketNum_SocketNameExists") {
    socket_handle actualSocket = socket_createConnector();
    socket_setsockopt(actualSocket, TCP_NODELAY);
    std::string address = "127.0.0.1";
    socket_connect(actualSocket, address.c_str(), 1000);
    CHECK(0 != socket_hostname(actualSocket));
  }

  SECTION("socketHostName_SocketNameLocalHost_SocketNameFound") {
    socket_handle actualSocket = socket_createConnector();
    socket_setsockopt(actualSocket, TCP_NODELAY);
    std::string address = "127.0.0.1";
    socket_connect(actualSocket, address.c_str(), 1000);
    std::string local = "localhost";
    CHECK(0 != socket_hostname(local.c_str()));
  }

  SECTION("socketPeername_SocketDoesNotExist_SocketNameUnknown") {
    CHECK(std::string("UNKNOWN") == socket_peername(1000));
  }

  SECTION("spawnThread_True") {
    std::string test = "test";
    CHECK(thread_spawn(&startTestThread, &test));
  }

  SECTION("threadJoinAndDetach_NoException") {
    thread_id threadId;
    CHECK_NOTHROW(thread_spawn(&startTestThread, NULL, threadId));
    CHECK_NOTHROW(thread_join(threadId));
    CHECK_NOTHROW(thread_detach(threadId));
  }

  SECTION("fileExists_FileDoesNotExist") {
    std::string unknownFile = "unknownfile.txt";
    CHECK(!file_exists(unknownFile.c_str()));
  }
}
