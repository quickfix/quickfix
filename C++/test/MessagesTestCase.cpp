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
#include <Values.h>
#include <Utility.h>
#include <fix44/MarketDataRequest.h>
#include <fix42/News.h>
#include <fix42/NewOrderList.h>
#include <fix42/Logon.h>
#include <fix42/TestRequest.h>
#include <fix42/ResendRequest.h>
#include <fix42/Reject.h>
#include <fix42/SequenceReset.h>
#include <fix42/Logout.h>
#include <fix42/NewOrderSingle.h>
#include <fix42/ExecutionReport.h>
#include <fix42/DontKnowTrade.h>
#include <fix42/OrderCancelReplaceRequest.h>
#include <fix42/OrderCancelRequest.h>
#include <fix42/OrderCancelReject.h>
#include <fix42/OrderStatusRequest.h>
#include <fix42/MassQuote.h>
#include <fix44/NewOrderCross.h>
#include <fix44/AllocationInstruction.h>

using namespace FIX;
using namespace FIX42;
using namespace FIX44;

SUITE(MessageTests)
{

static UtcTimeStamp create_tm()
{
  UtcTimeStamp result = UtcTimeStamp (0, 0, 0, 1, 1, 1900);
  return result;
}

TEST(identifyType)
{
  CHECK_EQUAL( "A", FIX::identifyType( "8=FIX.4.2\0019=12\00135=A\001108=30\00110=031\001" ) );
  CHECK_EQUAL( "AB", FIX::identifyType( "8=FIX.4.2\0019=12\00135=AB\001108=30\00110=031\001" ) );
  CHECK_THROW( FIX::identifyType( "8=FIX.4.2\0019=12\001108=30\00110=031\001" ), std::logic_error );
}

TEST(isAdminMsgType)
{
  CHECK( FIX::Message::isAdminMsgType( FIX::MsgType("A") ));
  CHECK( !FIX::Message::isAdminMsgType( FIX::MsgType("D") ));
  CHECK( !FIX::Message::isAdminMsgType( FIX::MsgType("AE") ));
  CHECK( !FIX::Message::isAdminMsgType( FIX::MsgType() ));
}

TEST(isAdmin)
{
  FIX::Message object;
  CHECK( !object.isAdmin() );
  object.getHeader().setField( FIX::MsgType("A") );
  CHECK( object.isAdmin() );
  object.getHeader().setField( FIX::MsgType("D") );
  CHECK( !object.isAdmin() );
}

TEST(isApp)
{
  FIX::Message object;
  CHECK( !object.isApp() );
  object.getHeader().setField( FIX::MsgType("A") );
  CHECK( !object.isApp() );
  object.getHeader().setField( FIX::MsgType("D") );
  CHECK( object.isApp() );
}

TEST(isEmpty)
{
  FIX::Message message;
  CHECK( message.isEmpty() );
  message.getHeader().setField( BeginString("FIX.4.2") );
  CHECK( !message.isEmpty() );
  message.clear();
  CHECK( message.isEmpty() );
  message.setField( Symbol("MSFT") );
  CHECK( !message.isEmpty() );
  message.clear();
  CHECK( message.isEmpty() );
  message.getTrailer().setField( CheckSum(10) );
  CHECK( !message.isEmpty() );
  message.clear();
  CHECK( message.isEmpty() );
}

TEST(getFieldIfPresent)
{
  FIX::Message message;
  FIX::MsgType initial("A");
  CHECK( !message.getFieldIfSet( initial ) );
  CHECK( initial == FIX::MsgType("A") );

  message.setField( initial );
  FIX::MsgType stored;
  CHECK( message.getFieldIfSet( stored ) );
  CHECK( stored == initial );
}

TEST(setString)
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
  static const char* strBadLength =
    "8=FIX.4.2\0019=AB\00135=0\00134=3\00149=TW\001"
    "52=20000426-12:05:06\00156=ISLD\00110=218\001";
  static const char* strBadChecksum =
    "8=FIX.4.2\0019=45\00135=0\00134=3\00149=TW\001"
    "52=20000426-12:05:06\00156=ISLD\00110=ABC\001";
  static const char* strJunk =
    "paste your FIX message here, then hit ENTER";
  static const char* strEmpty =
    "";

  FIX::Message object;
  object.setString( strGood );
  object.setString( std::string(strNull, 68) );
  object.setString( strNoLengthAndChk, false );

  CHECK_THROW( object.setString( strTrailingCharacter ), InvalidMessage );
  CHECK_THROW( object.setString( strNoChk ), InvalidMessage );
  CHECK_THROW( object.setString( strBadChk ), InvalidMessage );
  CHECK_THROW( object.setString( strBad ), InvalidMessage );
  CHECK_THROW( object.setString( strBadHeaderOrder ), InvalidMessage );
  CHECK_THROW( object.setString( strNoLengthAndChk ), InvalidMessage );
  CHECK_THROW( object.setString( strBadLength ), InvalidMessage );
  CHECK_THROW( object.setString( strBadChecksum ), InvalidMessage );
  CHECK_THROW( object.setString( strJunk ), InvalidMessage );
  CHECK_THROW( object.setString( strEmpty ), InvalidMessage );

  DataDictionary dataDictionary;
  dataDictionary.addHeaderField( 11, false );
  dataDictionary.addTrailerField( 60, false );

  ClOrdID clOrdID;
  TransactTime transactTime;
  Symbol symbol;
  object.setString( strBodyFields, true, &dataDictionary );

  CHECK( object.getHeader().isSetField( clOrdID ) );
  CHECK( object.getTrailer().isSetField( transactTime ) );
  CHECK( object.isSetField( symbol ) );
}

TEST(setStringWithGroup)
{
  FIX::Message object;
  DataDictionary dataDictionary( "../spec/FIX43.xml" );
  static const char* str =
    "8=FIX.4.3\0019=199\00135=E\00134=126\00149=BUYSIDE\00150=00303\00152"
    "=20040916-16:19:18.328\00156=SELLSIDE\00166=1095350459\00168=2\00173=2\00111"
    "=1095350459\00167=1\0011=00303\00155=fred\00154=1\00140=1\00159=3\00111=1095"
    "350460\00167=2\0011=00303\00155=fred\00154=1\00140=1\00159=3\001394=3\00110="
    "138\001";

  object.setString( str, true, &dataDictionary );
  CHECK_EQUAL( str, object.toString() );
}

