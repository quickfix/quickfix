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
#include <Field.h>

using namespace FIX;

const int MAX_INT = 2147483647;
const int MIN_INT = -2147483647 - 1;

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

TEST(FieldConvertorsTests, countIntegerSymbols)
{
  ASSERT_EQ(1, FIX::number_of_symbols_in( 0 ));
 
  ASSERT_EQ(1, FIX::number_of_symbols_in( 9 ));
  ASSERT_EQ(2, FIX::number_of_symbols_in( 92 ));
  ASSERT_EQ(3, FIX::number_of_symbols_in( 926 ));
  ASSERT_EQ(4, FIX::number_of_symbols_in( 1926 ));
  ASSERT_EQ(5, FIX::number_of_symbols_in( 11926 ));
  ASSERT_EQ(6, FIX::number_of_symbols_in( 111926 ));
  ASSERT_EQ(7, FIX::number_of_symbols_in( 1111926 ));
  ASSERT_EQ(8, FIX::number_of_symbols_in( 11111926 ));
  ASSERT_EQ(9, FIX::number_of_symbols_in( 111111926 ));
  ASSERT_EQ(10, FIX::number_of_symbols_in( MAX_INT ));

  ASSERT_EQ(2, FIX::number_of_symbols_in( -9 ));
  ASSERT_EQ(3, FIX::number_of_symbols_in( -92 ));
  ASSERT_EQ(4, FIX::number_of_symbols_in( -926 ));
  ASSERT_EQ(5, FIX::number_of_symbols_in( -1926 ));
  ASSERT_EQ(6, FIX::number_of_symbols_in( -11926 ));
  ASSERT_EQ(7, FIX::number_of_symbols_in( -111926 ));
  ASSERT_EQ(8, FIX::number_of_symbols_in( -1111926 ));
  ASSERT_EQ(9, FIX::number_of_symbols_in( -11111926 ));
  ASSERT_EQ(10, FIX::number_of_symbols_in( -111111926 ));
  ASSERT_EQ(11, FIX::number_of_symbols_in( MIN_INT) );
}

TEST(FieldConvertorsTests, emptyConvert)
{
  ASSERT_EQ( "hello", StringConvertor::convert( "hello" ) );
}

TEST(FieldConvertorsTests, integerConvertTo)
{
  ASSERT_EQ( "0", IntConvertor::convert( 0 ) );
  ASSERT_EQ( "1", IntConvertor::convert( 1 ) );
  ASSERT_EQ( "12", IntConvertor::convert( 12 ) );
  ASSERT_EQ( "100", IntConvertor::convert( 100 ) );
  ASSERT_EQ( "1234", IntConvertor::convert( 1234 ) );
  ASSERT_EQ( "12345", IntConvertor::convert( 12345 ) );
  ASSERT_EQ( "123456", IntConvertor::convert( 123456 ) );
  ASSERT_EQ( "1234567", IntConvertor::convert( 1234567 ) );
  ASSERT_EQ( "12345678", IntConvertor::convert( 12345678 ) );
  ASSERT_EQ( "123456789", IntConvertor::convert( 123456789 ) );
  ASSERT_EQ( "2147483647", IntConvertor::convert( MAX_INT ) );

  ASSERT_EQ( "-1", IntConvertor::convert( -1 ) );
  ASSERT_EQ( "-12", IntConvertor::convert( -12 ) );
  ASSERT_EQ( "-100", IntConvertor::convert( -100 ) );
  ASSERT_EQ( "-1234", IntConvertor::convert( -1234 ) );
  ASSERT_EQ( "-12345", IntConvertor::convert( -12345 ) );
  ASSERT_EQ( "-123456", IntConvertor::convert( -123456 ) );
  ASSERT_EQ( "-1234567", IntConvertor::convert( -1234567 ) );
  ASSERT_EQ( "-12345678", IntConvertor::convert( -12345678 ) );
  ASSERT_EQ( "-123456789", IntConvertor::convert( -123456789 ) );
  ASSERT_EQ( "-2147483647", IntConvertor::convert( -2147483647 ) );
  ASSERT_EQ( "-2147483648", IntConvertor::convert( MIN_INT ) );
  ASSERT_THROW( IntConvertor::convert( "-" ), FieldConvertError );
}

