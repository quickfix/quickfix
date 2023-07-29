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
  CHECK_EQUAL( 214748365, IntConvertor::convert( "214748365" ) );
  CHECK_EQUAL( MAX_INT, IntConvertor::convert( "2147483647" ) );
  CHECK_THROW( IntConvertor::convert( "2147483648" ), FieldConvertError ); // overflow
  CHECK_THROW( IntConvertor::convert( "2147483650" ), FieldConvertError ); // overflow
  CHECK_THROW( IntConvertor::convert( "9999999999" ), FieldConvertError ); // overflow

  CHECK_EQUAL( -1, IntConvertor::convert( "-1" ) );
  CHECK_EQUAL( -12, IntConvertor::convert( "-12" ) );
  CHECK_EQUAL( -100, IntConvertor::convert( "-100" ) );
  CHECK_EQUAL( -1234, IntConvertor::convert( "-1234" ) );
  CHECK_EQUAL( -214748365, IntConvertor::convert( "-214748365" ) );
  CHECK_EQUAL( -2147483647, IntConvertor::convert( "-2147483647" ) );
  CHECK_EQUAL( MIN_INT, IntConvertor::convert( "-2147483648" ) );
  CHECK_THROW( IntConvertor::convert( "-2147483649" ), FieldConvertError ); // overflow
  CHECK_THROW( IntConvertor::convert( "-2147483650" ), FieldConvertError ); // overflow
  CHECK_THROW( IntConvertor::convert( "-9999999999" ), FieldConvertError ); // overflow

  CHECK_THROW( IntConvertor::convert( "" ), FieldConvertError );
  CHECK_THROW( IntConvertor::convert( "abc" ), FieldConvertError );
  CHECK_THROW( IntConvertor::convert( "123.4" ), FieldConvertError );
  CHECK_THROW( IntConvertor::convert( "+200" ), FieldConvertError );
}

namespace
{
  typedef IntTConvertor<int8_t>   Int8Convertor;
  typedef IntTConvertor<int16_t>  Int16Convertor;
  typedef IntTConvertor<int32_t>  Int32Convertor;
  typedef IntTConvertor<int64_t>  Int64Convertor;

  typedef IntTConvertor<uint8_t>  UInt8Convertor;
  typedef IntTConvertor<uint16_t> UInt16Convertor;
  typedef IntTConvertor<uint32_t> UInt32Convertor;
  typedef IntTConvertor<uint64_t> UInt64Convertor;
}

#if defined( max )
#  undef max
#endif
#if defined( min )
#  undef min
#endif

TEST(int8_integerConvertTo)
{
  CHECK_EQUAL( "0", Int8Convertor::convert( 0 ) );
  CHECK_EQUAL( "1", Int8Convertor::convert( 1 ) );
  CHECK_EQUAL( "12", Int8Convertor::convert( 12 ) );
  CHECK_EQUAL( "100", Int8Convertor::convert( 100 ) );
  CHECK_EQUAL( "126", Int8Convertor::convert( 126 ) );
  CHECK_EQUAL( "127", Int8Convertor::convert( std::numeric_limits<int8_t>::max() ) );
  CHECK_THROW( Int8Convertor::convert( "128" ), FieldConvertError );

  CHECK_EQUAL( "-1", Int8Convertor::convert( -1 ) );
  CHECK_EQUAL( "-12", Int8Convertor::convert( -12 ) );
  CHECK_EQUAL( "-100", Int8Convertor::convert( -100 ) );
  CHECK_EQUAL( "-127", Int8Convertor::convert( -127 ) );
  CHECK_EQUAL( "-128", Int8Convertor::convert( std::numeric_limits<int8_t>::min() ) );
  CHECK_THROW( Int8Convertor::convert( "-129" ), FieldConvertError );

  CHECK_THROW( Int8Convertor::convert( "-" ), FieldConvertError );
}

TEST(int8_integerConvertFrom)
{
  CHECK_EQUAL( 0, Int8Convertor::convert( "0" ) );
  CHECK_EQUAL( 1, Int8Convertor::convert( "1" ) );
  CHECK_EQUAL( 12, Int8Convertor::convert( "12" ) );
  CHECK_EQUAL( 13, Int8Convertor::convert( "13" ) );
  CHECK_EQUAL( 100, Int8Convertor::convert( "100" ) );
  CHECK_EQUAL( std::numeric_limits<int8_t>::max(), Int8Convertor::convert( "127" ) );
  CHECK_THROW( Int8Convertor::convert( "128" ), FieldConvertError ); // overflow
  CHECK_THROW( Int8Convertor::convert( "130" ), FieldConvertError ); // overflow
  CHECK_THROW( Int8Convertor::convert( "999" ), FieldConvertError ); // overflow
  
  CHECK_EQUAL( -1, Int8Convertor::convert( "-1" ) );
  CHECK_EQUAL( -12, Int8Convertor::convert( "-12" ) );
  CHECK_EQUAL( -13, Int8Convertor::convert( "-13" ) );
  CHECK_EQUAL( -100, Int8Convertor::convert( "-100" ) );
  CHECK_EQUAL( -127, Int8Convertor::convert( "-127" ) );
  CHECK_EQUAL( std::numeric_limits<int8_t>::min(), Int8Convertor::convert( "-128" ) );
  CHECK_THROW( Int8Convertor::convert( "-129" ), FieldConvertError ); // overflow
  CHECK_THROW( Int8Convertor::convert( "-130" ), FieldConvertError ); // overflow
  CHECK_THROW( Int8Convertor::convert( "-999" ), FieldConvertError ); // overflow

  CHECK_THROW( Int8Convertor::convert( "" ), FieldConvertError );
  CHECK_THROW( Int8Convertor::convert( "abc" ), FieldConvertError );
  CHECK_THROW( Int8Convertor::convert( "123.4" ), FieldConvertError );
  CHECK_THROW( Int8Convertor::convert( "+200" ), FieldConvertError );
}

