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

#include <UnitTest++.h>
#include <Field.h>

using namespace FIX;

SUITE(FieldConvertorsTests)
{

USER_DEFINE_STRING( TestField1, 1 );
USER_DEFINE_CHAR( TestField2, 2 );
USER_DEFINE_PRICE( TestField3, 3 );
USER_DEFINE_INT( TestField4, 4 );
USER_DEFINE_AMT( TestField5, 5 );
USER_DEFINE_QTY( TestField6, 6 );
USER_DEFINE_CURRENCY( TestField7, 7 );
USER_DEFINE_MULTIPLEVALUESTRING( TestField8, 8 );
USER_DEFINE_EXCHANGE( TestField9, 9 );
USER_DEFINE_UTCTIMESTAMP( TestField10, 10 );
USER_DEFINE_BOOLEAN( TestField11, 11 );
USER_DEFINE_LOCALMKTDATE( TestField12, 12 );
USER_DEFINE_DATA( TestField13, 13 );
USER_DEFINE_FLOAT( TestField14, 14 );
USER_DEFINE_PRICEOFFSET( TestField15, 15 );
USER_DEFINE_MONTHYEAR( TestField16, 16 );
USER_DEFINE_DAYOFMONTH( TestField17, 17 );
USER_DEFINE_UTCDATE( TestField18, 18 );
USER_DEFINE_UTCTIMEONLY( TestField19, 19 );

TEST(countIntegerSymbols)
{
	CHECK_EQUAL(1, FIX::number_of_symbols_in( 0 ));
	CHECK_EQUAL(2, FIX::number_of_symbols_in( -1 ));
	CHECK_EQUAL(3, FIX::number_of_symbols_in( 926 ));
}

TEST(emptyConvert)
{
  CHECK_EQUAL( "hello", StringConvertor::convert( "hello" ) );
}

TEST(integerConvertTo)
{
  CHECK_EQUAL( "123", IntConvertor::convert( 123 ) );
}

TEST(integerConvertFrom)
{
  CHECK_EQUAL( 123, IntConvertor::convert( "123" ) );
  CHECK_THROW( IntConvertor::convert( "abc" ), FieldConvertError );
  CHECK_THROW( IntConvertor::convert( "123.4" ), FieldConvertError );
  CHECK_THROW( IntConvertor::convert( "+200" ), FieldConvertError );
}

TEST(doubleConvertTo)
{
  CHECK_EQUAL( "45.32", DoubleConvertor::convert( 45.32 ) );
  CHECK_EQUAL( "45", DoubleConvertor::convert( 45 ) );
  CHECK_EQUAL( "0", DoubleConvertor::convert( 0.0 ) );
  CHECK_EQUAL( "0.00001", DoubleConvertor::convert( 0.00001 ) );
  CHECK_EQUAL( "-12.000000000001", DoubleConvertor::convert( -12.000000000001 ) );
  CHECK_EQUAL( "-0.00001", DoubleConvertor::convert( -0.00001 ) );
  CHECK_EQUAL( "-1050", DoubleConvertor::convert( -1050.0 ) );

  CHECK_EQUAL( "1.500", DoubleConvertor::convert( 1.5, 3) );
  CHECK_EQUAL( "45.00000", DoubleConvertor::convert( 45, 5) );
  CHECK_EQUAL( "5.00", DoubleConvertor::convert( 5, 2) );
  CHECK_EQUAL( "-5.00", DoubleConvertor::convert( -5, 2) );
  CHECK_EQUAL( "-12.2345", DoubleConvertor::convert( -12.2345, 2) );
  CHECK_EQUAL( "-0.00001", DoubleConvertor::convert( -0.00001, 5) );
  CHECK_EQUAL( "0.0", DoubleConvertor::convert( 0.0, 1) );
}

TEST(doubleConvertFrom)
{
  CHECK_EQUAL( 45.32, DoubleConvertor::convert( "45.32" ) );
  CHECK_EQUAL( 45.32, DoubleConvertor::convert( "45.3200" ) );
  CHECK_EQUAL( 0.00340244, DoubleConvertor::convert( "0.00340244000" ) );
  CHECK_EQUAL( 12.000000000001, DoubleConvertor::convert( "12.000000000001" ) );
  CHECK_EQUAL( -12.000000000001, DoubleConvertor::convert( "-12.000000000001" ) );
  CHECK_EQUAL( 0.0, DoubleConvertor::convert( "0.0" ) );
  CHECK_EQUAL( 45.32, DoubleConvertor::convert( "0045.32" ) );
  CHECK_EQUAL( 0.0, DoubleConvertor::convert( "0." ) );
  CHECK_EQUAL( 0.0, DoubleConvertor::convert( ".0" ) );
  CHECK_EQUAL( 0.0, DoubleConvertor::convert( "0" ) );
  CHECK_EQUAL( 0.06, DoubleConvertor::convert( "000.06" ) );
  CHECK_EQUAL( 0.06, DoubleConvertor::convert( "0.0600" ) );
  CHECK_EQUAL( 0.00001, DoubleConvertor::convert( "0.00001" ) );
  CHECK_EQUAL( -0.00001, DoubleConvertor::convert( "-0.00001" ) );
  CHECK_EQUAL( -1050, DoubleConvertor::convert( "-1050" ) );

  CHECK_THROW( DoubleConvertor::convert( "abc" ), FieldConvertError );
  CHECK_THROW( DoubleConvertor::convert( "123.A" ), FieldConvertError );
  CHECK_THROW( DoubleConvertor::convert( "123.45.67" ), FieldConvertError );
  CHECK_THROW( DoubleConvertor::convert( "." ), FieldConvertError );
}

TEST(charConvertTo)
{
  CHECK_EQUAL( "a", CharConvertor::convert( 'a' ) );
  CHECK_EQUAL( "1", CharConvertor::convert( '1' ) );
  CHECK_EQUAL( "F", CharConvertor::convert( 'F' ) );
  CHECK_EQUAL( "", CharConvertor::convert( 0 ) );
}

TEST(charConvertFrom)
{
  CHECK_EQUAL( 'a', CharConvertor::convert( "a" ) );
  CHECK_EQUAL( '1', CharConvertor::convert( "1" ) );
  CHECK_EQUAL( 'F', CharConvertor::convert( "F" ) );
}

TEST(booleanConvertTo)
{
  CHECK_EQUAL( "Y", BoolConvertor::convert( true ) );
  CHECK_EQUAL( "N", BoolConvertor::convert( false ) );
}

TEST(booleanConvertFrom)
{
  CHECK_EQUAL( true, BoolConvertor::convert( std::string( "Y" ) ) );
  CHECK_EQUAL( false, BoolConvertor::convert( std::string( "N" ) ) );
  CHECK_THROW( BoolConvertor::convert( std::string( "D" ) ), FieldConvertError );
}

TEST(utcTimeStampConvertTo)
{
  UtcTimeStamp input;
  input.setHMS( 12, 5, 6, 555 );
  input.setYMD( 2000, 4, 26 );
  CHECK_EQUAL( "20000426-12:05:06", UtcTimeStampConvertor::convert( input ) );
  CHECK_EQUAL( "20000426-12:05:06.555", UtcTimeStampConvertor::convert( input,true ) );
}

TEST(utcTimeStampConvertFrom)
{
  UtcTimeStamp result = UtcTimeStampConvertor::convert
                        ( std::string( "20000426-12:05:06.555" ) );
  CHECK_EQUAL( 12, result.getHour() );
  CHECK_EQUAL( 5, result.getMinute() );
  CHECK_EQUAL( 6, result.getSecond() );
  CHECK_EQUAL( 555, result.getMillisecond() );
  CHECK_EQUAL( 2000, result.getYear() );
  CHECK_EQUAL( 4, result.getMonth() );
  CHECK_EQUAL( 26, result.getDate() );

  UtcTimeStamp result2 = UtcTimeStampConvertor::convert
                         ( std::string( "20000426-12:05:06.555" ), true );
  CHECK_EQUAL( 12, result2.getHour() );
  CHECK_EQUAL( 5, result2.getMinute() );
  CHECK_EQUAL( 6, result2.getSecond() );
  CHECK_EQUAL( 555, result2.getMillisecond() );
  CHECK_EQUAL( 2000, result2.getYear() );
  CHECK_EQUAL( 4, result2.getMonth() );
  CHECK_EQUAL( 26, result2.getDate() );
  // CHECK_EQUAL( 117, result2.getYearDay() );
}

TEST(utcTimeOnlyConvertTo)
{
  UtcTimeOnly input;
  input.setHMS( 12, 5, 6, 555 );
  CHECK_EQUAL( "12:05:06", UtcTimeOnlyConvertor::convert( input ) );
  CHECK_EQUAL( "12:05:06.555", UtcTimeOnlyConvertor::convert( input,true ) );
}

TEST(utcTimeOnlyConvertFrom)
{
  UtcTimeOnly result = UtcTimeOnlyConvertor::convert
                       ( std::string( "12:05:06.555" ) );
  CHECK_EQUAL( 12, result.getHour() );
  CHECK_EQUAL( 5, result.getMinute() );
  CHECK_EQUAL( 6, result.getSecond() );
  CHECK_EQUAL( 555, result.getMillisecond() );
}

TEST(utcDateConvertTo)
{
  UtcDate input;
  input.setYMD( 2000, 4, 26 );
  CHECK_EQUAL( "20000426", UtcDateConvertor::convert( input ) );
}

TEST(utcDateConvertFrom)
{
  UtcDate result = UtcDateConvertor::convert
                   ( std::string( "20000426" ) );
  CHECK_EQUAL( 2000, result.getYear() );
  CHECK_EQUAL( 4, result.getMonth() );
  CHECK_EQUAL( 26, result.getDate() );
  //CHECK_EQUAL( 117, result.getYearDay() );
}

TEST(checkSumConvertTo)
{
  CHECK_EQUAL( "000", CheckSumConvertor::convert( 0 ) );
  CHECK_EQUAL( "005", CheckSumConvertor::convert( 5 ) );
  CHECK_EQUAL( "012", CheckSumConvertor::convert( 12 ) );
  CHECK_EQUAL( "234", CheckSumConvertor::convert( 234 ) );
  CHECK_THROW( CheckSumConvertor::convert( -1 ), FieldConvertError );
  CHECK_THROW( CheckSumConvertor::convert( 256 ), FieldConvertError );
}

}