TEST(setStringWithGroupWithoutDelimiter)
{
  FIX::Message object;
  DataDictionary dataDictionary( "../spec/FIX43.xml" );
  static const char* str =
    "8=FIX.4.3\0019=171\00135=E\00134=126\00149=BUYSIDE\00150=00303\00152"
    "=20040916-16:19:18.328\00156=SELLSIDE\00166=1095350459\00168=2\00173=2\001"
    "67=1\0011=00303\00155=fred\00154=1\00140=1\00159=3\001"
    "67=2\0011=00303\00155=fred\00154=1\00140=1\00159=3\001394=3\00110="
    "054\001";

  object.setString( str, true, &dataDictionary );
  CHECK_EQUAL( str, object.toString() );
}

TEST(setStringWithHeaderGroup)
{
  FIX::Message object;
  DataDictionary dataDictionary( "../spec/FIX43.xml" );
  static const char* str =
    "8=FIX.4.3\0019=152\00135=A\00134=125\00149=BUYSIDE\001"
    "52=20040916-16:19:18.328\00156=SELLSIDE\001"
    "627=2\001628=HOP1\001629=20040916-16:19:18.328\001630=ID1\001"
    "628=HOP2\001629=20040916-16:19:18.328\001630=ID2\001"
    "10=079\001";

  object.setString( str, true, &dataDictionary );
  CHECK_EQUAL( str, object.toString() );
}

TEST(setStringWithHeaderGroupDefinedInComponent)
{
  FIX::Message object;
  DataDictionary dataDictionary( "../spec/FIX44.xml" );
  static const char* str =
    "8=FIX.4.4\0019=152\00135=A\00134=125\00149=BUYSIDE\001"
    "52=20040916-16:19:18.328\00156=SELLSIDE\001"
    "627=2\001628=HOP1\001629=20040916-16:19:18.328\001630=ID1\001"
    "628=HOP2\001629=20040916-16:19:18.328\001630=ID2\001"
    "10=080\001";

  object.setString( str, true, &dataDictionary );
  CHECK_EQUAL( str, object.toString() );
}

TEST(setStringWithHighBit)
{
  FIX::Message object;
  DataDictionary dataDictionary( "../spec/FIX42.xml" );

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
  std::string str = msg.toString();

  object.setString( str, true, &dataDictionary );
  CHECK_EQUAL( str, object.toString() );
}

TEST(setStringWithDataFieldWithoutDataLength)
{
  FIX::Message object;
  DataDictionary dataDictionary("../spec/FIX42.xml");

  FIX::Headline headline("client");
  FIX42::News msg(headline);

  std::string s;
  char cc = -92;
  int data_len = rand() % 100;
  s.assign(data_len, cc);

  FIX::RawData data;
  data.setValue(s);

  msg.set(data);
  std::string str = msg.toString();

  CHECK_THROW(object.setString(str, true, &dataDictionary), InvalidMessage);
}

TEST(setStringWithDataFieldAndGarbageAsDataLength)
{
  FIX::Message object;
  DataDictionary dataDictionary("../spec/FIX42.xml");

  FIX::Headline headline("client");
  FIX42::News msg(headline);

  FIX::RawDataLength data_len;
  data_len.setString("garbage");

  std::string s;
  char cc = -92;
  int length = rand() % 100;
  s.assign(length, cc);

  FIX::RawData data;
  data.setValue(s);

  msg.set(data_len);
  msg.set(data);
  std::string str = msg.toString();

  CHECK_THROW(object.setString(str, true, &dataDictionary), InvalidMessage);
}

TEST(copy)
{
  FIX::Message object;
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

  FIX::Message copy = object;
  FIX::Message copy2 = copy;

  CHECK_EQUAL( object.toString(), copy.toString() );
  CHECK_EQUAL( object.toString(), copy2.toString() );
}

TEST(checkSum)
{
  FIX::Message object;
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
  CHECK_EQUAL( chksum, object.checkSum() );
}

TEST(headerFieldsFirst)
{
  FIX::Message object;
  const std::string str =
    "8=FIX.4.2\0019=95\00135=D\00134=5\00149=ISLD\00155=INTC\001"
    "52=00000000-00:00:00\00156=TW\00111=ID\00121=3\001"
    "40=1\00154=1\00160=00000000-00:00:00\00110=000\001";
  object.setString( str, false );
  int field = 0;
  CHECK( !object.hasValidStructure(field) );
  CHECK_EQUAL( 52, field );
}

TEST(noEndingDelim)
{
  FIX::Message object;
  static const char * str =
    "8=FIX.4.2\0019=45\00135=0\00134=3\00149=TW\001"
    "52=20000426-12:05:06\00156=ISLD\00110=218";

  CHECK_THROW( object.setString( str ), InvalidMessage );
}

TEST(outOfOrder)
{
  FIX::Message object;
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

  object.setString( str, false );
  CHECK_EQUAL( expected, object.toString() );
}

TEST(getXML)
{
  FIX::Message::InitializeXML("../spec/FIX42.xml");
  FIX::Message message;
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

  CHECK_EQUAL( stream.str(), message.toXML() );
}