TEST(int16_integerConvertTo)
{
  CHECK_EQUAL( "0", Int16Convertor::convert( 0 ) );
  CHECK_EQUAL( "1", Int16Convertor::convert( 1 ) );
  CHECK_EQUAL( "12", Int16Convertor::convert( 12 ) );
  CHECK_EQUAL( "100", Int16Convertor::convert( 100 ) );
  CHECK_EQUAL( "127", Int16Convertor::convert( std::numeric_limits<int8_t>::max() ) );
  CHECK_EQUAL( "128", Int16Convertor::convert( 128 ) );
  CHECK_EQUAL( "1234", Int16Convertor::convert( 1234 ) );
  CHECK_EQUAL( "12345", Int16Convertor::convert( 12345 ) );
  CHECK_EQUAL( "32767", Int16Convertor::convert( std::numeric_limits<int16_t>::max() ) );
  CHECK_THROW( Int16Convertor::convert( "32768" ), FieldConvertError );

  CHECK_EQUAL( "-1", Int16Convertor::convert( -1 ) );
  CHECK_EQUAL( "-12", Int16Convertor::convert( -12 ) );
  CHECK_EQUAL( "-100", Int16Convertor::convert( -100 ) );
  CHECK_EQUAL( "-128", Int16Convertor::convert( std::numeric_limits<int8_t>::min() ) );
  CHECK_EQUAL( "-129", Int16Convertor::convert( -129 ) );
  CHECK_EQUAL( "-1234", Int16Convertor::convert( -1234 ) );
  CHECK_EQUAL( "-12345", Int16Convertor::convert( -12345 ) );
  CHECK_EQUAL( "-32767", Int16Convertor::convert( -32767 ) );
  CHECK_EQUAL( "-32768", Int16Convertor::convert( std::numeric_limits<int16_t>::min() ) );
  CHECK_THROW( Int16Convertor::convert( "-32769" ), FieldConvertError );

  CHECK_THROW( Int16Convertor::convert( "-" ), FieldConvertError );
}

TEST(int16_integerConvertFrom)
{
  CHECK_EQUAL( 0, Int16Convertor::convert( "0" ) );
  CHECK_EQUAL( 1, Int16Convertor::convert( "1" ) );
  CHECK_EQUAL( 12, Int16Convertor::convert( "12" ) );
  CHECK_EQUAL( 100, Int16Convertor::convert( "100" ) );
  CHECK_EQUAL( std::numeric_limits<int8_t>::max(), Int16Convertor::convert( "127" ) );
  CHECK_EQUAL( 128, Int16Convertor::convert( "128" ) );
  CHECK_EQUAL( 130, Int16Convertor::convert( "130" ) );
  CHECK_EQUAL( 999, Int16Convertor::convert( "999" ) );
  CHECK_EQUAL( 1234, Int16Convertor::convert( "1234" ) );
  CHECK_EQUAL( 3277, Int16Convertor::convert( "3277" ) );
  CHECK_EQUAL( std::numeric_limits<int16_t>::max(), Int16Convertor::convert( "32767" ) );
  CHECK_THROW( Int16Convertor::convert( "32768" ), FieldConvertError ); // overflow
  CHECK_THROW( Int16Convertor::convert( "32770" ), FieldConvertError ); // overflow
  CHECK_THROW( Int16Convertor::convert( "99999" ), FieldConvertError ); // overflow

  CHECK_EQUAL( -1, Int16Convertor::convert( "-1" ) );
  CHECK_EQUAL( -12, Int16Convertor::convert( "-12" ) );
  CHECK_EQUAL( -100, Int16Convertor::convert( "-100" ) );
  CHECK_EQUAL( -127, Int16Convertor::convert( "-127" ) );
  CHECK_EQUAL( std::numeric_limits<int8_t>::min(), Int16Convertor::convert( "-128" ) );
  CHECK_EQUAL( -129, Int16Convertor::convert( "-129" ) );
  CHECK_EQUAL( -130, Int16Convertor::convert( "-130" ) );
  CHECK_EQUAL( -999, Int16Convertor::convert( "-999" ) );
  CHECK_EQUAL( -1234, Int16Convertor::convert( "-1234" ) );
  CHECK_EQUAL( -32767, Int16Convertor::convert( "-32767" ) );
  CHECK_EQUAL( std::numeric_limits<int16_t>::min(), Int16Convertor::convert( "-32768" ) );
  CHECK_THROW( Int16Convertor::convert( "-32769" ), FieldConvertError ); // overflow
  CHECK_THROW( Int16Convertor::convert( "-32770" ), FieldConvertError ); // overflow
  CHECK_THROW( Int16Convertor::convert( "-99999" ), FieldConvertError ); // overflow

  CHECK_THROW( Int16Convertor::convert( "" ), FieldConvertError );
  CHECK_THROW( Int16Convertor::convert( "abc" ), FieldConvertError );
  CHECK_THROW( Int16Convertor::convert( "123.4" ), FieldConvertError );
  CHECK_THROW( Int16Convertor::convert( "+200" ), FieldConvertError );
}

