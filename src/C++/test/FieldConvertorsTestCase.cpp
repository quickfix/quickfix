/* ====================================================================
* The QuickFIX Software License, Version 1.0
*
* Copyright (c) 2001 ThoughtWorks, Inc.  All rights
* reserved.
*
* Redistribution and use in source and binary forms, with or without
* modification, are permitted provided that the following conditions
* are met:
*
* 1. Redistributions of source code must retain the above copyright
*    notice, this list of conditions and the following disclaimer.
*
* 2. Redistributions in binary form must reproduce the above copyright
*    notice, this list of conditions and the following disclaimer in
*    the documentation and/or other materials provided with the
*    distribution.
*
* 3. The end-user documentation included with the redistribution,
*    if any, must include the following acknowledgment:
*       "This product includes software developed by
*        ThoughtWorks, Inc. (http://www.thoughtworks.com/)."
*    Alternately, this acknowledgment may appear in the software itself,
*    if and wherever such third-party acknowledgments normally appear.
*
* 4. The names "QuickFIX" and "ThoughtWorks, Inc." must
*    not be used to endorse or promote products derived from this
*    software without prior written permission. For written
*    permission, please contact quickfix-users@lists.sourceforge.net.
*
* 5. Products derived from this software may not be called "QuickFIX",
*    nor may "QuickFIX" appear in their name, without prior written
*    permission of ThoughtWorks, Inc.
*
* THIS SOFTWARE IS PROVIDED ``AS IS'' AND ANY EXPRESSED OR IMPLIED
* WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE IMPLIED WARRANTIES
* OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE ARE
* DISCLAIMED.  IN NO EVENT SHALL THOUGHTWORKS INC OR
* ITS CONTRIBUTORS BE LIABLE FOR ANY DIRECT, INDIRECT, INCIDENTAL,
* SPECIAL, EXEMPLARY, OR CONSEQUENTIAL DAMAGES (INCLUDING, BUT NOT
* LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS OR SERVICES; LOSS OF
* USE, DATA, OR PROFITS; OR BUSINESS INTERRUPTION) HOWEVER CAUSED AND
* ON ANY THEORY OF LIABILITY, WHETHER IN CONTRACT, STRICT LIABILITY,
* OR TORT (INCLUDING NEGLIGENCE OR OTHERWISE) ARISING IN ANY WAY OUT
* OF THE USE OF THIS SOFTWARE, EVEN IF ADVISED OF THE POSSIBILITY OF
* SUCH DAMAGE.
* ====================================================================
*/

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
USER_DEFINE_STRING( TestField1, 1 )
USER_DEFINE_CHAR( TestField2, 2 )
USER_DEFINE_PRICE( TestField3, 3 )
USER_DEFINE_INT( TestField4, 4 )
USER_DEFINE_AMT( TestField5, 5 )
USER_DEFINE_QTY( TestField6, 6 )
USER_DEFINE_CURRENCY( TestField7, 7 )
USER_DEFINE_MULTIPLEVALUESTRING( TestField8, 8 )
USER_DEFINE_EXCHANGE( TestField9, 9 )
USER_DEFINE_UTCTIMESTAMP( TestField10, 10 )
USER_DEFINE_BOOLEAN( TestField11, 11 )
USER_DEFINE_LOCALMKTDATE( TestField12, 12 )
USER_DEFINE_DATA( TestField13, 13 )
USER_DEFINE_FLOAT( TestField14, 14 )
USER_DEFINE_PRICEOFFSET( TestField15, 15 )
USER_DEFINE_MONTHYEAR( TestField16, 16 )
USER_DEFINE_DAYOFMONTH( TestField17, 17 )
USER_DEFINE_UTCDATE( TestField18, 18 )
USER_DEFINE_UTCTIMEONLY( TestField19, 19 )

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
  input.setHour( 12 );
  input.setMinute( 5 );
  input.setSecond( 6 );
  input.setMillisecond( 555 );
  input.setYear( 2000 );
  input.setMonth( 4 );
  input.setDate( 26 );
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
  assert( result.getYday() == 117 );
}

void FieldConvertorsTestCase::utcTimeOnlyConvertTo::onRun( void*& )
{
  UtcTimeOnly input;
  input.setHour( 12 );
  input.setMinute( 5 );
  input.setSecond( 6 );
  input.setMillisecond( 555 );
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
  input.setYear( 2000 );
  input.setMonth( 4 );
  input.setDate( 26 );
  assert( UtcDateConvertor::convert( input ) == "20000426" );
}

void FieldConvertorsTestCase::utcDateConvertFrom::onRun( void*& )
{
  UtcDate result = UtcDateConvertor::convert
                   ( std::string( "20000426" ) );
  assert( result.getYear() == 2000 );
  assert( result.getMonth() == 4 );
  assert( result.getDate() == 26 );
  assert( result.getYday() == 117 );
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