TEST(FieldConvertorsTests, integerConvertFrom)
{
  ASSERT_EQ( 0, IntConvertor::convert( "0" ) );
  ASSERT_EQ( 1, IntConvertor::convert( "1" ) );
  ASSERT_EQ( 12, IntConvertor::convert( "12" ) );
  ASSERT_EQ( 100, IntConvertor::convert( "100" ) );
  ASSERT_EQ( 1234, IntConvertor::convert( "1234" ) );
  ASSERT_EQ( MAX_INT, IntConvertor::convert( "2147483647" ) );

  ASSERT_EQ( -1, IntConvertor::convert( "-1" ) );
  ASSERT_EQ( -12, IntConvertor::convert( "-12" ) );
  ASSERT_EQ( -100, IntConvertor::convert( "-100" ) );
  ASSERT_EQ( -1234, IntConvertor::convert( "-1234" ) );
  ASSERT_EQ( -2147483647, IntConvertor::convert( "-2147483647" ) );
  ASSERT_EQ( MIN_INT, IntConvertor::convert( "-2147483648" ) );

  ASSERT_THROW( IntConvertor::convert( "" ), FieldConvertError );
  ASSERT_THROW( IntConvertor::convert( "abc" ), FieldConvertError );
  ASSERT_THROW( IntConvertor::convert( "123.4" ), FieldConvertError );
  ASSERT_THROW( IntConvertor::convert( "+200" ), FieldConvertError );
}

TEST(FieldConvertorsTests, doubleConvertTo)
{
  ASSERT_EQ( "45.32", DoubleConvertor::convert( 45.32 ) );
  ASSERT_EQ( "45", DoubleConvertor::convert( 45 ) );
  ASSERT_EQ( "0", DoubleConvertor::convert( 0.0 ) );
  ASSERT_EQ( "0.00001", DoubleConvertor::convert( 0.00001 ) );
  ASSERT_EQ( "-12.000000000001", DoubleConvertor::convert( -12.000000000001 ) );
  ASSERT_EQ( "-0.00001", DoubleConvertor::convert( -0.00001 ) );
  ASSERT_EQ( "-1050", DoubleConvertor::convert( -1050.0 ) );
  ASSERT_EQ( "1.233", DoubleConvertor::convert( 1.233 ) );
  ASSERT_EQ( "38.4", DoubleConvertor::convert( 38.4 ) );
  ASSERT_EQ( "38.4", DoubleConvertor::convert( 38.400000000000006 ) );
  ASSERT_EQ( "0.1", DoubleConvertor::convert( 0.1 ) );
  ASSERT_EQ( "0.3", DoubleConvertor::convert( 0.3 ) );

  // corner cases
  ASSERT_EQ( "-0.000000000000001", DoubleConvertor::convert( -1e-15 ) );
  ASSERT_EQ( "100000000000000", DoubleConvertor::convert( 1e14 ) );
  ASSERT_EQ( "1e15", DoubleConvertor::convert( 1e15 ) );
  ASSERT_EQ( "1.23456e15", DoubleConvertor::convert( 1.23456e15 ) );
  ASSERT_EQ( "0.", DoubleConvertor::convert( 1e-16 ) );

  ASSERT_EQ( "1.500", DoubleConvertor::convert( 1.5, 3) );
  ASSERT_EQ( "45.00000", DoubleConvertor::convert( 45, 5) );
  ASSERT_EQ( "5.00", DoubleConvertor::convert( 5, 2) );
  ASSERT_EQ( "-5.00", DoubleConvertor::convert( -5, 2) );
  ASSERT_EQ( "-12.2345", DoubleConvertor::convert( -12.2345, 2) );
  ASSERT_EQ( "-0.00001", DoubleConvertor::convert( -0.00001, 5) );
  ASSERT_EQ( "0.0", DoubleConvertor::convert( 0.0, 1) );

  ASSERT_EQ( "", DoubleConvertor::convert( 0.01, 0, -1));
}