TEST(int64_integerConvertTo)
{
  CHECK_EQUAL( "0", Int64Convertor::convert( 0 ) );
  CHECK_EQUAL( "1", Int64Convertor::convert( 1 ) );
  CHECK_EQUAL( "12", Int64Convertor::convert( 12 ) );
  CHECK_EQUAL( "100", Int64Convertor::convert( 100 ) );
  CHECK_EQUAL( "127", Int64Convertor::convert( std::numeric_limits<int8_t>::max() ) );
  CHECK_EQUAL( "128", Int64Convertor::convert( 128 ) );
  CHECK_EQUAL( "1234", Int64Convertor::convert( 1234 ) );
  CHECK_EQUAL( "12345", Int64Convertor::convert( 12345 ) );
  CHECK_EQUAL( "32767", Int64Convertor::convert( std::numeric_limits<int16_t>::max() ) );
  CHECK_EQUAL( "32768", Int64Convertor::convert( 32768 ) );
  CHECK_EQUAL( "123456", Int64Convertor::convert( 123456 ) );
  CHECK_EQUAL( "1234567", Int64Convertor::convert( 1234567 ) );
  CHECK_EQUAL( "12345678", Int64Convertor::convert( 12345678 ) );
  CHECK_EQUAL( "123456789", Int64Convertor::convert( 123456789 ) );
  CHECK_EQUAL( "2147483647", Int64Convertor::convert( MAX_INT ) );
  CHECK_EQUAL( "2147483648", Int64Convertor::convert( 2147483648 ) );
  CHECK_EQUAL( "12345678912", Int64Convertor::convert( 12345678912LL ) );
  CHECK_EQUAL( "123456789123", Int64Convertor::convert( 123456789123LL ) );
  CHECK_EQUAL( "1234567891234", Int64Convertor::convert( 1234567891234LL ) );
  CHECK_EQUAL( "12345678912345", Int64Convertor::convert( 12345678912345LL ) );
  CHECK_EQUAL( "123456789123456", Int64Convertor::convert( 123456789123456LL ) );
  CHECK_EQUAL( "1234567891234567", Int64Convertor::convert( 1234567891234567LL ) );
  CHECK_EQUAL( "12345678912345678", Int64Convertor::convert( 12345678912345678LL ) );
  CHECK_EQUAL( "123456789123456789", Int64Convertor::convert( 123456789123456789LL ) );
  CHECK_EQUAL( "1234567891234567891", Int64Convertor::convert( 1234567891234567891LL ) );
  CHECK_EQUAL( "9223372036854775807", Int64Convertor::convert( std::numeric_limits<int64_t>::max() ) );
  CHECK_THROW( Int64Convertor::convert( "9223372036854775808" ), FieldConvertError );
  
  CHECK_EQUAL( "-1", Int64Convertor::convert( -1 ) );
  CHECK_EQUAL( "-12", Int64Convertor::convert( -12 ) );
  CHECK_EQUAL( "-100", Int64Convertor::convert( -100 ) );
  CHECK_EQUAL( "-128", Int64Convertor::convert( std::numeric_limits<int8_t>::min() ) );
  CHECK_EQUAL( "-129", Int64Convertor::convert( -129 ) );
  CHECK_EQUAL( "-1234", Int64Convertor::convert( -1234 ) );
  CHECK_EQUAL( "-12345", Int64Convertor::convert( -12345 ) );
  CHECK_EQUAL( "-32768", Int64Convertor::convert( std::numeric_limits<int16_t>::min() ) );
  CHECK_EQUAL( "-32769", Int64Convertor::convert( -32769 ) );
  CHECK_EQUAL( "-123456", Int64Convertor::convert( -123456 ) );
  CHECK_EQUAL( "-1234567", Int64Convertor::convert( -1234567 ) );
  CHECK_EQUAL( "-12345678", Int64Convertor::convert( -12345678 ) );
  CHECK_EQUAL( "-123456789", Int64Convertor::convert( -123456789 ) );
  CHECK_EQUAL( "-2147483647", Int64Convertor::convert( -2147483647 ) );
  CHECK_EQUAL( "-2147483648", Int64Convertor::convert( MIN_INT ) );
  CHECK_EQUAL( "-2147483649", Int64Convertor::convert( -2147483649LL ) );
  CHECK_EQUAL( "-12345678912", Int64Convertor::convert( -12345678912LL ) );
  CHECK_EQUAL( "-123456789123", Int64Convertor::convert( -123456789123LL ) );
  CHECK_EQUAL( "-1234567891234", Int64Convertor::convert( -1234567891234LL ) );
  CHECK_EQUAL( "-12345678912345", Int64Convertor::convert( -12345678912345LL ) );
  CHECK_EQUAL( "-123456789123456", Int64Convertor::convert( -123456789123456LL ) );
  CHECK_EQUAL( "-1234567891234567", Int64Convertor::convert( -1234567891234567LL ) );
  CHECK_EQUAL( "-12345678912345678", Int64Convertor::convert( -12345678912345678LL ) );
  CHECK_EQUAL( "-123456789123456789", Int64Convertor::convert( -123456789123456789LL ) );
  CHECK_EQUAL( "-1234567891234567891", Int64Convertor::convert( -1234567891234567891LL ) );
  CHECK_EQUAL( "-9223372036854775807", Int64Convertor::convert( -9223372036854775807 ) );
  CHECK_EQUAL( "-9223372036854775808", Int64Convertor::convert( std::numeric_limits<int64_t>::min() ) );
  CHECK_THROW( Int64Convertor::convert( "-9223372036854775809" ), FieldConvertError );

  CHECK_THROW( Int64Convertor::convert( "-" ), FieldConvertError );
}