TEST(reverseRoute)
{
  FIX::Header header;
  BeginString beginString( "FIX.4.2" );
  SenderCompID senderCompID( "SenderCompID" );
  TargetCompID targetCompID( "TargetCompID" );
  OnBehalfOfCompID onBehalfOfCompID( "OnBehalfOfCompID" );
  OnBehalfOfSubID onBehalfOfSubID( "OnBehalfOfSubID" );
  OnBehalfOfLocationID onBehalfOfLocationID( "OnBehalfOfLocationID" );
  DeliverToCompID deliverToCompID( "DeliverToCompID" );
  DeliverToSubID deliverToSubID( "DeliverToSubID" );
  DeliverToLocationID deliverToLocationID( "DeliverToLocationID" );

  FIX::Message reversedMessage;
  FIX::Header& reversedHeader = reversedMessage.getHeader();

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
  CHECK_EQUAL( "FIX.4.2", reversedHeader.getField( beginString ).getString() );
  CHECK_EQUAL( "TargetCompID", reversedHeader.getField( senderCompID ).getString() );
  CHECK_EQUAL( "SenderCompID", reversedHeader.getField( targetCompID ).getString() );
  CHECK_EQUAL( "DeliverToCompID", reversedHeader.getField( onBehalfOfCompID ).getString() );
  CHECK_EQUAL( "DeliverToSubID", reversedHeader.getField( onBehalfOfSubID ).getString() );
  CHECK_EQUAL( "DeliverToLocationID", reversedHeader.getField( onBehalfOfLocationID ).getString() );
  CHECK_EQUAL( "OnBehalfOfCompID", reversedHeader.getField( deliverToCompID ).getString() );
  CHECK_EQUAL( "OnBehalfOfSubID", reversedHeader.getField( deliverToSubID ).getString() );
  CHECK_EQUAL( "OnBehalfOfLocationID", reversedHeader.getField( deliverToLocationID ).getString() );

  header.setField( BeginString("FIX.4.0" ) );
  reversedMessage.reverseRoute( header );
  CHECK( !reversedHeader.isSetField( onBehalfOfLocationID ) );
  CHECK( !reversedHeader.isSetField( deliverToLocationID ) );

  header.setField( beginString );
  reversedMessage.reverseRoute( header );

  header.removeField( FIX::FIELD::OnBehalfOfCompID );
  reversedMessage.reverseRoute( header );
  CHECK( !reversedHeader.isSetField(deliverToCompID) );
  header.removeField( FIX::FIELD::DeliverToCompID );
  reversedMessage.reverseRoute( header );
  CHECK( !reversedHeader.isSetField(onBehalfOfCompID) );
  header.removeField( FIX::FIELD::OnBehalfOfSubID );
  reversedMessage.reverseRoute( header );
  CHECK( !reversedHeader.isSetField(deliverToSubID) );
  header.removeField( FIX::FIELD::DeliverToSubID );
  reversedMessage.reverseRoute( header );
  CHECK( !reversedHeader.isSetField(onBehalfOfSubID) );
  header.removeField( FIX::FIELD::OnBehalfOfLocationID );
  reversedMessage.reverseRoute( header );
  CHECK( !reversedHeader.isSetField(deliverToLocationID) );
  header.removeField( FIX::FIELD::DeliverToLocationID );
  reversedMessage.reverseRoute( header );
  CHECK( !reversedHeader.isSetField(onBehalfOfLocationID) );
}

TEST(addRemoveGroup)
{
  FIX::Message object;
  object.setField( ListID( "1" ) );
  object.setField( BidType( 0 ) );
  object.setField( TotNoOrders( 3 ) );

  FIX42::NewOrderList::NoOrders group;
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

  NoOrders noOrders;

  CHECK( object.hasGroup(1, group) );
  CHECK( object.hasGroup(2, group) );
  CHECK( object.hasGroup(3, group) );
  CHECK_EQUAL( 3lu, object.groupCount(FIX::FIELD::NoOrders) );
  object.getField( noOrders );
  CHECK_EQUAL( 3, noOrders );

  object.removeGroup( 2, group );
  CHECK( object.hasGroup(1, group) );
  CHECK( object.hasGroup(2, group) );
  CHECK( !object.hasGroup(3, group) );
  CHECK_EQUAL( 2lu, object.groupCount(FIX::FIELD::NoOrders) );
  object.getField( noOrders );
  CHECK_EQUAL( 2, noOrders );

  object.removeGroup( group );
  CHECK( !object.hasGroup(1, group) );
  CHECK( !object.hasGroup(2, group) );
  CHECK( !object.hasGroup(3, group) );
  CHECK_EQUAL( 0lu, object.groupCount(FIX::FIELD::NoOrders) );
  CHECK( !object.isSetField( noOrders ) );
}

TEST(replaceGroup)
{
  FIX::Message object;
  object.setField( ListID( "1" ) );
  object.setField( BidType( 0 ) );
  object.setField( TotNoOrders( 3 ) );

  FIX42::NewOrderList::NoOrders group;
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

  group.set( ClOrdID( "D" ) );
  group.set( ListSeqNo( 4 ) );
  group.set( Symbol( "AAPL" ) );
  group.set( Side( '4' ) );
  object.replaceGroup( 2, group );

  NoOrders noOrders;

  CHECK( object.hasGroup(1, group) );
  CHECK( object.hasGroup(2, group) );
  CHECK( object.hasGroup(3, group) );
  CHECK_EQUAL( 3lu, object.groupCount(FIX::FIELD::NoOrders) );
  object.getField( noOrders );
  CHECK_EQUAL( 3, noOrders );

  ClOrdID clOrdID;
  object.getGroup( 1, group );
  CHECK_EQUAL( "A", group.getField(clOrdID).getString() );
  object.getGroup( 2, group );
  CHECK_EQUAL( "D", group.getField(clOrdID).getString() );
  object.getGroup( 3, group );
  CHECK_EQUAL( "C", group.getField(clOrdID).getString() );
}

TEST(logonGetString)
{
  Logon object;

  EncryptMethod encryptMethod;
  CHECK_THROW( object.get( encryptMethod ), std::logic_error );

  object.set( HeartBtInt( 30 ) );

  CHECK_EQUAL( "8=FIX.4.2\0019=12\00135=A\001"
               "108=30\00110=026\001", object.toString() );
}

TEST(logonSetString)
{
  Logon object;

  object.setString
    ( "8=FIX.4.2\0019=12\00135=A\001108=30\00110=026\001" ) ;

  HeartBtInt heartBtInt;
  CHECK_EQUAL( 30, object.get( heartBtInt ) );
}

