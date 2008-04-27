/* -*- C++ -*- */

/****************************************************************************
** Copyright (c) quickfixengine.org  All rights reserved.
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

#include "getopt-repl.h"
#include <iostream>
#include "Application.h"
#include "FieldConvertors.h"
#include "Values.h"
#include "FileStore.h"
#include "SessionID.h"
#include "Session.h"
#include "DataDictionary.h"
#include "Parser.h"
#include "Utility.h"
#include "SocketAcceptor.h"
#include "SocketInitiator.h"
#include "ThreadedSocketAcceptor.h"
#include "ThreadedSocketInitiator.h"
#include "fix42/Heartbeat.h"
#include "fix42/NewOrderSingle.h"
#include "fix42/QuoteRequest.h"

int testIntegerToString( int );
int testStringToInteger( int );
int testDoubleToString( int );
int testStringToDouble( int );
int testCreateHeartbeat( int );
int testIdentifyType( int );
int testSerializeToStringHeartbeat( int );
int testSerializeFromStringHeartbeat( int );
int testCreateNewOrderSingle( int );
int testSerializeToStringNewOrderSingle( int );
int testSerializeFromStringNewOrderSingle( int );
int testCreateQuoteRequest( int );
int testReadFromQuoteRequest( int );
int testSerializeToStringQuoteRequest( int );
int testSerializeFromStringQuoteRequest( int );
int testFileStoreNewOrderSingle( int );
int testValidateNewOrderSingle( int );
int testValidateDictNewOrderSingle( int );
int testValidateQuoteRequest( int );
int testValidateDictQuoteRequest( int );
int testSendOnSocket( int, short );
int testSendOnThreadedSocket( int, short );
void report( int, int );

#ifndef _MSC_VER
#include <sys/time.h>
long GetTickCount()
{
  timeval tv;
  gettimeofday( &tv, 0 );
  long millsec = tv.tv_sec * 1000;
  millsec += ( long ) tv.tv_usec / ( 1000 );

  return ( long ) millsec;
}
#endif

int main( int argc, char** argv )
{
  int count = 0;
  short port = 0;

  int opt;
  while ( (opt = getopt( argc, argv, "+p:+c:" )) != -1 )
  {
    switch( opt )
    {
    case 'p':
      port = (short)atol( optarg );
      break;
    case 'c':
      count = atol( optarg );
      break;
    default:
      std::cout << "usage: "
      << argv[ 0 ]
      << " -p port -c count" << std::endl;
      return 1;
    }
  }

  std::cout << "Converting integers to strings: ";
  report( testIntegerToString( count ), count );

  std::cout << "Converting strings to integers: ";
  report( testStringToInteger( count ), count );

  std::cout << "Converting doubles to strings: ";
  report( testDoubleToString( count ), count );

  std::cout << "Converting strings to doubles: ";
  report( testStringToDouble( count ), count );

  std::cout << "Creating Heartbeat messages: ";
  report( testCreateHeartbeat( count ), count );

  std::cout << "Identifying message types: ";
  report( testIdentifyType( count ), count );

  std::cout << "Serializing Heartbeat messages to strings: ";
  report( testSerializeToStringHeartbeat( count ), count );

  std::cout << "Serializing Heartbeat messages from strings: ";
  report( testSerializeFromStringHeartbeat( count ), count );

  std::cout << "Creating NewOrderSingle messages: ";
  report( testCreateNewOrderSingle( count ), count );

  std::cout << "Serializing NewOrderSingle messages to strings: ";
  report( testSerializeToStringNewOrderSingle( count ), count );

  std::cout << "Serializing NewOrderSingle messages from strings: ";
  report( testSerializeFromStringNewOrderSingle( count ), count );

  std::cout << "Creating QuoteRequest messages: ";
  report( testCreateQuoteRequest( count ), count );

  std::cout << "Serializing QuoteRequest messages to strings: ";
  report( testSerializeToStringQuoteRequest( count ), count );

  std::cout << "Serializing QuoteRequest messages from strings: ";
  report( testSerializeFromStringQuoteRequest( count ), count );

  std::cout << "Reading fields from QuoteRequest message: ";
  report( testReadFromQuoteRequest( count ), count );

  std::cout << "Storing NewOrderSingle messages: ";
  report( testFileStoreNewOrderSingle( count ), count );

  std::cout << "Validating NewOrderSingle messages with no data dictionary: ";
  report( testValidateNewOrderSingle( count ), count );

  std::cout << "Validating NewOrderSingle messages with data dictionary: ";
  report( testValidateDictNewOrderSingle( count ), count );

  std::cout << "Validating QuoteRequest messages with no data dictionary: ";
  report( testValidateQuoteRequest( count ), count );

  std::cout << "Validating QuoteRequest messages with data dictionary: ";
  report( testValidateDictQuoteRequest( count ), count );

  std::cout << "Sending/Receiving NewOrderSingle/ExecutionReports on Socket";
  report( testSendOnSocket( count, port ), count );

  std::cout << "Sending/Receiving NewOrderSingle/ExecutionReports on ThreadedSocket";
  report( testSendOnThreadedSocket( count, port ), count );

  return 0;
}

void report( int time, int count )
{
  double seconds = ( double ) time / 1000;
  double num_per_second = count / seconds;
  std::cout << std::endl << "    num: " << count
  << ", seconds: " << seconds
  << ", num_per_second: " << num_per_second << std::endl;
}

int testIntegerToString( int count )
{
  count = count - 1;

  int start = GetTickCount();
  for ( int i = 0; i <= count; ++i )
  {
    FIX::IntConvertor::convert( 1234 );
  }
  return GetTickCount() - start;
}

int testStringToInteger( int count )
{
  std::string value( "1234" );
  count = count - 1;

  int start = GetTickCount();
  for ( int i = 0; i <= count; ++i )
  {
    FIX::IntConvertor::convert( value );
  }
  return GetTickCount() - start;
}

int testDoubleToString( int count )
{
  count = count - 1;

  int start = GetTickCount();
  for ( int i = 0; i <= count; ++i )
  {
    FIX::DoubleConvertor::convert( 123.45 );
  }
  return GetTickCount() - start;
}

int testStringToDouble( int count )
{
  std::string value( "123.45" );
  count = count - 1;

  int start = GetTickCount();
  for ( int i = 0; i <= count; ++i )
  {
    FIX::DoubleConvertor::convert( value );
  }
  return GetTickCount() - start;
}

int testCreateHeartbeat( int count )
{
  count = count - 1;

  int start = GetTickCount();
  for ( int i = 0; i <= count; ++i )
  {
    FIX42::Heartbeat();
  }

  return GetTickCount() - start;
}

int testIdentifyType( int count )
{
  FIX42::Heartbeat message;
  std::string messageString = message.toString();

  count = count - 1;

  int start = GetTickCount();
  for ( int i = 0; i <= count; ++i )
  {
    FIX::identifyType( messageString );
  }

  return GetTickCount() - start;
}

int testSerializeToStringHeartbeat( int count )
{
  FIX42::Heartbeat message;
  count = count - 1;

  int start = GetTickCount();
  for ( int i = 0; i <= count; ++i )
  {
    message.toString();
  }
  return GetTickCount() - start;
}

int testSerializeFromStringHeartbeat( int count )
{
  FIX42::Heartbeat message;
  std::string string = message.toString();
  count = count - 1;

  int start = GetTickCount();
  for ( int i = 0; i <= count; ++i )
  {
    message.setString( string );
  }
  return GetTickCount() - start;
}

int testCreateNewOrderSingle( int count )
{
  int start = GetTickCount();
  for ( int i = 0; i <= count; ++i )
  {
    FIX::ClOrdID clOrdID( "ORDERID" );
    FIX::HandlInst handlInst( '1' );
    FIX::Symbol symbol( "LNUX" );
    FIX::Side side( FIX::Side_BUY );
    FIX::TransactTime transactTime;
    FIX::OrdType ordType( FIX::OrdType_MARKET );
    FIX42::NewOrderSingle( clOrdID, handlInst, symbol, side, transactTime, ordType );
  }

  return GetTickCount() - start;
}

int testSerializeToStringNewOrderSingle( int count )
{
  FIX::ClOrdID clOrdID( "ORDERID" );
  FIX::HandlInst handlInst( '1' );
  FIX::Symbol symbol( "LNUX" );
  FIX::Side side( FIX::Side_BUY );
  FIX::TransactTime transactTime;
  FIX::OrdType ordType( FIX::OrdType_MARKET );
  FIX42::NewOrderSingle message
  ( clOrdID, handlInst, symbol, side, transactTime, ordType );

  count = count - 1;

  int start = GetTickCount();
  for ( int i = 0; i <= count; ++i )
  {
    message.toString();
  }
  return GetTickCount() - start;
}

int testSerializeFromStringNewOrderSingle( int count )
{
  FIX::ClOrdID clOrdID( "ORDERID" );
  FIX::HandlInst handlInst( '1' );
  FIX::Symbol symbol( "LNUX" );
  FIX::Side side( FIX::Side_BUY );
  FIX::TransactTime transactTime;
  FIX::OrdType ordType( FIX::OrdType_MARKET );
  FIX42::NewOrderSingle message
  ( clOrdID, handlInst, symbol, side, transactTime, ordType );
  std::string string = message.toString();

  count = count - 1;

  int start = GetTickCount();
  for ( int i = 0; i <= count; ++i )
  {
    message.setString( string );
  }
  return GetTickCount() - start;
}

int testCreateQuoteRequest( int count )
{
  count = count - 1;

  int start = GetTickCount();
  FIX::Symbol symbol;
  FIX::MaturityMonthYear maturityMonthYear;
  FIX::PutOrCall putOrCall;
  FIX::StrikePrice strikePrice;
  FIX::Side side;
  FIX::OrderQty orderQty;
  FIX::Currency currency;
  FIX::OrdType ordType;

  for ( int i = 0; i <= count; ++i )
  {
    FIX42::QuoteRequest massQuote( FIX::QuoteReqID("1") );
    FIX42::QuoteRequest::NoRelatedSym noRelatedSym;

    for( int j = 1; j <= 10; ++j )
    {
      symbol.setValue( "IBM" );
      maturityMonthYear.setValue( "022003" );
      putOrCall.setValue( FIX::PutOrCall_PUT );
      strikePrice.setValue( 120 );
      side.setValue( FIX::Side_BUY );
      orderQty.setValue( 100 );
      currency.setValue( "USD" );
      ordType.setValue( FIX::OrdType_MARKET );
      noRelatedSym.set( symbol );
      noRelatedSym.set( maturityMonthYear );
      noRelatedSym.set( putOrCall );
      noRelatedSym.set( strikePrice );
      noRelatedSym.set( side );
      noRelatedSym.set( orderQty );
      noRelatedSym.set( currency );
      noRelatedSym.set( ordType );
      massQuote.addGroup( noRelatedSym );
      noRelatedSym.clear();
    }
  }

  return GetTickCount() - start;
}

int testSerializeToStringQuoteRequest( int count )
{
  FIX42::QuoteRequest message( FIX::QuoteReqID("1") );
  FIX42::QuoteRequest::NoRelatedSym noRelatedSym;

  for( int i = 1; i <= 10; ++i )
  {
    noRelatedSym.set( FIX::Symbol("IBM") );
    noRelatedSym.set( FIX::MaturityMonthYear() );
    noRelatedSym.set( FIX::PutOrCall(FIX::PutOrCall_PUT) );
    noRelatedSym.set( FIX::StrikePrice(120) );
    noRelatedSym.set( FIX::Side(FIX::Side_BUY) );
    noRelatedSym.set( FIX::OrderQty(100) );
    noRelatedSym.set( FIX::Currency("USD") );
    noRelatedSym.set( FIX::OrdType(FIX::OrdType_MARKET) );
    message.addGroup( noRelatedSym );
  }

  count = count - 1;

  int start = GetTickCount();
  for ( int j = 0; j <= count; ++j )
  {
    message.toString();
  }
  return GetTickCount() - start;
}

int testSerializeFromStringQuoteRequest( int count )
{
  FIX42::QuoteRequest message( FIX::QuoteReqID("1") );
  FIX42::QuoteRequest::NoRelatedSym noRelatedSym;

  for( int i = 1; i <= 10; ++i )
  {
    noRelatedSym.set( FIX::Symbol("IBM") );
    noRelatedSym.set( FIX::MaturityMonthYear() );
    noRelatedSym.set( FIX::PutOrCall(FIX::PutOrCall_PUT) );
    noRelatedSym.set( FIX::StrikePrice(120) );
    noRelatedSym.set( FIX::Side(FIX::Side_BUY) );
    noRelatedSym.set( FIX::OrderQty(100) );
    noRelatedSym.set( FIX::Currency("USD") );
    noRelatedSym.set( FIX::OrdType(FIX::OrdType_MARKET) );
    message.addGroup( noRelatedSym );
  }
  std::string string = message.toString();

  count = count - 1;

  int start = GetTickCount();
  for ( int j = 0; j <= count; ++j )
  {
    message.setString( string );
  }
  return GetTickCount() - start;
}

int testReadFromQuoteRequest( int count )
{
  count = count - 1;

  FIX42::QuoteRequest message( FIX::QuoteReqID("1") );
  FIX42::QuoteRequest::NoRelatedSym group;

  for( int i = 1; i <= 10; ++i )
  {
    group.set( FIX::Symbol("IBM") );
    group.set( FIX::MaturityMonthYear() );
    group.set( FIX::PutOrCall(FIX::PutOrCall_PUT) );
    group.set( FIX::StrikePrice(120) );
    group.set( FIX::Side(FIX::Side_BUY) );
    group.set( FIX::OrderQty(100) );
    group.set( FIX::Currency("USD") );
    group.set( FIX::OrdType(FIX::OrdType_MARKET) );
    message.addGroup( group );
  }
  group.clear();

  int start = GetTickCount();
  for ( int j = 0; j <= count; ++j )
  {
    FIX::QuoteReqID quoteReqID;
    FIX::Symbol symbol;
    FIX::MaturityMonthYear maturityMonthYear;
    FIX::PutOrCall putOrCall;
    FIX::StrikePrice strikePrice;
    FIX::Side side;
    FIX::OrderQty orderQty;
    FIX::Currency currency;
    FIX::OrdType ordType;

    FIX::NoRelatedSym noRelatedSym;
    message.get( noRelatedSym );
    int end = noRelatedSym;
    for( int k = 1; k <= end; ++k )
    {
      message.getGroup( k, group );
      group.get( symbol );
      group.get( maturityMonthYear );
      group.get( putOrCall);
      group.get( strikePrice );
      group.get( side );
      group.get( orderQty );
      group.get( currency );
      group.get( ordType );
      maturityMonthYear.getValue();
      putOrCall.getValue();
      strikePrice.getValue();
      side.getValue();
      orderQty.getValue();
      currency.getValue();
      ordType.getValue();
    }
  }

  return GetTickCount() - start;
}

int testFileStoreNewOrderSingle( int count )
{
  FIX::BeginString beginString( FIX::BeginString_FIX42 );
  FIX::SenderCompID senderCompID( "SENDER" );
  FIX::TargetCompID targetCompID( "TARGET" );
  FIX::SessionID id( beginString, senderCompID, targetCompID );

  FIX::ClOrdID clOrdID( "ORDERID" );
  FIX::HandlInst handlInst( '1' );
  FIX::Symbol symbol( "LNUX" );
  FIX::Side side( FIX::Side_BUY );
  FIX::TransactTime transactTime;
  FIX::OrdType ordType( FIX::OrdType_MARKET );
  FIX42::NewOrderSingle message
  ( clOrdID, handlInst, symbol, side, transactTime, ordType );
  message.getHeader().set( FIX::MsgSeqNum( 1 ) );
  std::string messageString = message.toString();

  FIX::FileStore store( "store", id );
  store.reset();
  count = count - 1;

  int start = GetTickCount();
  for ( int i = 0; i <= count; ++i )
  {
    store.set( ++i, messageString );
  }
  int end = GetTickCount();
  store.reset();
  return end - start;
}

int testValidateNewOrderSingle( int count )
{
  FIX::ClOrdID clOrdID( "ORDERID" );
  FIX::HandlInst handlInst( '1' );
  FIX::Symbol symbol( "LNUX" );
  FIX::Side side( FIX::Side_BUY );
  FIX::TransactTime transactTime;
  FIX::OrdType ordType( FIX::OrdType_MARKET );
  FIX42::NewOrderSingle message
  ( clOrdID, handlInst, symbol, side, transactTime, ordType );
  message.getHeader().set( FIX::SenderCompID( "SENDER" ) );
  message.getHeader().set( FIX::TargetCompID( "TARGET" ) );
  message.getHeader().set( FIX::MsgSeqNum( 1 ) );

  FIX::DataDictionary dataDictionary;
  count = count - 1;

  int start = GetTickCount();
  for ( int i = 0; i <= count; ++i )
  {
    dataDictionary.validate( message );
  }
  return GetTickCount() - start;
}

int testValidateDictNewOrderSingle( int count )
{
  FIX::ClOrdID clOrdID( "ORDERID" );
  FIX::HandlInst handlInst( '1' );
  FIX::Symbol symbol( "LNUX" );
  FIX::Side side( FIX::Side_BUY );
  FIX::TransactTime transactTime;
  FIX::OrdType ordType( FIX::OrdType_MARKET );
  FIX42::NewOrderSingle message
  ( clOrdID, handlInst, symbol, side, transactTime, ordType );
  message.getHeader().set( FIX::SenderCompID( "SENDER" ) );
  message.getHeader().set( FIX::TargetCompID( "TARGET" ) );
  message.getHeader().set( FIX::MsgSeqNum( 1 ) );

  FIX::DataDictionary dataDictionary( "../spec/FIX42.xml" );
  count = count - 1;

  int start = GetTickCount();
  for ( int i = 0; i <= count; ++i )
  {
    dataDictionary.validate( message );
  }
  return GetTickCount() - start;
}

int testValidateQuoteRequest( int count )
{
  FIX42::QuoteRequest message( FIX::QuoteReqID("1") );
  FIX42::QuoteRequest::NoRelatedSym noRelatedSym;

  for( int i = 1; i <= 10; ++i )
  {
    noRelatedSym.set( FIX::Symbol("IBM") );
    noRelatedSym.set( FIX::MaturityMonthYear() );
    noRelatedSym.set( FIX::PutOrCall(FIX::PutOrCall_PUT) );
    noRelatedSym.set( FIX::StrikePrice(120) );
    noRelatedSym.set( FIX::Side(FIX::Side_BUY) );
    noRelatedSym.set( FIX::OrderQty(100) );
    noRelatedSym.set( FIX::Currency("USD") );
    noRelatedSym.set( FIX::OrdType(FIX::OrdType_MARKET) );
    message.addGroup( noRelatedSym );
  }

  FIX::DataDictionary dataDictionary;
  count = count - 1;

  int start = GetTickCount();
  for ( int j = 0; j <= count; ++j )
  {
    dataDictionary.validate( message );
  }
  return GetTickCount() - start;
}

int testValidateDictQuoteRequest( int count )
{
  FIX42::QuoteRequest message( FIX::QuoteReqID("1") );
  FIX42::QuoteRequest::NoRelatedSym noRelatedSym;

  for( int i = 1; i <= 10; ++i )
  {
    noRelatedSym.set( FIX::Symbol("IBM") );
    noRelatedSym.set( FIX::MaturityMonthYear() );
    noRelatedSym.set( FIX::PutOrCall(FIX::PutOrCall_PUT) );
    noRelatedSym.set( FIX::StrikePrice(120) );
    noRelatedSym.set( FIX::Side(FIX::Side_BUY) );
    noRelatedSym.set( FIX::OrderQty(100) );
    noRelatedSym.set( FIX::Currency("USD") );
    noRelatedSym.set( FIX::OrdType(FIX::OrdType_MARKET) );
    message.addGroup( noRelatedSym );
  }

  FIX::DataDictionary dataDictionary( "../spec/FIX42.xml" );
  count = count - 1;

  int start = GetTickCount();
  for ( int j = 0; j <= count; ++j )
  {
    dataDictionary.validate( message );
  }
  return GetTickCount() - start;
}

class TestApplication : public FIX::NullApplication
{
public:
  TestApplication() : m_count(0) {}

  void fromApp( const FIX::Message& m, const FIX::SessionID& )
  throw( FIX::FieldNotFound, FIX::IncorrectDataFormat, FIX::IncorrectTagValue, FIX::UnsupportedMessageType )
  {
    m_count++; 
  }

  int getCount() { return m_count; }

private:
  int m_count;
};

int testSendOnSocket( int count, short port )
{
  std::stringstream stream;
  stream
    << "[DEFAULT]" << std::endl
    << "SocketConnectHost=localhost" << std::endl
    << "SocketConnectPort=" << (unsigned short)port << std::endl
    << "SocketAcceptPort=" << (unsigned short)port << std::endl
    << "SocketReuseAddress=Y" << std::endl
    << "StartTime=00:00:00" << std::endl
    << "EndTime=00:00:00" << std::endl
    << "UseDataDictionary=N" << std::endl
    << "BeginString=FIX.4.2" << std::endl
    << "PersistMessages=N" << std::endl
    << "[SESSION]" << std::endl
    << "ConnectionType=acceptor" << std::endl
    << "SenderCompID=SERVER" << std::endl
    << "TargetCompID=CLIENT" << std::endl
    << "[SESSION]" << std::endl
    << "ConnectionType=initiator" << std::endl
    << "SenderCompID=CLIENT" << std::endl
    << "TargetCompID=SERVER" << std::endl
    << "HeartBtInt=30" << std::endl;

  FIX::ClOrdID clOrdID( "ORDERID" );
  FIX::HandlInst handlInst( '1' );
  FIX::Symbol symbol( "LNUX" );
  FIX::Side side( FIX::Side_BUY );
  FIX::TransactTime transactTime;
  FIX::OrdType ordType( FIX::OrdType_MARKET );
  FIX42::NewOrderSingle message( clOrdID, handlInst, symbol, side, transactTime, ordType );

  FIX::SessionID sessionID( "FIX.4.2", "CLIENT", "SERVER" );

  TestApplication application;
  FIX::MemoryStoreFactory factory;
  FIX::SessionSettings settings( stream );
  FIX::ScreenLogFactory logFactory( settings );

  FIX::SocketAcceptor acceptor( application, factory, settings );
  acceptor.start();

  FIX::SocketInitiator initiator( application, factory, settings );
  initiator.start();

  FIX::process_sleep( 1 );

  int start = GetTickCount();

  for ( int i = 0; i <= count; ++i )
    FIX::Session::sendToTarget( message, sessionID );

  while( application.getCount() < count )
    FIX::process_sleep( 0.1 );

  int ticks = GetTickCount() - start;

  initiator.stop();
  acceptor.stop();

  return ticks;
}

int testSendOnThreadedSocket( int count, short port )
{
  std::stringstream stream;
  stream
    << "[DEFAULT]" << std::endl
    << "SocketConnectHost=localhost" << std::endl
    << "SocketConnectPort=" << (unsigned short)port << std::endl
    << "SocketAcceptPort=" << (unsigned short)port << std::endl
    << "SocketReuseAddress=Y" << std::endl
    << "StartTime=00:00:00" << std::endl
    << "EndTime=00:00:00" << std::endl
    << "UseDataDictionary=N" << std::endl
    << "BeginString=FIX.4.2" << std::endl
    << "PersistMessages=N" << std::endl
    << "[SESSION]" << std::endl
    << "ConnectionType=acceptor" << std::endl
    << "SenderCompID=SERVER" << std::endl
    << "TargetCompID=CLIENT" << std::endl
    << "[SESSION]" << std::endl
    << "ConnectionType=initiator" << std::endl
    << "SenderCompID=CLIENT" << std::endl
    << "TargetCompID=SERVER" << std::endl
    << "HeartBtInt=30" << std::endl;

  FIX::ClOrdID clOrdID( "ORDERID" );
  FIX::HandlInst handlInst( '1' );
  FIX::Symbol symbol( "LNUX" );
  FIX::Side side( FIX::Side_BUY );
  FIX::TransactTime transactTime;
  FIX::OrdType ordType( FIX::OrdType_MARKET );
  FIX42::NewOrderSingle message( clOrdID, handlInst, symbol, side, transactTime, ordType );

  FIX::SessionID sessionID( "FIX.4.2", "CLIENT", "SERVER" );

  TestApplication application;
  FIX::MemoryStoreFactory factory;
  FIX::SessionSettings settings( stream );

  FIX::ThreadedSocketAcceptor acceptor( application, factory, settings );
  acceptor.start();

  FIX::ThreadedSocketInitiator initiator( application, factory, settings );
  initiator.start();

  FIX::process_sleep( 1 );

  int start = GetTickCount();
  for ( int i = 0; i <= count; ++i )
    FIX::Session::sendToTarget( message, sessionID );

  while( application.getCount() < count )
    FIX::process_sleep( 0.1 );

  int ticks = GetTickCount() - start;

  initiator.stop();
  acceptor.stop();

  return ticks;
}
