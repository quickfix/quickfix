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
#include <Utility.h>

using namespace FIX;

TEST(StringUtilitiesTests, replace)
{
  std::string object = "replace the A in this string with a B";
  string_replace( "A", "B", object );
  ASSERT_EQ( "replace the B in this string with a B", object );
  string_replace( "B", "A", object );
  ASSERT_EQ( "replace the A in this string with a A", object );
  string_replace( "A", "AB", object );
  ASSERT_EQ( "replace the AB in this string with a AB", object );
  string_replace( "AB", "ABCDE", object );
  ASSERT_EQ( "replace the ABCDE in this string with a ABCDE", object );
  string_replace( "ABCDE", "AB", object );
  ASSERT_EQ( "replace the AB in this string with a AB", object );
}

TEST(StringUtilitiesTests, toUpper)
{
  std::string object = "turn this to upper case";
  ASSERT_EQ( "TURN THIS TO UPPER CASE", string_toUpper(object) );
  object = "Turn This To Upper Case";
  ASSERT_EQ( "TURN THIS TO UPPER CASE", string_toUpper(object) );
  object = "TURN THIS TO UPPER CASE";
  ASSERT_EQ( "TURN THIS TO UPPER CASE", string_toUpper(object) );
  object = "!Turn1 This% To* Upper; Case5";
  ASSERT_EQ( "!TURN1 THIS% TO* UPPER; CASE5", string_toUpper(object) );
}

TEST(StringUtilitiesTests, toLower)
{
  std::string object = "TURN THIS TO LOWER CASE";
  ASSERT_EQ( "turn this to lower case", string_toLower(object) );
  object = "Turn This To Lower Case";
  ASSERT_EQ( "turn this to lower case", string_toLower(object) );
  object = "turn this to lower case";
  ASSERT_EQ( "turn this to lower case", string_toLower(object) );
  object = "!Turn1 This% To* Lower; Case5";
  ASSERT_EQ( "!turn1 this% to* lower; case5", string_toLower(object) );
}

TEST(StringUtilitiesTests, strip)
{
  std::string object = "strip this";
  ASSERT_EQ( "strip this", string_strip(object) );
  object = " strip this";
  ASSERT_EQ( "strip this", string_strip(object) );
  object = "  strip this";
  ASSERT_EQ( "strip this", string_strip(object) );
  object = "  \tstrip this\n\r";
  ASSERT_EQ( "strip this", string_strip(object) );
  object = "strip this ";
  ASSERT_EQ( "strip this", string_strip(object) );
  object = "strip this  ";
  ASSERT_EQ( "strip this", string_strip(object) );
  object = "  strip this  ";
  ASSERT_EQ( "strip this", string_strip(object) );
  object = "\t\n\r  strip this  \t\n\r";
  ASSERT_EQ( "strip this", string_strip(object) );
}
