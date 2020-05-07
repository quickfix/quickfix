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

TEST(FieldBaseTests, set)
{
  FieldBase object( 12, "VALUE" );
  object.setString( "VALUE" );
  ASSERT_EQ( "12=VALUE\001", object.getFixString() );
  ASSERT_EQ( 542, object.getTotal() );
  ASSERT_EQ( 9lu, object.getLength() );
  object.setString( "VALUF" );
  ASSERT_EQ( "12=VALUF\001", object.getFixString() );
  ASSERT_EQ( 543, object.getTotal() );
  ASSERT_EQ( 9lu, object.getLength() );
  object.setTag( 13 );
  ASSERT_EQ( "13=VALUF\001", object.getFixString() );
  ASSERT_EQ( 544, object.getTotal() );
  ASSERT_EQ( 9lu, object.getLength() );
}

TEST(FieldBaseTests, CharField_getValue_FieldConvertError){
  CharField charField(1);
  ASSERT_THROW(charField.getValue(), IncorrectDataFormat);
}

TEST(FieldBaseTests, DoubleField_getValue_FieldConvertError){
  DoubleField doubleField(1);
  ASSERT_THROW(doubleField.getValue(), IncorrectDataFormat);
}

TEST(FieldBaseTests, BoolField_getValue_FieldConvertError){
  BoolField boolField(1);
  ASSERT_THROW(boolField.getValue(), IncorrectDataFormat);
}

TEST(FieldBaseTests, UtcTimeStampField_getValue_FieldConvertError){
  UtcTimeStampField utcTimeStampField(1);
  utcTimeStampField.setString("1");
  ASSERT_THROW(utcTimeStampField.getValue(), IncorrectDataFormat);
}

TEST(FieldBaseTests, StringField_ComparisonIsLessThanOrEqualTo){
  StringField stringField(1, "string");
  ASSERT_TRUE(stringField <= "string");
  ASSERT_TRUE(stringField <= "string_long");
  ASSERT_TRUE(!(stringField <= "str"));
}