TEST(int64_integerConvertFrom)
{
  CHECK_EQUAL( 0, Int64Convertor::convert( "0" ) );
  CHECK_EQUAL( 1, Int64Convertor::convert( "1" ) );
  CHECK_EQUAL( 12, Int64Convertor::convert( "12" ) );
  CHECK_EQUAL( 100, Int64Convertor::convert( "100" ) );
  CHECK_EQUAL( std::numeric_limits<int8_t>::max(), Int64Convertor::convert( "127" ) );
  CHECK_EQUAL( 128, Int64Convertor::convert( "128" ) );
  CHECK_EQUAL( 130, Int64Convertor::convert( "130" ) );
  CHECK_EQUAL( 999, Int64Convertor::convert( "999" ) );
  CHECK_EQUAL( 1234, Int64Convertor::convert( "1234" ) );
  CHECK_EQUAL( 3277, Int64Convertor::convert( "3277" ) );
  CHECK_EQUAL( std::numeric_limits<int16_t>::max(), Int64Convertor::convert( "32767" ) );
  CHECK_EQUAL( 32768, Int64Convertor::convert( "32768" ) );
  CHECK_EQUAL( 32770, Int64Convertor::convert( "32770" ) );
  CHECK_EQUAL( 99999, Int64Convertor::convert( "99999" ) );
  CHECK_EQUAL( 214748365, Int64Convertor::convert( "214748365" ) );
  CHECK_EQUAL( MAX_INT, Int64Convertor::convert( "2147483647" ) );
  CHECK_EQUAL( 2147483648LL, Int64Convertor::convert( "2147483648" ) );
  CHECK_EQUAL( 2147483650LL, Int64Convertor::convert( "2147483650" ) );
  CHECK_EQUAL( 9999999999LL, Int64Convertor::convert( "9999999999" ) );
  CHECK_EQUAL( 922337203685477581LL, Int64Convertor::convert( "922337203685477581" ) );
  CHECK_EQUAL( std::numeric_limits<int64_t>::max(), Int64Convertor::convert( "9223372036854775807" ) );
  CHECK_THROW( Int64Convertor::convert( "9223372036854775808" ), FieldConvertError ); // overflow
  CHECK_THROW( Int64Convertor::convert( "9223372036854775810" ), FieldConvertError ); // overflow
  CHECK_THROW( Int64Convertor::convert( "9999999999999999999" ), FieldConvertError ); // overflow
  
  CHECK_EQUAL( -1, Int64Convertor::convert( "-1" ) );
  CHECK_EQUAL( -12, Int64Convertor::convert( "-12" ) );
  CHECK_EQUAL( -100, Int64Convertor::convert( "-100" ) );
  CHECK_EQUAL( -127, Int64Convertor::convert( "-127" ) );
  CHECK_EQUAL( std::numeric_limits<int8_t>::min(), Int64Convertor::convert( "-128" ) );
  CHECK_EQUAL( -129, Int64Convertor::convert( "-129" ) );
  CHECK_EQUAL( -130, Int64Convertor::convert( "-130" ) );
  CHECK_EQUAL( -999, Int64Convertor::convert( "-999" ) );
  CHECK_EQUAL( -1234, Int64Convertor::convert( "-1234" ) );
  CHECK_EQUAL( std::numeric_limits<int16_t>::min(), Int64Convertor::convert( "-32768" ) );
  CHECK_EQUAL( -32769, Int64Convertor::convert( "-32769" ) );
  CHECK_EQUAL( -32770, Int64Convertor::convert( "-32770" ) );
  CHECK_EQUAL( -99999, Int64Convertor::convert( "-99999" ) );
  CHECK_EQUAL( -214748365LL, Int64Convertor::convert( "-214748365" ) );
  CHECK_EQUAL( -2147483647LL, Int64Convertor::convert( "-2147483647" ) );
  CHECK_EQUAL( MIN_INT, Int64Convertor::convert( "-2147483648" ) );
  CHECK_EQUAL( -2147483649LL, Int64Convertor::convert( "-2147483649" ) );
  CHECK_EQUAL( -2147483650LL, Int64Convertor::convert( "-2147483650" ) );
  CHECK_EQUAL( -9999999999LL, Int64Convertor::convert( "-9999999999" ) );
  CHECK_EQUAL( -922337203685477581LL, Int64Convertor::convert( "-922337203685477581" ) );
  CHECK_EQUAL( std::numeric_limits<int64_t>::min(), Int64Convertor::convert( "-9223372036854775808" ) );
  CHECK_THROW( Int64Convertor::convert( "-9223372036854775809" ), FieldConvertError ); // overflow
  CHECK_THROW( Int64Convertor::convert( "-9223372036854775810" ), FieldConvertError ); // overflow
  CHECK_THROW( Int64Convertor::convert( "-9999999999999999999" ), FieldConvertError ); // overflow
  
  CHECK_THROW( Int64Convertor::convert( "" ), FieldConvertError );
  CHECK_THROW( Int64Convertor::convert( "abc" ), FieldConvertError );
  CHECK_THROW( Int64Convertor::convert( "123.4" ), FieldConvertError );
  CHECK_THROW( Int64Convertor::convert( "+200" ), FieldConvertError );
}

TEST(uint8_integerConvertTo)
{
  CHECK_EQUAL( "0", UInt8Convertor::convert( 0 ) );
  CHECK_EQUAL( "1", UInt8Convertor::convert( 1 ) );
  CHECK_EQUAL( "12", UInt8Convertor::convert( 12 ) );
  CHECK_EQUAL( "100", UInt8Convertor::convert( 100 ) );
  CHECK_EQUAL( "126", UInt8Convertor::convert( 126 ) );
  CHECK_EQUAL( "127", UInt8Convertor::convert( std::numeric_limits<int8_t>::max() ) );
  CHECK_EQUAL( "128", UInt8Convertor::convert( 128 ) );
  CHECK_EQUAL( "255", UInt8Convertor::convert( 255 ) );
  CHECK_THROW( UInt8Convertor::convert( "256" ), FieldConvertError );

  CHECK_THROW( UInt8Convertor::convert( "-" ), FieldConvertError );
  CHECK_THROW( UInt8Convertor::convert( "-1" ), FieldConvertError );
}

