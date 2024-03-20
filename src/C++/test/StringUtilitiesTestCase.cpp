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

#include <Utility.h>

#include "catch_amalgamated.hpp"

using namespace FIX;

TEST_CASE("StringUtilitiesTests")
{
  SECTION("replace")
  {
    std::string object = "replace the A in this string with a B";
    string_replace( "A", "B", object );
    CHECK( "replace the B in this string with a B" == object );
    string_replace( "B", "A", object );
    CHECK( "replace the A in this string with a A" == object );
    string_replace( "A", "AB", object );
    CHECK( "replace the AB in this string with a AB" == object );
    string_replace( "AB", "ABCDE", object );
    CHECK( "replace the ABCDE in this string with a ABCDE" == object );
    string_replace( "ABCDE", "AB", object );
    CHECK( "replace the AB in this string with a AB" == object );
  }

  SECTION("toUpper")
  {
    std::string object = "turn this to upper case";
    CHECK( "TURN THIS TO UPPER CASE" == string_toUpper(object) );
    object = "Turn This To Upper Case";
    CHECK( "TURN THIS TO UPPER CASE" == string_toUpper(object) );
    object = "TURN THIS TO UPPER CASE";
    CHECK( "TURN THIS TO UPPER CASE" == string_toUpper(object) );
    object = "!Turn1 This% To* Upper; Case5";
    CHECK( "!TURN1 THIS% TO* UPPER; CASE5" == string_toUpper(object) );
  }

  SECTION("toLower")
  {
    std::string object = "TURN THIS TO LOWER CASE";
    CHECK( "turn this to lower case" == string_toLower(object) );
    object = "Turn This To Lower Case";
    CHECK( "turn this to lower case" == string_toLower(object) );
    object = "turn this to lower case";
    CHECK( "turn this to lower case" == string_toLower(object) );
    object = "!Turn1 This% To* Lower; Case5";
    CHECK( "!turn1 this% to* lower; case5" == string_toLower(object) );
  }

  SECTION("strip")
  {
    std::string object = "strip this";
    CHECK( "strip this" == string_strip(object) );
    object = " strip this";
    CHECK( "strip this" == string_strip(object) );
    object = "  strip this";
    CHECK( "strip this" == string_strip(object) );
    object = "  \tstrip this\n\r";
    CHECK( "strip this" == string_strip(object) );
    object = "strip this ";
    CHECK( "strip this" == string_strip(object) );
    object = "strip this  ";
    CHECK( "strip this" == string_strip(object) );
    object = "  strip this  ";
    CHECK( "strip this" == string_strip(object) );
    object = "\t\n\r  strip this  \t\n\r";
    CHECK( "strip this" == string_strip(object) );
  }
  
  SECTION("split")
  {
    std::set<std::string> object = {};
    CHECK( object == string_split("", ',') );
    CHECK( object == string_split(",,,,,,,", ',') );
    object = {"127.0.0.1"};
    CHECK( object == string_split("127.0.0.1,", ',') );
    CHECK( object == string_split("127.0.0.1", ',') );
    CHECK( object == string_split("127.0.0.1,,,,", ',') );
    CHECK( object == string_split("127.0.0.1,127.0.0.1,,,,,,127.0.0.1,127.0.0.1,127.0.0.1,", ',') );
    object = {"127.0.0.1", "127.0.0.2"};
    CHECK( object == string_split("127.0.0.1,127.0.0.2", ',') );
    CHECK( object == string_split("127.0.0.1,127.0.0.1,127.0.0.1,127.0.0.1,127.0.0.2,127.0.0.2,127.0.0.2,", ',' ) );
  }
}
