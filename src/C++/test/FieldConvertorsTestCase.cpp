/****************************************************************************
** Copyright (c) 2001-2005 quickfixengine.org  All rights reserved.
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

#include "FieldConvertorsTestCase.h"
#include "Field.h"

namespace FIX
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

void FieldConvertorsTestCase::emptyConvert::onRun( void*& )
{
  assert( StringConvertor::convert( "hello" ) == "hello" );
}

void FieldConvertorsTestCase::integerConvertTo::onRun( void*& )
{
  assert( IntConvertor::convert( 123 ) == "123" );
}

void FieldConvertorsTestCase::integerConvertFrom::onRun( void*& )
{
  assert( IntConvertor::convert( "123" ) == 123 );

  try
  {
    IntConvertor::convert( "abc" );
    assert( false );
  }
  catch ( FieldConvertError& ) {}

  try
  {
    IntConvertor::convert( "123.4" );
    assert( false );
  }
  catch ( FieldConvertError& ) {}

  try
  {
    IntConvertor::convert( "+200" );
    assert( false );
  }
  catch ( FieldConvertError& ) {}}

void FieldConvertorsTestCase::doubleConvertTo::onRun( void*& )
{
  assert( DoubleConvertor::convert( 45.32 ) == "45.32" );
  assert( DoubleConvertor::convert( 45 ) == "45" );
  assert( DoubleConvertor::convert( 0.0 ) == "0" );
  assert( DoubleConvertor::convert( 0.00001 ) == "0.00001" );
}

void FieldConvertorsTestCase::doubleConvertFrom::onRun( void*& )
{
  assert( DoubleConvertor::convert( "45.32" ) == 45.32 );
  assert( DoubleConvertor::convert( "45.3200" ) == 45.32 );
  assert( DoubleConvertor::convert( "0.00340244000" ) == 0.00340244 );
  assert( DoubleConvertor::convert( "12.000000000001" )
          == 12.000000000001 );
  assert( DoubleConvertor::convert( "0.0" ) == 0.0 );
  assert( DoubleConvertor::convert( "0045.32" ) == 45.32 );
  assert( DoubleConvertor::convert( "0." ) == 0.0 );
  assert( DoubleConvertor::convert( ".0" ) == 0.0 );
  assert( DoubleConvertor::convert( "000.06" ) == 0.06 );
  assert( DoubleConvertor::convert( "0.0600" ) == 0.06 );
  assert( DoubleConvertor::convert( "0.00001" ) == 0.00001 );

  try
  {
    DoubleConvertor::convert( "abc" );
    assert( false );
  }
  catch ( FieldConvertError& ) {}

  try
  {
    DoubleConvertor::convert( "123.A" );
    assert( false );
  }
  catch ( FieldConvertError& ) {}

  try
  {
    DoubleConvertor::convert( "123.45.67" );
    assert( false );
  }
  catch ( FieldConvertError& ) {}

  try
  {
    DoubleConvertor::convert( "." );
    assert( false );
  }
  catch ( FieldConvertError& ) {}}

void FieldConvertorsTestCase::charConvertTo::onRun( void*& )
{
  assert( CharConvertor::convert( 'a' ) == "a" );
  assert( CharConvertor::convert( '1' ) == "1" );
  assert( CharConvertor::convert( 'F' ) == "F" );
}

void FieldConvertorsTestCase::charConvertFrom::onRun( void*& )
{
  assert( CharConvertor::convert( "a" ) == 'a' );
  assert( CharConvertor::convert( "1" ) == '1' );
  assert( CharConvertor::convert( "F" ) == 'F' );
}

void FieldConvertorsTestCase::streamConvertTo::onRun( void*& )
{}

void FieldConvertorsTestCase::streamConvertFrom::onRun( void*& )
{}

void FieldConvertorsTestCase::booleanConvertTo::onRun( void*& )
{
  assert( BoolConvertor::convert( true ) == "Y" );
  assert( BoolConvertor::convert( false ) == "N" );
}

void FieldConvertorsTestCase::booleanConvertFrom::onRun( void*& )
{
  assert( BoolConvertor::convert( std::string( "Y" ) ) == true );
  assert( BoolConvertor::convert( std::string( "N" ) ) == false );

  try
  {
    BoolConvertor::convert( std::string( "D" ) );
    assert( false );
  }
  catch ( FieldConvertError& ) {}}

void FieldConvertorsTestCase::utcTimeStampConvertTo::onRun( void*& )
{
  UtcTimeStamp input;
  input.setHMS( 12, 5, 6, 555 );
  input.setYMD( 2000, 4, 26 );
  assert( UtcTimeStampConvertor::convert( input ) == "20000426-12:05:06" );
  assert( UtcTimeStampConvertor::convert( input,true ) == "20000426-12:05:06.555" );
}

void FieldConvertorsTestCase::utcTimeStampConvertFrom::onRun( void*& )
{
  UtcTimeStamp result = UtcTimeStampConvertor::convert
                        ( std::string( "20000426-12:05:06.555" ) );
  assert( result.getHour() == 12 );
  assert( result.getMinute() == 5 );
  assert( result.getSecond() == 6 );
  assert( result.getMillisecond() == 555 );
  assert( result.getYear() == 2000 );
  assert( result.getMonth() == 4 );
  assert( result.getDate() == 26 );

  UtcTimeStamp result2 = UtcTimeStampConvertor::convert
                         ( std::string( "20000426-12:05:06.555" ), true );
  assert( result2.getHour() == 12 );
  assert( result2.getMinute() == 5 );
  assert( result2.getSecond() == 6 );
  assert( result2.getMillisecond() == 555 );
  assert( result2.getYear() == 2000 );
  assert( result2.getMonth() == 4 );
  assert( result2.getDate() == 26 );
  // assert( result2.getYearDay() == 117 );
}

void FieldConvertorsTestCase::utcTimeOnlyConvertTo::onRun( void*& )
{
  UtcTimeOnly input;
  input.setHMS( 12, 5, 6, 555 );
  assert( UtcTimeOnlyConvertor::convert( input ) == "12:05:06" );
  assert( UtcTimeOnlyConvertor::convert( input,true ) == "12:05:06.555" );
}

void FieldConvertorsTestCase::utcTimeOnlyConvertFrom::onRun( void*& )
{
  UtcTimeOnly result = UtcTimeOnlyConvertor::convert
                       ( std::string( "12:05:06.555" ) );
  assert( result.getHour() == 12 );
  assert( result.getMinute() == 5 );
  assert( result.getSecond() == 6 );
  assert( result.getMillisecond() == 555 );
}

void FieldConvertorsTestCase::utcDateConvertTo::onRun( void*& )
{
  UtcDate input;
  input.setYMD( 2000, 4, 26 );
  assert( UtcDateConvertor::convert( input ) == "20000426" );
}

void FieldConvertorsTestCase::utcDateConvertFrom::onRun( void*& )
{
  UtcDate result = UtcDateConvertor::convert
                   ( std::string( "20000426" ) );
  assert( result.getYear() == 2000 );
  assert( result.getMonth() == 4 );
  assert( result.getDate() == 26 );
  //assert( result.getYearDay() == 117 );
}

void FieldConvertorsTestCase::checkSumConvertTo::onRun( void*& )
{
  assert( CheckSumConvertor::convert( 0 ) == "000" );
  assert( CheckSumConvertor::convert( 5 ) == "005" );
  assert( CheckSumConvertor::convert( 12 ) == "012" );
  assert( CheckSumConvertor::convert( 234 ) == "234" );

  try{ CheckSumConvertor::convert( -1 ); assert( false ); }
  catch ( FieldConvertError& ) {}
  try{ CheckSumConvertor::convert( 256 ); assert( false ); }
  catch ( FieldConvertError& ) {}}
}
