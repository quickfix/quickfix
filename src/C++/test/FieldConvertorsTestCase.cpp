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
#include <Field.h>

using namespace FIX;

const int MAX_INT = 2147483647;
const int MIN_INT = -2147483647 - 1;

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
 
  CHECK_EQUAL(1, FIX::number_of_symbols_in( 9 ));
  CHECK_EQUAL(2, FIX::number_of_symbols_in( 92 ));
  CHECK_EQUAL(3, FIX::number_of_symbols_in( 926 ));
  CHECK_EQUAL(4, FIX::number_of_symbols_in( 1926 ));
  CHECK_EQUAL(5, FIX::number_of_symbols_in( 11926 ));
  CHECK_EQUAL(6, FIX::number_of_symbols_in( 111926 ));
  CHECK_EQUAL(7, FIX::number_of_symbols_in( 1111926 ));
  CHECK_EQUAL(8, FIX::number_of_symbols_in( 11111926 ));
  CHECK_EQUAL(9, FIX::number_of_symbols_in( 111111926 ));
  CHECK_EQUAL(10, FIX::number_of_symbols_in( MAX_INT ));

  CHECK_EQUAL(2, FIX::number_of_symbols_in( -9 ));
  CHECK_EQUAL(3, FIX::number_of_symbols_in( -92 ));
  CHECK_EQUAL(4, FIX::number_of_symbols_in( -926 ));
  CHECK_EQUAL(5, FIX::number_of_symbols_in( -1926 ));
  CHECK_EQUAL(6, FIX::number_of_symbols_in( -11926 ));
  CHECK_EQUAL(7, FIX::number_of_symbols_in( -111926 ));
  CHECK_EQUAL(8, FIX::number_of_symbols_in( -1111926 ));
  CHECK_EQUAL(9, FIX::number_of_symbols_in( -11111926 ));
  CHECK_EQUAL(10, FIX::number_of_symbols_in( -111111926 ));
  CHECK_EQUAL(11, FIX::number_of_symbols_in( MIN_INT) );
}

TEST(emptyConvert)
{
  CHECK_EQUAL( "hello", StringConvertor::convert( "hello" ) );
}

TEST(integerConvertTo)
{
  CHECK_EQUAL( "0", IntConvertor::convert( 0 ) );
  CHECK_EQUAL( "1", IntConvertor::convert( 1 ) );
  CHECK_EQUAL( "12", IntConvertor::convert( 12 ) );
  CHECK_EQUAL( "100", IntConvertor::convert( 100 ) );
  CHECK_EQUAL( "1234", IntConvertor::convert( 1234 ) );
  CHECK_EQUAL( "12345", IntConvertor::convert( 12345 ) );
  CHECK_EQUAL( "123456", IntConvertor::convert( 123456 ) );
  CHECK_EQUAL( "1234567", IntConvertor::convert( 1234567 ) );
  CHECK_EQUAL( "12345678", IntConvertor::convert( 12345678 ) );
  CHECK_EQUAL( "123456789", IntConvertor::convert( 123456789 ) );
  CHECK_EQUAL( "2147483647", IntConvertor::convert( MAX_INT ) );

  CHECK_EQUAL( "-1", IntConvertor::convert( -1 ) );
  CHECK_EQUAL( "-12", IntConvertor::convert( -12 ) );
  CHECK_EQUAL( "-100", IntConvertor::convert( -100 ) );
  CHECK_EQUAL( "-1234", IntConvertor::convert( -1234 ) );
  CHECK_EQUAL( "-12345", IntConvertor::convert( -12345 ) );
  CHECK_EQUAL( "-123456", IntConvertor::convert( -123456 ) );
  CHECK_EQUAL( "-1234567", IntConvertor::convert( -1234567 ) );
  CHECK_EQUAL( "-12345678", IntConvertor::convert( -12345678 ) );
  CHECK_EQUAL( "-123456789", IntConvertor::convert( -123456789 ) );
  CHECK_EQUAL( "-2147483647", IntConvertor::convert( -2147483647 ) );
  CHECK_EQUAL( "-2147483648", IntConvertor::convert( MIN_INT ) );
  CHECK_THROW( IntConvertor::convert( "-" ), FieldConvertError );
}

