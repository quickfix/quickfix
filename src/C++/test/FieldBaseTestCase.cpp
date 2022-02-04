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

SUITE(FieldBaseTests)
{

TEST(set)
{
  FieldBase object( 12, "VALUE" );
  object.setString( "VALUE" );
  CHECK_EQUAL( "12=VALUE\001", object.getFixString() );
  CHECK_EQUAL( 542, object.getTotal() );
  CHECK_EQUAL( 9lu, object.getLength() );
  object.setString( "VALUF" );
  CHECK_EQUAL( "12=VALUF\001", object.getFixString() );
  CHECK_EQUAL( 543, object.getTotal() );
  CHECK_EQUAL( 9lu, object.getLength() );
  object.setTag( 13 );
  CHECK_EQUAL( "13=VALUF\001", object.getFixString() );
  CHECK_EQUAL( 544, object.getTotal() );
  CHECK_EQUAL( 9lu, object.getLength() );
}

TEST(CharField_getValue_FieldConvertError){
  CharField charField(1);
  CHECK_THROW(charField.getValue(), IncorrectDataFormat);
}

TEST(DoubleField_getValue_FieldConvertError){
  DoubleField doubleField(1);
  CHECK_THROW(doubleField.getValue(), IncorrectDataFormat);
}

TEST(BoolField_getValue_FieldConvertError){
  BoolField boolField(1);
  CHECK_THROW(boolField.getValue(), IncorrectDataFormat);
}

TEST(UtcTimeStampField_getValue_FieldConvertError){
  UtcTimeStampField utcTimeStampField(1);
  utcTimeStampField.setString("1");
  CHECK_THROW(utcTimeStampField.getValue(), IncorrectDataFormat);
}

TEST(StringField_ComparisonIsLessThanOrEqualTo){
  StringField stringField(1, "string");
  CHECK(stringField <= "string");
  CHECK(stringField <= "string_long");
  CHECK(!(stringField <= "str"));
}

}