TEST(testRequestGetString)
{
  TestRequest object;

  object.set( TestReqID( "23" ) );

  CHECK_EQUAL( "8=FIX.4.2\0019=12\00135=1\001112=23\00110=007\001",
               object.toString() );
}

TEST(testRequestSetString)
{
  TestRequest object;

  object.setString
    ( "8=FIX.4.2\0019=12\00135=1\001112=23\00110=007\001" );

  TestReqID testReqID;
  CHECK_EQUAL( "23", object.get( testReqID ) );
}

TEST(resendRequestGetString)
{
  ResendRequest object;

  object.set( BeginSeqNo( 1 ) );
  object.set( EndSeqNo( 233 ) );

  CHECK_EQUAL( "8=FIX.4.2\0019=16\00135=2\0017=1\00116=233\00110=184\001",
               object.toString() );
}

TEST(resendRequestSetString)
{
  ResendRequest object;

  object.setString
    ( "8=FIX.4.2\0019=16\00135=2\0017=1\00116=233\00110=184\001" );

  BeginSeqNo beginSeqNo;
  EndSeqNo endSeqNo;
  CHECK_EQUAL( 1, object.get( beginSeqNo ) );
  CHECK_EQUAL( 233, object.get( endSeqNo ) );
}

TEST(rejectGetString)
{
  Reject object;

  object.set( RefSeqNum( 73 ) );
  object.set( Text( "This Message SUCKS!!!" ) );

  CHECK_EQUAL( "8=FIX.4.2\0019=36\00135=3\00145=73\001"
               "58=This Message SUCKS!!!\00110=029\001",
               object.toString() );
}

TEST(rejectSetString)
{
  Reject object;

  object.setString
    ( "8=FIX.4.2\0019=36\00135=3\00145=73\001"
      "58=This Message SUCKS!!!\00110=029\001" );

  RefSeqNum refSeqNum;
  Text text;
  CHECK_EQUAL( 73, object.get( refSeqNum ) );
  CHECK_EQUAL( "This Message SUCKS!!!", object.get( text ) );
}

TEST(sequenceResetGetString)
{
  SequenceReset object;

  object.set( GapFillFlag( true ) );
  object.set( NewSeqNo( 88 ) );

  CHECK_EQUAL( "8=FIX.4.2\0019=17\00135=4\00136=88\001123=Y\00110=028\001",
               object.toString() );
}

TEST(sequenceResetSetString)
{
  SequenceReset object;

  object.setString
    ( "8=FIX.4.2\0019=17\00135=4\00136=88\001123=Y\00110=028\001" );

  GapFillFlag gapFillFlag;
  NewSeqNo newSeqNo;
  CHECK( object.get( gapFillFlag ) );
  CHECK_EQUAL( 88, object.get( newSeqNo ) );
}

TEST(logoutGetString)
{
  Logout object;

  object.set( Text( "See Ya..." ) );

  CHECK_EQUAL( "8=FIX.4.2\0019=18\00135=5\00158=See Ya...\00110=006\001",
               object.toString() );
}

TEST(logoutSetString)
{
  Logout object;

  object.setString
    ( "8=FIX.4.2\0019=18\00135=5\00158=See Ya...\00110=006\001" );

  Text text;
  CHECK_EQUAL( "See Ya...", object.get( text ) );
}

TEST(newOrderSingleGetString)
{
  NewOrderSingle object;

  object.set( ClOrdID( "ORDERID" ) );
  object.set( HandlInst( '3' ) );
  object.set( Symbol( "MSFT" ) );
  object.set( Side( '1' ) );
  object.set( TransactTime( create_tm() ) );
  object.set( OrdType( '2' ) );

  CHECK_EQUAL( "8=FIX.4.2\0019=60\00135=D\00111=ORDERID\00121=3\00140=2\001"
               "54=1\00155=MSFT\00160=19000101-00:00:00\00110=226\001",
               object.toString() );
}

TEST(newOrderSingleSetString)
{
  NewOrderSingle object;

  object.setString
   ( "8=FIX.4.2\0019=48\00135=D\00111=ORDERID\00121=3\00140=2\001"
     "54=1\00155=MSFT\00160=TODAY\00110=028\001" );

  ClOrdID clOrdID;
  HandlInst handlInst;
  Symbol symbol;
  Side side;
  TransactTime transactTime;
  OrdType ordType;
  CHECK_EQUAL( "ORDERID", object.get( clOrdID ) );
  CHECK_EQUAL( '3', object.get( handlInst ) );
  CHECK_EQUAL( "MSFT", object.get( symbol ) );
  CHECK_EQUAL( '1', object.get( side ) );
  //CHECK_EQUAL( 0, object.get(transactTime) );
  CHECK_EQUAL( '2', object.get( ordType ) );
}

TEST(executionReportGetString)
{
  ExecutionReport object;

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

  CHECK_EQUAL( "8=FIX.4.2\0019=77\00135=8\0016=23.4\00114=300\001"
               "17=EXECID\00120=1\00137=ORDERID\00139=3\00154=4\00155=MSFT\001"
               "150=2\001151=200\00110=052\001",
               object.toString() );
}

TEST(executionReportSetString)
{
  ExecutionReport object;

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
  CHECK_EQUAL( "ORDERID", object.get( orderID ) );
  CHECK_EQUAL( "EXECID", object.get( execID ) );
  CHECK_EQUAL( '1', object.get( execTransType ) );
  CHECK_EQUAL( '2', object.get( execType ) );
  CHECK_EQUAL( '3', object.get( ordStatus ) );
  CHECK_EQUAL( "MSFT", object.get( symbol ) );
  CHECK_EQUAL( '4', object.get( side ) );
  CHECK_EQUAL( 200, object.get( leavesQty ) );
  CHECK_EQUAL( 300, object.get( cumQty ) );
  CHECK_EQUAL( 23.4, object.get( avgPx ) );
}

TEST(dontKnowTradeGetString)
{
  DontKnowTrade object;

  object.set( OrderID( "ORDERID" ) );
  object.set( ExecID( "EXECID" ) );
  object.set( DKReason( '1' ) );
  object.set( Symbol( "MSFT" ) );
  object.set( Side( '2' ) );

  CHECK_EQUAL( "8=FIX.4.2\0019=45\00135=Q\00117=EXECID\00137=ORDERID\001"
               "54=2\00155=MSFT\001127=1\00110=195\001",
               object.toString() );
}