TEST(integerConvertFrom)
{
  CHECK_EQUAL( 0, IntConvertor::convert( "0" ) );
  CHECK_EQUAL( 1, IntConvertor::convert( "1" ) );
  CHECK_EQUAL( 12, IntConvertor::convert( "12" ) );
  CHECK_EQUAL( 100, IntConvertor::convert( "100" ) );
  CHECK_EQUAL( 1234, IntConvertor::convert( "1234" ) );
  CHECK_EQUAL( MAX_INT, IntConvertor::convert( "2147483647" ) );

  CHECK_EQUAL( -1, IntConvertor::convert( "-1" ) );
  CHECK_EQUAL( -12, IntConvertor::convert( "-12" ) );
  CHECK_EQUAL( -100, IntConvertor::convert( "-100" ) );
  CHECK_EQUAL( -1234, IntConvertor::convert( "-1234" ) );
  CHECK_EQUAL( -2147483647, IntConvertor::convert( "-2147483647" ) );
  CHECK_EQUAL( MIN_INT, IntConvertor::convert( "-2147483648" ) );

  CHECK_THROW( IntConvertor::convert( "" ), FieldConvertError );
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
  CHECK_EQUAL( "1.233", DoubleConvertor::convert( 1.233 ) );
  CHECK_EQUAL( "38.4", DoubleConvertor::convert( 38.4 ) );
  CHECK_EQUAL( "38.4", DoubleConvertor::convert( 38.400000000000006 ) );
  CHECK_EQUAL( "0.1", DoubleConvertor::convert( 0.1 ) );
  CHECK_EQUAL( "0.3", DoubleConvertor::convert( 0.3 ) );

  // corner cases
  CHECK_EQUAL( "-0.000000000000001", DoubleConvertor::convert( -1e-15 ) );
  CHECK_EQUAL( "100000000000000", DoubleConvertor::convert( 1e14 ) );
  CHECK_EQUAL( "1e15", DoubleConvertor::convert( 1e15 ) );
  CHECK_EQUAL( "1.23456e15", DoubleConvertor::convert( 1.23456e15 ) );
  CHECK_EQUAL( "0.", DoubleConvertor::convert( 1e-16 ) );

  CHECK_EQUAL( "1.500", DoubleConvertor::convert( 1.5, 3) );
  CHECK_EQUAL( "45.00000", DoubleConvertor::convert( 45, 5) );
  CHECK_EQUAL( "5.00", DoubleConvertor::convert( 5, 2) );
  CHECK_EQUAL( "-5.00", DoubleConvertor::convert( -5, 2) );
  CHECK_EQUAL( "-12.2345", DoubleConvertor::convert( -12.2345, 2) );
  CHECK_EQUAL( "-0.00001", DoubleConvertor::convert( -0.00001, 5) );
  CHECK_EQUAL( "0.0", DoubleConvertor::convert( 0.0, 1) );

  CHECK_EQUAL( "", DoubleConvertor::convert( 0.01, 0, -1));
  CHECK_EQUAL( "", DoubleConvertor::convert( 0.00000000000000000000000000000000000000000000000000000000000000001, 0, 61, 100));
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
  CHECK_EQUAL( 1.233, DoubleConvertor::convert( "1.233" ) );
  CHECK_EQUAL( 38.4, DoubleConvertor::convert( "38.4" ) );

  CHECK_THROW( DoubleConvertor::convert( "abc" ), FieldConvertError );
  CHECK_THROW( DoubleConvertor::convert( "123.A" ), FieldConvertError );
  CHECK_THROW( DoubleConvertor::convert( "123.45.67" ), FieldConvertError );
  CHECK_THROW( DoubleConvertor::convert( "." ), FieldConvertError );
  CHECK_THROW( DoubleConvertor::convert( "1e5" ), FieldConvertError );
}

