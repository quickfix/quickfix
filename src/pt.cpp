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

#include "getopt-repl.h"
#include <iostream>
#include "FIX42_Messages.h"
#include "FieldConvertors.h"
#include "Values.h"
#include "FileStore.h"
#include "SessionID.h"
#include "DataDictionary.h"
#include "Parser.h"

int testIntegerToString( int );
int testStringToInteger( int );
int testDoubleToString( int );
int testStringToDouble( int );
int testCreateHeartbeat( int );
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
void report( int, int );

#ifndef _MSC_VER
#include <sys/time.h>
int GetTickCount()
{
  timeval tv;
  gettimeofday( &tv, 0 );
  double millsec = tv.tv_sec * 1000;
  millsec += ( double ) tv.tv_usec / ( 1000 );

  return ( int ) millsec;
}
#endif

int main( int argc, char** argv )
{
  int count = 0;
  if ( getopt( argc, argv, "+c:" ) != 'c' )
  {
    std::cout << "usage: "
    << argv[ 0 ]
    << " -c count" << std::endl;
    return 1;
  }
  count = atol( optarg );

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

  std::cout << "Serializing Heartbeat messages to strings: ";
  report( testSerializeToStringHeartbeat( count ), count );

  std::cout << "Serializing Heartbeat messages from strings: ";
  report( testSerializeFromStringHeartbeat( count ), count );

  std::cout << "Creating NewOrderSingle messages: ";
  report( testCreateNewOrderSingle( count ), count );

  std::cout << "Serializing NewOrderSingle messages to strings: ";
  report( testCreateNewOrderSingle( count ), count );

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
  std::vector < FIX42::Heartbeat* > vector;
  vector.reserve( count );
  count = count - 1;

  int start = GetTickCount();
  for ( int i = 0; i <= count; ++i )
  {
    vector.push_back( new FIX42::Heartbeat() );
  }

  std::vector < FIX42::Heartbeat* > ::iterator iter;
  for ( iter = vector.begin(); iter != vector.end(); ++iter )
    delete *iter;

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
  std::vector < FIX42::Heartbeat > vector;
  vector.reserve( count );
  FIX42::Heartbeat message;
  std::string string = message.toString();
  count = count - 1;

  for ( int i = 0; i <= count; ++i )
  {
    vector.push_back( message );
  }

  int start = GetTickCount();
  std::vector < FIX42::Heartbeat > ::iterator iter;
  for ( iter = vector.begin(); iter != vector.end(); ++iter )
  {
    iter->setString( string );
  }
  return GetTickCount() - start;
}

int testCreateNewOrderSingle( int count )
{
  std::vector < FIX42::NewOrderSingle* > vector;
  vector.reserve( count );
  count = count - 1;

  int start = GetTickCount();
  for ( int i = 0; i <= count; ++i )
  {
    FIX::ClOrdID clOrdID( "ORDERID" );
    FIX::HandlInst handlInst( '1' );
    FIX::Symbol symbol( "LNUX" );
    FIX::Side side( FIX::Side_BUY );
    FIX::TransactTime transactTime;
    FIX::OrdType ordType( FIX::OrdType_MARKET );
    vector.push_back( new FIX42::NewOrderSingle
                      ( clOrdID, handlInst, symbol, side, transactTime, ordType ) );
  }

  std::vector < FIX42::NewOrderSingle* > ::iterator iter;
  for ( iter = vector.begin(); iter != vector.end(); ++iter )
    delete *iter;

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

    for( int i = 1; i <= 10; ++i )
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
