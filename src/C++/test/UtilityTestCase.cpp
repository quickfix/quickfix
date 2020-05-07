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

#include <gtest/gtest.h>
#include <DataDictionaryProvider.h>

using namespace FIX;

//Do Nothing Thread For Tests
THREAD_PROC startTestThread( void* p )
{
  return 0;
}

TEST(UtilityTests, stringReplace_ReplacesAll)
{
  std::string value = "1~2~3~4";

  //replace ~ with |
  string_replace("~", "|", value);

  std::string expected = "1|2|3|4";

  ASSERT_EQ(expected, value);
}

TEST(UtilityTests, stringToLower_UpperCaseCharactersAllLower)
{
  std::string value = "ABCD";

  std::string expected = "abcd";

  std::string actual = string_toLower(value);

  ASSERT_EQ(expected, actual);
}

TEST(UtilityTests, stringStrip_AllTabCharacters_NothingStripped)
{
  std::string value = "\t\t\t";

  std::string expected = "\t\t\t";

  std::string actual = string_strip(value);

  ASSERT_EQ(expected, actual);
}

struct SocketUtilityTests : public ::testing::Test
{
  SocketUtilityTests()
  {
    socket_init();
  }

  ~SocketUtilityTests()
  {
    socket_term();
  }
};

TEST_F(SocketUtilityTests, socketBind_HostnameEmpty_SocketSet)
{
  socket_handle socket = 5000;
  std::string hostname = "";
  int port = 1000;

  int actual = socket_bind(socket, hostname.c_str(), port);
  // -1 expected as not a real socket to connect to
  ASSERT_EQ(-1, actual);
}

TEST_F(SocketUtilityTests, socketBind_HostnameSet_SocketSet)
{
  socket_handle socket = 5000;
  std::string hostname = "hostname";
  int port = 1000;

  int actual = socket_bind(socket, hostname.c_str(), port);
  // -1 expected as not a real socket to connect to
  ASSERT_EQ(-1, actual);
}

TEST_F(SocketUtilityTests, socketDisconnected_SocketDoesNotExist_True)
{
  socket_handle socket = 5000;
  ASSERT_TRUE(socket_disconnected(socket));
}

TEST_F(SocketUtilityTests, socketFionRead_SocketDoesNotExist_False)
{
  int bytes = 10;
  socket_handle socket = 5000;

  ASSERT_TRUE(!socket_fionread(socket, bytes));
}

TEST_F(SocketUtilityTests, socketGetSockOpt_TCPNoDelaySet_SocketSet)
{
  socket_handle socket = 5000;
  int opt = TCP_NODELAY;
  int optval = 1;

  int actual = socket_getsockopt(socket, opt, optval);
  // -1 expected as not a real socket to connect to
  ASSERT_EQ(-1, actual);
}

TEST_F(SocketUtilityTests, socketIsBad_SocketDoesNotExist_True)
{
  socket_handle socket = 5000;
  ASSERT_TRUE(socket_isBad(socket));
}

TEST_F(SocketUtilityTests, socketHostPort_SocketNameUnknown)
{
  socket_handle socket = 5000;
  ASSERT_EQ(0, socket_hostport(socket));
}

TEST_F(SocketUtilityTests, socketHostPort_SocketNameExists)
{
  socket_handle actualSocket = socket_createConnector();
  socket_setsockopt( actualSocket, TCP_NODELAY );
  std::string address = "127.0.0.1";
  socket_connect( actualSocket, address.c_str(), 1000 );
  ASSERT_TRUE(0 != socket_hostport(actualSocket));
}

TEST_F(SocketUtilityTests, socketHostName_SocketNum_SocketNameUnknown)
{
  socket_handle socket = 5000;
  ASSERT_TRUE(0 == socket_hostname(socket));
}

TEST_F(SocketUtilityTests, socketHostName_SocketNum_SocketNameExists)
{
  socket_handle actualSocket = socket_createConnector();
  socket_setsockopt( actualSocket, TCP_NODELAY );
  std::string address = "127.0.0.1";
  socket_connect( actualSocket, address.c_str(), 1000 );
  ASSERT_TRUE(0 != socket_hostname(actualSocket));
}

TEST_F(SocketUtilityTests, socketHostName_SocketNameLocalHost_SocketNameFound)
{
  socket_handle actualSocket = socket_createConnector();
  socket_setsockopt( actualSocket, TCP_NODELAY );
  std::string address = "127.0.0.1";
  socket_connect( actualSocket, address.c_str(), 1000 );
  std::string local = "localhost";

  ASSERT_TRUE(0 != socket_hostname(local.c_str()));
}

TEST_F(SocketUtilityTests, socketPeername_SocketDoesNotExist_SocketNameUnknown)
{
  ASSERT_STREQ("UNKNOWN", socket_peername(1000));
}

TEST(UtilityTests, spawnThread_True)
{
  std::string test = "test";
  ASSERT_TRUE(thread_spawn(&startTestThread, &test));
}

TEST(UtilityTests, threadJoinAndDetach_NoException)
{
  bool success = true;
  try{
    thread_id threadId = thread_self();
    ASSERT_TRUE(thread_spawn(&startTestThread, nullptr, threadId));
    thread_join(threadId);
  }catch(...){
    success = false;
  }
  ASSERT_TRUE(success);
}

TEST(UtilityTests, fileExists_FileDoesNotExist)
{
  std::string unknownFile = "unknownfile.txt";
  ASSERT_TRUE(!file_exists(unknownFile.c_str()));
}
