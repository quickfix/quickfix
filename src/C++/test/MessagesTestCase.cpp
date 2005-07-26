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

#include "MessagesTestCase.h"
#include "Values.h"
#include "Utility.h"
#include "fix44/MarketDataRequest.h"
#include "fix42/News.h"

namespace FIX
{
using namespace FIX42;
static UtcTimeStamp create_tm()
{
  UtcTimeStamp result = UtcTimeStamp (0, 0, 0, 1, 1, 1900);
  return result;
}

void MessageTestCase::identifyType::onRun( Message& )
{
  try
  {
    assert
    ( FIX::identifyType( "8=FIX.4.2\0019=12\00135=A\001108=30\001"
                         "10=031\001" ) == "A" );
  }
  catch ( std::logic_error& ) { assert( false ); }

  try
  {
    assert
    ( FIX::identifyType( "8=FIX.4.2\0019=12\001108=30\00110=031\001" )
      == "A" );
    assert( false );
  }
  catch ( std::logic_error& ) { assert( true ); }
}

void MessageTestCase::isAdminMsgType::onRun( Message& object )
{
  assert( FIX::Message::isAdminMsgType( FIX::MsgType("A") ));
  assert( !FIX::Message::isAdminMsgType( FIX::MsgType("D") ));
  assert( !FIX::Message::isAdminMsgType( FIX::MsgType("AE") ));
  assert( !FIX::Message::isAdminMsgType( FIX::MsgType() ));
}

void MessageTestCase::isAdmin::onRun( Message& object )
{
  assert( !object.isAdmin() );
  object.getHeader().setField( FIX::MsgType("A") );
  assert( object.isAdmin() );
  object.getHeader().setField( FIX::MsgType("D") );
  assert( !object.isAdmin() );
}

void MessageTestCase::isApp::onRun( Message& object )
{
  assert( !object.isApp() );
  object.getHeader().setField( FIX::MsgType("A") );
  assert( !object.isApp() );
  object.getHeader().setField( FIX::MsgType("D") );
  assert( object.isApp() );
}

void MessageTestCase::setString::onRun( Message& object )
{
  static const char* strGood =
    "8=FIX.4.2\0019=45\00135=0\00134=3\00149=TW\001"
    "52=20000426-12:05:06\00156=ISLD\00110=218\001";
  static const char* strNull =
    "8=FIX.4.2\0019=46\00135=0\00134=3\00149=TW\001"
    "52=20000426-12:05:06\00156=ISLD\000\00110=219\001";
  static const char* strTrailingCharacter =
    "8=FIX.4.2\0019=45\00135=0\00134=3\00149=TW\001"
    "52=20000426-12:05:06\00156=ISLD\00110=218\001 ";
  static const char* strNoChk =
    "8=FIX.4.2\0019=45\00135=0\00134=3\00149=TW\001"
    "52=20000426-12:05:06\00156=ISLD\001";
  static const char* strBadChk =
    "8=FIX.4.2\0019=45\00135=0\00134=3\00149=TW\001"
    "52=20000426-12:05:06\00156=ISLD\00110=000\001";
  static const char* strBad =
    "8=FIX.4.2\0019=45\00135=0\00134=3\001"
    "49garbled=TW\00152=20000426-12:05:06\00156=ISLD\00110=000\001";
  static const char* strBadHeaderOrder =
    "8=FIX.4.2\00135=0\0019=45\00134=3\00149=TW\001"
    "52=20000426-12:05:06\00156=ISLD\00110=218\001";
  static const char* strBodyFields =
    "8=FIX.4.2\0019=60\00135=D\00111=ORDERID\00121=3\00140=2\001"
    "54=1\00155=MSFT\00160=19000101-00:00:00\00110=226\001";
  static const char* strNoLengthAndChk =
    "8=FIX.4.2\00135=0\00134=3\00149=TW\001"
    "52=20000426-12:05:06\00156=ISLD\001";
  static const char* strJunk =
    "paste your FIX message here, then hit ENTER";

  try
  {
    object.setString( strGood );
    object.setString( std::string(strNull, 68) );
    object.setString( strNoLengthAndChk, false );
  } catch( InvalidMessage& ) { assert(false); }

  try{ object.setString( strTrailingCharacter ); assert(false) }
  catch( InvalidMessage& ) {}
  try{ object.setString( strNoChk ); assert(false) }
  catch( InvalidMessage& ) {}
  try{ object.setString( strBadChk ); assert(false) }
  catch( InvalidMessage& ) {}
  try{ object.setString( strBad ); assert(false) }
  catch( InvalidMessage& ) {}
  try{ object.setString( strBadHeaderOrder ); assert(false) }
  catch( InvalidMessage& ) {}
  try{ object.setString( strNoLengthAndChk ); assert(false) }
  catch( InvalidMessage& ) {}
  try{ object.setString( strJunk ); assert(false) }
  catch( InvalidMessage& ) {}

  DataDictionary dataDictionary;
  dataDictionary.addHeaderField( 11, false );
  dataDictionary.addTrailerField( 60, false );

  ClOrdID clOrdID;
  TransactTime transactTime;
  Symbol symbol;
  try{ object.setString( strBodyFields, true, &dataDictionary ); }
  catch( InvalidMessage& ) { assert(false); }

  assert( object.getHeader().isSetField( clOrdID ) );
  assert( object.getTrailer().isSetField( transactTime ) );
  assert( object.isSetField( symbol ) );
}

void MessageTestCase::setStringWithGroup::onRun( Message& object )
{
  DataDictionary dataDictionary( "spec/FIX43.xml" );
  static const char* str =
    "8=FIX.4.3\0019=199\00135=E\00134=126\00149=BUYSIDE\00150=00303\00152"
    "=20040916-16:19:18.328\00156=SELLSIDE\00166=1095350459\00168=2\00173=2\00111"
    "=1095350459\00167=1\0011=00303\00155=fred\00154=1\00140=1\00159=3\00111=1095"
    "350460\00167=2\0011=00303\00155=fred\00154=1\00140=1\00159=3\001394=3\00110="
    "138\001";

    try
    {
      object.setString( str, true, &dataDictionary );
      assert( object.toString() == str );
    } catch( InvalidMessage& ) { assert(false); }
}

void MessageTestCase::setStringWithHighBit::onRun( Message& object )
{
  DataDictionary dataDictionary( "spec/FIX42.xml" );

  FIX::Headline headline( "client" );
  FIX42::News msg( headline );

  FIX::RawDataLength data_len = rand() % 100;
  FIX::RawData data;

  std::string s;
  char cc = -92;
  s.assign(data_len, cc);

  data.setValue(s);

  msg.set(data_len);
  msg.set(data);
  std::string str = msg.getString();

  try
  {
    object.setString( str, true, &dataDictionary );
    assert( object.toString() == str );
  } catch( InvalidMessage& ) { assert(false); }
}

void MessageTestCase::copy::onRun( Message& object )
{
  FIX::MDReqID mdReqID( "MARKETDATAID" );
  FIX::SubscriptionRequestType subType( FIX::SubscriptionRequestType_SNAPSHOT );
  FIX::MarketDepth marketDepth( 0 );

  FIX44::MarketDataRequest::NoMDEntryTypes marketDataEntryGroup;
  FIX::MDEntryType mdEntryType( FIX::MDEntryType_BID );
  marketDataEntryGroup.set( mdEntryType );

  FIX44::MarketDataRequest::NoRelatedSym symbolGroup;
  FIX::Symbol symbol( "LNUX" );
  symbolGroup.set( symbol );

  FIX44::MarketDataRequest message( mdReqID, subType, marketDepth );
  message.addGroup( marketDataEntryGroup );
  message.addGroup( symbolGroup );

  Message copy = object;
  Message copy2 = copy;
}

void MessageTestCase::checkSum::onRun( Message& object )
{
  const std::string str1 =
    "8=FIX.4.2\0019=46\00135=0\00134=3\00149=TW\001"
    "52=20000426-12:05:06\00156=ISLD\001";
  const std::string str2 =
    "8=FIX.4.2\0019=46\00135=0\00134=3\00149=TW\001"
    "52=20000426-12:05:06\00156=ISLD\00110=000\001";
  std::string::size_type i;
  int chksum;

  for ( i = 0L, chksum = 0; i < str1.size(); chksum += ( int ) str1[ i++ ] ) {}

  chksum %= 256;

  object.setString( str2, false );
  assert( object.checkSum() == chksum );
}

void MessageTestCase::headerFieldsFirst::onRun( Message& object )
{
  const std::string str =
    "8=FIX.4.2\0019=95\00135=D\00134=5\00149=ISLD\00155=INTC\001"
    "52=00000000-00:00:00\00156=TW\00111=ID\00121=3\001"
    "40=1\00154=1\00160=00000000-00:00:00\00110=000\001";
  object.setString( str, false );
  int field = 0;
  assert( !object.hasValidStructure(field) );
  assert( field == 52 );
}

void MessageTestCase::noEndingDelim::onRun( Message& object )
{
  static const char * str =
    "8=FIX.4.2\0019=45\00135=0\00134=3\00149=TW\001"
    "52=20000426-12:05:06\00156=ISLD\00110=218";

  try{ object.setString( str ); assert(false) }
  catch( InvalidMessage& ) {}
}

void MessageTestCase::outOfOrder::onRun( Message& object )
{
  static const char * str =
    "54=1\00120=0\00131=109.03125\00160=00000000-00:00:00\001"
    "8=FIX.4.2\0016=109.03125\0011=acct1\001151=0\001150=2\001"
    "17=2\00139=2\00138=3000\00149=MEK\00115=USD\00137=1\001"
    "48=123ABC789\00114=3000\00135=8\00156=KEM\00134=2\001"
    "55=ABCD\00111=ID1\00122=1\001";

  static const char * expected =
    "8=FIX.4.2\0019=171\00135=8\00134=2\00149=MEK\00156=KEM\0011=acct1\001"
    "6=109.03125\00111=ID1\00114=3000\00115=USD\00117=2\00120=0\00122=1\001"
    "31=109.03125\00137=1\00138=3000\00139=2\00148=123ABC789\001"
    "54=1\00155=ABCD\00160=00000000-00:00:00\001150=2\001151=0\00110=225\001";

  try
  {
    object.setString( str, false );
    assert( expected == object.toString() );
  }
  catch ( InvalidMessage& )
  { assert( false ); }
}

void MessageTestCase::getXML::onRun( Message& object )
{
  Message::InitializeXML("spec/FIX42.xml");
  Message message;
  message.getHeader().setField(BeginString("FIX.4.2"));
  message.getHeader().setField(SenderCompID("SENDER"));
  message.getHeader().setField(TargetCompID("TARGET"));
  message.getHeader().setField(MsgType(MsgType_Logon));
  message.setField(Account("ACCOUNT"));
  message.setField(ClOrdID("CLORDID"));
  message.setField(IDSource(IDSource_CUSIP));
  message.setField(NoMsgTypes(2));
  Group group(384, 372);
  group.setField(RefMsgType("A"));
  group.setField(MsgDirection('0'));
  message.addGroup(group);
  group.setField(RefMsgType("0"));
  group.setField(MsgDirection('1'));
  message.addGroup(group);
  message.getTrailer().setField(CheckSum(132));

  std::stringstream stream;
  stream  <<  "<message>" << std::endl
          << "  <header>" << std::endl
          << "    <field name=\"BeginString\" number=\"8\"><![CDATA[FIX.4.2]]></field>" << std::endl
          << "    <field name=\"MsgType\" number=\"35\" enum=\"Logon\"><![CDATA[A]]></field>" << std::endl
	  << "    <field name=\"SenderCompID\" number=\"49\"><![CDATA[SENDER]]></field>" << std::endl
	  << "    <field name=\"TargetCompID\" number=\"56\"><![CDATA[TARGET]]></field>" << std::endl
	  << "  </header>" << std::endl
          << "  <body>" << std::endl
	  << "    <field name=\"Account\" number=\"1\"><![CDATA[ACCOUNT]]></field>" << std::endl
	  << "    <field name=\"ClOrdID\" number=\"11\"><![CDATA[CLORDID]]></field>" << std::endl
	  << "    <field name=\"IDSource\" number=\"22\" enum=\"CUSIP\"><![CDATA[1]]></field>" << std::endl
	  << "    <field name=\"NoMsgTypes\" number=\"384\"><![CDATA[2]]></field>" << std::endl
	  << "    <group>" << std::endl
	  << "      <field name=\"RefMsgType\" number=\"372\"><![CDATA[A]]></field>" << std::endl
	  << "      <field name=\"MsgDirection\" number=\"385\"><![CDATA[0]]></field>" << std::endl
	  << "    </group>" << std::endl
	  << "    <group>" << std::endl
	  << "      <field name=\"RefMsgType\" number=\"372\"><![CDATA[0]]></field>" << std::endl
	  << "      <field name=\"MsgDirection\" number=\"385\"><![CDATA[1]]></field>" << std::endl
	  << "    </group>" << std::endl
	  << "  </body>" << std::endl
	  << "  <trailer>" << std::endl
	  << "    <field name=\"CheckSum\" number=\"10\"><![CDATA[132]]></field>" << std::endl
	  << "  </trailer>" << std::endl
	  << "</message>";
  assert( message.toXML() == stream.str() );
}

void MessageTestCase::reverseRoute::onRun( Message& object )
{
  Header header;
  BeginString beginString( "FIX.4.2" );
  SenderCompID senderCompID( "SenderCompID" );
  TargetCompID targetCompID( "TargetCompID" );
  OnBehalfOfCompID onBehalfOfCompID( "OnBehalfOfCompID" );
  OnBehalfOfSubID onBehalfOfSubID( "OnBehalfOfSubID" );
  OnBehalfOfLocationID onBehalfOfLocationID( "OnBehalfOfLocationID" );
  DeliverToCompID deliverToCompID( "DeliverToCompID" );
  DeliverToSubID deliverToSubID( "DeliverToSubID" );
  DeliverToLocationID deliverToLocationID( "DeliverToLocationID" );

  Message reversedMessage;
  Header& reversedHeader = reversedMessage.getHeader();

  header.setField( beginString );
  header.setField( senderCompID );
  header.setField( targetCompID );
  header.setField( onBehalfOfCompID );
  header.setField( onBehalfOfSubID );
  header.setField( onBehalfOfLocationID );
  header.setField( deliverToCompID );
  header.setField( deliverToSubID );
  header.setField( deliverToLocationID );

  reversedMessage.reverseRoute( header );
  assert( reversedHeader.getField( beginString ).getString() == "FIX.4.2" );
  assert( reversedHeader.getField( senderCompID ).getString() == "TargetCompID" );
  assert( reversedHeader.getField( targetCompID ).getString() == "SenderCompID" );
  assert( reversedHeader.getField( onBehalfOfCompID ).getString() == "DeliverToCompID" );
  assert( reversedHeader.getField( onBehalfOfSubID ).getString() == "DeliverToSubID" );
  assert( reversedHeader.getField( onBehalfOfLocationID ).getString() == "DeliverToLocationID" );
  assert( reversedHeader.getField( deliverToCompID ).getString() == "OnBehalfOfCompID" );
  assert( reversedHeader.getField( deliverToSubID ).getString() == "OnBehalfOfSubID" );
  assert( reversedHeader.getField( deliverToLocationID ).getString() == "OnBehalfOfLocationID" );

  header.setField( BeginString("FIX.4.0" ) );
  reversedMessage.reverseRoute( header );
  assert( !reversedHeader.isSetField( onBehalfOfLocationID ) );
  assert( !reversedHeader.isSetField( deliverToLocationID ) );

  header.setField( beginString );
  reversedMessage.reverseRoute( header );

  header.removeField( FIX::FIELD::OnBehalfOfCompID );
  reversedMessage.reverseRoute( header );
  assert( !reversedHeader.isSetField(deliverToCompID) );
  header.removeField( FIX::FIELD::DeliverToCompID );
  reversedMessage.reverseRoute( header );
  assert( !reversedHeader.isSetField(onBehalfOfCompID) );
  header.removeField( FIX::FIELD::OnBehalfOfSubID );
  reversedMessage.reverseRoute( header );
  assert( !reversedHeader.isSetField(deliverToSubID) );
  header.removeField( FIX::FIELD::DeliverToSubID );
  reversedMessage.reverseRoute( header );
  assert( !reversedHeader.isSetField(onBehalfOfSubID) );
  header.removeField( FIX::FIELD::OnBehalfOfLocationID );
  reversedMessage.reverseRoute( header );
  assert( !reversedHeader.isSetField(deliverToLocationID) );
  header.removeField( FIX::FIELD::DeliverToLocationID );
  reversedMessage.reverseRoute( header );
  assert( !reversedHeader.isSetField(onBehalfOfLocationID) );
}

void MessageTestCase::setNoTagValue::onRun( Message& object )
{
  Message message;

  Text text;
  try
  {
    message.setField( text );
    assert( false );
  }
  catch( NoTagValue )
  {
  }
}

template<> void LogonParseTestCase::getString::onRun( Logon& object )
{
  try
  {
    EncryptMethod encryptMethod;
    object.get( encryptMethod );
    assert( false );
  }
  catch ( std::logic_error& ) {}

  object.set( HeartBtInt( 30 ) );

  assert( object.toString() ==
          "8=FIX.4.2\0019=12\00135=A\001"
          "108=30\00110=026\001" );
}

template<> void LogonParseTestCase::setString::onRun( Logon& object )
{
  object.setString
    ( "8=FIX.4.2\0019=12\00135=A\001108=30\00110=026\001" ) ;

  HeartBtInt heartBtInt;
  assert( object.get( heartBtInt ) == 30 );
}

template<> void TestRequestParseTestCase::getString::onRun( TestRequest& object )
{
  object.set( TestReqID( "23" ) );

  assert( object.toString() ==
          "8=FIX.4.2\0019=12\00135=1\001112=23\00110=007\001" );
}

template<> void TestRequestParseTestCase::setString::onRun( TestRequest& object )
{
  object.setString
    ( "8=FIX.4.2\0019=12\00135=1\001112=23\00110=007\001" );

  TestReqID testReqID;
  assert( object.get( testReqID ) == "23" );
}

template<> void ResendRequestParseTestCase::getString::onRun( ResendRequest& object )
{
  object.set( BeginSeqNo( 1 ) );
  object.set( EndSeqNo( 233 ) );

  assert( object.toString() ==
          "8=FIX.4.2\0019=16\00135=2\0017=1\00116=233\00110=184\001" );
}

template<> void ResendRequestParseTestCase::setString::onRun( ResendRequest& object )
{
  object.setString
    ( "8=FIX.4.2\0019=16\00135=2\0017=1\00116=233\00110=184\001" );

  BeginSeqNo beginSeqNo;
  EndSeqNo endSeqNo;
  assert( object.get( beginSeqNo ) == 1 );
  assert( object.get( endSeqNo ) == 233 );
}

template<> void RejectParseTestCase::getString::onRun( Reject& object )
{
  object.set( RefSeqNum( 73 ) );
  object.set( Text( "This Message SUCKS!!!" ) );

  assert( object.toString() ==
          "8=FIX.4.2\0019=36\00135=3\00145=73\001"
          "58=This Message SUCKS!!!\00110=029\001" );
}

template<> void RejectParseTestCase::setString::onRun( Reject& object )
{
  object.setString
    ( "8=FIX.4.2\0019=36\00135=3\00145=73\001"
      "58=This Message SUCKS!!!\00110=029\001" );

  RefSeqNum refSeqNum;
  Text text;
  assert( object.get( refSeqNum ) == 73 );
  assert( object.get( text ) == "This Message SUCKS!!!" );
}

template<> void SequenceResetParseTestCase::getString::onRun( SequenceReset& object )
{
  object.set( GapFillFlag( true ) );
  object.set( NewSeqNo( 88 ) );

  assert( object.toString() ==
          "8=FIX.4.2\0019=17\00135=4\00136=88\001123=Y\00110=028\001" );
}

template<> void SequenceResetParseTestCase::setString::onRun( SequenceReset& object )
{
  object.setString
    ( "8=FIX.4.2\0019=17\00135=4\00136=88\001123=Y\00110=028\001" );

  GapFillFlag gapFillFlag;
  NewSeqNo newSeqNo;
  assert( object.get( gapFillFlag ) == true );
  assert( object.get( newSeqNo ) == 88 );
}

template<> void LogoutParseTestCase::getString::onRun( Logout& object )
{
  object.set( Text( "See Ya..." ) );

  assert( object.toString() ==
          "8=FIX.4.2\0019=18\00135=5\00158=See Ya...\00110=006\001" );
}

template<> void LogoutParseTestCase::setString::onRun( Logout& object )
{
  object.setString
    ( "8=FIX.4.2\0019=18\00135=5\00158=See Ya...\00110=006\001" );

  Text text;
  assert( object.get( text ) == "See Ya..." );
}

template<> void NewOrderSingleParseTestCase::getString::onRun( NewOrderSingle& object )
{
  object.set( ClOrdID( "ORDERID" ) );
  object.set( HandlInst( '3' ) );
  object.set( Symbol( "MSFT" ) );
  object.set( Side( '1' ) );
  object.set( TransactTime( create_tm() ) );
  object.set( OrdType( '2' ) );

  assert( object.toString() ==
          "8=FIX.4.2\0019=60\00135=D\00111=ORDERID\00121=3\00140=2\001"
          "54=1\00155=MSFT\00160=19000101-00:00:00\00110=226\001" );
}

template<> void NewOrderSingleParseTestCase::setString::onRun( NewOrderSingle& object )
{
  object.setString
   ( "8=FIX.4.2\0019=48\00135=D\00111=ORDERID\00121=3\00140=2\001"
     "54=1\00155=MSFT\00160=TODAY\00110=028\001" );

  ClOrdID clOrdID;
  HandlInst handlInst;
  Symbol symbol;
  Side side;
  TransactTime transactTime;
  OrdType ordType;
  assert( object.get( clOrdID ) == "ORDERID" );
  assert( object.get( handlInst ) == '3' );
  assert( object.get( symbol ) == "MSFT" );
  assert( object.get( side ) == '1' );
  //assert( object.get(transactTime) == 0 );
  assert( object.get( ordType ) == '2' );
}

template<> void ExecutionReportParseTestCase::getString::onRun
( ExecutionReport& object )
{
  object.set( OrderID( "ORDERID" ) );
  object.set( ExecID( "EXECID" ) );
  object.set( ExecTransType( '1' ) );
  object.set( ExecType( '2' ) );
  object.set( OrdStatus( '3' ) );
  object.set( Symbol( "MSFT" ) );
  object.set( Side( '4' ) );
  object.set( LeavesQty( 200 ) );
  object.set( CumQty( 300 ) );
  object.set( AvgPx( 23.4 ) );

  assert( object.toString() ==
          "8=FIX.4.2\0019=77\00135=8\0016=23.4\00114=300\001"
          "17=EXECID\00120=1\00137=ORDERID\00139=3\00154=4\00155=MSFT\001"
          "150=2\001151=200\00110=052\001" );
}

template<> void ExecutionReportParseTestCase::setString::onRun
( ExecutionReport& object )
{
  object.setString
    ( "8=FIX.4.2\0019=77\00135=8\0016=23.4\00114=300\001"
      "17=EXECID\00120=1\00137=ORDERID\00139=3\00154=4\001"
      "55=MSFT\001150=2\001151=200\00110=052\001" );

  OrderID orderID;
  ExecID execID;
  ExecTransType execTransType;
  ExecType execType;
  OrdStatus ordStatus;
  Symbol symbol;
  Side side;
  LeavesQty leavesQty;
  CumQty cumQty;
  AvgPx avgPx;
  assert( object.get( orderID ) == "ORDERID" );
  assert( object.get( execID ) == "EXECID" );
  assert( object.get( execTransType ) == '1' );
  assert( object.get( execType ) == '2' );
  assert( object.get( ordStatus ) == '3' );
  assert( object.get( symbol ) == "MSFT" );
  assert( object.get( side ) == '4' );
  assert( object.get( leavesQty ) == 200 );
  assert( object.get( cumQty ) == 300 );
  assert( object.get( avgPx ) == 23.4 );
}

template<> void DontKnowTradeParseTestCase::getString::onRun( DontKnowTrade& object )
{
  object.set( OrderID( "ORDERID" ) );
  object.set( ExecID( "EXECID" ) );
  object.set( DKReason( '1' ) );
  object.set( Symbol( "MSFT" ) );
  object.set( Side( '2' ) );

  assert( object.toString() ==
          "8=FIX.4.2\0019=45\00135=Q\00117=EXECID\00137=ORDERID\001"
          "54=2\00155=MSFT\001127=1\00110=195\001" );
}

template<> void DontKnowTradeParseTestCase::setString::onRun( DontKnowTrade& object )
{
  object.setString
    ( "8=FIX.4.2\0019=45\00135=Q\00117=EXECID\00137=ORDERID\001"
      "54=2\00155=MSFT\001127=1\00110=195\001" );

  OrderID orderID;
  ExecID execID;
  DKReason dKReason;
  Symbol symbol;
  Side side;
  assert( object.get( orderID ) == "ORDERID" );
  assert( object.get( execID ) == "EXECID" );
  assert( object.get( dKReason ) == '1' );
  assert( object.get( symbol ) == "MSFT" );
  assert( object.get( side ) == '2' );
}

template<> void OrderCancelReplaceRequestParseTestCase::getString::onRun
( OrderCancelReplaceRequest& object )
{
  object.set( OrigClOrdID( "ORIGINALID" ) );
  object.set( ClOrdID( "CLIENTID" ) );
  object.set( HandlInst( '1' ) );
  object.set( Symbol( "MSFT" ) );
  object.set( Side( '2' ) );
  object.set( TransactTime( create_tm() ) );
  object.set( OrdType( '3' ) );

  assert( object.toString() ==
          "8=FIX.4.2\0019=75\00135=G\00111=CLIENTID\00121=1\001"
          "40=3\00141=ORIGINALID\00154=2\00155=MSFT\001"
          "60=19000101-00:00:00\00110=179\001" );
}

template<> void OrderCancelReplaceRequestParseTestCase::setString::onRun
( OrderCancelReplaceRequest& object )
{
  object.setString
    ( "8=FIX.4.2\0019=63\00135=G\00111=CLIENTID\00121=1\001"
      "40=3\00141=ORIGINALID\00154=2\00155=MSFT\00160=TODAY\001"
      "10=228\001" );

  OrigClOrdID origClOrdID;
  ClOrdID clOrdID;
  HandlInst handlInst;
  Symbol symbol;
  Side side;
  TransactTime transactTime;
  OrdType ordType;
  assert( object.get( origClOrdID ) == "ORIGINALID" );
  assert( object.get( clOrdID ) == "CLIENTID" );
  assert( object.get( handlInst ) == '1' );
  assert( object.get( symbol ) == "MSFT" );
  assert( object.get( side ) == '2' );
  assert( object.get( ordType ) == '3' );
}

template<> void OrderCancelRequestParseTestCase::getString::onRun
( OrderCancelRequest& object )
{
  object.set( OrigClOrdID( "ORIGINALID" ) );
  object.set( ClOrdID( "CLIENTID" ) );
  object.set( Symbol( "MSFT" ) );
  object.set( Side( '1' ) );
  object.set( TransactTime( create_tm() ) );

  assert( object.toString()
          ==
          "8=FIX.4.2\0019=65\00135=F\00111=CLIENTID\00141=ORIGINALID\001"
          "54=1\00155=MSFT\00160=19000101-00:00:00\00110=009\001" );
}

template<> void OrderCancelRequestParseTestCase::setString::onRun
( OrderCancelRequest& object )
{
  object.setString
    ( "8=FIX.4.2\0019=53\00135=F\00111=CLIENTID\00141=ORIGINALID\001"
      "54=1\00155=MSFT\00160=TODAY\00110=058\001" );

  OrigClOrdID origClOrdID;
  ClOrdID clOrdID;
  Symbol symbol;
  Side side;
  TransactTime transactTime;
  assert( object.get( origClOrdID ) == "ORIGINALID" );
  assert( object.get( clOrdID ) == "CLIENTID" );
  assert( object.get( symbol ) == "MSFT" );
  assert( object.get( side ) == '1' );
}

template<> void OrderCancelRejectParseTestCase::getString::onRun
( OrderCancelReject& object )
{
  object.set( OrderID( "ORDERID" ) );
  object.set( ClOrdID( "CLIENTID" ) );
  object.set( OrigClOrdID( "ORIGINALID" ) );
  object.set( OrdStatus( '1' ) );
  object.set( CxlRejResponseTo( '2' ) );

  assert( object.toString() ==
          "8=FIX.4.2\0019=53\00135=9\00111=CLIENTID\00137=ORDERID\001"
          "39=1\00141=ORIGINALID\001434=2\00110=229\001" );
}

template<> void OrderCancelRejectParseTestCase::setString::onRun
( OrderCancelReject& object )
{
  object.setString
    ( "8=FIX.4.2\0019=53\00135=9\00111=CLIENTID\00137=ORDERID\001"
      "39=1\00141=ORIGINALID\001434=2\00110=229\001" );

  OrderID orderID;
  ClOrdID clOrdID;
  OrigClOrdID origClOrdID;
  OrdStatus ordStatus;
  CxlRejResponseTo cxlRejResponseTo;
  assert( object.get( orderID ) == "ORDERID" );
  assert( object.get( clOrdID ) == "CLIENTID" );
  assert( object.get( origClOrdID ) == "ORIGINALID" );
  assert( object.get( ordStatus ) == '1' );
  assert( object.get( cxlRejResponseTo ) == '2' );
}

template<> void OrderStatusRequestParseTestCase::getString::onRun
( OrderStatusRequest& object )
{
  object.set( ClOrdID( "CLIENTID" ) );
  object.set( Symbol( "MSFT" ) );
  object.set( Side( '1' ) );

  assert( object.toString() ==
          "8=FIX.4.2\0019=30\00135=H\00111=CLIENTID\00154=1\001"
          "55=MSFT\00110=141\001" );
}

template<> void OrderStatusRequestParseTestCase::setString::onRun
( OrderStatusRequest& object )
{
  object.setString
    ( "8=FIX.4.2\0019=30\00135=H\00111=CLIENTID\00154=1\001"
      "55=MSFT\00110=141\001" );

  ClOrdID clOrdID;
  Symbol symbol;
  Side side;
  assert( object.get( clOrdID ) == "CLIENTID" );
  assert( object.get( symbol ) == "MSFT" );
  assert( object.get( side ) == '1' );
}

template<> void NewOrderListParseTestCase::getString::onRun
( NewOrderList& object )
{
  object.set( ListID( "1" ) );
  object.set( BidType( 0 ) );
  object.set( TotNoOrders( 3 ) );

  NewOrderList::NoOrders group;
  group.set( ClOrdID( "A" ) );
  group.set( ListSeqNo( 1 ) );
  group.set( Symbol( "DELL" ) );
  group.set( Side( '1' ) );
  object.addGroup( group );

  group.set( ClOrdID( "B" ) );
  group.set( ListSeqNo( 2 ) );
  group.set( Symbol( "LNUX" ) );
  group.set( Side( '2' ) );
  object.addGroup( group );

  group.set( ClOrdID( "C" ) );
  group.set( ListSeqNo( 3 ) );
  group.set( Symbol( "RHAT" ) );
  group.set( Side( '3' ) );
  object.addGroup( group );

  assert( object.toString() ==
          ( "8=FIX.4.2\0019=95\00135=E\00166=1\00168=3\00173=3\001"
            "11=A\00167=1\00155=DELL\00154=1\001"
            "11=B\00167=2\00155=LNUX\00154=2\001"
            "11=C\00167=3\00155=RHAT\00154=3\001"
            "394=0\00110=233\001" ) );
}

template<> void NewOrderListParseTestCase::setString::onRun
( NewOrderList& object )
{
  DataDictionary dataDictionary( "spec/FIX42.xml" );
  try
  {
    object.setString
      ( "8=FIX.4.2\0019=95\00135=E\00166=1\00168=3\00173=3\001"
        "11=A\00154=1\00155=DELL\00167=1\001"
        "11=B\00154=2\00155=LNUX\00167=2\001"
        "11=C\00154=3\00155=RHAT\00167=3\001"
        "394=0\00110=233\001", true, &dataDictionary );
  }
  catch ( ... )
  { assert(false); }

  ListID listID;
  BidType bidType;
  TotNoOrders totNoOrders;

  object.get( listID );
  object.get( bidType );
  object.get( totNoOrders );

  ClOrdID clOrdID;
  ListSeqNo listSeqNo;
  Symbol symbol;
  Side side;

  NewOrderList::NoOrders group;
  object.getGroup( 1, group );
  group.get( clOrdID );
  group.get( listSeqNo );
  group.get( symbol );
  group.get( side );

  assert( clOrdID.getValue() == "A" );
  assert( listSeqNo == 1 );
  assert( symbol == "DELL" );
  assert( side == '1' );

  object.getGroup( 2, group );
  group.get( clOrdID );
  group.get( listSeqNo );
  group.get( symbol );
  group.get( side );

  assert( clOrdID.getValue() == "B" );
  assert( listSeqNo == 2 );
  assert( symbol == "LNUX" );
  assert( side == '2' );

  object.getGroup( 3, group );
  group.get( clOrdID );
  group.get( listSeqNo );
  group.get( symbol );
  group.get( side );

  assert( clOrdID.getValue() == "C" );
  assert( listSeqNo == 3 );
  assert( symbol == "RHAT" );
  assert( side == '3' );

  try
  {
    object.setString
      ( "8=FIX.4.2\0019=26\00135=E\00166=1\00168=3\00173=0\001"
        "394=0\00110=137\001", true, &dataDictionary );
  }
  catch ( ... )
  { assert(false); }
}

template<> void MassQuoteParseTestCase::getString::onRun
( MassQuote& object )
{
  object.set( QuoteID( "1" ) );

  MassQuote::NoQuoteSets group;
  group.set( QuoteSetID( "A" ) );
  group.set( UnderlyingSymbol( "DELL" ) );
  group.set( EncodedUnderlyingSecurityDescLen( 10 ) );
  group.set( EncodedUnderlyingSecurityDesc( "DELL\001COMP\001" ) );
  object.addGroup( group );

  assert( object.toString() ==
          ( "8=FIX.4.2\0019=54\00135=i\001117=1\001296=1\001302=A\001"
            "311=DELL\001364=10\001365=DELL\001COMP\001\00110=152\001" ) );
}

template<> void MassQuoteParseTestCase::setString::onRun
( MassQuote& object )
{
  DataDictionary dataDictionary( "spec/FIX42.xml" );
  try
  {
    object.setString
      ( "8=FIX.4.2\0019=54\00135=i\001117=1\001296=1\001302=A\001"
        "311=DELL\001364=10\001365=DELL\001COMP\001\00110=152\001",
         true, &dataDictionary );
  }
  catch ( ... )
  { assert(false); }

  QuoteID quoteID;

  object.get( quoteID );

  QuoteSetID quoteSetID;
  UnderlyingSymbol underlyingSymbol;
  EncodedUnderlyingSecurityDescLen encLen;
  EncodedUnderlyingSecurityDesc encDesc;

  MassQuote::NoQuoteSets group;
  object.getGroup( 1, group );
  group.get( quoteSetID );
  group.get( underlyingSymbol );
  group.get( encLen );
  group.get( encDesc );

  assert( quoteSetID == "A" );
  assert( underlyingSymbol == "DELL" );
  assert( encLen == 10 );
  assert( encDesc == "DELL\001COMP\001" );
}
}