TEST(uint8_integerConvertFrom)
{
  CHECK_EQUAL( 0, UInt8Convertor::convert( "0" ) );
  CHECK_EQUAL( 1, UInt8Convertor::convert( "1" ) );
  CHECK_EQUAL( 12, UInt8Convertor::convert( "12" ) );
  CHECK_EQUAL( 13, UInt8Convertor::convert( "13" ) );
  CHECK_EQUAL( 100, UInt8Convertor::convert( "100" ) );
  CHECK_EQUAL( std::numeric_limits<int8_t>::max(), UInt8Convertor::convert( "127" ) );
  CHECK_EQUAL( 128, UInt8Convertor::convert( "128" ) );
  CHECK_EQUAL( 130, UInt8Convertor::convert( "130" ) );
  CHECK_EQUAL( 254, UInt8Convertor::convert( "254" ) );
  CHECK_EQUAL( std::numeric_limits<uint8_t>::max(), UInt8Convertor::convert( "255" ) );
  CHECK_THROW( UInt8Convertor::convert( "256" ), FieldConvertError ); // overflow
  CHECK_THROW( UInt8Convertor::convert( "258" ), FieldConvertError ); // overflow
  CHECK_THROW( UInt8Convertor::convert( "999" ), FieldConvertError ); // overflow
  
  CHECK_THROW( UInt8Convertor::convert( "" ), FieldConvertError );
  CHECK_THROW( UInt8Convertor::convert( "abc" ), FieldConvertError );
  CHECK_THROW( UInt8Convertor::convert( "123.4" ), FieldConvertError );
  CHECK_THROW( UInt8Convertor::convert( "+200" ), FieldConvertError );
  CHECK_THROW( UInt8Convertor::convert( "-1" ), FieldConvertError );
}

TEST(uint16_integerConvertTo)
{
  CHECK_EQUAL( "0", UInt16Convertor::convert( 0 ) );
  CHECK_EQUAL( "1", UInt16Convertor::convert( 1 ) );
  CHECK_EQUAL( "12", UInt16Convertor::convert( 12 ) );
  CHECK_EQUAL( "100", UInt16Convertor::convert( 100 ) );
  CHECK_EQUAL( "127", UInt16Convertor::convert( std::numeric_limits<int8_t>::max() ) );
  CHECK_EQUAL( "128", UInt16Convertor::convert( 128 ) );
  CHECK_EQUAL( "1234", UInt16Convertor::convert( 1234 ) );
  CHECK_EQUAL( "12345", UInt16Convertor::convert( 12345 ) );
  CHECK_EQUAL( "32767", UInt16Convertor::convert( std::numeric_limits<int16_t>::max() ) );
  CHECK_EQUAL( "32768", UInt16Convertor::convert( 32768 ) );
  CHECK_EQUAL( "65535", UInt16Convertor::convert( std::numeric_limits<uint16_t>::max() ) );
  CHECK_THROW( UInt16Convertor::convert( "65536" ), FieldConvertError );

  CHECK_THROW( UInt16Convertor::convert( "-" ), FieldConvertError );
  CHECK_THROW( UInt16Convertor::convert( "-1" ), FieldConvertError );
}

TEST(uint16_integerConvertFrom)
{
  CHECK_EQUAL( 0, UInt16Convertor::convert( "0" ) );
  CHECK_EQUAL( 1, UInt16Convertor::convert( "1" ) );
  CHECK_EQUAL( 12, UInt16Convertor::convert( "12" ) );
  CHECK_EQUAL( 100, UInt16Convertor::convert( "100" ) );
  CHECK_EQUAL( std::numeric_limits<int8_t>::max(), UInt16Convertor::convert( "127" ) );
  CHECK_EQUAL( 128, UInt16Convertor::convert( "128" ) );
  CHECK_EQUAL( 254, UInt16Convertor::convert( "254" ) );
  CHECK_EQUAL( std::numeric_limits<uint8_t>::max(), UInt16Convertor::convert( "255" ) );
  CHECK_EQUAL( 256, UInt16Convertor::convert( "256" ) );
  CHECK_EQUAL( 258, UInt16Convertor::convert( "258" ) );
  CHECK_EQUAL( 999, UInt16Convertor::convert( "999" ) );
  CHECK_EQUAL( 1234, UInt16Convertor::convert( "1234" ) );
  CHECK_EQUAL( 3277, UInt16Convertor::convert( "3277" ) );
  CHECK_EQUAL( std::numeric_limits<int16_t>::max(), UInt16Convertor::convert( "32767" ) );
  CHECK_EQUAL( 32768, UInt16Convertor::convert( "32768" ) );
  CHECK_EQUAL( 32770, UInt16Convertor::convert( "32770" ) );
  CHECK_EQUAL( 6556, UInt16Convertor::convert( "6556" ) );
  CHECK_EQUAL( std::numeric_limits<uint16_t>::max(), UInt16Convertor::convert( "65535" ) );
  CHECK_THROW( UInt16Convertor::convert( "65536" ), FieldConvertError ); // overflow
  CHECK_THROW( UInt16Convertor::convert( "65538" ), FieldConvertError ); // overflow
  CHECK_THROW( UInt16Convertor::convert( "99999" ), FieldConvertError ); // overflow

  CHECK_THROW( UInt16Convertor::convert( "" ), FieldConvertError );
  CHECK_THROW( UInt16Convertor::convert( "abc" ), FieldConvertError );
  CHECK_THROW( UInt16Convertor::convert( "123.4" ), FieldConvertError );
  CHECK_THROW( UInt16Convertor::convert( "+200" ), FieldConvertError );
  CHECK_THROW( UInt16Convertor::convert( "-1" ), FieldConvertError );
}