TEST(charConvertTo)
{
  CHECK_EQUAL( "a", CharConvertor::convert( 'a' ) );
  CHECK_EQUAL( "1", CharConvertor::convert( '1' ) );
  CHECK_EQUAL( "F", CharConvertor::convert( 'F' ) );
  CHECK_EQUAL( "", CharConvertor::convert( 0 ) );
  CHECK_THROW( CharConvertor::convert( "11" ), FieldConvertError );
  CHECK_THROW( CharConvertor::convert( "1 " ), FieldConvertError );
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

TEST(utcTimeStampConvertToSecond)
{
  UtcTimeStamp input;
  input.setHMS( 12, 5, 6, 0, 0 );
  input.setYMD( 2000, 4, 26 );
  CHECK_EQUAL( "20000426-12:05:06", UtcTimeStampConvertor::convert( input ) );
  CHECK_EQUAL( "20000426-12:05:06", UtcTimeStampConvertor::convert( input, 0 ) );
}

TEST(utcTimeStampConvertToMilli)
{
  UtcTimeStamp input;
  input.setHMS( 12, 5, 6, 555, 3 );
  input.setYMD( 2000, 4, 26 );
  CHECK_EQUAL( "20000426-12:05:06", UtcTimeStampConvertor::convert( input ) );
  CHECK_EQUAL( "20000426-12:05:06.555", UtcTimeStampConvertor::convert( input, 3 ) );
}

TEST(utcTimeStampConvertToMicro)
{
  UtcTimeStamp input;
  input.setHMS( 12, 5, 6, 555555, 6 );
  input.setYMD( 2000, 4, 26 );
  CHECK_EQUAL( "20000426-12:05:06", UtcTimeStampConvertor::convert( input ) );
  CHECK_EQUAL( "20000426-12:05:06.555555", UtcTimeStampConvertor::convert( input, 6 ) );
}

TEST(utcTimeStampConvertToNano)
{
  UtcTimeStamp input;
  input.setHMS( 12, 5, 6, 555555555, 9 );
  input.setYMD( 2000, 4, 26 );
  CHECK_EQUAL( "20000426-12:05:06", UtcTimeStampConvertor::convert( input ) );
  CHECK_EQUAL( "20000426-12:05:06.555555555", UtcTimeStampConvertor::convert( input, 9 ) );
}

TEST(utcTimeStampConvertFromSecond)
{
  UtcTimeStamp result = UtcTimeStampConvertor::convert
    ( std::string( "20000426-12:05:06" ) );
  CHECK_EQUAL( 12, result.getHour() );
  CHECK_EQUAL( 5, result.getMinute() );
  CHECK_EQUAL( 6, result.getSecond() );
  CHECK_EQUAL( 0, result.getFraction(0) );
  CHECK_EQUAL( 2000, result.getYear() );
  CHECK_EQUAL( 4, result.getMonth() );
  CHECK_EQUAL( 26, result.getDate() );

  UtcTimeStamp result2 = UtcTimeStampConvertor::convert
    ( std::string( "20000426-12:05:06" ) );
  CHECK_EQUAL( 12, result2.getHour() );
  CHECK_EQUAL( 5, result2.getMinute() );
  CHECK_EQUAL( 6, result2.getSecond() );
  CHECK_EQUAL( 0, result2.getFraction(0) );
  CHECK_EQUAL( 2000, result2.getYear() );
  CHECK_EQUAL( 4, result2.getMonth() );
  CHECK_EQUAL( 26, result2.getDate() );
}

TEST(utcTimeStampConvertFromMilli)
{
  UtcTimeStamp result = UtcTimeStampConvertor::convert
    ( std::string( "20000426-12:05:06.555" ) );
  CHECK_EQUAL( 12, result.getHour() );
  CHECK_EQUAL( 5, result.getMinute() );
  CHECK_EQUAL( 6, result.getSecond() );
  CHECK_EQUAL( 555, result.getFraction(3) );
  CHECK_EQUAL( 2000, result.getYear() );
  CHECK_EQUAL( 4, result.getMonth() );
  CHECK_EQUAL( 26, result.getDate() );

  UtcTimeStamp result2 = UtcTimeStampConvertor::convert
    ( std::string( "20000426-12:05:06.555" ) );
  CHECK_EQUAL( 12, result2.getHour() );
  CHECK_EQUAL( 5, result2.getMinute() );
  CHECK_EQUAL( 6, result2.getSecond() );
  CHECK_EQUAL( 555, result2.getFraction(3) );
  CHECK_EQUAL( 2000, result2.getYear() );
  CHECK_EQUAL( 4, result2.getMonth() );
  CHECK_EQUAL( 26, result2.getDate() );
}

TEST(utcTimeStampConvertFromMicro)
{
  UtcTimeStamp result = UtcTimeStampConvertor::convert
    ( std::string( "20000426-12:05:06.555555" ) );
  CHECK_EQUAL( 12, result.getHour() );
  CHECK_EQUAL( 5, result.getMinute() );
  CHECK_EQUAL( 6, result.getSecond() );
  CHECK_EQUAL( 555555, result.getFraction(6) );
  CHECK_EQUAL( 2000, result.getYear() );
  CHECK_EQUAL( 4, result.getMonth() );
  CHECK_EQUAL( 26, result.getDate() );

  UtcTimeStamp result2 = UtcTimeStampConvertor::convert
    ( std::string( "20000426-12:05:06.555555" ) );
  CHECK_EQUAL( 12, result2.getHour() );
  CHECK_EQUAL( 5, result2.getMinute() );
  CHECK_EQUAL( 6, result2.getSecond() );
  CHECK_EQUAL( 555555, result2.getFraction(6) );
  CHECK_EQUAL( 2000, result2.getYear() );
  CHECK_EQUAL( 4, result2.getMonth() );
  CHECK_EQUAL( 26, result2.getDate() );
}

TEST(utcTimeStampConvertFromNano)
{
  UtcTimeStamp result = UtcTimeStampConvertor::convert
    ( std::string( "20000426-12:05:06.555555555" ) );
  CHECK_EQUAL( 12, result.getHour() );
  CHECK_EQUAL( 5, result.getMinute() );
  CHECK_EQUAL( 6, result.getSecond() );
  CHECK_EQUAL( 555555555, result.getFraction(9) );
  CHECK_EQUAL( 2000, result.getYear() );
  CHECK_EQUAL( 4, result.getMonth() );
  CHECK_EQUAL( 26, result.getDate() );

  UtcTimeStamp result2 = UtcTimeStampConvertor::convert
    ( std::string( "20000426-12:05:06.555555555" ) );
  CHECK_EQUAL( 12, result2.getHour() );
  CHECK_EQUAL( 5, result2.getMinute() );
  CHECK_EQUAL( 6, result2.getSecond() );
  CHECK_EQUAL( 555555555, result2.getFraction(9) );
  CHECK_EQUAL( 2000, result2.getYear() );
  CHECK_EQUAL( 4, result2.getMonth() );
  CHECK_EQUAL( 26, result2.getDate() );
}

TEST(utcTimeOnlyConvertToSecond)
{
  UtcTimeOnly input;
  input.setHMS( 12, 5, 6, 0, 0 );
  CHECK_EQUAL( "12:05:06", UtcTimeOnlyConvertor::convert( input ) );
  CHECK_EQUAL( "12:05:06", UtcTimeOnlyConvertor::convert( input, 0) );
}

TEST(utcTimeOnlyConvertToMilli)
{
  UtcTimeOnly input;
  input.setHMS( 12, 5, 6, 555, 3 );
  CHECK_EQUAL( "12:05:06", UtcTimeOnlyConvertor::convert( input ) );
  CHECK_EQUAL( "12:05:06.555", UtcTimeOnlyConvertor::convert( input, 3 ) );
}

TEST(utcTimeOnlyConvertToMicro)
{
  UtcTimeOnly input;
  input.setHMS( 12, 5, 6, 555555, 6 );
  CHECK_EQUAL( "12:05:06", UtcTimeOnlyConvertor::convert( input ) );
  CHECK_EQUAL( "12:05:06.555555", UtcTimeOnlyConvertor::convert( input, 6 ) );
}

TEST(utcTimeOnlyConvertToNano)
{
  UtcTimeOnly input;
  input.setHMS( 12, 5, 6, 555555555, 9 );
  CHECK_EQUAL( "12:05:06", UtcTimeOnlyConvertor::convert( input ) );
  CHECK_EQUAL( "12:05:06.555555555", UtcTimeOnlyConvertor::convert( input, 9 ) );
}

TEST(utcTimeOnlyConvertFromMicro)
{
  UtcTimeOnly result = UtcTimeOnlyConvertor::convert
                       ( std::string( "12:05:06.555555" ) );
  CHECK_EQUAL( 12, result.getHour() );
  CHECK_EQUAL( 5, result.getMinute() );
  CHECK_EQUAL( 6, result.getSecond() );
  CHECK_EQUAL( 555555, result.getFraction(6) );
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
  std::string outOfRangeMonth = "20001526";
  CHECK_THROW( UtcDateConvertor::convert(outOfRangeMonth), FieldConvertError );
  std::string outOfRangeMonthDay = "20000438";
  CHECK_THROW( UtcDateConvertor::convert(outOfRangeMonthDay), FieldConvertError );
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

TEST(integerToStringPadded)
{
  char result[5];
  int fraction = 1234;
  int precision = 5;
  CHECK_EQUAL(result, integer_to_string_padded(result, precision, fraction));
}

}