TEST(dontKnowTradeSetString)
{
  DontKnowTrade object;

  object.setString
    ( "8=FIX.4.2\0019=45\00135=Q\00117=EXECID\00137=ORDERID\001"
      "54=2\00155=MSFT\001127=1\00110=195\001" );

  OrderID orderID;
  ExecID execID;
  DKReason dKReason;
  Symbol symbol;
  Side side;
  CHECK_EQUAL( "ORDERID", object.get( orderID ) );
  CHECK_EQUAL( "EXECID", object.get( execID ) );
  CHECK_EQUAL( '1', object.get( dKReason ) );
  CHECK_EQUAL( "MSFT", object.get( symbol ) );
  CHECK_EQUAL( '2', object.get( side ) );
}

TEST(orderCancelReplaceGetString)
{
  OrderCancelReplaceRequest object;

  object.set( OrigClOrdID( "ORIGINALID" ) );
  object.set( ClOrdID( "CLIENTID" ) );
  object.set( HandlInst( '1' ) );
  object.set( Symbol( "MSFT" ) );
  object.set( Side( '2' ) );
  object.set( TransactTime( create_tm() ) );
  object.set( OrdType( '3' ) );

  CHECK_EQUAL( "8=FIX.4.2\0019=75\00135=G\00111=CLIENTID\00121=1\001"
               "40=3\00141=ORIGINALID\00154=2\00155=MSFT\001"
               "60=19000101-00:00:00\00110=179\001",
               object.toString() );
}

TEST(orderCancelReplaceRequestSetString)
{
  OrderCancelReplaceRequest object;

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
  CHECK_EQUAL( "ORIGINALID", object.get( origClOrdID ) );
  CHECK_EQUAL( "CLIENTID", object.get( clOrdID ) );
  CHECK_EQUAL( '1', object.get( handlInst ) );
  CHECK_EQUAL( "MSFT", object.get( symbol ) );
  CHECK_EQUAL( '2', object.get( side ) );
  CHECK_EQUAL( '3', object.get( ordType ) );
}

TEST(orderCancelRequestGetString)
{
  OrderCancelRequest object;

  object.set( OrigClOrdID( "ORIGINALID" ) );
  object.set( ClOrdID( "CLIENTID" ) );
  object.set( Symbol( "MSFT" ) );
  object.set( Side( '1' ) );
  object.set( TransactTime( create_tm() ) );

  CHECK_EQUAL( "8=FIX.4.2\0019=65\00135=F\00111=CLIENTID\00141=ORIGINALID\001"
               "54=1\00155=MSFT\00160=19000101-00:00:00\00110=009\001",
               object.toString() );
}

TEST(orderCancelRequestSetString)
{
  OrderCancelRequest object;

  object.setString
    ( "8=FIX.4.2\0019=53\00135=F\00111=CLIENTID\00141=ORIGINALID\001"
      "54=1\00155=MSFT\00160=TODAY\00110=058\001" );

  OrigClOrdID origClOrdID;
  ClOrdID clOrdID;
  Symbol symbol;
  Side side;
  TransactTime transactTime;
  CHECK_EQUAL( "ORIGINALID", object.get( origClOrdID ) );
  CHECK_EQUAL( "CLIENTID", object.get( clOrdID ) );
  CHECK_EQUAL( "MSFT", object.get( symbol ) );
  CHECK_EQUAL( '1', object.get( side ) );
}

TEST(XMLNonFIXSetString)
{
  // XMLnonFIX message
  FIX::Message object;

  DataDictionary dataDictionary( "../spec/FIX42.xml" );

  std::string encodedFIXmessage = "8=FIX.4.2\0019=390\001"
    "35=8\00134=136\001369=131\00152=20150220-14:40:24.991\00149=CME\00150=G\001"
    "56=GGGGGGN\00157=GGG\001143=IL\0011=TEST\0016=0\00111=00000000000000000003\001"
    "14=1\00117=64485:M:412850TN0031303\00120=0\00131=208700\00132=1\00137=64227619161\001"
    "38=1\00139=2\00140=2\00141=0\00144=208700\00148=147403\00154=1\00155=ES\00159=0\001"
    "60=20150220-14:40:24.970\00175=20150220\001107=ESH5\001150=2\001151=0\001167=FUT\001"
    "337=TRADE\001375=CME000A\001432=20150220\001442=1\001527=642276191612015022031303\001"
    "1028=N\0011057=N\00110=000\001";

  std::string xmlNonFIXMessage = std::string("8=FIX.4.2\0019=501\00135=n\00134=158\001369=130\00152=20150220-14:40:24.991\001"
    "49=CME\00150=G\00156=QQQQQQN\00157=QQQ\001212=413\001213=") + encodedFIXmessage + std::string("\00110=129\001");

  object.setString( xmlNonFIXMessage, true, &dataDictionary );

  XmlDataLen dataLen;
  XmlData xmlData;

  object.getHeader().getField( dataLen );
  object.getHeader().getField( xmlData );

  CHECK_EQUAL( 413, dataLen.getValue() );
  CHECK_EQUAL( encodedFIXmessage, xmlData.getValue() );
}

TEST(orderCancelRejectGetString)
{
  OrderCancelReject object;

  object.set( OrderID( "ORDERID" ) );
  object.set( ClOrdID( "CLIENTID" ) );
  object.set( OrigClOrdID( "ORIGINALID" ) );
  object.set( OrdStatus( '1' ) );
  object.set( CxlRejResponseTo( '2' ) );

  CHECK_EQUAL( "8=FIX.4.2\0019=53\00135=9\00111=CLIENTID\00137=ORDERID\001"
               "39=1\00141=ORIGINALID\001434=2\00110=229\001",
               object.toString() );
}