TEST(uint32_integerConvertTo)
{
  CHECK_EQUAL( "0", UInt32Convertor::convert( 0 ) );
  CHECK_EQUAL( "1", UInt32Convertor::convert( 1 ) );
  CHECK_EQUAL( "12", UInt32Convertor::convert( 12 ) );
  CHECK_EQUAL( "100", UInt32Convertor::convert( 100 ) );
  CHECK_EQUAL( "127", UInt32Convertor::convert( std::numeric_limits<int8_t>::max() ) );
  CHECK_EQUAL( "128", UInt32Convertor::convert( 128 ) );
  CHECK_EQUAL( "1234", UInt32Convertor::convert( 1234 ) );
  CHECK_EQUAL( "12345", UInt32Convertor::convert( 12345 ) );
  CHECK_EQUAL( "32767", UInt32Convertor::convert( std::numeric_limits<int16_t>::max() ) );
  CHECK_EQUAL( "32768", UInt32Convertor::convert( 32768 ) );
  CHECK_EQUAL( "123456", UInt32Convertor::convert( 123456 ) );
  CHECK_EQUAL( "1234567", UInt32Convertor::convert( 1234567 ) );
  CHECK_EQUAL( "12345678", UInt32Convertor::convert( 12345678 ) );
  CHECK_EQUAL( "123456789", UInt32Convertor::convert( 123456789 ) );
  CHECK_EQUAL( "2147483647", UInt32Convertor::convert( MAX_INT ) );
  CHECK_EQUAL( "2147483648", UInt32Convertor::convert( 2147483648UL ) );
  CHECK_EQUAL( "4294967295", UInt32Convertor::convert( 4294967295UL ) );
  CHECK_THROW( UInt32Convertor::convert( "4294967296" ), FieldConvertError );

  CHECK_THROW( UInt32Convertor::convert( "-" ), FieldConvertError );
  CHECK_THROW( UInt32Convertor::convert( "-1" ), FieldConvertError );
}

TEST(uint32_integerConvertFrom)
{
  CHECK_EQUAL( 0, UInt32Convertor::convert( "0" ) );
  CHECK_EQUAL( 1, UInt32Convertor::convert( "1" ) );
  CHECK_EQUAL( 12, UInt32Convertor::convert( "12" ) );
  CHECK_EQUAL( 100, UInt32Convertor::convert( "100" ) );
  CHECK_EQUAL( std::numeric_limits<int8_t>::max(), UInt32Convertor::convert( "127" ) );
  CHECK_EQUAL( 128, UInt32Convertor::convert( "128" ) );
  CHECK_EQUAL( 254, UInt32Convertor::convert( "254" ) );
  CHECK_EQUAL( std::numeric_limits<uint8_t>::max(), UInt32Convertor::convert( "255" ) );
  CHECK_EQUAL( 256, UInt32Convertor::convert( "256" ) );
  CHECK_EQUAL( 258, UInt32Convertor::convert( "258" ) );
  CHECK_EQUAL( 999, UInt32Convertor::convert( "999" ) );
  CHECK_EQUAL( 1234, UInt32Convertor::convert( "1234" ) );
  CHECK_EQUAL( 3277, UInt32Convertor::convert( "3277" ) );
  CHECK_EQUAL( std::numeric_limits<int16_t>::max(), UInt32Convertor::convert( "32767" ) );
  CHECK_EQUAL( 32768, UInt32Convertor::convert( "32768" ) );
  CHECK_EQUAL( 32770, UInt32Convertor::convert( "32770" ) );
  CHECK_EQUAL( 6556, UInt32Convertor::convert( "6556" ) );
  CHECK_EQUAL( std::numeric_limits<uint16_t>::max(), UInt32Convertor::convert( "65535" ) );
  CHECK_EQUAL( 65536, UInt32Convertor::convert( "65536" ) ); // overflow
  CHECK_EQUAL( 65538, UInt32Convertor::convert( "65538" ) ); // overflow
  CHECK_EQUAL( 99999, UInt32Convertor::convert( "99999" ) );
  CHECK_EQUAL( 214748365, UInt32Convertor::convert( "214748365" ) );
  CHECK_EQUAL( MAX_INT, UInt32Convertor::convert( "2147483647" ) );
  CHECK_EQUAL( 2147483648UL, UInt32Convertor::convert( "2147483648" ) );
  CHECK_EQUAL( 2147483650UL, UInt32Convertor::convert( "2147483650" ) );
  CHECK_EQUAL( 429496730UL, UInt32Convertor::convert( "429496730" ) );
  CHECK_EQUAL( std::numeric_limits<uint32_t>::max(), UInt32Convertor::convert( "4294967295" ) );
  CHECK_THROW( UInt32Convertor::convert( "4294967296" ), FieldConvertError ); // overflow
  CHECK_THROW( UInt32Convertor::convert( "4294967297" ), FieldConvertError ); // overflow
  CHECK_THROW( UInt32Convertor::convert( "9999999999" ), FieldConvertError ); // overflow

  CHECK_THROW( UInt32Convertor::convert( "" ), FieldConvertError );
  CHECK_THROW( UInt32Convertor::convert( "abc" ), FieldConvertError );
  CHECK_THROW( UInt32Convertor::convert( "123.4" ), FieldConvertError );
  CHECK_THROW( UInt32Convertor::convert( "+200" ), FieldConvertError );
  CHECK_THROW( UInt32Convertor::convert( "-1" ), FieldConvertError );
}