TEST(FieldConvertorsTests, doubleConvertFrom)
{
  ASSERT_DOUBLE_EQ( 45.32, DoubleConvertor::convert( "45.32" ) );
  ASSERT_DOUBLE_EQ( 45.32, DoubleConvertor::convert( "45.3200" ) );
  ASSERT_DOUBLE_EQ( 0.00340244, DoubleConvertor::convert( "0.00340244000" ) );
  ASSERT_DOUBLE_EQ( 12.000000000001, DoubleConvertor::convert( "12.000000000001" ) );
  ASSERT_DOUBLE_EQ( -12.000000000001, DoubleConvertor::convert( "-12.000000000001" ) );
  ASSERT_DOUBLE_EQ( 0.0, DoubleConvertor::convert( "0.0" ) );
  ASSERT_DOUBLE_EQ( 45.32, DoubleConvertor::convert( "0045.32" ) );
  ASSERT_DOUBLE_EQ( 0.0, DoubleConvertor::convert( "0." ) );
  ASSERT_DOUBLE_EQ( 0.0, DoubleConvertor::convert( ".0" ) );
  ASSERT_DOUBLE_EQ( 0.0, DoubleConvertor::convert( "0" ) );
  ASSERT_DOUBLE_EQ( 0.06, DoubleConvertor::convert( "000.06" ) );
  ASSERT_DOUBLE_EQ( 0.06, DoubleConvertor::convert( "0.0600" ) );
  ASSERT_DOUBLE_EQ( 0.00001, DoubleConvertor::convert( "0.00001" ) );
  ASSERT_DOUBLE_EQ( -0.00001, DoubleConvertor::convert( "-0.00001" ) );
  ASSERT_DOUBLE_EQ( -1050, DoubleConvertor::convert( "-1050" ) );
  ASSERT_DOUBLE_EQ( 1.233, DoubleConvertor::convert( "1.233" ) );
  ASSERT_DOUBLE_EQ( 38.4, DoubleConvertor::convert( "38.4" ) );

  ASSERT_THROW( DoubleConvertor::convert( "abc" ), FieldConvertError );
  ASSERT_THROW( DoubleConvertor::convert( "123.A" ), FieldConvertError );
  ASSERT_THROW( DoubleConvertor::convert( "123.45.67" ), FieldConvertError );
  ASSERT_THROW( DoubleConvertor::convert( "." ), FieldConvertError );
  ASSERT_THROW( DoubleConvertor::convert( "1e5" ), FieldConvertError );
}

TEST(FieldConvertorsTests, charConvertTo)
{
  ASSERT_EQ( "a", CharConvertor::convert( 'a' ) );
  ASSERT_EQ( "1", CharConvertor::convert( '1' ) );
  ASSERT_EQ( "F", CharConvertor::convert( 'F' ) );
  ASSERT_EQ( "", CharConvertor::convert( 0 ) );
  ASSERT_THROW( CharConvertor::convert( "11" ), FieldConvertError );
  ASSERT_THROW( CharConvertor::convert( "1 " ), FieldConvertError );
}

TEST(FieldConvertorsTests, charConvertFrom)
{
  ASSERT_EQ( 'a', CharConvertor::convert( "a" ) );
  ASSERT_EQ( '1', CharConvertor::convert( "1" ) );
  ASSERT_EQ( 'F', CharConvertor::convert( "F" ) );
}

TEST(FieldConvertorsTests, booleanConvertTo)
{
  ASSERT_EQ( "Y", BoolConvertor::convert( true ) );
  ASSERT_EQ( "N", BoolConvertor::convert( false ) );
}

TEST(FieldConvertorsTests, booleanConvertFrom)
{
  ASSERT_TRUE( BoolConvertor::convert( std::string( "Y" ) ) );
  ASSERT_FALSE( BoolConvertor::convert( std::string( "N" ) ) );
  ASSERT_THROW( BoolConvertor::convert( std::string( "D" ) ), FieldConvertError );
}

TEST(FieldConvertorsTests, utcTimeStampConvertToSecond)
{
  UtcTimeStamp input;
  input.setHMS( 12, 5, 6, 0, 0 );
  input.setYMD( 2000, 4, 26 );
  ASSERT_EQ( "20000426-12:05:06", UtcTimeStampConvertor::convert( input ) );
  ASSERT_EQ( "20000426-12:05:06", UtcTimeStampConvertor::convert( input, 0 ) );
}

TEST(FieldConvertorsTests, utcTimeStampConvertToMilli)
{
  UtcTimeStamp input;
  input.setHMS( 12, 5, 6, 555, 3 );
  input.setYMD( 2000, 4, 26 );
  ASSERT_EQ( "20000426-12:05:06", UtcTimeStampConvertor::convert( input ) );
  ASSERT_EQ( "20000426-12:05:06.555", UtcTimeStampConvertor::convert( input, 3 ) );
}

TEST(FieldConvertorsTests, utcTimeStampConvertToMicro)
{
  UtcTimeStamp input;
  input.setHMS( 12, 5, 6, 555555, 6 );
  input.setYMD( 2000, 4, 26 );
  ASSERT_EQ( "20000426-12:05:06", UtcTimeStampConvertor::convert( input ) );
  ASSERT_EQ( "20000426-12:05:06.555555", UtcTimeStampConvertor::convert( input, 6 ) );
}

