/****************************************************************************
** Copyright (c) quickfixengine.org  All rights reserved.
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

#include "StringUtilitiesTestCase.h"

namespace FIX
{
  void StringUtilitiesTestCase::replace::onRun( std::string& object )
  {
    object = "replace the A in this string with a B";
    string_replace( "A", "B", object );
    assert( "replace the B in this string with a B" == object );
    string_replace( "B", "A", object );
    assert( "replace the A in this string with a A" == object );
    string_replace( "A", "AB", object );
    assert( "replace the AB in this string with a AB" == object );
    string_replace( "AB", "ABCDE", object );
    assert( "replace the ABCDE in this string with a ABCDE" == object );
    string_replace( "ABCDE", "AB", object );
    assert( "replace the AB in this string with a AB" == object );
  }

  void StringUtilitiesTestCase::toUpper::onRun( std::string& object )
  {
    object = "turn this to upper case";
    assertEquals( "TURN THIS TO UPPER CASE", string_toUpper(object) );
    object = "Turn This To Upper Case";
    assertEquals( "TURN THIS TO UPPER CASE", string_toUpper(object) );
    object = "TURN THIS TO UPPER CASE";
    assertEquals( "TURN THIS TO UPPER CASE", string_toUpper(object) )
    object = "!Turn1 This% To* Upper; Case5";
    assertEquals( "!TURN1 THIS% TO* UPPER; CASE5", string_toUpper(object) )
  }

  void StringUtilitiesTestCase::toLower::onRun( std::string& object )
  {
    object = "TURN THIS TO LOWER CASE";
    assertEquals( "turn this to lower case", string_toLower(object) );
    object = "Turn This To Lower Case";
    assertEquals( "turn this to lower case", string_toLower(object) );
    object = "turn this to lower case";
    assertEquals( "turn this to lower case", string_toLower(object) )
    object = "!Turn1 This% To* Lower; Case5";
    assertEquals( "!turn1 this% to* lower; case5", string_toLower(object) )
  }

  void StringUtilitiesTestCase::strip::onRun( std::string& object )
  {
    object = "strip this";
    assertEquals( "strip this", string_strip(object) );
    object = " strip this";
    assertEquals( "strip this", string_strip(object) );
    object = "  strip this";
    assertEquals( "strip this", string_strip(object) );
    object = "  \tstrip this\n\r";
    assertEquals( "strip this", string_strip(object) );
    object = "strip this ";
    assertEquals( "strip this", string_strip(object) );
    object = "strip this  ";
    assertEquals( "strip this", string_strip(object) );
    object = "  strip this  ";
    assertEquals( "strip this", string_strip(object) );
    object = "\t\n\r  strip this  \t\n\r";
    assertEquals( "strip this", string_strip(object) );
  }
}
