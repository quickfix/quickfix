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

#include <Field.h>

#include "catch_amalgamated.hpp"

using namespace FIX;

namespace {
const int MAX_INT = 2147483647;
const int MIN_INT = -2147483647 - 1;

typedef IntTConvertor<int8_t> Int8Convertor;
typedef IntTConvertor<int16_t> Int16Convertor;
typedef IntTConvertor<int32_t> Int32Convertor;
typedef IntTConvertor<int64_t> Int64Convertor;

typedef IntTConvertor<uint8_t> UInt8Convertor;
typedef IntTConvertor<uint16_t> UInt16Convertor;
typedef IntTConvertor<uint32_t> UInt32Convertor;
typedef IntTConvertor<uint64_t> UInt64Convertor;
} // namespace

TEST_CASE("FieldConvertorsTests") {
  SECTION("int8_integerConvertTo") {
    CHECK("0" == Int8Convertor::convert(0));
    CHECK("1" == Int8Convertor::convert(1));
    CHECK("12" == Int8Convertor::convert(12));
    CHECK("100" == Int8Convertor::convert(100));
    CHECK("126" == Int8Convertor::convert(126));
    CHECK("127" == Int8Convertor::convert((std::numeric_limits<int8_t>::max)()));
    CHECK_THROWS_AS(Int8Convertor::convert("128"), FieldConvertError);

    CHECK("-1" == Int8Convertor::convert(-1));
    CHECK("-12" == Int8Convertor::convert(-12));
    CHECK("-100" == Int8Convertor::convert(-100));
    CHECK("-127" == Int8Convertor::convert(-127));
    CHECK("-128" == Int8Convertor::convert((std::numeric_limits<int8_t>::min)()));
    CHECK_THROWS_AS(Int8Convertor::convert("-129"), FieldConvertError);

    CHECK_THROWS_AS(Int8Convertor::convert("-"), FieldConvertError);
  }

  SECTION("int8_integerConvertFrom") {
    CHECK(0 == Int8Convertor::convert("0"));
    CHECK(1 == Int8Convertor::convert("1"));
    CHECK(12 == Int8Convertor::convert("12"));
    CHECK(13 == Int8Convertor::convert("13"));
    CHECK(100 == Int8Convertor::convert("100"));
    CHECK((std::numeric_limits<int8_t>::max)() == Int8Convertor::convert("127"));
    CHECK_THROWS_AS(Int8Convertor::convert("128"), FieldConvertError); // overflow
    CHECK_THROWS_AS(Int8Convertor::convert("130"), FieldConvertError); // overflow
    CHECK_THROWS_AS(Int8Convertor::convert("999"), FieldConvertError); // overflow

    CHECK(-1 == Int8Convertor::convert("-1"));
    CHECK(-12 == Int8Convertor::convert("-12"));
    CHECK(-13 == Int8Convertor::convert("-13"));
    CHECK(-100 == Int8Convertor::convert("-100"));
    CHECK(-127 == Int8Convertor::convert("-127"));
    CHECK((std::numeric_limits<int8_t>::min)() == Int8Convertor::convert("-128"));
    CHECK_THROWS_AS(Int8Convertor::convert("-129"), FieldConvertError); // overflow
    CHECK_THROWS_AS(Int8Convertor::convert("-130"), FieldConvertError); // overflow
    CHECK_THROWS_AS(Int8Convertor::convert("-999"), FieldConvertError); // overflow

    CHECK_THROWS_AS(Int8Convertor::convert(""), FieldConvertError);
    CHECK_THROWS_AS(Int8Convertor::convert("abc"), FieldConvertError);
    CHECK_THROWS_AS(Int8Convertor::convert("123.4"), FieldConvertError);
    CHECK_THROWS_AS(Int8Convertor::convert("+200"), FieldConvertError);
  }

  SECTION("int16_integerConvertTo") {
    CHECK("0" == Int16Convertor::convert(0));
    CHECK("1" == Int16Convertor::convert(1));
    CHECK("12" == Int16Convertor::convert(12));
    CHECK("100" == Int16Convertor::convert(100));
    CHECK("127" == Int16Convertor::convert((std::numeric_limits<int8_t>::max)()));
    CHECK("128" == Int16Convertor::convert(128));
    CHECK("1234" == Int16Convertor::convert(1234));
    CHECK("12345" == Int16Convertor::convert(12345));
    CHECK("32767" == Int16Convertor::convert((std::numeric_limits<int16_t>::max)()));
    CHECK_THROWS_AS(Int16Convertor::convert("32768"), FieldConvertError);

    CHECK("-1" == Int16Convertor::convert(-1));
    CHECK("-12" == Int16Convertor::convert(-12));
    CHECK("-100" == Int16Convertor::convert(-100));
    CHECK("-128" == Int16Convertor::convert((std::numeric_limits<int8_t>::min)()));
    CHECK("-129" == Int16Convertor::convert(-129));
    CHECK("-1234" == Int16Convertor::convert(-1234));
    CHECK("-12345" == Int16Convertor::convert(-12345));
    CHECK("-32767" == Int16Convertor::convert(-32767));
    CHECK("-32768" == Int16Convertor::convert((std::numeric_limits<int16_t>::min)()));
    CHECK_THROWS_AS(Int16Convertor::convert("-32769"), FieldConvertError);

    CHECK_THROWS_AS(Int16Convertor::convert("-"), FieldConvertError);
  }

  SECTION("int16_integerConvertFrom") {
    CHECK(0 == Int16Convertor::convert("0"));
    CHECK(1 == Int16Convertor::convert("1"));
    CHECK(12 == Int16Convertor::convert("12"));
    CHECK(100 == Int16Convertor::convert("100"));
    CHECK((std::numeric_limits<int8_t>::max)() == Int16Convertor::convert("127"));
    CHECK(128 == Int16Convertor::convert("128"));
    CHECK(130 == Int16Convertor::convert("130"));
    CHECK(999 == Int16Convertor::convert("999"));
    CHECK(1234 == Int16Convertor::convert("1234"));
    CHECK(3277 == Int16Convertor::convert("3277"));
    CHECK((std::numeric_limits<int16_t>::max)() == Int16Convertor::convert("32767"));
    CHECK_THROWS_AS(Int16Convertor::convert("32768"), FieldConvertError); // overflow
    CHECK_THROWS_AS(Int16Convertor::convert("32770"), FieldConvertError); // overflow
    CHECK_THROWS_AS(Int16Convertor::convert("99999"), FieldConvertError); // overflow

    CHECK(-1 == Int16Convertor::convert("-1"));
    CHECK(-12 == Int16Convertor::convert("-12"));
    CHECK(-100 == Int16Convertor::convert("-100"));
    CHECK(-127 == Int16Convertor::convert("-127"));
    CHECK((std::numeric_limits<int8_t>::min)() == Int16Convertor::convert("-128"));
    CHECK(-129 == Int16Convertor::convert("-129"));
    CHECK(-130 == Int16Convertor::convert("-130"));
    CHECK(-999 == Int16Convertor::convert("-999"));
    CHECK(-1234 == Int16Convertor::convert("-1234"));
    CHECK(-32767 == Int16Convertor::convert("-32767"));
    CHECK((std::numeric_limits<int16_t>::min)() == Int16Convertor::convert("-32768"));
    CHECK_THROWS_AS(Int16Convertor::convert("-32769"), FieldConvertError); // overflow
    CHECK_THROWS_AS(Int16Convertor::convert("-32770"), FieldConvertError); // overflow
    CHECK_THROWS_AS(Int16Convertor::convert("-99999"), FieldConvertError); // overflow

    CHECK_THROWS_AS(Int16Convertor::convert(""), FieldConvertError);
    CHECK_THROWS_AS(Int16Convertor::convert("abc"), FieldConvertError);
    CHECK_THROWS_AS(Int16Convertor::convert("123.4"), FieldConvertError);
    CHECK_THROWS_AS(Int16Convertor::convert("+200"), FieldConvertError);
  }

  SECTION("uint32_integerConvertTo") {
    CHECK("0" == UInt32Convertor::convert(0));
    CHECK("1" == UInt32Convertor::convert(1));
    CHECK("12" == UInt32Convertor::convert(12));
    CHECK("100" == UInt32Convertor::convert(100));
    CHECK("127" == UInt32Convertor::convert((std::numeric_limits<int8_t>::max)()));
    CHECK("128" == UInt32Convertor::convert(128));
    CHECK("1234" == UInt32Convertor::convert(1234));
    CHECK("12345" == UInt32Convertor::convert(12345));
    CHECK("32767" == UInt32Convertor::convert((std::numeric_limits<int16_t>::max)()));
    CHECK("32768" == UInt32Convertor::convert(32768));
    CHECK("123456" == UInt32Convertor::convert(123456));
    CHECK("1234567" == UInt32Convertor::convert(1234567));
    CHECK("12345678" == UInt32Convertor::convert(12345678));
    CHECK("123456789" == UInt32Convertor::convert(123456789));
    CHECK("2147483647" == UInt32Convertor::convert(MAX_INT));
    CHECK("2147483648" == UInt32Convertor::convert(2147483648UL));
    CHECK("4294967295" == UInt32Convertor::convert(4294967295UL));
    CHECK_THROWS_AS(UInt32Convertor::convert("4294967296"), FieldConvertError);

    CHECK_THROWS_AS(UInt32Convertor::convert("-"), FieldConvertError);
    CHECK_THROWS_AS(UInt32Convertor::convert("-1"), FieldConvertError);
  }

  SECTION("uint32_integerConvertFrom") {
    CHECK(0 == UInt32Convertor::convert("0"));
    CHECK(1 == UInt32Convertor::convert("1"));
    CHECK(12 == UInt32Convertor::convert("12"));
    CHECK(100 == UInt32Convertor::convert("100"));
    CHECK((std::numeric_limits<int8_t>::max)() == UInt32Convertor::convert("127"));
    CHECK(128 == UInt32Convertor::convert("128"));
    CHECK(254 == UInt32Convertor::convert("254"));
    CHECK((std::numeric_limits<uint8_t>::max)() == UInt32Convertor::convert("255"));
    CHECK(256 == UInt32Convertor::convert("256"));
    CHECK(258 == UInt32Convertor::convert("258"));
    CHECK(999 == UInt32Convertor::convert("999"));
    CHECK(1234 == UInt32Convertor::convert("1234"));
    CHECK(3277 == UInt32Convertor::convert("3277"));
    CHECK((std::numeric_limits<int16_t>::max)() == UInt32Convertor::convert("32767"));
    CHECK(32768 == UInt32Convertor::convert("32768"));
    CHECK(32770 == UInt32Convertor::convert("32770"));
    CHECK(6556 == UInt32Convertor::convert("6556"));
    CHECK((std::numeric_limits<uint16_t>::max)() == UInt32Convertor::convert("65535"));
    CHECK(65536 == UInt32Convertor::convert("65536")); // overflow
    CHECK(65538 == UInt32Convertor::convert("65538")); // overflow
    CHECK(99999 == UInt32Convertor::convert("99999"));
    CHECK(214748365 == UInt32Convertor::convert("214748365"));
    CHECK(MAX_INT == UInt32Convertor::convert("2147483647"));
    CHECK(2147483648UL == UInt32Convertor::convert("2147483648"));
    CHECK(2147483650UL == UInt32Convertor::convert("2147483650"));
    CHECK(429496730UL == UInt32Convertor::convert("429496730"));
    CHECK((std::numeric_limits<uint32_t>::max)() == UInt32Convertor::convert("4294967295"));
    CHECK_THROWS_AS(UInt32Convertor::convert("4294967296"), FieldConvertError); // overflow
    CHECK_THROWS_AS(UInt32Convertor::convert("4294967297"), FieldConvertError); // overflow
    CHECK_THROWS_AS(UInt32Convertor::convert("9999999999"), FieldConvertError); // overflow

    CHECK_THROWS_AS(UInt32Convertor::convert(""), FieldConvertError);
    CHECK_THROWS_AS(UInt32Convertor::convert("abc"), FieldConvertError);
    CHECK_THROWS_AS(UInt32Convertor::convert("123.4"), FieldConvertError);
    CHECK_THROWS_AS(UInt32Convertor::convert("+200"), FieldConvertError);
    CHECK_THROWS_AS(UInt32Convertor::convert("-1"), FieldConvertError);
  }

  SECTION("uint64_integerConvertTo") {
    CHECK("0" == UInt64Convertor::convert(0));
    CHECK("1" == UInt64Convertor::convert(1));
    CHECK("12" == UInt64Convertor::convert(12));
    CHECK("100" == UInt64Convertor::convert(100));
    CHECK("127" == UInt64Convertor::convert((std::numeric_limits<int8_t>::max)()));
    CHECK("128" == UInt64Convertor::convert(128));
    CHECK("1234" == UInt64Convertor::convert(1234));
    CHECK("12345" == UInt64Convertor::convert(12345));
    CHECK("32767" == UInt64Convertor::convert((std::numeric_limits<int16_t>::max)()));
    CHECK("32768" == UInt64Convertor::convert(32768));
    CHECK("123456" == UInt64Convertor::convert(123456));
    CHECK("1234567" == UInt64Convertor::convert(1234567));
    CHECK("12345678" == UInt64Convertor::convert(12345678));
    CHECK("123456789" == UInt64Convertor::convert(123456789));
    CHECK("2147483647" == UInt64Convertor::convert(MAX_INT));
    CHECK("2147483648" == UInt64Convertor::convert(2147483648));
    CHECK("12345678912" == UInt64Convertor::convert(12345678912LL));
    CHECK("123456789123" == UInt64Convertor::convert(123456789123LL));
    CHECK("1234567891234" == UInt64Convertor::convert(1234567891234LL));
    CHECK("12345678912345" == UInt64Convertor::convert(12345678912345LL));
    CHECK("123456789123456" == UInt64Convertor::convert(123456789123456LL));
    CHECK("1234567891234567" == UInt64Convertor::convert(1234567891234567LL));
    CHECK("12345678912345678" == UInt64Convertor::convert(12345678912345678LL));
    CHECK("123456789123456789" == UInt64Convertor::convert(123456789123456789LL));
    CHECK("1234567891234567891" == UInt64Convertor::convert(1234567891234567891ULL));
    CHECK("9223372036854775807" == UInt64Convertor::convert((std::numeric_limits<int64_t>::max)()));
    CHECK("9223372036854775808" == UInt64Convertor::convert(9223372036854775808ULL));
    CHECK("18446744073709551615" == UInt64Convertor::convert((std::numeric_limits<uint64_t>::max)()));
    CHECK_THROWS_AS(UInt64Convertor::convert("18446744073709551616"), FieldConvertError);

    CHECK_THROWS_AS(UInt64Convertor::convert("-"), FieldConvertError);
    CHECK_THROWS_AS(UInt64Convertor::convert("-1"), FieldConvertError);
  }

  SECTION("uint64_integerConvertFrom") {
    CHECK(0 == UInt64Convertor::convert("0"));
    CHECK(1 == UInt64Convertor::convert("1"));
    CHECK(12 == UInt64Convertor::convert("12"));
    CHECK(100 == UInt64Convertor::convert("100"));
    CHECK((std::numeric_limits<int8_t>::max)() == UInt64Convertor::convert("127"));
    CHECK(128 == UInt64Convertor::convert("128"));
    CHECK(254 == UInt64Convertor::convert("254"));
    CHECK((std::numeric_limits<uint8_t>::max)() == UInt64Convertor::convert("255"));
    CHECK(256 == UInt64Convertor::convert("256"));
    CHECK(258 == UInt64Convertor::convert("258"));
    CHECK(999 == UInt64Convertor::convert("999"));
    CHECK(1234 == UInt64Convertor::convert("1234"));
    CHECK(3277 == UInt64Convertor::convert("3277"));
    CHECK((std::numeric_limits<int16_t>::max)() == UInt64Convertor::convert("32767"));
    CHECK(32768 == UInt64Convertor::convert("32768"));
    CHECK(32770 == UInt64Convertor::convert("32770"));
    CHECK(6556 == UInt64Convertor::convert("6556"));
    CHECK((std::numeric_limits<uint16_t>::max)() == UInt64Convertor::convert("65535"));
    CHECK(65536 == UInt64Convertor::convert("65536")); // overflow
    CHECK(65538 == UInt64Convertor::convert("65538")); // overflow
    CHECK(99999 == UInt64Convertor::convert("99999"));
    CHECK(214748365 == UInt64Convertor::convert("214748365"));
    CHECK(MAX_INT == UInt64Convertor::convert("2147483647"));
    CHECK(2147483648ULL == UInt64Convertor::convert("2147483648"));
    CHECK(2147483650ULL == UInt64Convertor::convert("2147483650"));
    CHECK(429496730ULL == UInt64Convertor::convert("429496730"));
    CHECK((std::numeric_limits<uint32_t>::max)() == UInt64Convertor::convert("4294967295"));
    CHECK(4294967296ULL == UInt64Convertor::convert("4294967296"));
    CHECK(4294967297ULL == UInt64Convertor::convert("4294967297"));
    CHECK(429496730ULL == UInt64Convertor::convert("429496730"));
    CHECK(9999999999ULL == UInt64Convertor::convert("9999999999"));
    CHECK((std::numeric_limits<uint64_t>::max)() == UInt64Convertor::convert("18446744073709551615"));
    CHECK_THROWS_AS(UInt64Convertor::convert("18446744073709551616"), FieldConvertError); // overflow
    CHECK_THROWS_AS(UInt64Convertor::convert("18446744073709551617"), FieldConvertError); // overflow
    CHECK_THROWS_AS(UInt64Convertor::convert("99999999999999999999"), FieldConvertError); // overflow

    CHECK_THROWS_AS(UInt64Convertor::convert(""), FieldConvertError);
    CHECK_THROWS_AS(UInt64Convertor::convert("abc"), FieldConvertError);
    CHECK_THROWS_AS(UInt64Convertor::convert("123.4"), FieldConvertError);
    CHECK_THROWS_AS(UInt64Convertor::convert("+200"), FieldConvertError);
    CHECK_THROWS_AS(UInt64Convertor::convert("-1"), FieldConvertError);
  }

  SECTION("countIntegerSymbols") {
    CHECK(1 == FIX::number_of_symbols_in(0));

    CHECK(1 == FIX::number_of_symbols_in(9));
    CHECK(2 == FIX::number_of_symbols_in(92));
    CHECK(3 == FIX::number_of_symbols_in(926));
    CHECK(4 == FIX::number_of_symbols_in(1926));
    CHECK(5 == FIX::number_of_symbols_in(11926));
    CHECK(6 == FIX::number_of_symbols_in(111926));
    CHECK(7 == FIX::number_of_symbols_in(1111926));
    CHECK(8 == FIX::number_of_symbols_in(11111926));
    CHECK(9 == FIX::number_of_symbols_in(111111926));
    CHECK(10 == FIX::number_of_symbols_in(MAX_INT));

    CHECK(2 == FIX::number_of_symbols_in(-9));
    CHECK(3 == FIX::number_of_symbols_in(-92));
    CHECK(4 == FIX::number_of_symbols_in(-926));
    CHECK(5 == FIX::number_of_symbols_in(-1926));
    CHECK(6 == FIX::number_of_symbols_in(-11926));
    CHECK(7 == FIX::number_of_symbols_in(-111926));
    CHECK(8 == FIX::number_of_symbols_in(-1111926));
    CHECK(9 == FIX::number_of_symbols_in(-11111926));
    CHECK(10 == FIX::number_of_symbols_in(-111111926));
    CHECK(11 == FIX::number_of_symbols_in(MIN_INT));
  }

  SECTION("emptyConvert") { CHECK("hello" == StringConvertor::convert("hello")); }

  SECTION("integerConvertTo") {
    CHECK("0" == IntConvertor::convert(0));
    CHECK("1" == IntConvertor::convert(1));
    CHECK("12" == IntConvertor::convert(12));
    CHECK("100" == IntConvertor::convert(100));
    CHECK("1234" == IntConvertor::convert(1234));
    CHECK("12345" == IntConvertor::convert(12345));
    CHECK("123456" == IntConvertor::convert(123456));
    CHECK("1234567" == IntConvertor::convert(1234567));
    CHECK("12345678" == IntConvertor::convert(12345678));
    CHECK("123456789" == IntConvertor::convert(123456789));
    CHECK("2147483647" == IntConvertor::convert(MAX_INT));

    CHECK("-1" == IntConvertor::convert(-1));
    CHECK("-12" == IntConvertor::convert(-12));
    CHECK("-100" == IntConvertor::convert(-100));
    CHECK("-1234" == IntConvertor::convert(-1234));
    CHECK("-12345" == IntConvertor::convert(-12345));
    CHECK("-123456" == IntConvertor::convert(-123456));
    CHECK("-1234567" == IntConvertor::convert(-1234567));
    CHECK("-12345678" == IntConvertor::convert(-12345678));
    CHECK("-123456789" == IntConvertor::convert(-123456789));
    CHECK("-2147483647" == IntConvertor::convert(-2147483647));
    CHECK("-2147483648" == IntConvertor::convert(MIN_INT));
    CHECK_THROWS_AS(IntConvertor::convert("-"), FieldConvertError);
  }

  SECTION("integerConvertFrom") {
    CHECK(0 == IntConvertor::convert("0"));
    CHECK(1 == IntConvertor::convert("1"));
    CHECK(12 == IntConvertor::convert("12"));
    CHECK(100 == IntConvertor::convert("100"));
    CHECK(1234 == IntConvertor::convert("1234"));
    CHECK(214748365 == IntConvertor::convert("214748365"));
    CHECK(MAX_INT == IntConvertor::convert("2147483647"));
    CHECK_THROWS_AS(IntConvertor::convert("2147483648"), FieldConvertError); // overflow
    CHECK_THROWS_AS(IntConvertor::convert("2147483650"), FieldConvertError); // overflow
    CHECK_THROWS_AS(IntConvertor::convert("9999999999"), FieldConvertError); // overflow

    CHECK(-1 == IntConvertor::convert("-1"));
    CHECK(-12 == IntConvertor::convert("-12"));
    CHECK(-100 == IntConvertor::convert("-100"));
    CHECK(-1234 == IntConvertor::convert("-1234"));
    CHECK(-214748365 == IntConvertor::convert("-214748365"));
    CHECK(-2147483647 == IntConvertor::convert("-2147483647"));
    CHECK(MIN_INT == IntConvertor::convert("-2147483648"));
    CHECK_THROWS_AS(IntConvertor::convert("-2147483649"), FieldConvertError); // overflow
    CHECK_THROWS_AS(IntConvertor::convert("-2147483650"), FieldConvertError); // overflow
    CHECK_THROWS_AS(IntConvertor::convert("-9999999999"), FieldConvertError); // overflow

    CHECK_THROWS_AS(IntConvertor::convert(""), FieldConvertError);
    CHECK_THROWS_AS(IntConvertor::convert("abc"), FieldConvertError);
    CHECK_THROWS_AS(IntConvertor::convert("123.4"), FieldConvertError);
    CHECK_THROWS_AS(IntConvertor::convert("+200"), FieldConvertError);
  }

  SECTION("doubleConvertTo") {
    CHECK("45.32" == DoubleConvertor::convert(45.32));
    CHECK("45" == DoubleConvertor::convert(45));
    CHECK("0" == DoubleConvertor::convert(0.0));
    CHECK("0.00001" == DoubleConvertor::convert(0.00001));
    CHECK("-12.000000000001" == DoubleConvertor::convert(-12.000000000001));
    CHECK("-0.00001" == DoubleConvertor::convert(-0.00001));
    CHECK("-1050" == DoubleConvertor::convert(-1050.0));
    CHECK("1.233" == DoubleConvertor::convert(1.233));
    CHECK("38.4" == DoubleConvertor::convert(38.4));
    CHECK("38.4" == DoubleConvertor::convert(38.400000000000006));
    CHECK("0.1" == DoubleConvertor::convert(0.1));
    CHECK("0.3" == DoubleConvertor::convert(0.3));

    // corner cases
    CHECK("-0.000000000000001" == DoubleConvertor::convert(-1e-15));
    CHECK("100000000000000" == DoubleConvertor::convert(1e14));
    CHECK("1e15" == DoubleConvertor::convert(1e15));
    CHECK("1.23456e15" == DoubleConvertor::convert(1.23456e15));
    CHECK("0." == DoubleConvertor::convert(1e-16));

    CHECK("1.500" == DoubleConvertor::convert(1.5, 3));
    CHECK("45.00000" == DoubleConvertor::convert(45, 5));
    CHECK("5.00" == DoubleConvertor::convert(5, 2));
    CHECK("-5.00" == DoubleConvertor::convert(-5, 2));
    CHECK("-12.2345" == DoubleConvertor::convert(-12.2345, 2));
    CHECK("-0.00001" == DoubleConvertor::convert(-0.00001, 5));
    CHECK("0.0" == DoubleConvertor::convert(0.0, 1));

    CHECK("" == DoubleConvertor::convert(0.01, 0, -1));
  }

  SECTION("doubleConvertFrom") {
    CHECK(45.32 == DoubleConvertor::convert("45.32"));
    CHECK(45.32 == DoubleConvertor::convert("45.3200"));
    CHECK(0.00340244 == DoubleConvertor::convert("0.00340244000"));
    CHECK(12.000000000001 == DoubleConvertor::convert("12.000000000001"));
    CHECK(-12.000000000001 == DoubleConvertor::convert("-12.000000000001"));
    CHECK(0.0 == DoubleConvertor::convert("0.0"));
    CHECK(45.32 == DoubleConvertor::convert("0045.32"));
    CHECK(0.0 == DoubleConvertor::convert("0."));
    CHECK(0.0 == DoubleConvertor::convert(".0"));
    CHECK(0.0 == DoubleConvertor::convert("0"));
    CHECK(0.06 == DoubleConvertor::convert("000.06"));
    CHECK(0.06 == DoubleConvertor::convert("0.0600"));
    CHECK(0.00001 == DoubleConvertor::convert("0.00001"));
    CHECK(-0.00001 == DoubleConvertor::convert("-0.00001"));
    CHECK(-1050 == DoubleConvertor::convert("-1050"));
    CHECK(1.233 == DoubleConvertor::convert("1.233"));
    CHECK(38.4 == DoubleConvertor::convert("38.4"));

    CHECK_THROWS_AS(DoubleConvertor::convert("abc"), FieldConvertError);
    CHECK_THROWS_AS(DoubleConvertor::convert("123.A"), FieldConvertError);
    CHECK_THROWS_AS(DoubleConvertor::convert("123.45.67"), FieldConvertError);
    CHECK_THROWS_AS(DoubleConvertor::convert("."), FieldConvertError);
    CHECK_THROWS_AS(DoubleConvertor::convert("1e5"), FieldConvertError);
  }

  SECTION("charConvertTo") {
    CHECK("a" == CharConvertor::convert('a'));
    CHECK("1" == CharConvertor::convert('1'));
    CHECK("F" == CharConvertor::convert('F'));
    CHECK("" == CharConvertor::convert(0));
    CHECK_THROWS_AS(CharConvertor::convert("11"), FieldConvertError);
    CHECK_THROWS_AS(CharConvertor::convert("1 "), FieldConvertError);
  }

  SECTION("charConvertFrom") {
    CHECK('a' == CharConvertor::convert("a"));
    CHECK('1' == CharConvertor::convert("1"));
    CHECK('F' == CharConvertor::convert("F"));
  }

  SECTION("booleanConvertTo") {
    CHECK("Y" == BoolConvertor::convert(true));
    CHECK("N" == BoolConvertor::convert(false));
  }

  SECTION("booleanConvertFrom") {
    CHECK(BoolConvertor::convert(std::string("Y")));
    CHECK(!BoolConvertor::convert(std::string("N")));
    CHECK_THROWS_AS(BoolConvertor::convert(std::string("D")), FieldConvertError);
  }

  SECTION("utcTimeStampConvertToSecond") {
    UtcTimeStamp input = UtcTimeStamp::now();
    input.setHMS(12, 5, 6, 0, 0);
    input.setYMD(2000, 4, 26);
    CHECK("20000426-12:05:06" == UtcTimeStampConvertor::convert(input));
    CHECK("20000426-12:05:06" == UtcTimeStampConvertor::convert(input, 0));
  }

  SECTION("utcTimeStampConvertToMilli") {
    UtcTimeStamp input = UtcTimeStamp::now();
    input.setHMS(12, 5, 6, 555, 3);
    input.setYMD(2000, 4, 26);
    CHECK("20000426-12:05:06" == UtcTimeStampConvertor::convert(input));
    CHECK("20000426-12:05:06.555" == UtcTimeStampConvertor::convert(input, 3));
  }

  SECTION("utcTimeStampConvertToMicro") {
    UtcTimeStamp input = UtcTimeStamp::now();
    input.setHMS(12, 5, 6, 555555, 6);
    input.setYMD(2000, 4, 26);
    CHECK("20000426-12:05:06" == UtcTimeStampConvertor::convert(input));
    CHECK("20000426-12:05:06.555555" == UtcTimeStampConvertor::convert(input, 6));
  }

  SECTION("utcTimeStampConvertToNano") {
    UtcTimeStamp input = UtcTimeStamp::now();
    input.setHMS(12, 5, 6, 555555555, 9);
    input.setYMD(2000, 4, 26);
    CHECK("20000426-12:05:06" == UtcTimeStampConvertor::convert(input));
    CHECK("20000426-12:05:06.555555555" == UtcTimeStampConvertor::convert(input, 9));
  }

  SECTION("utcTimeStampConvertToPrecisionBounds") {
    UtcTimeStamp input = UtcTimeStamp::now();
    input.setHMS(12, 5, 6, 555555555, 9);
    input.setYMD(2000, 4, 26);
    CHECK("20000426-12:05:06" == UtcTimeStampConvertor::convert(input, -1000));
    CHECK("20000426-12:05:06.555555555" == UtcTimeStampConvertor::convert(input, 1000));
  }

  SECTION("utcTimeStampConvertFromSecond") {
    UtcTimeStamp result = UtcTimeStampConvertor::convert(std::string("20000426-12:05:06"));
    CHECK(12 == result.getHour());
    CHECK(5 == result.getMinute());
    CHECK(6 == result.getSecond());
    CHECK(0 == result.getFraction(0));
    CHECK(2000 == result.getYear());
    CHECK(4 == result.getMonth());
    CHECK(26 == result.getDate());

    UtcTimeStamp result2 = UtcTimeStampConvertor::convert(std::string("20000426-12:05:06"));
    CHECK(12 == result2.getHour());
    CHECK(5 == result2.getMinute());
    CHECK(6 == result2.getSecond());
    CHECK(0 == result2.getFraction(0));
    CHECK(2000 == result2.getYear());
    CHECK(4 == result2.getMonth());
    CHECK(26 == result2.getDate());
  }

  SECTION("utcTimeStampConvertFromMilli") {
    UtcTimeStamp result = UtcTimeStampConvertor::convert(std::string("20000426-12:05:06.555"));
    CHECK(12 == result.getHour());
    CHECK(5 == result.getMinute());
    CHECK(6 == result.getSecond());
    CHECK(555 == result.getFraction(3));
    CHECK(2000 == result.getYear());
    CHECK(4 == result.getMonth());
    CHECK(26 == result.getDate());

    UtcTimeStamp result2 = UtcTimeStampConvertor::convert(std::string("20000426-12:05:06.555"));
    CHECK(12 == result2.getHour());
    CHECK(5 == result2.getMinute());
    CHECK(6 == result2.getSecond());
    CHECK(555 == result2.getFraction(3));
    CHECK(2000 == result2.getYear());
    CHECK(4 == result2.getMonth());
    CHECK(26 == result2.getDate());
  }

  SECTION("utcTimeStampConvertFromMicro") {
    UtcTimeStamp result = UtcTimeStampConvertor::convert(std::string("20000426-12:05:06.555555"));
    CHECK(12 == result.getHour());
    CHECK(5 == result.getMinute());
    CHECK(6 == result.getSecond());
    CHECK(555555 == result.getFraction(6));
    CHECK(2000 == result.getYear());
    CHECK(4 == result.getMonth());
    CHECK(26 == result.getDate());

    UtcTimeStamp result2 = UtcTimeStampConvertor::convert(std::string("20000426-12:05:06.555555"));
    CHECK(12 == result2.getHour());
    CHECK(5 == result2.getMinute());
    CHECK(6 == result2.getSecond());
    CHECK(555555 == result2.getFraction(6));
    CHECK(2000 == result2.getYear());
    CHECK(4 == result2.getMonth());
    CHECK(26 == result2.getDate());
  }

  SECTION("utcTimeStampConvertFromNano") {
    UtcTimeStamp result = UtcTimeStampConvertor::convert(std::string("20000426-12:05:06.555555555"));
    CHECK(12 == result.getHour());
    CHECK(5 == result.getMinute());
    CHECK(6 == result.getSecond());
    CHECK(555555555 == result.getFraction(9));
    CHECK(2000 == result.getYear());
    CHECK(4 == result.getMonth());
    CHECK(26 == result.getDate());

    UtcTimeStamp result2 = UtcTimeStampConvertor::convert(std::string("20000426-12:05:06.555555555"));
    CHECK(12 == result2.getHour());
    CHECK(5 == result2.getMinute());
    CHECK(6 == result2.getSecond());
    CHECK(555555555 == result2.getFraction(9));
    CHECK(2000 == result2.getYear());
    CHECK(4 == result2.getMonth());
    CHECK(26 == result2.getDate());
  }

  SECTION("utcTimeOnlyConvertToSecond") {
    UtcTimeStamp input = UtcTimeStamp::now();
    input.setHMS(12, 5, 6, 0, 0);
    CHECK("12:05:06" == UtcTimeOnlyConvertor::convert(input));
    CHECK("12:05:06" == UtcTimeOnlyConvertor::convert(input, 0));
  }

  SECTION("utcTimeOnlyConvertToMilli") {
    UtcTimeStamp input = UtcTimeStamp::now();
    input.setHMS(12, 5, 6, 555, 3);
    CHECK("12:05:06" == UtcTimeOnlyConvertor::convert(input));
    CHECK("12:05:06.555" == UtcTimeOnlyConvertor::convert(input, 3));
  }

  SECTION("utcTimeOnlyConvertToMicro") {
    UtcTimeStamp input = UtcTimeStamp::now();
    input.setHMS(12, 5, 6, 555555, 6);
    CHECK("12:05:06" == UtcTimeOnlyConvertor::convert(input));
    CHECK("12:05:06.555555" == UtcTimeOnlyConvertor::convert(input, 6));
  }

  SECTION("utcTimeOnlyConvertToNano") {
    UtcTimeStamp input = UtcTimeStamp::now();
    input.setHMS(12, 5, 6, 555555555, 9);
    CHECK("12:05:06" == UtcTimeOnlyConvertor::convert(input));
    CHECK("12:05:06.555555555" == UtcTimeOnlyConvertor::convert(input, 9));
  }

  SECTION("utcTimeOnlyConvertToPrecisionBounds") {
    UtcTimeStamp input = UtcTimeStamp::now();
    input.setHMS(12, 5, 6, 555555555, 9);
    CHECK("12:05:06" == UtcTimeOnlyConvertor::convert(input, -1000));
    CHECK("12:05:06.555555555" == UtcTimeOnlyConvertor::convert(input, 1000));
  }

  SECTION("utcTimeOnlyConvertFromMicro") {
    UtcTimeOnly result = UtcTimeOnlyConvertor::convert(std::string("12:05:06.555555"));
    CHECK(12 == result.getHour());
    CHECK(5 == result.getMinute());
    CHECK(6 == result.getSecond());
    CHECK(555555 == result.getFraction(6));
  }

  SECTION("utcDateConvertTo") {
    UtcTimeStamp input = UtcTimeStamp::now();
    input.setYMD(2000, 4, 26);
    CHECK("20000426" == UtcDateConvertor::convert(input));
  }

  SECTION("utcDateConvertFrom") {
    UtcDate result = UtcDateConvertor::convert(std::string("20000426"));
    CHECK(2000 == result.getYear());
    CHECK(4 == result.getMonth());
    CHECK(26 == result.getDate());
    std::string outOfRangeMonth = "20001526";
    CHECK_THROWS_AS(UtcDateConvertor::convert(outOfRangeMonth), FieldConvertError);
    std::string outOfRangeMonthDay = "20000438";
    CHECK_THROWS_AS(UtcDateConvertor::convert(outOfRangeMonthDay), FieldConvertError);
  }

  SECTION("checkSumConvertTo") {
    CHECK("000" == CheckSumConvertor::convert(0));
    CHECK("005" == CheckSumConvertor::convert(5));
    CHECK("012" == CheckSumConvertor::convert(12));
    CHECK("234" == CheckSumConvertor::convert(234));
    CHECK_THROWS_AS(CheckSumConvertor::convert(-1), FieldConvertError);
    CHECK_THROWS_AS(CheckSumConvertor::convert(256), FieldConvertError);
  }

  SECTION("integerToStringPadded") {
    char result[6] = {'\0'};
    int fraction = 1234;
    int precision = 5;
    CHECK(result == integer_to_string_padded(result, precision, fraction));
  }
}
