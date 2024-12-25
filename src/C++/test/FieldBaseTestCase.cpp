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

TEST_CASE("FieldBaseTests") {
  SECTION("set") {
    FieldBase object(12, "VALUE");
    object.setString("VALUE");
    CHECK("12=VALUE\001" == object.getFixString());
    CHECK(542 == object.getTotal());
    CHECK(9 == object.getLength());
    object.setString("VALUF");
    CHECK("12=VALUF\001" == object.getFixString());
    CHECK(543 == object.getTotal());
    CHECK(9 == object.getLength());
    object.setTag(13);
    CHECK("13=VALUF\001" == object.getFixString());
    CHECK(544 == object.getTotal());
    CHECK(9 == object.getLength());
  }

  SECTION("CharField_getValue_FieldConvertError") {
    CharField charField(1);
    CHECK_THROWS_AS(charField.getValue(), IncorrectDataFormat);
  }

  SECTION("DoubleField_getValue_FieldConvertError") {
    DoubleField doubleField(1);
    CHECK_THROWS_AS(doubleField.getValue(), IncorrectDataFormat);
  }

  SECTION("BoolField_getValue_FieldConvertError") {
    BoolField boolField(1);
    CHECK_THROWS_AS(boolField.getValue(), IncorrectDataFormat);
  }

  SECTION("UtcTimeStampField_getValue_FieldConvertError") {
    UtcTimeStampField utcTimeStampField(1, UtcTimeStamp::now());
    utcTimeStampField.setString("1");
    CHECK_THROWS_AS(utcTimeStampField.getValue(), IncorrectDataFormat);
  }

  SECTION("StringField_ComparisonIsLessThanOrEqualTo") {
    StringField stringField(1, "string");
    CHECK(stringField <= "string");
    CHECK(stringField <= "string_long");
    CHECK(!(stringField <= "str"));
  }
}