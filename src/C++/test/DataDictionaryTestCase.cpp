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
  TestReqID testReqID( "1" );
  FIX40::TestRequest message( testReqID );
  message.setField( TooHigh( "value" ) );
  CHECK_THROW( object.validate( message ), InvalidTagNumber );

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
    object.addHeaderField( FIELD::SenderCompID, true );
    object.addHeaderField( FIELD::TargetCompID, false );
    object.addField( FIELD::CheckSum );
    object.addField( FIELD::TestReqID );
    object.addMsgType( MsgType_TestRequest );
    object.addMsgField( MsgType_TestRequest, FIELD::TestReqID );
    object.addRequiredField( MsgType_TestRequest, FIELD::TestReqID );
  }

  DataDictionary object;
};

TEST_FIXTURE(checkHasRequiredFixture, checkHasRequired)
{
  FIX40::TestRequest message;
  CHECK_THROW( object.validate( message ), RequiredTagMissing );

  message.getHeader().setField( SenderCompID( "SENDER" ) );
  CHECK_THROW( object.validate( message ), RequiredTagMissing );

  message.setField( TestReqID( "1" ) );
  object.validate( message );

  message.getHeader().removeField( FIELD::SenderCompID );
  message.setField( SenderCompID( "SENDER" ) );
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
    object.addMsgField( MsgType_TestRequest, FIELD::TestReqID );
    object.addFieldType( FIELD::TestReqID, TYPE::Int );
  }

  DataDictionary object;
};

TEST_FIXTURE( checkValidFormatFixture, checkValidFormat )
{
  FIX40::TestRequest message;
  message.setField( TestReqID( "+200" ) );
  CHECK_THROW( object.validate( message ), IncorrectDataFormat );
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

}