TEST(FieldConvertorsTests, utcTimeStampConvertToNano)
{
  UtcTimeStamp input;
  input.setHMS( 12, 5, 6, 555555555, 9 );
  input.setYMD( 2000, 4, 26 );
  ASSERT_EQ( "20000426-12:05:06", UtcTimeStampConvertor::convert( input ) );
  ASSERT_EQ( "20000426-12:05:06.555555555", UtcTimeStampConvertor::convert( input, 9 ) );
}

TEST(FieldConvertorsTests, utcTimeStampConvertFromSecond)
{
  UtcTimeStamp result = UtcTimeStampConvertor::convert
    ( std::string( "20000426-12:05:06" ) );
  ASSERT_EQ( 12, result.getHour() );
  ASSERT_EQ( 5, result.getMinute() );
  ASSERT_EQ( 6, result.getSecond() );
  ASSERT_EQ( 0, result.getFraction(0) );
  ASSERT_EQ( 2000, result.getYear() );
  ASSERT_EQ( 4, result.getMonth() );
  ASSERT_EQ( 26, result.getDate() );

  UtcTimeStamp result2 = UtcTimeStampConvertor::convert
    ( std::string( "20000426-12:05:06" ) );
  ASSERT_EQ( 12, result2.getHour() );
  ASSERT_EQ( 5, result2.getMinute() );
  ASSERT_EQ( 6, result2.getSecond() );
  ASSERT_EQ( 0, result2.getFraction(0) );
  ASSERT_EQ( 2000, result2.getYear() );
  ASSERT_EQ( 4, result2.getMonth() );
  ASSERT_EQ( 26, result2.getDate() );
}

TEST(FieldConvertorsTests, utcTimeStampConvertFromMilli)
{
  UtcTimeStamp result = UtcTimeStampConvertor::convert
    ( std::string( "20000426-12:05:06.555" ) );
  ASSERT_EQ( 12, result.getHour() );
  ASSERT_EQ( 5, result.getMinute() );
  ASSERT_EQ( 6, result.getSecond() );
  ASSERT_EQ( 555, result.getFraction(3) );
  ASSERT_EQ( 2000, result.getYear() );
  ASSERT_EQ( 4, result.getMonth() );
  ASSERT_EQ( 26, result.getDate() );

  UtcTimeStamp result2 = UtcTimeStampConvertor::convert
    ( std::string( "20000426-12:05:06.555" ) );
  ASSERT_EQ( 12, result2.getHour() );
  ASSERT_EQ( 5, result2.getMinute() );
  ASSERT_EQ( 6, result2.getSecond() );
  ASSERT_EQ( 555, result2.getFraction(3) );
  ASSERT_EQ( 2000, result2.getYear() );
  ASSERT_EQ( 4, result2.getMonth() );
  ASSERT_EQ( 26, result2.getDate() );
}

TEST(FieldConvertorsTests, utcTimeStampConvertFromMicro)
{
  UtcTimeStamp result = UtcTimeStampConvertor::convert
    ( std::string( "20000426-12:05:06.555555" ) );
  ASSERT_EQ( 12, result.getHour() );
  ASSERT_EQ( 5, result.getMinute() );
  ASSERT_EQ( 6, result.getSecond() );
  ASSERT_EQ( 555555, result.getFraction(6) );
  ASSERT_EQ( 2000, result.getYear() );
  ASSERT_EQ( 4, result.getMonth() );
  ASSERT_EQ( 26, result.getDate() );

  UtcTimeStamp result2 = UtcTimeStampConvertor::convert
    ( std::string( "20000426-12:05:06.555555" ) );
  ASSERT_EQ( 12, result2.getHour() );
  ASSERT_EQ( 5, result2.getMinute() );
  ASSERT_EQ( 6, result2.getSecond() );
  ASSERT_EQ( 555555, result2.getFraction(6) );
  ASSERT_EQ( 2000, result2.getYear() );
  ASSERT_EQ( 4, result2.getMonth() );
  ASSERT_EQ( 26, result2.getDate() );
}

