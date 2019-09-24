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
#include <FieldNumbers.h>
#include <Values.h>
#include <fix40/TestRequest.h>
#include <fix42/TestRequest.h>
#include <fix42/NewOrderSingle.h>
#include <fix40/NewOrderSingle.h>
#include <fix44/NewOrderList.h>
#include <fix44/MarketDataRequest.h>
#include <fix44/MarketDataSnapshotFullRefresh.h>
#include <fstream>
#include <iostream>

#include "PUGIXML_DOMDocument.h"

using namespace FIX;

SUITE(DataDictionaryTests)
{

USER_DEFINE_STRING( TooHigh, 501 );

TEST(addMsgType)
{
  DataDictionary object;
  CHECK( !object.isMsgType( "A" ) );
  object.addMsgType( "A" );
  CHECK( object.isMsgType( "A" ) );
}

TEST(addMsgField)
{
  DataDictionary object;
  CHECK( !object.isMsgField( "A", 10 ) );
  CHECK( !object.isMsgField( "Z", 50 ) );
  object.addMsgField( "A", 10 );
  object.addMsgField( "Z", 50 );
  CHECK( object.isMsgField( "A", 10 ) );
  CHECK( object.isMsgField( "Z", 50 ) );
  CHECK( !object.isMsgField( "A", 50 ) );
  CHECK( !object.isMsgField( "Z", 10 ) );
}

TEST(addHeaderField)
{
  DataDictionary object;
  CHECK( !object.isHeaderField( 56 ) );
  CHECK( !object.isHeaderField( 49 ) );
  object.addHeaderField( 56, true );
  object.addHeaderField( 49, true );
  CHECK( object.isHeaderField( 56 ) );
  CHECK( object.isHeaderField( 49 ) );
}

TEST(addTrailerField)
{
  DataDictionary object;
  CHECK( !object.isTrailerField( 10 ) );
  object.addTrailerField( 10, true );
  CHECK( object.isTrailerField( 10 ) );
}

TEST(addFieldType)
{
  DataDictionary object;
  TYPE::Type type;
  CHECK( !object.getFieldType( 14, type ) );
  CHECK( !object.getFieldType( 23, type ) );

  object.addFieldType( 14, TYPE::String );
  object.addFieldType( 23, TYPE::Char );

  CHECK( object.getFieldType( 14, type ) );
  CHECK_EQUAL( TYPE::String, type );
  CHECK( object.getFieldType( 23, type ) );
  CHECK_EQUAL( TYPE::Char, type );
}

TEST(addRequiredField)
{
  DataDictionary object;
  CHECK( !object.isRequiredField( "A", 10 ) );
  CHECK( !object.isRequiredField( "Z", 50 ) );
  object.addRequiredField( "A", 10 );
  object.addRequiredField( "Z", 50 );
  CHECK( object.isRequiredField( "A", 10 ) );
  CHECK( object.isRequiredField( "Z", 50 ) );
  CHECK( !object.isRequiredField( "A", 50 ) );
  CHECK( !object.isRequiredField( "Z", 10 ) );
}

TEST(addFieldValue)
{
  DataDictionary object;
  CHECK( !object.isFieldValue( 12, "f" ) );
  CHECK( !object.isFieldValue( 12, "g" ) );
  CHECK( !object.isFieldValue( 15, "1" ) );
  CHECK( !object.isFieldValue( 18, "2" ) );
  CHECK( !object.isFieldValue( 167, "FUT" ) );

  object.addFieldValue( 12, "f" );
  object.addFieldValue( 12, "g" );
  object.addFieldValue( 15, "1" );
  object.addFieldValue( 18, "2" );
  object.addFieldValue( 167, "FUT" );

  CHECK( object.isFieldValue( 12, "f" ) );
  CHECK( object.isFieldValue( 12, "g" ) );
  CHECK( object.isFieldValue( 15, "1" ) );
  CHECK( object.isFieldValue( 18, "2" ) );
  CHECK( object.isFieldValue( 167, "FUT" ) );
}

TEST(addGroup)
{
  DataDictionary object;
  object.setVersion( "FIX.4.2" );

  DataDictionary group1;
  group1.addMsgType( "1" );
  DataDictionary group2;
  group2.addMsgType( "2" );
  DataDictionary group3;
  group3.addMsgType( "3" );

  object.addGroup( "A", 100, 101, group1 );
  object.addGroup( "A", 200, 201, group2 );
  object.addGroup( "A", 300, 301, group3 );

  int delim;
  const DataDictionary* pDD = 0;

  CHECK( object.getGroup( "A", 100, delim, pDD ) );
  CHECK_EQUAL( 101, delim );
  CHECK( pDD->isMsgType( "1" ) );

  CHECK( object.getGroup( "A", 200, delim, pDD ) );
  CHECK_EQUAL( 201, delim );
  CHECK( pDD->isMsgType( "2" ) );

  CHECK( object.getGroup( "A", 300, delim, pDD ) );
  CHECK_EQUAL( 301, delim );
  CHECK( pDD->isMsgType( "3" ) );
}

TEST(addFieldName)
{
  DataDictionary object;
  object.setVersion( "FIX.4.2" );

  object.addFieldName( 1, "Account" );
  object.addFieldName( 11, "ClOrdID" );
  object.addFieldName( 8, "BeginString" );

  std::string name;
  int field;
  CHECK( object.getFieldName( 1, name ) );
  CHECK_EQUAL( "Account", name );
  CHECK( object.getFieldTag( name, field ) );
  CHECK_EQUAL( 1, field );
  CHECK( object.getFieldName( 11, name ) );
  CHECK_EQUAL( "ClOrdID", name );
  CHECK( object.getFieldTag( name, field ) );
  CHECK_EQUAL( 11, field );
  CHECK( object.getFieldName( 8, name ) );
  CHECK_EQUAL( "BeginString", name );
  CHECK( object.getFieldTag( name, field ) );
  CHECK_EQUAL( 8, field );
}

TEST(addValueName)
{
  DataDictionary object;
  object.setVersion( "FIX.4.2" );

  object.addValueName( 12, "0", "VALUE_12_0" );
  object.addValueName( 12, "B", "VALUE_12_B" );
  object.addValueName( 23, "BOO", "VALUE_23_BOO" );

  std::string name;
  CHECK( object.getValueName( 12, "0", name ) );
  CHECK_EQUAL( "VALUE_12_0", name );
  CHECK( object.getValueName( 12, "B", name ) );
  CHECK_EQUAL( "VALUE_12_B", name );
  CHECK( object.getValueName( 23, "BOO", name ) );
  CHECK_EQUAL( "VALUE_23_BOO", name );
}

struct checkValidTagNumberFixture
{
  checkValidTagNumberFixture()
  {
    object.setVersion( BeginString_FIX40 );
    object.addField( FIELD::BeginString );
    object.addField( FIELD::BodyLength );
    object.addField( FIELD::MsgType );
    object.addField( FIELD::CheckSum );
    object.addField( FIELD::TestReqID );
    object.addMsgType( MsgType_TestRequest );
    object.addMsgField( MsgType_TestRequest, FIELD::TestReqID );
  }

  DataDictionary object;
};

TEST_FIXTURE(checkValidTagNumberFixture, checkValidTagNumber)
{
  object.checkFieldsOutOfOrder(true);
  TestReqID testReqID( "1" );
  FIX40::TestRequest message( testReqID );
  message.setField( TooHigh( "value" ) );
  CHECK_THROW( object.validate( message ), InvalidTagNumber );

  object.allowUnknownMsgFields( true );
  object.validate( message );
  object.allowUnknownMsgFields( false );

  object.addField( 501 );
  object.addMsgField( MsgType_TestRequest, 501 );
  object.validate( message );

  message.setField( FIELD::UserMin, "value" );
  CHECK_THROW( object.validate( message ), InvalidTagNumber );

  object.checkUserDefinedFields( false );
  object.validate( message );
}

TEST(checkHasValue)
{
  DataDictionary object;
  object.checkFieldsHaveValues(true);
  Message testReqID( "8=FIX.4.2\0019=12\00135=1\001112=\00110=007\001", false );
  FIX42::TestRequest message( testReqID );

  CHECK_THROW( object.validate( message ), NoTagValue );
}

struct checkIsInMessageFixture
{
  checkIsInMessageFixture()
  {
    object.setVersion( BeginString_FIX40 );
    object.addField( FIELD::BeginString );
    object.addField( FIELD::BodyLength );
    object.addField( FIELD::MsgType );
    object.addField( FIELD::CheckSum );
    object.addField( FIELD::TestReqID );
    object.addField( FIELD::Symbol );
    object.addMsgType( MsgType_TestRequest );
    object.addMsgField( MsgType_TestRequest, FIELD::TestReqID );
  }

  DataDictionary object;
};

TEST_FIXTURE(checkIsInMessageFixture, checkIsInMessage)
{
  TestReqID testReqID( "1" );

  FIX40::TestRequest message( testReqID );
  object.validate( message );

  message.setField( Symbol( "MSFT" ) );
  CHECK_THROW( object.validate( message ), TagNotDefinedForMessage );
}

struct checkHasRequiredFixture
{
  checkHasRequiredFixture()
  {
    object.setVersion( BeginString_FIX40 );
    object.addField( FIELD::BeginString );
    object.addField( FIELD::BodyLength );
    object.addField( FIELD::MsgType );
    object.addField( FIELD::SenderCompID );
    object.addField( FIELD::TargetCompID );
    object.addField( FIELD::SignatureLength );
    object.addHeaderField( FIELD::SenderCompID, true );
    object.addHeaderField( FIELD::TargetCompID, false );
    object.addField( FIELD::CheckSum );
    object.addField( FIELD::TestReqID );
    object.addMsgType( MsgType_TestRequest );
    object.addMsgField( MsgType_TestRequest, FIELD::TestReqID );
    object.addRequiredField( MsgType_TestRequest, FIELD::TestReqID );
    object.addTrailerField( FIELD::SignatureLength, true );

  }

  DataDictionary object;
};

TEST_FIXTURE(checkHasRequiredFixture, checkHasRequired)
{
  FIX40::TestRequest message;
  message.getTrailer().setField( SignatureLength( 1 ) );

  CHECK_THROW( object.validate( message ), RequiredTagMissing );

  message.getHeader().setField( SenderCompID( "SENDER" ) );
  CHECK_THROW( object.validate( message ), RequiredTagMissing );

  message.setField( TestReqID( "1" ) );
  object.validate( message );

  message.getHeader().removeField( FIELD::SenderCompID );
  message.setField( SenderCompID( "SENDER" ) );
  CHECK_THROW( object.validate( message ), RequiredTagMissing );

  message.getHeader().setField( SenderCompID( "SENDER" ) );
  message.getTrailer().removeField( FIELD::SignatureLength );
  CHECK_THROW( object.validate( message ), RequiredTagMissing );
}

struct checkValidFormatFixture
{
  checkValidFormatFixture()
  {
    object.setVersion( BeginString_FIX40 );
    object.addField( FIELD::BeginString );
    object.addField( FIELD::BodyLength );
    object.addField( FIELD::MsgType );
    object.addField( FIELD::CheckSum );
    object.addField( FIELD::TestReqID );
    object.addMsgType( MsgType_TestRequest );
  }

  DataDictionary object;
};

TEST_FIXTURE( checkValidFormatFixture, checkValidFormat_Int_Exception )
{
  object.addMsgField( MsgType_TestRequest, FIELD::TestReqID );
  object.addFieldType( FIELD::TestReqID, TYPE::Int );

  FIX40::TestRequest message;
  message.setField( TestReqID( "+200" ) );
  CHECK_THROW( object.validate( message ), IncorrectDataFormat );
}

TEST_FIXTURE( checkValidFormatFixture, checkValidFormat_Char_Exception )
{
  object.addMsgField( MsgType_TestRequest, FIELD::TestReqID );
  object.addFieldType( FIELD::TestReqID, TYPE::Char );

  FIX40::TestRequest message;
  message.setField( TestReqID( "ERROR" ) );
  CHECK_THROW( object.validate( message ), IncorrectDataFormat );
}

TEST_FIXTURE( checkValidFormatFixture, checkValidFormat_Price_Exception )
{
  object.addMsgField( MsgType_TestRequest, FIELD::TestReqID );
  object.addFieldType( FIELD::TestReqID, TYPE::Price );

  FIX40::TestRequest message;
  message.setField( TestReqID( "ERROR" ) );
  CHECK_THROW( object.validate( message ), IncorrectDataFormat );
}

TEST_FIXTURE( checkValidFormatFixture, checkValidFormat_Amt_Exception )
{
  object.addMsgField( MsgType_TestRequest, FIELD::TestReqID );
  object.addFieldType( FIELD::TestReqID, TYPE::Amt );

  FIX40::TestRequest message;
  message.setField( TestReqID( "ERROR" ) );
  CHECK_THROW( object.validate( message ), IncorrectDataFormat );
}

TEST_FIXTURE( checkValidFormatFixture, checkValidFormat_Qty_Exception )
{
  object.addMsgField( MsgType_TestRequest, FIELD::TestReqID );
  object.addFieldType( FIELD::TestReqID, TYPE::Qty );

  FIX40::TestRequest message;
  message.setField( TestReqID( "ERROR" ) );
  CHECK_THROW( object.validate( message ), IncorrectDataFormat );
}

TEST_FIXTURE( checkValidFormatFixture, checkValidFormat_UtcTimeStamp_Exception )
{
  object.addMsgField( MsgType_TestRequest, FIELD::TestReqID );
  object.addFieldType( FIELD::TestReqID, TYPE::UtcTimeStamp );

  FIX40::TestRequest message;
  message.setField( TestReqID( "ERROR" ) );
  CHECK_THROW( object.validate( message ), IncorrectDataFormat );
}

TEST_FIXTURE( checkValidFormatFixture, checkValidFormat_Boolean_Exception )
{
  object.addMsgField( MsgType_TestRequest, FIELD::TestReqID );
  object.addFieldType( FIELD::TestReqID, TYPE::Boolean );

  FIX40::TestRequest message;
  message.setField( TestReqID( "ERROR" ) );
  CHECK_THROW( object.validate( message ), IncorrectDataFormat );
}

TEST_FIXTURE( checkValidFormatFixture, checkValidFormat_Float_Exception )
{
  object.addMsgField( MsgType_TestRequest, FIELD::TestReqID );
  object.addFieldType( FIELD::TestReqID, TYPE::Float );

  FIX40::TestRequest message;
  message.setField( TestReqID( "ERROR" ) );
  CHECK_THROW( object.validate( message ), IncorrectDataFormat );
}

TEST_FIXTURE( checkValidFormatFixture, checkValidFormat_UtcDate_Exception )
{
  object.addMsgField( MsgType_TestRequest, FIELD::TestReqID );
  object.addFieldType( FIELD::TestReqID, TYPE::UtcDate );

  FIX40::TestRequest message;
  message.setField( TestReqID( "ERROR" ) );
  CHECK_THROW( object.validate( message ), IncorrectDataFormat );
}

TEST_FIXTURE( checkValidFormatFixture, checkValidFormat_UtcTimeOnly_Exception )
{
  object.addMsgField( MsgType_TestRequest, FIELD::TestReqID );
  object.addFieldType( FIELD::TestReqID, TYPE::UtcTimeOnly );

  FIX40::TestRequest message;
  message.setField( TestReqID( "ERROR" ) );
  CHECK_THROW( object.validate( message ), IncorrectDataFormat );
}

TEST_FIXTURE( checkValidFormatFixture, checkValidFormat_NumInGroup_Exception )
{
  object.addMsgField( MsgType_TestRequest, FIELD::TestReqID );
  object.addFieldType( FIELD::TestReqID, TYPE::NumInGroup );

  FIX40::TestRequest message;
  message.setField( TestReqID( "ERROR" ) );
  CHECK_THROW( object.validate( message ), IncorrectDataFormat );
}

TEST_FIXTURE( checkValidFormatFixture, checkValidFormat_Percentage_Exception)
{
  object.addMsgField( MsgType_TestRequest, FIELD::TestReqID );
  object.addFieldType( FIELD::TestReqID, TYPE::Percentage );

  FIX40::TestRequest message;
  message.setField( TestReqID( "ERROR" ) );
  CHECK_THROW( object.validate( message ), IncorrectDataFormat );
}

TEST_FIXTURE( checkValidFormatFixture, checkValidFormat_SeqNum_Exception)
{
  object.addMsgField( MsgType_TestRequest, FIELD::TestReqID );
  object.addFieldType( FIELD::TestReqID, TYPE::SeqNum );

  FIX40::TestRequest message;
  message.setField( TestReqID( "ERROR" ) );
  CHECK_THROW( object.validate( message ), IncorrectDataFormat );
}

TEST_FIXTURE( checkValidFormatFixture, checkValidFormat_Length_Exception)
{
  object.addMsgField( MsgType_TestRequest, FIELD::TestReqID );
  object.addFieldType( FIELD::TestReqID, TYPE::Length );

  FIX40::TestRequest message;
  message.setField( TestReqID( "ERROR" ) );
  CHECK_THROW( object.validate( message ), IncorrectDataFormat );
}

TEST_FIXTURE( checkValidFormatFixture, checkValidFormat_AllSetFieldsValid)
{
  object.addField( 5000 );
  object.addField( 5001 );
  object.addField( 5002 );
  object.addField( 5003 );
  object.addField( 5004 );
  object.addField( 5005 );
  object.addField( 5006 );
  object.addField( 5007 );
  object.addField( 5008 );
  object.addField( 5009 );
  object.addField( 5010 );
  object.addField( 5011 );
  object.addField( 5012 );
  object.addField( 5013 );
  object.addField( 5014 );
  object.addField( 5015 );
  object.addField( 5016 );
  object.addField( 5017 );
  object.addField( 5018 );
  object.addField( 5019 );
  object.addField( 5020 );
  object.addField( 5021 );
  object.addField( 5022 );
  object.addField( 5023 );
  object.addField( 5024 );
  object.addField( 5025 );
  object.addField( 5026 );
  object.addField( 5027 );
  object.addField( 5028 );
  object.addField( 5029 );

  object.addMsgField( MsgType_TestRequest, 5000 );
  object.addMsgField( MsgType_TestRequest, 5001 );
  object.addMsgField( MsgType_TestRequest, 5002 );
  object.addMsgField( MsgType_TestRequest, 5003 );
  object.addMsgField( MsgType_TestRequest, 5004 );
  object.addMsgField( MsgType_TestRequest, 5005 );
  object.addMsgField( MsgType_TestRequest, 5006 );
  object.addMsgField( MsgType_TestRequest, 5007 );
  object.addMsgField( MsgType_TestRequest, 5008 );
  object.addMsgField( MsgType_TestRequest, 5009 );
  object.addMsgField( MsgType_TestRequest, 5010 );
  object.addMsgField( MsgType_TestRequest, 5011 );
  object.addMsgField( MsgType_TestRequest, 5012 );
  object.addMsgField( MsgType_TestRequest, 5013 );
  object.addMsgField( MsgType_TestRequest, 5014 );
  object.addMsgField( MsgType_TestRequest, 5015 );
  object.addMsgField( MsgType_TestRequest, 5016 );
  object.addMsgField( MsgType_TestRequest, 5017 );
  object.addMsgField( MsgType_TestRequest, 5018 );
  object.addMsgField( MsgType_TestRequest, 5019 );
  object.addMsgField( MsgType_TestRequest, 5020 );
  object.addMsgField( MsgType_TestRequest, 5021 );
  object.addMsgField( MsgType_TestRequest, 5022 );
  object.addMsgField( MsgType_TestRequest, 5023 );
  object.addMsgField( MsgType_TestRequest, 5024 );
  object.addMsgField( MsgType_TestRequest, 5025 );
  object.addMsgField( MsgType_TestRequest, 5026 );
  object.addMsgField( MsgType_TestRequest, 5027 );
  object.addMsgField( MsgType_TestRequest, 5028 );
  object.addMsgField( MsgType_TestRequest, 5029 );


  object.addFieldType( 5000, TYPE::String );
  object.addFieldType( 5001, TYPE::MultipleValueString );
  object.addFieldType( 5002, TYPE::MultipleStringValue );
  object.addFieldType( 5003, TYPE::MultipleCharValue );
  object.addFieldType( 5004, TYPE::Exchange );
  object.addFieldType( 5005, TYPE::LocalMktDate );
  object.addFieldType( 5006, TYPE::Data );
  object.addFieldType( 5007, TYPE::MonthYear );
  object.addFieldType( 5008, TYPE::DayOfMonth );
  object.addFieldType( 5009, TYPE::Country );
  object.addFieldType( 5010, TYPE::TzTimeOnly );
  object.addFieldType( 5011, TYPE::TzTimeStamp );
  object.addFieldType( 5012, TYPE::XmlData );
  object.addFieldType( 5013, TYPE::Language );
  object.addFieldType( 5014, TYPE::Char );
  object.addFieldType( 5015, TYPE::Price );
  object.addFieldType( 5016, TYPE::Int );
  object.addFieldType( 5017, TYPE::Amt );
  object.addFieldType( 5018, TYPE::Qty );
  object.addFieldType( 5019, TYPE::Currency );
  object.addFieldType( 5020, TYPE::UtcTimeStamp );
  object.addFieldType( 5021, TYPE::Boolean );
  object.addFieldType( 5022, TYPE::Float );
  object.addFieldType( 5023, TYPE::PriceOffset );
  object.addFieldType( 5024, TYPE::UtcDate );
  object.addFieldType( 5025, TYPE::UtcTimeOnly );
  object.addFieldType( 5026, TYPE::NumInGroup );
  object.addFieldType( 5027, TYPE::Percentage );
  object.addFieldType( 5028, TYPE::SeqNum );
  object.addFieldType( 5029, TYPE::Length );


  FIX40::TestRequest message;
  message.setField(5000, "String");
  message.setField(5001, "MultipleValueString");
  message.setField(5002, "MultipleStringValue");
  message.setField(5003, "MultipleCharValue");
  message.setField(5004, "Exchange");
  message.setField(5005, "5/09/2019");
  message.setField(5006, "Data");
  message.setField(5007, "01");
  message.setField(5008, "19");
  message.setField(5009, "US");
  message.setField(5010, "10:10:10.10");
  message.setField(5011, "123456789");
  message.setField(5012, "<xmldata>data</data>");
  message.setField(5013, "English");
  message.setField(5014, "C");
  message.setField(5015, "1.00");
  message.setField(5016, "100");
  message.setField(5017, "100");
  message.setField(5018, "100");
  message.setField(5019, "USD");
  message.setField(5020, "20000426-12:05:06");
  message.setField(5021, "Y");
  message.setField(5022, "1.23");
  message.setField(5023, "1");
  message.setField(5024, "20000426");
  message.setField(5025, "12:05:06");
  message.setField(5026, "5");
  message.setField(5027, "0.0");
  message.setField(5028, "1");
  message.setField(5029, "1");

  try{
    object.validate( message );
  }
  catch ( IncorrectDataFormat& e){
    CHECK(false);
    throw e;
  }
}


struct checkValueFixture
{
  checkValueFixture()
  {
    object.setVersion( BeginString_FIX40 );
    object.addField( FIELD::BeginString );
    object.addField( FIELD::BodyLength );
    object.addField( FIELD::MsgType );
    object.addField( FIELD::CheckSum );
    object.addField( FIELD::OrdType );
    object.addField( FIELD::OrderRestrictions );
    object.addMsgType( MsgType_NewOrderSingle );
    object.addMsgField( MsgType_NewOrderSingle, FIELD::OrdType );
    object.addMsgField( MsgType_NewOrderSingle, FIELD::OrderRestrictions );
    object.addFieldType( FIELD::OrdType, TYPE::Char );
    object.addFieldValue( FIELD::OrdType, "1" );
    object.addFieldType( FIELD::OrderRestrictions, TYPE::MultipleValueString );
    object.addFieldValue( FIELD::OrderRestrictions, "1" );
    object.addFieldValue( FIELD::OrderRestrictions, "2" );
    object.addFieldValue( FIELD::OrderRestrictions, "3" );
  }

  DataDictionary object;
};

TEST_FIXTURE( checkValueFixture, checkValue )
{
  DataDictionary object;
  FIX40::NewOrderSingle message;
  message.setField( OrdType( '1' ) );
  object.validate( message );

  message.setField( OrdType( '2' ) );
  object.validate( message );

  message.setField( OrdType( '1' ) );
  message.setField( OrderRestrictions("1 2 3") );
  object.validate( message );

  message.setField( OrderRestrictions("1 4 3") );
  object.validate( message );
}

TEST_FIXTURE( checkValueFixture, checkValue_IncorrectTagValue )
{
  FIX40::NewOrderSingle message;
  message.setField(FIELD::OrderRestrictions, "Incorrect");
  CHECK_THROW(object.validate( message ), IncorrectTagValue);
}

TEST( checkRepeatedTag )
{
  DataDictionary object;
  FIX40::NewOrderSingle message;
  message.setField( OrdType('1') );
  message.setField( OrdType('1'), false );
  CHECK_THROW( object.validate(message), RepeatedTag );
}

struct checkGroupCountFixture
{
  checkGroupCountFixture()
  {
    object.setVersion( BeginString_FIX42 );
    object.addField( FIELD::BeginString );
    object.addField( FIELD::BodyLength );
    object.addField( FIELD::MsgType );
    object.addField( FIELD::CheckSum );
    object.addField( FIELD::NoAllocs );
    DataDictionary groupDD;
    groupDD.addField( FIELD::AllocAccount );
    object.addGroup( "D", FIELD::NoAllocs, FIELD::AllocAccount, groupDD );
    object.addMsgType( MsgType_NewOrderSingle );
    object.addMsgField( MsgType_NewOrderSingle, FIELD::NoAllocs );
  }

  DataDictionary object;
};

TEST_FIXTURE( checkGroupCountFixture, checkGroupCount )
{
  FIX42::NewOrderSingle message;
  FIX42::NewOrderSingle::NoAllocs group;
  group.setField( AllocAccount("account") );
  message.addGroup( group );
  message.set( NoAllocs(2) );
  CHECK_THROW( object.validate( message ), RepeatingGroupCountMismatch );
}

TEST( checkGroupRequiredFields )
{
  DataDictionary object( "../spec/FIX44.xml" );
  FIX44::NewOrderList newOrderList;
  newOrderList.setString("8=FIX.4.49=18635=E49=FIXTEST56=TW128=SS134=252=20050225-16:54:3266=WMListOrID000000362394=368=173=111=SE102354=155=IBM67=163=021=381=060=20050225-16:54:3238=1000040=115=USD10=119", false, &object);
  object.validate( newOrderList );

  newOrderList.setString("8=FIX.4.49=15835=E49=FIXTEST56=TW128=SS134=252=20050225-16:54:3266=WMListOrID000000362394=368=173=163=021=381=060=20050225-16:54:3238=1000040=115=USD10=036", false, &object);
  CHECK_THROW( object.validate( newOrderList ), RequiredTagMissing );

  newOrderList.setString("8=FIX.4.49=26935=E49=FIXTEST56=TW128=SS134=252=20050225-16:54:3266=WMListOrID000000362394=368=173=211=SE102354=155=IBM67=163=021=381=060=20050225-16:54:3238=1000040=115=USD11=SE104555=MSFT67=163=021=381=060=20050225-16:54:3238=1000040=115=USD47=A10=109", false, &object);
  CHECK_THROW( object.validate( newOrderList ), RequiredTagMissing );

  FIX44::MarketDataRequest marketDataRequest(
    MDReqID("1"),
    SubscriptionRequestType( SubscriptionRequestType_SNAPSHOT_PLUS_UPDATES ),
    MarketDepth( 9999 ) );

  marketDataRequest.set( MDUpdateType( MDUpdateType_INCREMENTAL_REFRESH ) );
  marketDataRequest.set( AggregatedBook( true ) );
  marketDataRequest.set( MDImplicitDelete( true ) );

  FIX44::MarketDataRequest::NoRelatedSym noRelatedSym;

  noRelatedSym.set( Symbol( "QQQQ" ) );
  marketDataRequest.addGroup( noRelatedSym );

  FIX44::MarketDataRequest::NoMDEntryTypes noMDEntryTypes;

  noMDEntryTypes.set( MDEntryType( MDEntryType_BID ) );
  marketDataRequest.addGroup( noMDEntryTypes );

  noMDEntryTypes.set( MDEntryType( MDEntryType_OFFER ) );
  marketDataRequest.addGroup( noMDEntryTypes );

  noMDEntryTypes.set( MDEntryType( MDEntryType_TRADE ) );
  marketDataRequest.addGroup( noMDEntryTypes );

  object.validate( marketDataRequest );

  noMDEntryTypes.removeField( FIELD::MDEntryType );
  marketDataRequest.addGroup( noMDEntryTypes );
  CHECK_THROW( object.validate( marketDataRequest ), RequiredTagMissing );

  FIX44::MarketDataSnapshotFullRefresh md;
  md.set( MDReqID("1") );
  md.set( Symbol("QQQQ") );

  FIX44::MarketDataSnapshotFullRefresh::NoMDEntries entry;

  entry.set( MDEntryType( MDEntryType_OFFER ) );
  entry.set( MDEntryPx( 41.48 ) );
  entry.set( MDEntrySize( 500 ) );
  md.addGroup( entry );

  entry.set( MDEntryType( MDEntryType_BID ) );
  entry.set( MDEntryPx( 41.2 ) );
  entry.set( MDEntrySize( 300 ) );
  md.addGroup( entry );

  Message message( md.toString(), object );
  object.validate( message );
  //object.validate( md );
}

TEST( readFromFile )
{
  DataDictionary object( "../spec/FIX43.xml" );
  CHECK( object.isHeaderField( 56 ) );
  CHECK( !object.isHeaderField( 38 ) );
  CHECK( !object.isHeaderField( 10 ) );

  CHECK( object.isTrailerField( 10 ) );
  CHECK( !object.isTrailerField( 38 ) );
  CHECK( !object.isTrailerField( 56 ) );

  CHECK( object.isMsgType( "A" ) );
  CHECK( object.isMsgField( "A", 383 ) );

  TYPE::Type type = TYPE::Unknown;
  CHECK( object.getFieldType( 383, type ) );
  CHECK_EQUAL( TYPE::Length, type );

  CHECK( object.isRequiredField( "A", 108 ) );
  CHECK( !object.isRequiredField( "A", 383 ) );
  CHECK( object.isRequiredField( "6", 28 ) );
  CHECK( !object.isRequiredField( "B", 55 ) );

  CHECK( object.isFieldValue( 40, "A" ) );
  CHECK( !object.isFieldValue( 40, "Z" ) );

  std::string name;
  CHECK( object.getFieldName( 1, name ) );
  CHECK_EQUAL( "Account", name );
  CHECK( object.getFieldName( 11, name ) );
  CHECK_EQUAL( "ClOrdID", name );
  CHECK( object.getFieldName( 8, name ) );
  CHECK_EQUAL( "BeginString", name );

  CHECK( object.getValueName( 18, "1", name ) );
  CHECK_EQUAL( "NOTHELD", name );
  CHECK( object.getValueName( 18, "2", name ) );
  CHECK_EQUAL( "WORK", name );
  CHECK( object.getValueName( 18, "W", name ) );
  CHECK_EQUAL( "PEGVWAP", name );

  const DataDictionary* pDD = 0;
  int delim = 0;
  CHECK( object.getGroup( "b", 296, delim, pDD ) );
  CHECK_EQUAL( 302, delim );
  CHECK( pDD->isField( 295 ) );
  CHECK( pDD->isField( 310 ) );
  CHECK( !pDD->isField( 55 ) );
  CHECK( pDD->getGroup( "b", 295, delim, pDD ) );
  CHECK_EQUAL( 299, delim );
  CHECK( pDD->isField( 55 ) );
  CHECK( !pDD->isField( 310 ) );
  CHECK( object.getGroup( "8", 453, delim, pDD ) );
  CHECK_EQUAL( 448, delim );
  CHECK( object.getGroup( "y", 146, delim, pDD ) );
  CHECK_EQUAL( 55, delim );
}

TEST( readFromStream )
{
  std::fstream stream( "../spec/FIX43.xml" );
  DataDictionary object( stream );
}

struct copyFixture
{
  copyFixture()
  {
    object.setVersion( BeginString_FIX40 );
    object.addMsgType( MsgType_NewOrderSingle );
    object.addMsgField( MsgType_NewOrderSingle, FIELD::OrdType );
    object.addFieldType( FIELD::OrdType, TYPE::Char );
    object.addFieldValue( FIELD::OrdType, "1" );

    DataDictionary dataDictionary1;
    dataDictionary1.addFieldType( FIELD::HeartBtInt, TYPE::String );
    DataDictionary dataDictionary2;
    dataDictionary2.addFieldType( FIELD::MsgType, TYPE::Char );
    dataDictionary1.addGroup( "A", 1, 2, dataDictionary2 );
    object.addGroup( "A", 10, 20, dataDictionary1 );
  }

  DataDictionary object;
};

TEST_FIXTURE( copyFixture, copy )
{
  DataDictionary dataDictionary = object;
  TYPE::Type type;
  int delim;

  CHECK_EQUAL( BeginString_FIX40, dataDictionary.getVersion() );
  CHECK( dataDictionary.isMsgType( MsgType_NewOrderSingle ) );
  CHECK( dataDictionary.isMsgField( MsgType_NewOrderSingle, FIELD::OrdType ) );
  CHECK( dataDictionary.getFieldType( FIELD::OrdType, type ) );
  CHECK_EQUAL( TYPE::Char, type );
  CHECK( dataDictionary.isFieldValue( FIELD::OrdType, "1" ) );

  const DataDictionary* pDD = 0;
  CHECK( dataDictionary.getGroup( "A", 10, delim, pDD ) );
  CHECK( pDD->getFieldType( FIELD::HeartBtInt, type ) );
  CHECK_EQUAL( TYPE::String, type );
  CHECK_EQUAL( 20, delim );

  CHECK( pDD->getGroup( "A", 1, delim, pDD ) );
  CHECK( pDD->getFieldType( FIELD::MsgType, type ) );
  CHECK_EQUAL( TYPE::Char, type );
  CHECK_EQUAL( 2, delim );
}

TEST(getMessageOrderedFields_StoredOrder) {
  DataDictionary dictionary;
  dictionary.preserveMessageFieldsOrder(true);

  dictionary.addMsgField("msg", 1);
  dictionary.addMsgField("msg", 2);
  dictionary.addMsgField("msg", 3);


  message_order msg_order = dictionary.getMessageOrderedFields("msg");

  FieldMap fieldMap(msg_order);
  fieldMap.setField(3, "Field3");
  fieldMap.setField(1, "Field1");
  fieldMap.setField(2, "Field2");

  int pos1 = 0, pos2 = 0, pos3 = 0;
  int iterationCount = 0;
  for( FieldMap::iterator itr = fieldMap.begin(); itr != fieldMap.end(); itr++, iterationCount++) {
    if(iterationCount == 0) {
      pos1 = itr->getTag();
    } else if (iterationCount == 1 ) {
      pos2 = itr->getTag();
    } else if (iterationCount == 2) {
      pos3 = itr->getTag();
    }
  }

  CHECK_EQUAL(1, pos1);
  CHECK_EQUAL(2, pos2);
  CHECK_EQUAL(3, pos3);
}

TEST(getMessageOrderedFields_GetOrderTwice) {
  DataDictionary dictionary;
  dictionary.preserveMessageFieldsOrder(true);

  dictionary.addMsgField("msg", 1);
  dictionary.addMsgField("msg", 2);
  dictionary.addMsgField("msg", 3);


  message_order msg_order = dictionary.getMessageOrderedFields("msg");
  //Get Order Second Time
  msg_order = dictionary.getMessageOrderedFields("msg");

  FieldMap fieldMap(msg_order);
  fieldMap.setField(3, "Field3");
  fieldMap.setField(1, "Field1");
  fieldMap.setField(2, "Field2");

  int pos1 = 0, pos2 = 0, pos3 = 0;
  int iterationCount = 0;
  for( FieldMap::iterator itr = fieldMap.begin(); itr != fieldMap.end(); itr++, iterationCount++) {
    if(iterationCount == 0) {
      pos1 = itr->getTag();
    } else if (iterationCount == 1 ) {
      pos2 = itr->getTag();
    } else if (iterationCount == 2) {
      pos3 = itr->getTag();
    }
  }

  CHECK_EQUAL(1, pos1);
  CHECK_EQUAL(2, pos2);
  CHECK_EQUAL(3, pos3);
}


TEST(getMessageOrderedFields_NoStoredOrder) {
  DataDictionary dictionary;
  CHECK_THROW(dictionary.getMessageOrderedFields("none"), ConfigError);
}

TEST(addFieldName_addNameTwiceError) {
  DataDictionary dictionary;
  dictionary.addFieldName(1, "name");

  CHECK_THROW(dictionary.addFieldName(1, "name"), ConfigError);
}

TEST(getHeaderOrderedFields_StoredOrder) {
  DataDictionary dictionary;
  dictionary.preserveMessageFieldsOrder(true);

  dictionary.addHeaderField(1, true);
  dictionary.addHeaderField(2, true);
  dictionary.addHeaderField(3, true);

  message_order header_order = dictionary.getHeaderOrderedFields();

  FieldMap fieldMap(header_order);
  fieldMap.setField(3, "Field3");
  fieldMap.setField(1, "Field1");
  fieldMap.setField(2, "Field2");

  int pos1 = 0, pos2 = 0, pos3 = 0;
  int iterationCount = 0;
  for( FieldMap::iterator itr = fieldMap.begin(); itr != fieldMap.end(); itr++, iterationCount++) {
    if(iterationCount == 0) {
      pos1 = itr->getTag();
    } else if (iterationCount == 1 ) {
      pos2 = itr->getTag();
    } else if (iterationCount == 2) {
      pos3 = itr->getTag();
    }
  }

  CHECK_EQUAL(1, pos1);
  CHECK_EQUAL(2, pos2);
  CHECK_EQUAL(3, pos3);
}

TEST(getTrailerOrderedFields_StoredOrder) {
  DataDictionary dictionary;
  dictionary.preserveMessageFieldsOrder(true);

  dictionary.addTrailerField(1, true);
  dictionary.addTrailerField(2, true);
  dictionary.addTrailerField(3, true);

  message_order trailer_order = dictionary.getTrailerOrderedFields();

  FieldMap fieldMap(trailer_order);
  fieldMap.setField(3, "Field3");
  fieldMap.setField(1, "Field1");
  fieldMap.setField(2, "Field2");

  int pos1 = 0, pos2 = 0, pos3 = 0;
  int iterationCount = 0;
  for( FieldMap::iterator itr = fieldMap.begin(); itr != fieldMap.end(); itr++, iterationCount++) {
    if(iterationCount == 0) {
      pos1 = itr->getTag();
    } else if (iterationCount == 1 ) {
      pos2 = itr->getTag();
    } else if (iterationCount == 2) {
      pos3 = itr->getTag();
    }
  }

  CHECK_EQUAL(1, pos1);
  CHECK_EQUAL(2, pos2);
  CHECK_EQUAL(3, pos3);
}

TEST(getHeaderOrderedFields_HeaderDoesNotHaveStoredOrderValues) {
  DataDictionary dictionary;
  dictionary.preserveMessageFieldsOrder(true);
  CHECK_THROW(dictionary.getHeaderOrderedFields(), ConfigError);
}

TEST(getTrailerOrderedFields_TrailerDoesNotHaveStoredOrderValues) {
  DataDictionary dictionary;
  dictionary.preserveMessageFieldsOrder(true);
  CHECK_THROW(dictionary.getTrailerOrderedFields(), ConfigError);
}

TEST(getHeaderOrderedFields_GetOrderTwice) {
  DataDictionary dictionary;
  dictionary.preserveMessageFieldsOrder(true);

  dictionary.addHeaderField(1, true);
  dictionary.addHeaderField(2, true);
  dictionary.addHeaderField(3, true);

  message_order header_order = dictionary.getHeaderOrderedFields();
  //Get Order Second Time
  header_order = dictionary.getHeaderOrderedFields();

  FieldMap fieldMap(header_order);
  fieldMap.setField(3, "Field3");
  fieldMap.setField(1, "Field1");
  fieldMap.setField(2, "Field2");

  int pos1 = 0, pos2 = 0, pos3 = 0;
  int iterationCount = 0;
  for( FieldMap::iterator itr = fieldMap.begin(); itr != fieldMap.end(); itr++, iterationCount++) {
    if(iterationCount == 0) {
      pos1 = itr->getTag();
    } else if (iterationCount == 1 ) {
      pos2 = itr->getTag();
    } else if (iterationCount == 2) {
      pos3 = itr->getTag();
    }
  }

  CHECK_EQUAL(1, pos1);
  CHECK_EQUAL(2, pos2);
  CHECK_EQUAL(3, pos3);
}

TEST(getTrailerOrderedFields_GetOrderTwice) {
  DataDictionary dictionary;
  dictionary.preserveMessageFieldsOrder(true);

  dictionary.addTrailerField(1, true);
  dictionary.addTrailerField(2, true);
  dictionary.addTrailerField(3, true);

  message_order trailer_order = dictionary.getTrailerOrderedFields();
  //Get Order Second Time
  trailer_order = dictionary.getTrailerOrderedFields();

  FieldMap fieldMap(trailer_order);
  fieldMap.setField(3, "Field3");
  fieldMap.setField(1, "Field1");
  fieldMap.setField(2, "Field2");

  int pos1 = 0, pos2 = 0, pos3 = 0;
  int iterationCount = 0;
  for( FieldMap::iterator itr = fieldMap.begin(); itr != fieldMap.end(); itr++, iterationCount++) {
    if(iterationCount == 0) {
      pos1 = itr->getTag();
    } else if (iterationCount == 1 ) {
      pos2 = itr->getTag();
    } else if (iterationCount == 2) {
      pos3 = itr->getTag();
    }
  }

  CHECK_EQUAL(1, pos1);
  CHECK_EQUAL(2, pos2);
  CHECK_EQUAL(3, pos3);
}

TEST(isFieldValue_MultipleValueType_FieldValueExists) {
  DataDictionary dictionary;
  dictionary.addFieldType(1, TYPE::MultipleValueString);
  dictionary.addFieldValue(1,"value1");
  dictionary.addFieldValue(1,"value2");

  CHECK(dictionary.isFieldValue(1, "value1 value2"));
}

TEST(isFieldValue_MultipleValueType_FieldValueDoesNotExist) {
  DataDictionary dictionary;
  dictionary.addFieldType(1, TYPE::MultipleValueString);
  dictionary.addFieldValue(1,"value1");
  dictionary.addFieldValue(1,"value2");

  CHECK(!dictionary.isFieldValue(1, "value5"));
}

TEST(dataDictionaryValidate_UnSupportedVersion) {
  DataDictionary dictionary;
  dictionary.addHeaderField(FIELD::BeginString, true);
  dictionary.addHeaderField(FIELD::MsgType, true);
  dictionary.setVersion("FIX.1000");

  FIX::Message msg;
  msg.getHeader().setField(BeginString(BeginString_FIX40));
  msg.getHeader().setField(MsgType(MsgType_NewOrderSingle));

  CHECK_THROW(DataDictionary::validate(msg, &dictionary, &dictionary), UnsupportedVersion);
}

TEST(dataDictionaryValidate_HeaderFieldInBody_TagOutOfOrderForSessionDictionary) {
  DataDictionary dictionary;
  dictionary.checkFieldsOutOfOrder(true);
  dictionary.addHeaderField(FIELD::BeginString, true);
  dictionary.addHeaderField(FIELD::MsgType, true);
  dictionary.addField(FIELD::ClOrdID);
  dictionary.addField(FIELD::MsgType);
  dictionary.setVersion(BeginString_FIX40);

  FIX::Message msg;
  std::string delimSOH = "\x01";
  std::string rawFixMsg = "8=FIX.4.0" + delimSOH +"35=D" + delimSOH + "11=Clordid" + delimSOH + "35=D" + delimSOH;
  msg.setString(rawFixMsg, false, &dictionary, &dictionary);

  CHECK_THROW(DataDictionary::validate(msg, &dictionary, nullptr), TagOutOfOrder);
}

TEST(dataDictionaryValidate_HeaderFieldInBody_TagOutOfOrderForAppDictionary) {
  DataDictionary dictionary;
  dictionary.checkFieldsOutOfOrder(true);
  dictionary.addHeaderField(FIELD::BeginString, true);
  dictionary.addHeaderField(FIELD::MsgType, true);
  dictionary.addField(FIELD::ClOrdID);
  dictionary.addField(FIELD::MsgType);
  dictionary.setVersion(BeginString_FIX40);

  FIX::Message msg;
  std::string delimSOH = "\x01";
  std::string rawFixMsg = "8=FIX.4.0" + delimSOH +"35=D" + delimSOH + "11=Clordid" + delimSOH + "35=D" + delimSOH;
  msg.setString(rawFixMsg, false, &dictionary, &dictionary);

  CHECK_THROW(DataDictionary::validate(msg, nullptr, &dictionary), TagOutOfOrder);
}

TEST(readFromURL_UrlNotParsable) {
  DataDictionary dictionary;

  CHECK_THROW(dictionary.readFromURL("invalidurl"), ConfigError);
}

TEST(readFromURL_FileAtUrlNotParsable) {
  DataDictionary dictionary;
  CHECK_THROW(dictionary.readFromURL("resources/invalid_datadictionary.xml"), ConfigError);
}

TEST(readFromStream_StreamDataNotParsable) {
  DataDictionary dictionary;

  std::stringbuf buffer; // empty buffer contains no parsable data
  std::istream is(&buffer);
  CHECK_THROW(dictionary.readFromStream(is);, ConfigError);
}

TEST(readFromDocument_FIXNodeNotAtRoot) {
  DataDictionary dictionary;

  std::stringbuf buffer;
  std::string dictionaryXml = "<notFIXRoot></notFIXroot>";
  buffer.sputn(dictionaryXml.c_str(),1000);
  std::istream is(&buffer);

  DOMDocumentPtr pDoc(new PUGIXML_DOMDocument());
  pDoc->load(is);

  CHECK_THROW(dictionary.readFromDocument(pDoc);, ConfigError);
}

TEST(readFromDocument_TypeAttributeNotFIXorFIXT) {
  DataDictionary dictionary;

  std::stringbuf buffer;
  std::string dictionaryXml = "<fix type='WrongType' major='4' minor='2' servicepack='0'></fix>";
  buffer.sputn(dictionaryXml.c_str(),1000);
  std::istream is(&buffer);

  DOMDocumentPtr pDoc(new PUGIXML_DOMDocument());
  pDoc->load(is);

  CHECK_THROW(dictionary.readFromDocument(pDoc);, ConfigError);
}

TEST(readFromDocument_MajorAttributeMissing) {
  DataDictionary dictionary;

  std::stringbuf buffer;
  std::string dictionaryXml = "<fix type='FIX' minor='2' servicepack='0'></fix>";
  buffer.sputn(dictionaryXml.c_str(),1000);
  std::istream is(&buffer);

  DOMDocumentPtr pDoc(new PUGIXML_DOMDocument());
  pDoc->load(is);

  CHECK_THROW(dictionary.readFromDocument(pDoc);, ConfigError);
}

TEST(readFromDocument_MinorAttributeMissing) {
  DataDictionary dictionary;

  std::stringbuf buffer;
  std::string dictionaryXml = "<fix type='FIX' major='4' servicepack='0'></fix>";
  buffer.sputn(dictionaryXml.c_str(),1000);
  std::istream is(&buffer);

  DOMDocumentPtr pDoc(new PUGIXML_DOMDocument());
  pDoc->load(is);

  CHECK_THROW(dictionary.readFromDocument(pDoc);, ConfigError);
}

TEST(readFromDocument_FieldsSectionMissing) {
  DataDictionary dictionary;

  std::stringbuf buffer;
  std::string dictionaryXml = "<fix type='FIX' major='4' minor='2' servicepack='0'></fix>";
  buffer.sputn(dictionaryXml.c_str(),1000);
  std::istream is(&buffer);

  DOMDocumentPtr pDoc(new PUGIXML_DOMDocument());
  pDoc->load(is);

  CHECK_THROW(dictionary.readFromDocument(pDoc);, ConfigError);
}

TEST(readFromDocument_FieldNameAttributeMissing) {
  DataDictionary dictionary;

  std::stringbuf buffer;
  std::string dictionaryXml =
      "<fix type='FIX' major='4' minor='2' servicepack='0'>"
        "<fields>"
          "<field number='8' type='STRING' />" // name attribute missing
        "</fields>"
      "</fix>";
  buffer.sputn(dictionaryXml.c_str(),1000);
  std::istream is(&buffer);

  DOMDocumentPtr pDoc(new PUGIXML_DOMDocument());
  pDoc->load(is);

  CHECK_THROW(dictionary.readFromDocument(pDoc);, ConfigError);
}

TEST(readFromDocument_FieldNumberAttributeMissing) {
  DataDictionary dictionary;

  std::stringbuf buffer;
  std::string dictionaryXml =
      "<fix type='FIX' major='4' minor='2' servicepack='0'>"
        "<fields>"
          "<field name='BeginString' type='STRING' />" // number attribute missing
        "</fields>"
      "</fix>";
  buffer.sputn(dictionaryXml.c_str(),1000);
  std::istream is(&buffer);

  DOMDocumentPtr pDoc(new PUGIXML_DOMDocument());
  pDoc->load(is);

  CHECK_THROW(dictionary.readFromDocument(pDoc);, ConfigError);
}

TEST(readFromDocument_FieldTypeAttributeMissing) {
  DataDictionary dictionary;

  std::stringbuf buffer;
  std::string dictionaryXml =
      "<fix type='FIX' major='4' minor='2' servicepack='0'>"
        "<fields>"
          "<field number='8' name='BeginString' />" // type attribute missing
        "</fields>"
      "</fix>";
  buffer.sputn(dictionaryXml.c_str(),1000);
  std::istream is(&buffer);

  DOMDocumentPtr pDoc(new PUGIXML_DOMDocument());
  pDoc->load(is);

  CHECK_THROW(dictionary.readFromDocument(pDoc);, ConfigError);
}

TEST(readFromDocument_FieldValueNodeMissingEnumAttribute) {
  DataDictionary dictionary;

  std::stringbuf buffer;
  std::string dictionaryXml =
      "<fix type='FIX' major='4' minor='2' servicepack='0'>"
        "<fields>"
          "<field number='8' name='BeginString' type='STRING' >"
            "<value description='SINGLE_SECURITY' />" // enum attribute missing
          "</field>"
        "</fields>"
      "</fix>";
  buffer.sputn(dictionaryXml.c_str(),1000);
  std::istream is(&buffer);

  DOMDocumentPtr pDoc(new PUGIXML_DOMDocument());
  pDoc->load(is);

  CHECK_THROW(dictionary.readFromDocument(pDoc);, ConfigError);
}

TEST(readFromDocument_HeaderNodeMissing) {
  DataDictionary dictionary;

  std::stringbuf buffer;
  std::string dictionaryXml =
      "<fix type='FIX' major='4' minor='2' servicepack='0'>"
        "<fields>"
          "<field number='8' name='BeginString' type='STRING' >"
            "<value enum='1' description='SINGLE_SECURITY' />"
          "</field>"
        "</fields>"
      "</fix>";
  buffer.sputn(dictionaryXml.c_str(),1000);
  std::istream is(&buffer);

  DOMDocumentPtr pDoc(new PUGIXML_DOMDocument());
  pDoc->load(is);

  CHECK_THROW(dictionary.readFromDocument(pDoc);, ConfigError);
}

TEST(readFromDocument_HeaderFieldNodeMissingNameAttribute) {
  DataDictionary dictionary;

  std::stringbuf buffer;
  std::string dictionaryXml =
      "<fix type='FIX' major='4' minor='2' servicepack='0'>"
        "<header>"
          "<field required='Y' />"  // name attribute missing
        "</header>"
        "<fields>"
          "<field number='8' name='BeginString' type='STRING' >"
            "<value enum='1' description='SINGLE_SECURITY' />"
          "</field>"
        "</fields>"
      "</fix>";
  buffer.sputn(dictionaryXml.c_str(),1000);
  std::istream is(&buffer);

  DOMDocumentPtr pDoc(new PUGIXML_DOMDocument());
  pDoc->load(is);

  CHECK_THROW(dictionary.readFromDocument(pDoc);, ConfigError);
}

TEST(readFromDocument_TrailerNodeMissing) {
  DataDictionary dictionary;

  std::stringbuf buffer;
  std::string dictionaryXml =
      "<fix type='FIX' major='4' minor='2' servicepack='0'>"
        "<header>"
          "<field name='BeginString' required='Y' />"
        "</header>"
        "<fields>"
          "<field number='8' name='BeginString' type='STRING' >"
            "<value enum='1' description='SINGLE_SECURITY' />"
          "</field>"
        "</fields>"
      "</fix>";
  buffer.sputn(dictionaryXml.c_str(),1000);
  std::istream is(&buffer);

  DOMDocumentPtr pDoc(new PUGIXML_DOMDocument());
  pDoc->load(is);

  CHECK_THROW(dictionary.readFromDocument(pDoc);, ConfigError);
}

TEST(readFromDocument_TrailerFieldNodeMissingNameAttribute) {
  DataDictionary dictionary;

  std::stringbuf buffer;
  std::string dictionaryXml =
      "<fix type='FIX' major='4' minor='2' servicepack='0'>"
        "<header>"
          "<field name='BeginString' required='Y' />"
        "</header>"
        "<fields>"
          "<field number='8' name='BeginString' type='STRING' >"
            "<value enum='1' description='SINGLE_SECURITY' />"
          "</field>"
        "</fields>"
        "<trailer>"
          "<field required='Y' />" // name attribute missing
        "</trailer>"
      "</fix>";
  buffer.sputn(dictionaryXml.c_str(),1000);
  std::istream is(&buffer);

  DOMDocumentPtr pDoc(new PUGIXML_DOMDocument());
  pDoc->load(is);

  CHECK_THROW(dictionary.readFromDocument(pDoc);, ConfigError);
}

TEST(readFromDocument_MessagesNodeMissing) {
  DataDictionary dictionary;

  std::stringbuf buffer;
  std::string dictionaryXml =
      "<fix type='FIX' major='4' minor='2' servicepack='0'>"
        "<header>"
          "<field name='BeginString' required='Y' />"
        "</header>"
        "<fields>"
          "<field number='8' name='BeginString' type='STRING' >"
            "<value enum='1' description='SINGLE_SECURITY' />"
          "</field>"
          "<field number='93' name='SignatureLength' type='STRING' />"
          "<field number='627' name='NoHops' type='NUMINGROUP' />"
          "<field number='628' name='HopCompID' type='STRING' />"
        "</fields>"
        "<trailer>"
          "<field name='SignatureLength' required='Y' />"
          "<group name='NoHops' required='N'>"
             "<field name='HopCompID' required='N' />"
          "</group>"
        "</trailer>"
      "</fix>";
  buffer.sputn(dictionaryXml.c_str(),1000);
  std::istream is(&buffer);

  DOMDocumentPtr pDoc(new PUGIXML_DOMDocument());
  pDoc->load(is);

  CHECK_THROW(dictionary.readFromDocument(pDoc);, ConfigError);
}

TEST(readFromDocument_MessageNodeMissingMsgTypeAttribute) {
  DataDictionary dictionary;

  std::stringbuf buffer;
  std::string dictionaryXml =
      "<fix type='FIX' major='4' minor='2' servicepack='0'>"
        "<header>"
          "<field name='BeginString' required='Y' />"
        "</header>"
        "<fields>"
          "<field number='8' name='BeginString' type='STRING' >"
            "<value enum='1' description='SINGLE_SECURITY' />"
          "</field>"
          "<field number='93' name='SignatureLength' type='STRING' />"
          "<field number='627' name='NoHops' type='NUMINGROUP' />"
          "<field number='628' name='HopCompID' type='STRING' />"
        "</fields>"
        "<messages>"
          "<message name='Advertisement' msgcat='app' />"  // msgtype attribute missing
        "</messages>"
        "<trailer>"
          "<field name='SignatureLength' required='Y' />"
          "<group name='NoHops' required='N'>"
             "<field name='HopCompID' required='N' />"
          "</group>"
        "</trailer>"
      "</fix>";
  buffer.sputn(dictionaryXml.c_str(),1000);
  std::istream is(&buffer);

  DOMDocumentPtr pDoc(new PUGIXML_DOMDocument());
  pDoc->load(is);

  CHECK_THROW(dictionary.readFromDocument(pDoc);, ConfigError);
}

TEST(readFromDocument_MessagesFieldNodeMissingNameAttribute) {
  DataDictionary dictionary;

  std::stringbuf buffer;
  std::string dictionaryXml =
      "<fix type='FIX' major='4' minor='2' servicepack='0'>"
        "<header>"
          "<field name='BeginString' required='Y' />"
        "</header>"
        "<fields>"
          "<field number='8' name='BeginString' type='STRING' >"
            "<value enum='1' description='SINGLE_SECURITY' />"
          "</field>"
          "<field number='93' name='SignatureLength' type='STRING' />"
          "<field number='627' name='NoHops' type='NUMINGROUP' />"
          "<field number='628' name='HopCompID' type='STRING' />"
        "</fields>"
        "<messages>"
          "<message name='Advertisement' msgtype='7' msgcat='app'>"
            "<field required='Y' />" // name attribute missing
          "</message>"
        "</messages>"
        "<trailer>"
          "<field name='SignatureLength' required='Y' />"
          "<group name='NoHops' required='N'>"
             "<field name='HopCompID' required='N' />"
          "</group>"
        "</trailer>"
      "</fix>";
  buffer.sputn(dictionaryXml.c_str(),1000);
  std::istream is(&buffer);

  DOMDocumentPtr pDoc(new PUGIXML_DOMDocument());
  pDoc->load(is);

  CHECK_THROW(dictionary.readFromDocument(pDoc);, ConfigError);
}

TEST(readFromDocument_GroupNodeMissingNameAttribute) {
  DataDictionary dictionary;

  std::stringbuf buffer;
  std::string dictionaryXml =
        "<fix type='FIX' major='4' minor='2' servicepack='0'>"
          "<header>"
            "<field name='BeginString' required='Y' />"
          "</header>"
          "<fields>"
            "<field number='8' name='BeginString' type='STRING' >"
              "<value enum='1' description='SINGLE_SECURITY' />"
            "</field>"
            "<field number='93' name='SignatureLength' type='STRING' />"
            "<field number='627' name='NoHops' type='NUMINGROUP' />"
            "<field number='628' name='HopCompID' type='STRING' />"
            "<field number='55' name='Symbol' type='STRING' />"
          "</fields>"
          "<messages>"
            "<message name='Advertisement' msgtype='7' msgcat='app'>"
              "<field name='BeginString' required='Y' />"
              "<component name='Instrument' required='Y' />"
            "</message>"
          "</messages>"
          "<trailer>"
            "<field name='SignatureLength' required='Y' />"
            "<group name='NoHops' required='N'>"
               "<field name='HopCompID' required='N' />"
            "</group>"
          "</trailer>"
          "<components>"
            "<component name='Instrument'>"
              "<group required='N'>" //Missing Group Node
                 "<field name='HopCompID' required='N' />"
              "</group>"
            "</component>"
          "</components>"
        "</fix>";
  buffer.sputn(dictionaryXml.c_str(),1000);
  std::istream is(&buffer);

  DOMDocumentPtr pDoc(new PUGIXML_DOMDocument());
  pDoc->load(is);

  CHECK_THROW(dictionary.readFromDocument(pDoc);, ConfigError);
}

TEST(readFromDocument_MessagesGroupNodeFieldNodeMissingNameAttribute) {
  DataDictionary dictionary;

  std::stringbuf buffer;
  std::string dictionaryXml =
      "<fix type='FIX' major='4' minor='2' servicepack='0'>"
        "<header>"
          "<field name='BeginString' required='Y' />"
        "</header>"
        "<fields>"
          "<field number='8' name='BeginString' type='STRING' >"
            "<value enum='1' description='SINGLE_SECURITY' />"
          "</field>"
          "<field number='93' name='SignatureLength' type='STRING' />"
          "<field number='627' name='NoHops' type='NUMINGROUP' />"
          "<field number='628' name='HopCompID' type='STRING' />"
          "<field number='215' name='NoRoutingIDs' type='STRING' />"
        "</fields>"
        "<messages>"
          "<message name='Advertisement' msgtype='7' msgcat='app'>"
            "<field name='BeginString' required='Y' />"
            "<group name='NoRoutingIDs' required='N'>"
               "<field required='N' />" // name attribute missing
            "</group>"
          "</message>"
        "</messages>"
        "<trailer>"
          "<field name='SignatureLength' required='Y' />"
          "<group name='NoHops' required='N'>"
             "<field name='HopCompID' required='N' />"
          "</group>"
        "</trailer>"
      "</fix>";
  buffer.sputn(dictionaryXml.c_str(),1000);
  std::istream is(&buffer);

  DOMDocumentPtr pDoc(new PUGIXML_DOMDocument());
  pDoc->load(is);

  CHECK_THROW(dictionary.readFromDocument(pDoc);, ConfigError);
}

TEST(readFromDocument_GroupFieldMissingAssociatedFieldNodeInFieldsNode) {
  DataDictionary dictionary;

  std::stringbuf buffer;
  std::string dictionaryXml =
      "<fix type='FIX' major='4' minor='2' servicepack='0'>"
        "<header>"
          "<field name='BeginString' required='Y' />"
        "</header>"
        "<fields>"
          "<field number='8' name='BeginString' type='STRING' >"
            "<value enum='1' description='SINGLE_SECURITY' />"
          "</field>"
          "<field number='93' name='SignatureLength' type='STRING' />"
          "<field number='627' name='NoHops' type='NUMINGROUP' />"
        "</fields>"
        "<messages>"
          "<message name='Advertisement' msgtype='7' msgcat='app'>"
            "<field name='BeginString' required='Y' />"
          "</message>"
        "</messages>"
        "<trailer>"
          "<field name='SignatureLength' required='Y' />"
          "<group name='NoHops' required='N'>"
             "<field name='HopCompID' required='N' />" //Missing associated field in fields node
          "</group>"
        "</trailer>"
      "</fix>";
  buffer.sputn(dictionaryXml.c_str(),1000);
  std::istream is(&buffer);

  DOMDocumentPtr pDoc(new PUGIXML_DOMDocument());
  pDoc->load(is);

  CHECK_THROW(dictionary.readFromDocument(pDoc);, ConfigError);
}

TEST(readFromDocument_ComponentNodeMissingNameAttribute) {
  DataDictionary dictionary;

  std::stringbuf buffer;
  std::string dictionaryXml =
      "<fix type='FIX' major='4' minor='2' servicepack='0'>"
        "<header>"
          "<field name='BeginString' required='Y' />"
        "</header>"
        "<fields>"
          "<field number='8' name='BeginString' type='STRING' >"
            "<value enum='1' description='SINGLE_SECURITY' />"
          "</field>"
          "<field number='93' name='SignatureLength' type='STRING' />"
          "<field number='627' name='NoHops' type='NUMINGROUP' />"
          "<field number='628' name='HopCompID' type='STRING' />"
          "<field number='55' name='Symbol' type='STRING' />"
        "</fields>"
        "<messages>"
          "<message name='Advertisement' msgtype='7' msgcat='app'>"
            "<field name='BeginString' required='Y' />"
            "<component  required='Y' />" //Missing name attribute
          "</message>"
        "</messages>"
        "<trailer>"
          "<field name='SignatureLength' required='Y' />"
          "<group name='NoHops' required='N'>"
             "<field name='HopCompID' required='N' />"
          "</group>"
        "</trailer>"
        "<components>"
          "<component name='Instrument'>"
            "<field name='Symbol' required='N' />"
          "</component>"
        "</components>"
      "</fix>";
  buffer.sputn(dictionaryXml.c_str(),1000);
  std::istream is(&buffer);

  DOMDocumentPtr pDoc(new PUGIXML_DOMDocument());
  pDoc->load(is);

  CHECK_THROW(dictionary.readFromDocument(pDoc);, ConfigError);
}

TEST(readFromDocument_ComponentNodeInMessageNotFound) {
  DataDictionary dictionary;

  std::stringbuf buffer;
  std::string dictionaryXml =
      "<fix type='FIX' major='4' minor='2' servicepack='0'>"
        "<header>"
          "<field name='BeginString' required='Y' />"
        "</header>"
        "<fields>"
          "<field number='8' name='BeginString' type='STRING' >"
            "<value enum='1' description='SINGLE_SECURITY' />"
          "</field>"
          "<field number='93' name='SignatureLength' type='STRING' />"
          "<field number='627' name='NoHops' type='NUMINGROUP' />"
          "<field number='628' name='HopCompID' type='STRING' />"
          "<field number='55' name='Symbol' type='STRING' />"
        "</fields>"
        "<messages>"
          "<message name='Advertisement' msgtype='7' msgcat='app'>"
            "<field name='BeginString' required='Y' />"
            "<component name='Unknown' required='Y' />" //Component does not exist in components node
          "</message>"
        "</messages>"
        "<trailer>"
          "<field name='SignatureLength' required='Y' />"
          "<group name='NoHops' required='N'>"
             "<field name='HopCompID' required='N' />"
          "</group>"
        "</trailer>"
        "<components>"
          "<component name='Instrument'>"
            "<field name='Symbol' required='N' />"
          "</component>"
        "</components>"
      "</fix>";
  buffer.sputn(dictionaryXml.c_str(),1000);
  std::istream is(&buffer);

  DOMDocumentPtr pDoc(new PUGIXML_DOMDocument());
  pDoc->load(is);

  CHECK_THROW(dictionary.readFromDocument(pDoc);, ConfigError);
}

TEST(readFromDocument_ComponentNodeHasFieldNodeWithMissingNameAttribute) {
  DataDictionary dictionary;

  std::stringbuf buffer;
  std::string dictionaryXml =
      "<fix type='FIX' major='4' minor='2' servicepack='0'>"
        "<header>"
          "<field name='BeginString' required='Y' />"
        "</header>"
        "<fields>"
          "<field number='8' name='BeginString' type='STRING' >"
            "<value enum='1' description='SINGLE_SECURITY' />"
          "</field>"
          "<field number='93' name='SignatureLength' type='STRING' />"
          "<field number='627' name='NoHops' type='NUMINGROUP' />"
          "<field number='628' name='HopCompID' type='STRING' />"
          "<field number='55' name='Symbol' type='STRING' />"
        "</fields>"
        "<messages>"
          "<message name='Advertisement' msgtype='7' msgcat='app'>"
            "<field name='BeginString' required='Y' />"
            "<component name='Instrument' required='Y' />"
          "</message>"
        "</messages>"
        "<trailer>"
          "<field name='SignatureLength' required='Y' />"
          "<group name='NoHops' required='N'>"
             "<field name='HopCompID' required='N' />"
          "</group>"
        "</trailer>"
        "<components>"
          "<component name='Instrument'>"
            "<field required='N' />" //Missing Name Attribute
          "</component>"
        "</components>"
      "</fix>";
  buffer.sputn(dictionaryXml.c_str(),1000);
  std::istream is(&buffer);

  DOMDocumentPtr pDoc(new PUGIXML_DOMDocument());
  pDoc->load(is);

  CHECK_THROW(dictionary.readFromDocument(pDoc);, ConfigError);
}

TEST(readFromDocument_VersionPreFIX42_FieldTypeCharTreatedAsString) {
  DataDictionary dictionary;
  dictionary.setVersion(BeginString_FIX40);

  std::stringbuf buffer;
    std::string dictionaryXml =
        "<fix type='FIX' major='4' minor='0' servicepack='0'>"
          "<header>"
            "<field name='BeginString' required='Y' />"
          "</header>"
          "<fields>"
            "<field number='8' name='BeginString' type='STRING' >"
              "<value enum='1' description='SINGLE_SECURITY' />"
            "</field>"
            "<field number='93' name='SignatureLength' type='STRING' />"
            "<field number='627' name='NoHops' type='NUMINGROUP' />"
            "<field number='628' name='HopCompID' type='STRING' />"
            "<field number='55' name='Symbol' type='CHAR' />" //Should be treated as STRING
          "</fields>"
          "<messages>"
            "<message name='Advertisement' msgtype='7' msgcat='app'>"
              "<field name='BeginString' required='Y' />"
            "</message>"
          "</messages>"
          "<trailer>"
            "<field name='SignatureLength' required='Y' />"
          "</trailer>"
        "</fix>";
  buffer.sputn(dictionaryXml.c_str(),1000);
  std::istream is(&buffer);

  DOMDocumentPtr pDoc(new PUGIXML_DOMDocument());
  pDoc->load(is);
  dictionary.readFromDocument(pDoc);

  FIX::TYPE::Type actualType;
  dictionary.getFieldType(55, actualType);
  CHECK_EQUAL(TYPE::String, actualType);
}

}

