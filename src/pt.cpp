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
    message.getString();
  }
  return GetTickCount() - start;
}

int testSerializeFromStringHeartbeat( int count )
{
  std::vector < FIX42::Heartbeat > vector;
  FIX42::Heartbeat message;
  std::string string = message.getString();
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
    message.getString();
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
  std::string string = message.getString();

  count = count - 1;

  int start = GetTickCount();
  for ( int i = 0; i <= count; ++i )
  {
    message.setString( string );
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
  std::string messageString = message.getString();

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
