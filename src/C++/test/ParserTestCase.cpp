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
#include <Parser.h>
#include <Utility.h>
#include <SocketServer.h>
#include <SocketConnector.h>
#include <string>
#include <sstream>

using namespace FIX;

struct extractLengthFixture : public ::testing::Test
{
  extractLengthFixture()
  {
    normalLength   = "8=FIX.4.2\0019=12\00135=A\001108=30\00110=31\001";
    badLength      = "8=FIX.4.2\0019=A\00135=A\001108=30\00110=31\001";
    negativeLength = "8=FIX.4.2\0019=-1\00135=A\001108=30\00110=31\001";
    incomplete_1   = "8=FIX.4.2";
    incomplete_2   = "8=FIX.4.2\0019=12";
  }

  std::string normalLength;
  std::string badLength;
  std::string negativeLength;
  std::string incomplete_1;
  std::string incomplete_2;
  Parser object;
};

TEST_F(extractLengthFixture, extractLength)
{
  int length = 0;
  std::string::size_type pos = 0;

  ASSERT_TRUE( object.extractLength(length, pos, normalLength) );
  ASSERT_EQ( 12, length );
  ASSERT_EQ( 15, (int)pos );

  pos = 0;
  length = 0;
  ASSERT_THROW( object.extractLength(length, pos, badLength), MessageParseError );
  ASSERT_TRUE( length <= 0);

  length = 0;
  ASSERT_EQ( 0, (int)pos );
  ASSERT_THROW( object.extractLength(length, pos, negativeLength), MessageParseError );
  ASSERT_TRUE( length <= 0);

  ASSERT_EQ( 0, (int)pos );
  object.extractLength(length, pos, incomplete_1);

  object.extractLength(length, pos, incomplete_2);
  ASSERT_EQ( 0, (int)pos );

  ASSERT_TRUE( !object.extractLength(length, pos, "") );
}

struct readFixMessageFixture : public ::testing::Test
{
  readFixMessageFixture()
  {
    fixMsg1   = "8=FIX.4.2\0019=12\00135=A\001108=30\00110=31\001";
    fixMsg2   = "8=FIX.4.2\0019=17\00135=4\00136=88\001123=Y\00110=34\001";
    fixMsg3   = "8=FIX.4.2\0019=19\00135=A\001108=30\0019710=8\00110=31\001";

    badLength = "8=FIX.4.2\0019=200A\00135=A\001108=30\00110=31\001";


    object.addToStream( fixMsg1 + fixMsg2 + fixMsg3 + badLength );
  }

  std::string fixMsg1;
  std::string fixMsg2;
  std::string fixMsg3;
  std::string badLength;

  Parser object;
};

TEST_F(readFixMessageFixture, readFixMessage)
{
  std::string readFixMsg;
  ASSERT_TRUE( object.readFixMessage( readFixMsg ) );
  ASSERT_EQ( fixMsg1, readFixMsg );

  ASSERT_TRUE( object.readFixMessage( readFixMsg ) );
  ASSERT_EQ( fixMsg2, readFixMsg );

  ASSERT_TRUE( object.readFixMessage( readFixMsg ) );
  ASSERT_EQ( fixMsg3, readFixMsg );

  ASSERT_THROW( object.readFixMessage( readFixMsg ), MessageParseError );
}

struct readPartialFixMessageFixture : public ::testing::Test
{
  readPartialFixMessageFixture()
  {
    partFixMsg1 = "8=FIX.4.2\0019=17\00135=4\00136=";
    partFixMsg2 = "88\001123=Y\00110=34\001";

    object.addToStream( partFixMsg1 );
  }

  std::string partFixMsg1;
  std::string partFixMsg2;
  Parser object;
};

TEST_F(readPartialFixMessageFixture, readPartialFixMessage)
{
  std::string readPartFixMsg;
  ASSERT_TRUE( !object.readFixMessage( readPartFixMsg ) );
  object.addToStream( partFixMsg2 );
  ASSERT_TRUE( object.readFixMessage( readPartFixMsg ) );
  ASSERT_EQ( partFixMsg1 + partFixMsg2, readPartFixMsg );
}

TEST(ParserTests, readMessagesByteByByte)
{
  Parser object;
  std::string fixMsg;
  std::string fixMsg1 = "8=FIX.4.2\0019=54\00135=i\001117=1\001296=1\001302=A\001"
                        "311=DELL\001364=10\001365=DELL\001COMP\001\00110=152\001";
  std::string fixMsg2 = "8=FIX.4.2\0019=17\00135=4\00136=88\001123=Y\00110=34\001";
  std::string fixMsg3 = "8=FIX.4.2\0019=19\00135=A\001108=30\0019710=8\00110=31\001";
  
  for( unsigned int i = 0; i < fixMsg1.length(); ++i )
  {
    object.addToStream( fixMsg1.c_str() + i, 1 );
  }
}

struct readMessageWithBadLengthFixture : public ::testing::Test
{
  readMessageWithBadLengthFixture()
  {
    fixMsg = "8=TEST\0019=TEST\00135=TEST\00149=SS1\00156=RORE\00134=3\00152=20050222-16:45:53\00110=TEST\001";

    object.addToStream( fixMsg );
  }

  std::string fixMsg;
  Parser object;
};

TEST_F(readMessageWithBadLengthFixture, readMessageWithBadLength)
{
  std::string readFixMsg;

  ASSERT_THROW( object.readFixMessage( readFixMsg ), MessageParseError );
  object.readFixMessage( readFixMsg );
}
