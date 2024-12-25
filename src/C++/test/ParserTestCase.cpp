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

#include <Parser.h>
#include <SocketConnector.h>
#include <SocketServer.h>
#include <Utility.h>
#include <sstream>
#include <string>

#include "catch_amalgamated.hpp"

using namespace FIX;

TEST_CASE("ParserTests") {
  Parser object;

  SECTION("extractLength") {
    std::string normalLength = "8=FIX.4.2\0019=12\00135=A\001108=30\00110=31\001";
    std::string badLength = "8=FIX.4.2\0019=A\00135=A\001108=30\00110=31\001";
    std::string negativeLength = "8=FIX.4.2\0019=-1\00135=A\001108=30\00110=31\001";
    std::string incomplete_1 = "8=FIX.4.2";
    std::string incomplete_2 = "8=FIX.4.2\0019=12";

    int length = 0;
    std::string::size_type pos = 0;

    CHECK(object.extractLength(length, pos, normalLength));
    CHECK(12 == length);
    CHECK(15 == (int)pos);

    pos = 0;
    length = 0;
    CHECK_THROWS_AS(object.extractLength(length, pos, badLength), MessageParseError);
    CHECK(length <= 0);

    length = 0;
    CHECK(0U == pos);
    CHECK_THROWS_AS(object.extractLength(length, pos, negativeLength), MessageParseError);
    CHECK(length <= 0);

    CHECK(0U == pos);
    object.extractLength(length, pos, incomplete_1);

    object.extractLength(length, pos, incomplete_2);
    CHECK(0U == pos);

    CHECK(!object.extractLength(length, pos, ""));
  }

  SECTION("readFixMessage") {
    std::string fixMsg1 = "8=FIX.4.2\0019=12\00135=A\001108=30\00110=31\001";
    std::string fixMsg2 = "8=FIX.4.2\0019=17\00135=4\00136=88\001123=Y\00110=34\001";
    std::string fixMsg3 = "8=FIX.4.2\0019=19\00135=A\001108=30\0019710=8\00110=31\001";
    std::string badLength = "8=FIX.4.2\0019=200A\00135=A\001108=30\00110=31\001";

    object.addToStream(fixMsg1 + fixMsg2 + fixMsg3 + badLength);

    std::string readFixMsg;
    CHECK(object.readFixMessage(readFixMsg));
    CHECK(fixMsg1 == readFixMsg);

    CHECK(object.readFixMessage(readFixMsg));
    CHECK(fixMsg2 == readFixMsg);

    CHECK(object.readFixMessage(readFixMsg));
    CHECK(fixMsg3 == readFixMsg);

    CHECK_THROWS_AS(object.readFixMessage(readFixMsg), MessageParseError);
  }

  SECTION("readPartialFixMessage") {
    std::string partFixMsg1 = "8=FIX.4.2\0019=17\00135=4\00136=";
    std::string partFixMsg2 = "88\001123=Y\00110=34\001";

    object.addToStream(partFixMsg1);

    std::string readPartFixMsg;
    CHECK(!object.readFixMessage(readPartFixMsg));
    object.addToStream(partFixMsg2);
    CHECK(object.readFixMessage(readPartFixMsg));
    CHECK(partFixMsg1 + partFixMsg2 == readPartFixMsg);
  }

  SECTION("readMessagesByteByByte") {
    std::string fixMsg;
    std::string fixMsg1 = "8=FIX.4.2\0019=54\00135=i\001117=1\001296=1\001302=A\001"
                          "311=DELL\001364=10\001365=DELL\001COMP\001\00110=152\001";
    std::string fixMsg2 = "8=FIX.4.2\0019=17\00135=4\00136=88\001123=Y\00110=34\001";
    std::string fixMsg3 = "8=FIX.4.2\0019=19\00135=A\001108=30\0019710=8\00110=31\001";

    for (unsigned int i = 0; i < fixMsg1.length(); ++i) {
      object.addToStream(fixMsg1.c_str() + i, 1);
    }
  }

  SECTION("readMessageWithBadLength") {
    std::string fixMsg
        = "8=TEST\0019=TEST\00135=TEST\00149=SS1\00156=RORE\00134=3\00152=20050222-16:45:53\00110=TEST\001";

    object.addToStream(fixMsg);

    std::string readFixMsg;
    CHECK_THROWS_AS(object.readFixMessage(readFixMsg), MessageParseError);
    object.readFixMessage(readFixMsg);
  }
}