TEST(FieldConvertorsTests, utcTimeStampConvertFromNano)
{
  UtcTimeStamp result = UtcTimeStampConvertor::convert
    ( std::string( "20000426-12:05:06.555555555" ) );
  ASSERT_EQ( 12, result.getHour() );
  ASSERT_EQ( 5, result.getMinute() );
  ASSERT_EQ( 6, result.getSecond() );
  ASSERT_EQ( 555555555, result.getFraction(9) );
  ASSERT_EQ( 2000, result.getYear() );
  ASSERT_EQ( 4, result.getMonth() );
  ASSERT_EQ( 26, result.getDate() );

  UtcTimeStamp result2 = UtcTimeStampConvertor::convert
    ( std::string( "20000426-12:05:06.555555555" ) );
  ASSERT_EQ( 12, result2.getHour() );
  ASSERT_EQ( 5, result2.getMinute() );
  ASSERT_EQ( 6, result2.getSecond() );
  ASSERT_EQ( 555555555, result2.getFraction(9) );
  ASSERT_EQ( 2000, result2.getYear() );
  ASSERT_EQ( 4, result2.getMonth() );
  ASSERT_EQ( 26, result2.getDate() );
}

TEST(FieldConvertorsTests, utcTimeOnlyConvertToSecond)
{
  UtcTimeOnly input;
  input.setHMS( 12, 5, 6, 0, 0 );
  ASSERT_EQ( "12:05:06", UtcTimeOnlyConvertor::convert( input ) );
  ASSERT_EQ( "12:05:06", UtcTimeOnlyConvertor::convert( input, 0) );
}

TEST(FieldConvertorsTests, utcTimeOnlyConvertToMilli)
{
  UtcTimeOnly input;
  input.setHMS( 12, 5, 6, 555, 3 );
  ASSERT_EQ( "12:05:06", UtcTimeOnlyConvertor::convert( input ) );
  ASSERT_EQ( "12:05:06.555", UtcTimeOnlyConvertor::convert( input, 3 ) );
}

TEST(FieldConvertorsTests, utcTimeOnlyConvertToMicro)
{
  UtcTimeOnly input;
  input.setHMS( 12, 5, 6, 555555, 6 );
  ASSERT_EQ( "12:05:06", UtcTimeOnlyConvertor::convert( input ) );
  ASSERT_EQ( "12:05:06.555555", UtcTimeOnlyConvertor::convert( input, 6 ) );
}

TEST(FieldConvertorsTests, utcTimeOnlyConvertToNano)
{
  UtcTimeOnly input;
  input.setHMS( 12, 5, 6, 555555555, 9 );
  ASSERT_EQ( "12:05:06", UtcTimeOnlyConvertor::convert( input ) );
  ASSERT_EQ( "12:05:06.555555555", UtcTimeOnlyConvertor::convert( input, 9 ) );
}

TEST(FieldConvertorsTests, utcTimeOnlyConvertFromMicro)
{
  UtcTimeOnly result = UtcTimeOnlyConvertor::convert
                       ( std::string( "12:05:06.555555" ) );
  ASSERT_EQ( 12, result.getHour() );
  ASSERT_EQ( 5, result.getMinute() );
  ASSERT_EQ( 6, result.getSecond() );
  ASSERT_EQ( 555555, result.getFraction(6) );
}

TEST(FieldConvertorsTests, utcDateConvertTo)
{
  UtcDate input;
  input.setYMD( 2000, 4, 26 );
  ASSERT_EQ( "20000426", UtcDateConvertor::convert( input ) );
}

TEST(FieldConvertorsTests, utcDateConvertFrom)
{
  UtcDate result = UtcDateConvertor::convert
                   ( std::string( "20000426" ) );
  ASSERT_EQ( 2000, result.getYear() );
  ASSERT_EQ( 4, result.getMonth() );
  ASSERT_EQ( 26, result.getDate() );
  std::string outOfRangeMonth = "20001526";
  ASSERT_THROW( UtcDateConvertor::convert(outOfRangeMonth), FieldConvertError );
  std::string outOfRangeMonthDay = "20000438";
  ASSERT_THROW( UtcDateConvertor::convert(outOfRangeMonthDay), FieldConvertError );
}

TEST(FieldConvertorsTests, checkSumConvertTo)
{
  ASSERT_EQ( "000", CheckSumConvertor::convert( 0 ) );
  ASSERT_EQ( "005", CheckSumConvertor::convert( 5 ) );
  ASSERT_EQ( "012", CheckSumConvertor::convert( 12 ) );
  ASSERT_EQ( "234", CheckSumConvertor::convert( 234 ) );
  ASSERT_THROW( CheckSumConvertor::convert( -1 ), FieldConvertError );
  ASSERT_THROW( CheckSumConvertor::convert( 256 ), FieldConvertError );
}

TEST(FieldConvertorsTests, integerToStringPadded)
{
  char result[6] = {'\0'};
  int fraction = 1234;
  int precision = 5;
  ASSERT_EQ(result, integer_to_string_padded(result, precision, fraction));
  ASSERT_TRUE(strncmp("01234", result, 5) == 0);
}