TEST(orderCancelRejectSetString)
{
  OrderCancelReject object;

  object.setString
    ( "8=FIX.4.2\0019=53\00135=9\00111=CLIENTID\00137=ORDERID\001"
      "39=1\00141=ORIGINALID\001434=2\00110=229\001" );

  OrderID orderID;
  ClOrdID clOrdID;
  OrigClOrdID origClOrdID;
  OrdStatus ordStatus;
  CxlRejResponseTo cxlRejResponseTo;
  CHECK_EQUAL( "ORDERID", object.get( orderID ) );
  CHECK_EQUAL( "CLIENTID", object.get( clOrdID ) );
  CHECK_EQUAL( "ORIGINALID", object.get( origClOrdID ) );
  CHECK_EQUAL( '1', object.get( ordStatus ) );
  CHECK_EQUAL( '2', object.get( cxlRejResponseTo ) );
}

TEST(orderStatusRequestGetString)
{
  OrderStatusRequest object;

  object.set( ClOrdID( "CLIENTID" ) );
  object.set( Symbol( "MSFT" ) );
  object.set( Side( '1' ) );

  CHECK_EQUAL( "8=FIX.4.2\0019=30\00135=H\00111=CLIENTID\00154=1\001"
               "55=MSFT\00110=141\001",
               object.toString() );
}

TEST(orderStatusRequestSetString)
{
  OrderStatusRequest object;

  object.setString
    ( "8=FIX.4.2\0019=30\00135=H\00111=CLIENTID\00154=1\001"
      "55=MSFT\00110=141\001" );

  ClOrdID clOrdID;
  Symbol symbol;
  Side side;
  CHECK_EQUAL( "CLIENTID", object.get( clOrdID ) );
  CHECK_EQUAL( "MSFT", object.get( symbol ) );
  CHECK_EQUAL( '1', object.get( side ) );
}

TEST(newOrderListGetString)
{
  FIX42::NewOrderList object;

  object.set( ListID( "1" ) );
  object.set( BidType( 0 ) );
  object.set( TotNoOrders( 3 ) );

  FIX42::NewOrderList::NoOrders group;
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

  CHECK_EQUAL(
          ( "8=FIX.4.2\0019=95\00135=E\00166=1\00168=3\00173=3\001"
            "11=A\00167=1\00155=DELL\00154=1\001"
            "11=B\00167=2\00155=LNUX\00154=2\001"
            "11=C\00167=3\00155=RHAT\00154=3\001"
            "394=0\00110=233\001" ), object.toString() );
}

TEST(newOrderListSetString)
{
  FIX42::NewOrderList object;

  DataDictionary dataDictionary( "../spec/FIX42.xml" );

  object.setString
    ( "8=FIX.4.2\0019=95\00135=E\00166=1\00168=3\00173=3\001"
      "11=A\00154=1\00155=DELL\00167=1\001"
      "11=B\00154=2\00155=LNUX\00167=2\001"
      "11=C\00154=3\00155=RHAT\00167=3\001"
      "394=0\00110=233\001", true, &dataDictionary );

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

  FIX42::NewOrderList::NoOrders group;
  object.getGroup( 1, group );
  group.get( clOrdID );
  group.get( listSeqNo );
  group.get( symbol );
  group.get( side );

  CHECK_EQUAL( "A", clOrdID.getValue() );
  CHECK_EQUAL( 1, listSeqNo );
  CHECK_EQUAL( "DELL", symbol );
  CHECK_EQUAL( '1', side );

  object.getGroup( 2, group );
  group.get( clOrdID );
  group.get( listSeqNo );
  group.get( symbol );
  group.get( side );

  CHECK_EQUAL( "B", clOrdID.getValue() );
  CHECK_EQUAL( 2, listSeqNo );
  CHECK_EQUAL( "LNUX", symbol );
  CHECK_EQUAL( '2', side );

  object.getGroup( 3, group );
  group.get( clOrdID );
  group.get( listSeqNo );
  group.get( symbol );
  group.get( side );

  CHECK_EQUAL( "C", clOrdID.getValue() );
  CHECK_EQUAL( 3, listSeqNo );
  CHECK_EQUAL( "RHAT", symbol );
  CHECK_EQUAL( '3', side );

  object.setString
    ( "8=FIX.4.2\0019=26\00135=E\00166=1\00168=3\00173=0\001"
      "394=0\00110=137\001", true, &dataDictionary );
}

TEST(massQuoteParseGetString)
{
  MassQuote object;

  object.set( QuoteID( "1" ) );

  MassQuote::NoQuoteSets group;
  group.set( QuoteSetID( "A" ) );
  group.set( UnderlyingSymbol( "DELL" ) );
  group.set( EncodedUnderlyingSecurityDescLen( 10 ) );
  group.set( EncodedUnderlyingSecurityDesc( "DELL\001COMP\001" ) );
  object.addGroup( group );

  CHECK_EQUAL(
          ( "8=FIX.4.2\0019=54\00135=i\001117=1\001296=1\001302=A\001"
            "311=DELL\001364=10\001365=DELL\001COMP\001\00110=152\001" ), object.toString() );
}

TEST(massQuoteSetString)
{
  MassQuote object;

  DataDictionary dataDictionary( "../spec/FIX42.xml" );

  object.setString
    ( "8=FIX.4.2\0019=54\00135=i\001117=1\001296=1\001302=A\001"
      "311=DELL\001364=10\001365=DELL\001COMP\001\00110=152\001",
       true, &dataDictionary );

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

  CHECK_EQUAL( "A", quoteSetID );
  CHECK_EQUAL( "DELL", underlyingSymbol );
  CHECK_EQUAL( 10, encLen );
  CHECK_EQUAL( "DELL\001COMP\001", encDesc );
}