TEST(uint64_integerConvertTo)
{
  CHECK_EQUAL( "0", UInt64Convertor::convert( 0 ) );
  CHECK_EQUAL( "1", UInt64Convertor::convert( 1 ) );
  CHECK_EQUAL( "12", UInt64Convertor::convert( 12 ) );
  CHECK_EQUAL( "100", UInt64Convertor::convert( 100 ) );
  CHECK_EQUAL( "127", UInt64Convertor::convert( std::numeric_limits<int8_t>::max() ) );
  CHECK_EQUAL( "128", UInt64Convertor::convert( 128 ) );
  CHECK_EQUAL( "1234", UInt64Convertor::convert( 1234 ) );
  CHECK_EQUAL( "12345", UInt64Convertor::convert( 12345 ) );
  CHECK_EQUAL( "32767", UInt64Convertor::convert( std::numeric_limits<int16_t>::max() ) );
  CHECK_EQUAL( "32768", UInt64Convertor::convert( 32768 ) );
  CHECK_EQUAL( "123456", UInt64Convertor::convert( 123456 ) );
  CHECK_EQUAL( "1234567", UInt64Convertor::convert( 1234567 ) );
  CHECK_EQUAL( "12345678", UInt64Convertor::convert( 12345678 ) );
  CHECK_EQUAL( "123456789", UInt64Convertor::convert( 123456789 ) );
  CHECK_EQUAL( "2147483647", UInt64Convertor::convert( MAX_INT ) );
  CHECK_EQUAL( "2147483648", UInt64Convertor::convert( 2147483648 ) );
  CHECK_EQUAL( "12345678912", UInt64Convertor::convert( 12345678912LL ) );
  CHECK_EQUAL( "123456789123", UInt64Convertor::convert( 123456789123LL ) );
  CHECK_EQUAL( "1234567891234", UInt64Convertor::convert( 1234567891234LL ) );
  CHECK_EQUAL( "12345678912345", UInt64Convertor::convert( 12345678912345LL ) );
  CHECK_EQUAL( "123456789123456", UInt64Convertor::convert( 123456789123456LL ) );
  CHECK_EQUAL( "1234567891234567", UInt64Convertor::convert( 1234567891234567LL ) );
  CHECK_EQUAL( "12345678912345678", UInt64Convertor::convert( 12345678912345678LL ) );
  CHECK_EQUAL( "123456789123456789", UInt64Convertor::convert( 123456789123456789LL ) );
  CHECK_EQUAL( "1234567891234567891", UInt64Convertor::convert( 1234567891234567891ULL ) );
  CHECK_EQUAL( "9223372036854775807", UInt64Convertor::convert( std::numeric_limits<int64_t>::max() ) );
  CHECK_EQUAL( "9223372036854775808", UInt64Convertor::convert( 9223372036854775808ULL ) );
  CHECK_EQUAL( "18446744073709551615", UInt64Convertor::convert( std::numeric_limits<uint64_t>::max() ) );
  CHECK_THROW( UInt64Convertor::convert( "18446744073709551616" ), FieldConvertError );

  CHECK_THROW( UInt64Convertor::convert( "-" ), FieldConvertError );
  CHECK_THROW( UInt64Convertor::convert( "-1" ), FieldConvertError );
}

TEST(uint64_integerConvertFrom)
{
  CHECK_EQUAL( 0, UInt64Convertor::convert( "0" ) );
  CHECK_EQUAL( 1, UInt64Convertor::convert( "1" ) );
  CHECK_EQUAL( 12, UInt64Convertor::convert( "12" ) );
  CHECK_EQUAL( 100, UInt64Convertor::convert( "100" ) );
  CHECK_EQUAL( std::numeric_limits<int8_t>::max(), UInt64Convertor::convert( "127" ) );
  CHECK_EQUAL( 128, UInt64Convertor::convert( "128" ) );
  CHECK_EQUAL( 254, UInt64Convertor::convert( "254" ) );
  CHECK_EQUAL( std::numeric_limits<uint8_t>::max(), UInt64Convertor::convert( "255" ) );
  CHECK_EQUAL( 256, UInt64Convertor::convert( "256" ) );
  CHECK_EQUAL( 258, UInt64Convertor::convert( "258" ) );
  CHECK_EQUAL( 999, UInt64Convertor::convert( "999" ) );
  CHECK_EQUAL( 1234, UInt64Convertor::convert( "1234" ) );
  CHECK_EQUAL( 3277, UInt64Convertor::convert( "3277" ) );
  CHECK_EQUAL( std::numeric_limits<int16_t>::max(), UInt64Convertor::convert( "32767" ) );
  CHECK_EQUAL( 32768, UInt64Convertor::convert( "32768" ) );
  CHECK_EQUAL( 32770, UInt64Convertor::convert( "32770" ) );
  CHECK_EQUAL( 6556, UInt64Convertor::convert( "6556" ) );
  CHECK_EQUAL( std::numeric_limits<uint16_t>::max(), UInt64Convertor::convert( "65535" ) );
  CHECK_EQUAL( 65536, UInt64Convertor::convert( "65536" ) ); // overflow
  CHECK_EQUAL( 65538, UInt64Convertor::convert( "65538" ) ); // overflow
  CHECK_EQUAL( 99999, UInt64Convertor::convert( "99999" ) );
  CHECK_EQUAL( 214748365, UInt64Convertor::convert( "214748365" ) );
  CHECK_EQUAL( MAX_INT, UInt64Convertor::convert( "2147483647" ) );
  CHECK_EQUAL( 2147483648ULL, UInt64Convertor::convert( "2147483648" ) );
  CHECK_EQUAL( 2147483650ULL, UInt64Convertor::convert( "2147483650" ) );
  CHECK_EQUAL( 429496730ULL, UInt64Convertor::convert( "429496730" ) );
  CHECK_EQUAL( std::numeric_limits<uint32_t>::max(), UInt64Convertor::convert( "4294967295" ) );
  CHECK_EQUAL( 4294967296ULL, UInt64Convertor::convert( "4294967296" ) );
  CHECK_EQUAL( 4294967297ULL, UInt64Convertor::convert( "4294967297" ) );
  CHECK_EQUAL( 429496730ULL, UInt64Convertor::convert( "429496730" ) );
  CHECK_EQUAL( 9999999999ULL, UInt64Convertor::convert( "9999999999" ) );
  CHECK_EQUAL( std::numeric_limits<uint64_t>::max(), UInt64Convertor::convert( "18446744073709551615" ) );
  CHECK_THROW( UInt64Convertor::convert( "18446744073709551616" ), FieldConvertError ); // overflow
  CHECK_THROW( UInt64Convertor::convert( "18446744073709551617" ), FieldConvertError ); // overflow
  CHECK_THROW( UInt64Convertor::convert( "99999999999999999999" ), FieldConvertError ); // overflow
  
  CHECK_THROW( UInt64Convertor::convert( "" ), FieldConvertError );
  CHECK_THROW( UInt64Convertor::convert( "abc" ), FieldConvertError );
  CHECK_THROW( UInt64Convertor::convert( "123.4" ), FieldConvertError );
  CHECK_THROW( UInt64Convertor::convert( "+200" ), FieldConvertError );
  CHECK_THROW( UInt64Convertor::convert( "-1" ), FieldConvertError );
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
  UtcTimeStamp input = UtcTimeStamp::now();
  input.setHMS( 12, 5, 6, 0, 0 );
  input.setYMD( 2000, 4, 26 );
  CHECK_EQUAL( "20000426-12:05:06", UtcTimeStampConvertor::convert( input ) );
  CHECK_EQUAL( "20000426-12:05:06", UtcTimeStampConvertor::convert( input, 0 ) );
}

