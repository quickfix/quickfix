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
#include <Dictionary.h>

using namespace FIX;

TEST(DictionaryTests, setGetString)
{
  Dictionary object;
  object.setString( "STRINGKEY1", "STRINGVALUE1" );
  object.setString( "STRINGKEY2", "stringvalue2" );

  ASSERT_EQ( "STRINGVALUE1", object.getString( "STRINGKEY1" ) );
  ASSERT_EQ( "stringvalue2", object.getString( "STRINGKEY2" )  );
  ASSERT_EQ( "STRINGVALUE2", object.getString( "STRINGKEY2", true ) );
  ASSERT_THROW( object.getString( "STRINGKEY3" ), ConfigError );
}

TEST(DictionaryTests, setGetInt)
{
  Dictionary object;
  object.setInt( "INTKEY1", 12 );
  object.setInt( "INTKEY2", 9827362 );
  object.setString( "BADINTKEY", "AB12" );

  ASSERT_DOUBLE_EQ( 12, object.getInt( "INTKEY1" ) );
  ASSERT_DOUBLE_EQ( 9827362, object.getInt( "INTKEY2" ) );
  ASSERT_THROW( object.getInt( "INTKEY3" ), ConfigError );
  ASSERT_THROW( object.getInt( "BADINTKEY" ), ConfigError );
}

TEST(DictionaryTests, setGetDouble)
{
  Dictionary object;
  object.setDouble( "DOUBLEKEY1", 12.3 );
  object.setDouble( "DOUBLEKEY2", 9827362.9827362 );
  object.setString( "BADDOUBLEKEY", "AB12.3" );

  ASSERT_DOUBLE_EQ( 12.3, object.getDouble( "DOUBLEKEY1" ) );
  ASSERT_DOUBLE_EQ( 9827362.9827362, object.getDouble( "DOUBLEKEY2" ) );
  ASSERT_THROW( object.getDouble( "DOUBLEKEY3" ), ConfigError );
  ASSERT_THROW( object.getDouble( "BADDOUBLEKEY" ), ConfigError );
}

TEST(DictionaryTests, setGetDay)
{
  Dictionary object;
  object.setString( "DAY1", "SU" );
  object.setString( "DAY2", "MO" );
  object.setString( "DAY3", "TU" );
  object.setString( "DAY4", "WE" );
  object.setString( "DAY5", "TH" );
  object.setString( "DAY6", "FR" );
  object.setString( "DAY7", "SA" );
  object.setString( "DAYUNKNOWN", "un" );
  object.setString( "DAYBAD", "f" );

  ASSERT_EQ( 1, object.getDay( "DAY1" ) );
  ASSERT_EQ( 2, object.getDay( "DAY2" ) );
  ASSERT_EQ( 3, object.getDay( "DAY3" ) );
  ASSERT_EQ( 4, object.getDay( "DAY4" ) );
  ASSERT_EQ( 5, object.getDay( "DAY5" ) );
  ASSERT_EQ( 6, object.getDay( "DAY6" ) );
  ASSERT_EQ( 7, object.getDay( "DAY7" ) );
  ASSERT_EQ( -1, object.getDay( "DAYUNKNOWN" ) );
  ASSERT_THROW( object.getDay( "DAYBAD" ), ConfigError );

  object.setDay( "NEXTDAY1", 1 );
  object.setDay( "NEXTDAY2", 2 );
  object.setDay( "NEXTDAY3", 3 );
  object.setDay( "NEXTDAY4", 4 );
  object.setDay( "NEXTDAY5", 5 );
  object.setDay( "NEXTDAY6", 6 );
  object.setDay( "NEXTDAY7", 7 );
  object.setDay( "NEXTDAYBAD", 8 );

  ASSERT_EQ( 1, object.getDay( "NEXTDAY1" ) );
  ASSERT_EQ( 2, object.getDay( "NEXTDAY2" ) );
  ASSERT_EQ( 3, object.getDay( "NEXTDAY3" ) );
  ASSERT_EQ( 4, object.getDay( "NEXTDAY4" ) );
  ASSERT_EQ( 5, object.getDay( "NEXTDAY5" ) );
  ASSERT_EQ( 6, object.getDay( "NEXTDAY6" ) );
  ASSERT_EQ( 7, object.getDay( "NEXTDAY7" ) );
}

TEST(DictionaryTests, merge)
{
  Dictionary object;
  object.setString( "FIRSTKEY", "FIRSTVALUE" );
  object.setString( "THIRDKEY", "FIRST" );
  Dictionary second;
  second.setString( "SECONDKEY", "SECONDVALUE" );
  second.setString( "THIRDKEY", "SECOND" );
  object.merge( second );
  ASSERT_EQ( "FIRSTVALUE", object.getString( "FIRSTKEY" ) );
  ASSERT_EQ( "SECONDVALUE", object.getString( "SECONDKEY" ) );
  ASSERT_EQ( "FIRST", object.getString( "THIRDKEY" ) );
}

TEST(DictionaryTests, setBool_ValuesSet)
{
  Dictionary object;
  object.setBool("test", false);
  ASSERT_TRUE(!object.getBool("test"));

  object.setBool("test", true);
  ASSERT_TRUE(object.getBool("test"));
}

TEST(DictionaryTests, getBool_KeyValueNotABoolean)
{
  Dictionary object;
  object.setString("test", "notABoolean");

  ASSERT_THROW(object.getBool("test"), ConfigError);
}