TEST(newOrderCrossGetString)
{
  NewOrderCross object;

  FIX44::NewOrderCross::NoSides noSides;
  noSides.set( FIX::Side(FIX::Side_BUY) );

  FIX44::NewOrderCross::NoSides::NoPartyIDs noPartyIDs;
  noPartyIDs.set( FIX::PartyID("PARTY1") );
  noPartyIDs.set( FIX::PartyIDSource(FIX::PartyIDSource_PROPRIETARY) );
  noPartyIDs.set( FIX::PartyRole(FIX::PartyRole_CLIENT_ID) );

  noSides.addGroup( noPartyIDs );

  noPartyIDs.set( FIX::PartyID("PARTY2") );
  noPartyIDs.set( FIX::PartyIDSource(FIX::PartyIDSource_PROPRIETARY) );
  noPartyIDs.set( FIX::PartyRole(FIX::PartyRole_CLIENT_ID) );

  noSides.addGroup( noPartyIDs );

  noSides.set( FIX::OrderQty(100) );

  object.addGroup( noSides );

  CHECK_EQUAL(
          ( "8=FIX.4.4\0019=75\00135=s\001552=1\00154=1\001453=2\001448=PARTY1\001"
            "447=D\001452=3\001448=PARTY2\001447=D\001452=3\00138=100\00110=223\001" ), object.toString() );
}

TEST(newOrderCrossSetString)
{
  NewOrderCross object;

  DataDictionary dataDictionary( "../spec/FIX44.xml" );

  object.setString
    ( "8=FIX.4.4\0019=75\00135=s\001552=1\00154=1\001453=2\001448=PARTY1\001"
      "447=D\001452=3\001448=PARTY2\001447=D\001452=3\00138=100\00110=223\001",
       true, &dataDictionary );

  FIX44::NewOrderCross::NoSides noSides;
  object.getGroup( 1, noSides );

  FIX::Side side;
  noSides.get( side );
  CHECK_EQUAL( FIX::Side_BUY, side );

  FIX::PartyID partyID;
  FIX::PartyIDSource partyIDSource;
  FIX::PartyRole partyRole;

  FIX44::NewOrderCross::NoSides::NoPartyIDs noPartyIDs;
  noSides.getGroup( 1, noPartyIDs );
  noPartyIDs.get( partyID );
  noPartyIDs.get( partyIDSource );
  noPartyIDs.get( partyRole );
  CHECK_EQUAL( "PARTY1", partyID );
  CHECK_EQUAL( FIX::PartyIDSource_PROPRIETARY, partyIDSource );
  CHECK_EQUAL( FIX::PartyRole_CLIENT_ID, partyRole );

  noSides.getGroup( 2, noPartyIDs );
  noPartyIDs.get( partyID );
  noPartyIDs.get( partyIDSource );
  noPartyIDs.get( partyRole );
  CHECK_EQUAL( "PARTY2", partyID );
  CHECK_EQUAL( FIX::PartyIDSource_PROPRIETARY, partyIDSource );
  CHECK_EQUAL( FIX::PartyRole_CLIENT_ID,  partyRole );

  FIX::OrderQty orderQty;
  noSides.get( orderQty );
  CHECK_EQUAL( 100, orderQty );
}

TEST(allocationInstructionParseGetString)
{
  AllocationInstruction object;

  object.getHeader().setField(SenderCompID("SENDER"));
  object.getHeader().setField(TargetCompID("TARGET"));
  object.getHeader().setField(MsgSeqNum(1));
  FIX44::Header::NoHops hops;
  hops.setField(HopCompID("HOP1"));
  hops.setField(HopRefID(1));
  object.getHeader().addGroup(hops);
  hops.setField(HopCompID("HOP2"));
  hops.setField(HopRefID(2));
  object.getHeader().addGroup(hops);
  object.setField(AllocID("Alloc001"));
  object.setField(AllocTransType(AllocTransType_NEW));
  object.setField(AllocType(AllocType_CALCULATED));
  object.setField(AllocNoOrdersType(AllocNoOrdersType_NOT_SPECIFIED));
  object.setField(Quantity(100));
  object.setField(AvgPx(23.1));
  object.setField(TradeDate("20170317"));

  CHECK_EQUAL(
          "8=FIX.4.4\0019=121\00135=J\00134=1\00149=SENDER\00156=TARGET\001627=2\001"
          "628=HOP1\001630=1\001628=HOP2\001630=2\0016=23.1\00153=100\00170=Alloc001\001"
          "71=0\00175=20170317\001626=1\001857=0\00110=159\001", object.toString());
}

TEST(allocationInstructionString)
{
  AllocationInstruction object;
  DataDictionary dataDictionary( "../spec/FIX44.xml" );

  object.setString
    ( "8=FIX.4.4\0019=198\00135=J\00134=1\00149=SENDER\00152=20170317-15:55:23.685\001"
      "56=TARGET\001627=2\001628=HOP1\001629=20170317-15:55:23.685\001630=1\001"
      "628=HOP2\001629=20170317-15:55:23.685\001630=2\0016=23.1\00153=100\001"
      "70=Alloc001\00171=0\00175=20170317\001626=1\001857=0\00110=196\001",
      true, &dataDictionary );

  FIX::SenderCompID senderCompID;
  FIX::TargetCompID targetCompID;
  FIX::SendingTime sendingTime;
  FIX::MsgSeqNum msgSeqNum;
  FIX::HopCompID hopCompID;
  FIX::HopSendingTime hopSendingTime;
  FIX::HopRefID hopRefID;

  CHECK_EQUAL( "SENDER", object.getHeader().get(senderCompID));
  CHECK_EQUAL( "TARGET", object.getHeader().get(targetCompID));
  CHECK_EQUAL( "20170317-15:55:23.685", object.getHeader().get(sendingTime).getString());
  CHECK_EQUAL( 1, object.getHeader().get(msgSeqNum));

  FIX44::Header::NoHops noHops;
  object.getHeader().getGroup( 1, noHops );
  CHECK_EQUAL( "HOP1", noHops.get(hopCompID) );
  CHECK_EQUAL( "20170317-15:55:23.685", noHops.getField(hopSendingTime).getString() );
  CHECK_EQUAL( 1, noHops.get(hopRefID) );

  object.getHeader().getGroup( 2, noHops );
  CHECK_EQUAL( "HOP2", noHops.get(hopCompID) );
  CHECK_EQUAL( "20170317-15:55:23.685", noHops.getField(hopSendingTime).getString() );
  CHECK_EQUAL( 2, noHops.get(hopRefID) );

  FIX::AllocID allocID;
  FIX::AllocTransType allocTransType;
  FIX::AllocType allocType;
  FIX::AllocNoOrdersType allocNoOrdersType;
  FIX::Quantity quantity;
  FIX::AvgPx avgPx;
  FIX::TradeDate tradeDate;
  CHECK_EQUAL( "Alloc001", object.get(allocID) );
  CHECK_EQUAL( AllocTransType_NEW, object.get(allocTransType) );
  CHECK_EQUAL( AllocType_CALCULATED, object.get(allocType) );
  CHECK_EQUAL( AllocNoOrdersType_NOT_SPECIFIED, object.get(allocNoOrdersType) );
  CHECK_EQUAL( 100, object.get(quantity) );
  CHECK_EQUAL( 23.1, object.get(avgPx) );
  CHECK_EQUAL( "20170317", object.get(tradeDate) );

  FIX::CheckSum checkSum;
  CHECK_EQUAL( 196, object.getTrailer().get(checkSum) );
}