TEST(utcTimeStampConvertToMilli)
{
  UtcTimeStamp input = UtcTimeStamp::now();
  input.setHMS( 12, 5, 6, 555, 3 );
  input.setYMD( 2000, 4, 26 );
  CHECK_EQUAL( "20000426-12:05:06", UtcTimeStampConvertor::convert( input ) );
  CHECK_EQUAL( "20000426-12:05:06.555", UtcTimeStampConvertor::convert( input, 3 ) );
}

TEST(utcTimeStampConvertToMicro)
{
  UtcTimeStamp input = UtcTimeStamp::now();
  input.setHMS( 12, 5, 6, 555555, 6 );
  input.setYMD( 2000, 4, 26 );
  CHECK_EQUAL( "20000426-12:05:06", UtcTimeStampConvertor::convert( input ) );
  CHECK_EQUAL( "20000426-12:05:06.555555", UtcTimeStampConvertor::convert( input, 6 ) );
}

TEST(utcTimeStampConvertToNano)
{
  UtcTimeStamp input = UtcTimeStamp::now();
  input.setHMS( 12, 5, 6, 555555555, 9 );
  input.setYMD( 2000, 4, 26 );
  CHECK_EQUAL( "20000426-12:05:06", UtcTimeStampConvertor::convert( input ) );
  CHECK_EQUAL( "20000426-12:05:06.555555555", UtcTimeStampConvertor::convert( input, 9 ) );
}

TEST(utcTimeStampConvertToPrecisionBounds)
{
  UtcTimeStamp input = UtcTimeStamp::now();
  input.setHMS( 12, 5, 6, 555555555, 9 );
  input.setYMD( 2000, 4, 26 );
  CHECK_EQUAL( "20000426-12:05:06", UtcTimeStampConvertor::convert( input, -1000 ) );
  CHECK_EQUAL( "20000426-12:05:06.555555555", UtcTimeStampConvertor::convert( input, 1000 ) );
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
  UtcTimeStamp input = UtcTimeStamp::now();
  input.setHMS( 12, 5, 6, 0, 0 );
  CHECK_EQUAL( "12:05:06", UtcTimeOnlyConvertor::convert( input ) );
  CHECK_EQUAL( "12:05:06", UtcTimeOnlyConvertor::convert( input, 0) );
}

TEST(utcTimeOnlyConvertToMilli)
{
  UtcTimeStamp input = UtcTimeStamp::now();
  input.setHMS( 12, 5, 6, 555, 3 );
  CHECK_EQUAL( "12:05:06", UtcTimeOnlyConvertor::convert( input ) );
  CHECK_EQUAL( "12:05:06.555", UtcTimeOnlyConvertor::convert( input, 3 ) );
}

TEST(utcTimeOnlyConvertToMicro)
{
  UtcTimeStamp input = UtcTimeStamp::now();
  input.setHMS( 12, 5, 6, 555555, 6 );
  CHECK_EQUAL( "12:05:06", UtcTimeOnlyConvertor::convert( input ) );
  CHECK_EQUAL( "12:05:06.555555", UtcTimeOnlyConvertor::convert( input, 6 ) );
}

TEST(utcTimeOnlyConvertToNano)
{
  UtcTimeStamp input = UtcTimeStamp::now();
  input.setHMS( 12, 5, 6, 555555555, 9 );
  CHECK_EQUAL( "12:05:06", UtcTimeOnlyConvertor::convert( input ) );
  CHECK_EQUAL( "12:05:06.555555555", UtcTimeOnlyConvertor::convert( input, 9 ) );
}

TEST(utcTimeOnlyConvertToPrecisionBounds)
{
  UtcTimeStamp input = UtcTimeStamp::now();
  input.setHMS( 12, 5, 6, 555555555, 9 );
  CHECK_EQUAL( "12:05:06", UtcTimeOnlyConvertor::convert( input, -1000 ) );
  CHECK_EQUAL( "12:05:06.555555555", UtcTimeOnlyConvertor::convert( input, 1000 ) );
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
  UtcTimeStamp input = UtcTimeStamp::now();
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
  char result[6] = {'\0'};
  int fraction = 1234;
  int precision = 5;
  CHECK_EQUAL(result, integer_to_string_padded(result, precision, fraction));
}

}
