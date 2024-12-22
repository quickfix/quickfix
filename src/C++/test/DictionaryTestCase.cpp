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

#include <Dictionary.h>

#include "catch_amalgamated.hpp"

using namespace FIX;

TEST_CASE("DictionaryTests") {
  SECTION("setGetString") {
    Dictionary object;
    object.setString("STRINGKEY1", "STRINGVALUE1");
    object.setString("STRINGKEY2", "stringvalue2");

    CHECK("STRINGVALUE1" == object.getString("STRINGKEY1"));
    CHECK("stringvalue2" == object.getString("STRINGKEY2"));
    CHECK("STRINGVALUE2" == object.getString("STRINGKEY2", true));
    CHECK_THROWS_AS(object.getString("STRINGKEY3"), ConfigError);
  }

  SECTION("setGetInt") {
    Dictionary object;
    object.setInt("INTKEY1", 12);
    object.setInt("INTKEY2", 9827362);
    object.setString("BADINTKEY", "AB12");

    CHECK(12 == object.getInt("INTKEY1"));
    CHECK(9827362 == object.getInt("INTKEY2"));
    CHECK_THROWS_AS(object.getInt("INTKEY3"), ConfigError);
    CHECK_THROWS_AS(object.getInt("BADINTKEY"), ConfigError);
  }

  SECTION("setGetDouble") {
    Dictionary object;
    object.setDouble("DOUBLEKEY1", 12.3);
    object.setDouble("DOUBLEKEY2", 9827362.9827362);
    object.setString("BADDOUBLEKEY", "AB12.3");

    CHECK(12.3 == object.getDouble("DOUBLEKEY1"));
    CHECK(9827362.9827362 == object.getDouble("DOUBLEKEY2"));
    CHECK_THROWS_AS(object.getDouble("DOUBLEKEY3"), ConfigError);
    CHECK_THROWS_AS(object.getDouble("BADDOUBLEKEY"), ConfigError);
  }

  SECTION("setGetDay") {
    Dictionary object;
    object.setString("DAY1", "SU");
    object.setString("DAY2", "MO");
    object.setString("DAY3", "TU");
    object.setString("DAY4", "WE");
    object.setString("DAY5", "TH");
    object.setString("DAY6", "FR");
    object.setString("DAY7", "SA");
    object.setString("DAYUNKNOWN", "un");
    object.setString("DAYBAD", "f");

    CHECK(1 == object.getDay("DAY1"));
    CHECK(2 == object.getDay("DAY2"));
    CHECK(3 == object.getDay("DAY3"));
    CHECK(4 == object.getDay("DAY4"));
    CHECK(5 == object.getDay("DAY5"));
    CHECK(6 == object.getDay("DAY6"));
    CHECK(7 == object.getDay("DAY7"));
    CHECK(-1 == object.getDay("DAYUNKNOWN"));
    CHECK_THROWS_AS(object.getDay("DAYBAD"), ConfigError);

    object.setDay("NEXTDAY1", 1);
    object.setDay("NEXTDAY2", 2);
    object.setDay("NEXTDAY3", 3);
    object.setDay("NEXTDAY4", 4);
    object.setDay("NEXTDAY5", 5);
    object.setDay("NEXTDAY6", 6);
    object.setDay("NEXTDAY7", 7);
    object.setDay("NEXTDAYBAD", 8);

    CHECK(1 == object.getDay("NEXTDAY1"));
    CHECK(2 == object.getDay("NEXTDAY2"));
    CHECK(3 == object.getDay("NEXTDAY3"));
    CHECK(4 == object.getDay("NEXTDAY4"));
    CHECK(5 == object.getDay("NEXTDAY5"));
    CHECK(6 == object.getDay("NEXTDAY6"));
    CHECK(7 == object.getDay("NEXTDAY7"));
  }

  SECTION("merge") {
    Dictionary object;
    object.setString("FIRSTKEY", "FIRSTVALUE");
    object.setString("THIRDKEY", "FIRST");
    Dictionary second;
    second.setString("SECONDKEY", "SECONDVALUE");
    second.setString("THIRDKEY", "SECOND");
    object.merge(second);

    CHECK("FIRSTVALUE" == object.getString("FIRSTKEY"));
    CHECK("SECONDVALUE" == object.getString("SECONDKEY"));
    CHECK("FIRST" == object.getString("THIRDKEY"));
  }

  SECTION("setBool_ValuesSet") {
    Dictionary object;
    object.setBool("test", false);
    CHECK(!object.getBool("test"));

    object.setBool("test", true);
    CHECK(object.getBool("test"));
  }

  SECTION("getBool_KeyValueNotABoolean") {
    Dictionary object;
    object.setString("test", "notABoolean");

    CHECK_THROWS_AS(object.getBool("test"), ConfigError);
  }
}