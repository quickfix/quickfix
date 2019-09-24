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
#pragma warning( disable : 4503 4355 4786 )
#include "stdafx.h"
#else
#include "config.h"
#endif

#include <UnitTest++.h>
#include <DataDictionaryProvider.h>

using namespace FIX;

SUITE(UtilityTests)
{

//Do Nothing Thread For Tests
THREAD_PROC startTestThread( void* p )
{
  return 0;
}

TEST(stringReplace_ReplacesAll)
{
  std::string value = "1~2~3~4";

  //replace ~ with |
  string_replace("~", "|", value);

  std::string expected = "1|2|3|4";

  CHECK_EQUAL(expected, value);
}

TEST(stringToLower_UpperCaseCharactersAllLower)
{
  std::string value = "ABCD";

  std::string expected = "abcd";

  std::string actual = string_toLower(value);

  CHECK_EQUAL(expected, actual);
}

TEST(stringStrip_AllTabCharacters_NothingStripped)
{
  std::string value = "\t\t\t";

  std::string expected = "\t\t\t";

  std::string actual = string_strip(value);

  CHECK_EQUAL(expected, actual);
}

TEST(socketBind_HostnameEmpty_SocketSet)
{
  int socket = 5000;
  std::string hostname = "";
  int port = 1000;

  int actual = socket_bind(socket, hostname.c_str(), port);
  // -1 expected as not a real socket to connect to
  CHECK_EQUAL(-1, actual);
}

TEST(socketBind_HostnameSet_SocketSet)
{
  int socket = 5000;
  std::string hostname = "hostname";
  int port = 1000;

  int actual = socket_bind(socket, hostname.c_str(), port);
  // -1 expected as not a real socket to connect to
  CHECK_EQUAL(-1, actual);
}

TEST(socketDisconnected_SocketDoesNotExist_True)
{
  int socket = 5000;
  CHECK(socket_disconnected(socket));
}

TEST(socketFionRead_SocketDoesNotExist_False)
{
  int bytes = 10;
  int socket = 5000;

  CHECK(!socket_fionread(socket, bytes));
}

TEST(socketGetSockOpt_TCPNoDelaySet_SocketSet)
{
  int socket = 5000;
  int opt = TCP_NODELAY;
  int optval = 1;

  int actual = socket_getsockopt(socket, opt, optval);
  // -1 expected as not a real socket to connect to
  CHECK_EQUAL(-1, actual);
}

TEST(socketIsBad_SocketDoesNotExist_True)
{
  int socket = 5000;
  CHECK(socket_isBad(socket));
}

TEST(socketHostPort_SocketNameUnknown)
{
  int socket = 5000;
  CHECK_EQUAL(0, socket_hostport(socket));
}

TEST(socketHostPort_SocketNameExists)
{
  int actualSocket = socket_createConnector();
  socket_setsockopt( actualSocket, TCP_NODELAY );
  std::string address = "127.0.0.1";
  socket_connect( actualSocket, address.c_str(), 1000 );
  CHECK(0 != socket_hostport(actualSocket));
}

TEST(socketHostName_SocketNum_SocketNameUnknown)
{
  int socket = 5000;
  CHECK(0 == socket_hostname(socket));
}

TEST(socketHostName_SocketNum_SocketNameExists)
{
  int actualSocket = socket_createConnector();
  socket_setsockopt( actualSocket, TCP_NODELAY );
  std::string address = "127.0.0.1";
  socket_connect( actualSocket, address.c_str(), 1000 );
  CHECK(0 != socket_hostname(actualSocket));
}

TEST(socketHostName_SocketNameLocalHost_SocketNameFound)
{
  int actualSocket = socket_createConnector();
  socket_setsockopt( actualSocket, TCP_NODELAY );
  std::string address = "127.0.0.1";
  socket_connect( actualSocket, address.c_str(), 1000 );
  std::string local = "localhost";

  CHECK(0 != socket_hostname(local.c_str()));
}

TEST(socketPeername_SocketDoesNotExist_SocketNameUnknown)
{
  CHECK_EQUAL("UNKNOWN", socket_peername(1000));
}

TEST(spawnThread_True)
{
  std::string test = "test";
  CHECK(thread_spawn(&startTestThread, &test));
}

TEST(threadJoinAndDetach_NoException)
{
  bool success = true;
  try{
    thread_id threadSelf = thread_self();
    thread_join(threadSelf);
    thread_detach(threadSelf);
  }catch(...){
    success = false;
  }
  CHECK(success);
}

TEST(fileExists_FileDoesNotExist)
{
  std::string unknownFile = "unknownfile.txt";
  CHECK(!file_exists(unknownFile.c_str()));
}

}