TEST(initializeXml_UrlIsIncorrect_False)
{
  FIX::Message msg;
  CHECK(!msg.InitializeXML("wrong"));
}

TEST(setString_TrailerStructureInvalid_MessageStructureInvalid) {

  DataDictionary dictionary;
  dictionary.checkFieldsOutOfOrder(true);
  dictionary.addHeaderField(FIELD::BeginString, true);
  dictionary.addHeaderField(FIELD::MsgType, true);
  dictionary.addField(FIELD::ClOrdID);
  dictionary.addField(FIELD::MsgType);
  dictionary.addTrailerField(FIELD::CheckSum, true);
  dictionary.addFieldType(FIELD::CheckSum, FIX::TYPE::Type::Int);

  dictionary.setVersion(BeginString_FIX42);

  FIX::Message msg;
  std::string delimSOH = "\x01";
  std::string rawFixMsg = "8=FIX.4.2" + delimSOH
      + "9=200"         + delimSOH
      + "35=A"          + delimSOH
      + "49=SENDER"     + delimSOH
      + "56=TARGET"     + delimSOH
      + "34=1"          + delimSOH
      + "98=0"          + delimSOH
      + "10=200"        + delimSOH //Trailer in Body is invalid
      + "108=30"        + delimSOH
      + "10=200"        + delimSOH;


  msg.setString(rawFixMsg, false, &dictionary, &dictionary);
  int checkSumTag = FIELD::CheckSum;
  CHECK(!msg.hasValidStructure(checkSumTag));
}

TEST(setString_SignatureInTrailerWithoutSignatureLength_InvalidMessageException) {

  DataDictionary dictionary;
  dictionary.checkFieldsOutOfOrder(true);
  dictionary.addHeaderField(FIELD::BeginString, true);
  dictionary.addHeaderField(FIELD::MsgType, true);
  dictionary.addField(FIELD::ClOrdID);
  dictionary.addField(FIELD::MsgType);
  dictionary.addTrailerField(FIELD::CheckSum, true);
  dictionary.addTrailerField(FIELD::Signature, true);

  dictionary.addFieldType(FIELD::Signature, FIX::TYPE::Type::Data);

  dictionary.setVersion(BeginString_FIX42);

  FIX::Message msg;
  std::string delimSOH = "\x01";
  std::string rawFixMsg = "8=FIX.4.2" + delimSOH
      + "9=200"         + delimSOH
      + "35=A"          + delimSOH
      + "49=SENDER"     + delimSOH
      + "56=TARGET"     + delimSOH
      + "34=1"          + delimSOH
      + "98=0"          + delimSOH
      + "108=30"        + delimSOH
      + "89=200"        + delimSOH; // Signature
      + "10=200"        + delimSOH;

  CHECK_THROW(msg.setString(rawFixMsg, false, &dictionary, &dictionary), InvalidMessage);

}

TEST(setStringAndValidate_IncorrectBodyLength_InvalidException) {

  DataDictionary dictionary;

  FIX::Message msg;
  std::string delimSOH = "\x01";
  std::string rawFixMsg = "8=FIX.4.2" + delimSOH
      + "9=2000"        + delimSOH //Incorrect BodyLength
      + "35=A"          + delimSOH
      + "49=SENDER"     + delimSOH
      + "56=TARGET"     + delimSOH
      + "34=1"          + delimSOH
      + "98=0"          + delimSOH
      + "108=30"        + delimSOH
      + "10=200"        + delimSOH;

  CHECK_THROW(msg.setString(rawFixMsg, true, &dictionary, &dictionary), InvalidMessage);
}

TEST(BeginStringToApplVerID) {
  CHECK_EQUAL(ApplVerID(ApplVerID_FIX40), FIX::Message::toApplVerID(BeginString(FIX::BeginString_FIX40)));
  CHECK_EQUAL(ApplVerID(ApplVerID_FIX41), FIX::Message::toApplVerID(BeginString(FIX::BeginString_FIX41)));
  CHECK_EQUAL(ApplVerID(ApplVerID_FIX42), FIX::Message::toApplVerID(BeginString(FIX::BeginString_FIX42)));
  CHECK_EQUAL(ApplVerID(ApplVerID_FIX43), FIX::Message::toApplVerID(BeginString(FIX::BeginString_FIX43)));
  CHECK_EQUAL(ApplVerID(ApplVerID_FIX44), FIX::Message::toApplVerID(BeginString(FIX::BeginString_FIX44)));
  CHECK_EQUAL(ApplVerID(ApplVerID_FIX50), FIX::Message::toApplVerID(BeginString(FIX::BeginString_FIX50)));
  CHECK_EQUAL(ApplVerID(ApplVerID_FIX50SP1), FIX::Message::toApplVerID(BeginString("FIX.5.0SP1")));
  CHECK_EQUAL(ApplVerID(ApplVerID_FIX50SP2), FIX::Message::toApplVerID(BeginString("FIX.5.0SP2")));
  CHECK_EQUAL(ApplVerID("Custom"), FIX::Message::toApplVerID(BeginString("Custom")));

}

}
