/* -*- C++ -*- */

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
#else
#include "config.h"
#endif

#include "Application.h"
#include "quickfix/Session.h"
#include <iostream>

void Application::onLogon( const FIX::SessionID& sessionID )
{
  std::cout << std::endl << "Logon - " << sessionID << std::endl;
}

void Application::onLogout( const FIX::SessionID& sessionID )
{
  std::cout << std::endl << "Logout - " << sessionID << std::endl;
}

void Application::fromApp( const FIX::Message& message, const FIX::SessionID& sessionID )
{
  crack( message, sessionID );
  std::cout << std::endl << "IN: " << message << std::endl;
}

void Application::toApp( FIX::Message& message, const FIX::SessionID& sessionID )
{
  try
  {
    FIX::PossDupFlag possDupFlag;
    message.getHeader().getField( possDupFlag );
    if ( possDupFlag ) throw FIX::DoNotSend();
  }
  catch ( FIX::FieldNotFound& ) {}

  std::cout << std::endl
  << "OUT: " << message << std::endl;
}

void Application::onMessage
( const FIX40::ExecutionReport&, const FIX::SessionID& ) {}
void Application::onMessage
( const FIX40::OrderCancelReject&, const FIX::SessionID& ) {}
void Application::onMessage
( const FIX41::ExecutionReport&, const FIX::SessionID& ) {}
void Application::onMessage
( const FIX41::OrderCancelReject&, const FIX::SessionID& ) {}
void Application::onMessage
( const FIX42::ExecutionReport&, const FIX::SessionID& ) {}
void Application::onMessage
( const FIX42::OrderCancelReject&, const FIX::SessionID& ) {}
void Application::onMessage
( const FIX43::ExecutionReport&, const FIX::SessionID& ) {}
void Application::onMessage
( const FIX43::OrderCancelReject&, const FIX::SessionID& ) {}
void Application::onMessage
( const FIX44::ExecutionReport&, const FIX::SessionID& ) {}
void Application::onMessage
( const FIX44::OrderCancelReject&, const FIX::SessionID& ) {}
void Application::onMessage
( const FIX50::ExecutionReport&, const FIX::SessionID& ) {}
void Application::onMessage
( const FIX50::OrderCancelReject&, const FIX::SessionID& ) {}

void Application::run()
{
  while ( true )
  {
    try
    {
      char action = queryAction();

      if ( action == '1' )
        queryEnterOrder();
      else if ( action == '2' )
        queryCancelOrder();
      else if ( action == '3' )
        queryReplaceOrder();
      else if ( action == '4' )
        queryMarketDataRequest();
      else if ( action == '5' )
        break;
    }
    catch ( std::exception & e )
    {
      std::cout << "Message Not Sent: " << e.what();
    }
  }
}

void Application::queryEnterOrder()
{
  int version = queryVersion();
  std::cout << "\nNewOrderSingle\n";
  FIX::Message order;

  switch ( version ) {
  case 40:
    order = queryNewOrderSingle40();
    break;
  case 41:
    order = queryNewOrderSingle41();
    break;
  case 42:
    order = queryNewOrderSingle42();
    break;
  case 43:
    order = queryNewOrderSingle43();
    break;
  case 44:
    order = queryNewOrderSingle44();
    break;
  case 50:
    order = queryNewOrderSingle50();
    break;
  default:
    std::cerr << "No test for version " << version << std::endl;
    break;
  }

  if ( queryConfirm( "Send order" ) )
    FIX::Session::sendToTarget( order );
}

void Application::queryCancelOrder()
{
  int version = queryVersion();
  std::cout << "\nOrderCancelRequest\n";
  FIX::Message cancel;

  switch ( version ) {
  case 40:
    cancel = queryOrderCancelRequest40();
    break;
  case 41:
    cancel = queryOrderCancelRequest41();
    break;
  case 42:
    cancel = queryOrderCancelRequest42();
    break;
  case 43:
    cancel = queryOrderCancelRequest43();
    break;
  case 44:
    cancel = queryOrderCancelRequest44();
    break;
  case 50:
    cancel = queryOrderCancelRequest50();
    break;
  default:
    std::cerr << "No test for version " << version << std::endl;
    break;
  }

  if ( queryConfirm( "Send cancel" ) )
    FIX::Session::sendToTarget( cancel );
}

void Application::queryReplaceOrder()
{
  int version = queryVersion();
  std::cout << "\nCancelReplaceRequest\n";
  FIX::Message replace;

  switch ( version ) {
  case 40:
    replace = queryCancelReplaceRequest40();
    break;
  case 41:
    replace = queryCancelReplaceRequest41();
    break;
  case 42:
    replace = queryCancelReplaceRequest42();
    break;
  case 43:
    replace = queryCancelReplaceRequest43();
    break;
  case 44:
    replace = queryCancelReplaceRequest44();
    break;
  case 50:
    replace = queryCancelReplaceRequest50();
    break;
  default:
    std::cerr << "No test for version " << version << std::endl;
    break;
  }

  if ( queryConfirm( "Send replace" ) )
    FIX::Session::sendToTarget( replace );
}

void Application::queryMarketDataRequest()
{
  int version = queryVersion();
  std::cout << "\nMarketDataRequest\n";
  FIX::Message md;

  switch (version) {
  case 43:
    md = queryMarketDataRequest43();
    break;
  case 44:
    md = queryMarketDataRequest44();
    break;
  case 50:
    md = queryMarketDataRequest50();
    break;
  default:
    std::cerr << "No test for version " << version << std::endl;
    break;
  }

  FIX::Session::sendToTarget( md );
}

FIX40::NewOrderSingle Application::queryNewOrderSingle40()
{
  FIX::OrdType ordType;

  FIX40::NewOrderSingle newOrderSingle(
    queryClOrdID(), FIX::HandlInst( '1' ), querySymbol(), querySide(),
    queryOrderQty(), ordType = queryOrdType() );

  newOrderSingle.set( queryTimeInForce() );
  if ( ordType == FIX::OrdType_LIMIT || ordType == FIX::OrdType_STOP_LIMIT )
    newOrderSingle.set( queryPrice() );
  if ( ordType == FIX::OrdType_STOP || ordType == FIX::OrdType_STOP_LIMIT )
    newOrderSingle.set( queryStopPx() );

  queryHeader( newOrderSingle.getHeader() );
  return newOrderSingle;
}

FIX41::NewOrderSingle Application::queryNewOrderSingle41()
{
  FIX::OrdType ordType;

  FIX41::NewOrderSingle newOrderSingle(
    queryClOrdID(), FIX::HandlInst( '1' ), querySymbol(), querySide(),
    ordType = queryOrdType() );

  newOrderSingle.set( queryOrderQty() );
  newOrderSingle.set( queryTimeInForce() );
  if ( ordType == FIX::OrdType_LIMIT || ordType == FIX::OrdType_STOP_LIMIT )
    newOrderSingle.set( queryPrice() );
  if ( ordType == FIX::OrdType_STOP || ordType == FIX::OrdType_STOP_LIMIT )
    newOrderSingle.set( queryStopPx() );

  queryHeader( newOrderSingle.getHeader() );
  return newOrderSingle;
}

FIX42::NewOrderSingle Application::queryNewOrderSingle42()
{
  FIX::OrdType ordType;

  FIX42::NewOrderSingle newOrderSingle(
    queryClOrdID(), FIX::HandlInst( '1' ), querySymbol(), querySide(),
    FIX::TransactTime(), ordType = queryOrdType() );

  newOrderSingle.set( queryOrderQty() );
  newOrderSingle.set( queryTimeInForce() );
  if ( ordType == FIX::OrdType_LIMIT || ordType == FIX::OrdType_STOP_LIMIT )
    newOrderSingle.set( queryPrice() );
  if ( ordType == FIX::OrdType_STOP || ordType == FIX::OrdType_STOP_LIMIT )
    newOrderSingle.set( queryStopPx() );

  queryHeader( newOrderSingle.getHeader() );
  return newOrderSingle;
}

FIX43::NewOrderSingle Application::queryNewOrderSingle43()
{
  FIX::OrdType ordType;

  FIX43::NewOrderSingle newOrderSingle(
    queryClOrdID(), FIX::HandlInst( '1' ), querySide(),
    FIX::TransactTime(), ordType = queryOrdType() );

  newOrderSingle.set( querySymbol() );
  newOrderSingle.set( queryOrderQty() );
  newOrderSingle.set( queryTimeInForce() );
  if ( ordType == FIX::OrdType_LIMIT || ordType == FIX::OrdType_STOP_LIMIT )
    newOrderSingle.set( queryPrice() );
  if ( ordType == FIX::OrdType_STOP || ordType == FIX::OrdType_STOP_LIMIT )
    newOrderSingle.set( queryStopPx() );

  queryHeader( newOrderSingle.getHeader() );
  return newOrderSingle;
}

FIX44::NewOrderSingle Application::queryNewOrderSingle44()
{
  FIX::OrdType ordType;

  FIX44::NewOrderSingle newOrderSingle(
    queryClOrdID(), querySide(),
    FIX::TransactTime(), ordType = queryOrdType() );

  newOrderSingle.set( FIX::HandlInst('1') );
  newOrderSingle.set( querySymbol() );
  newOrderSingle.set( queryOrderQty() );
  newOrderSingle.set( queryTimeInForce() );
  if ( ordType == FIX::OrdType_LIMIT || ordType == FIX::OrdType_STOP_LIMIT )
    newOrderSingle.set( queryPrice() );
  if ( ordType == FIX::OrdType_STOP || ordType == FIX::OrdType_STOP_LIMIT )
    newOrderSingle.set( queryStopPx() );

  queryHeader( newOrderSingle.getHeader() );
  return newOrderSingle;
}

FIX50::NewOrderSingle Application::queryNewOrderSingle50()
{
  FIX::OrdType ordType;

  FIX50::NewOrderSingle newOrderSingle(
    queryClOrdID(), querySide(),
    FIX::TransactTime(), ordType = queryOrdType() );

  newOrderSingle.set( FIX::HandlInst('1') );
  newOrderSingle.set( querySymbol() );
  newOrderSingle.set( queryOrderQty() );
  newOrderSingle.set( queryTimeInForce() );
  if ( ordType == FIX::OrdType_LIMIT || ordType == FIX::OrdType_STOP_LIMIT )
    newOrderSingle.set( queryPrice() );
  if ( ordType == FIX::OrdType_STOP || ordType == FIX::OrdType_STOP_LIMIT )
    newOrderSingle.set( queryStopPx() );

  queryHeader( newOrderSingle.getHeader() );
  return newOrderSingle;
}

FIX40::OrderCancelRequest Application::queryOrderCancelRequest40()
{
  FIX40::OrderCancelRequest orderCancelRequest(
    queryOrigClOrdID(), queryClOrdID(), FIX::CxlType( 'F' ),
    querySymbol(), querySide(), queryOrderQty() );

  queryHeader( orderCancelRequest.getHeader() );
  return orderCancelRequest;
}

FIX41::OrderCancelRequest Application::queryOrderCancelRequest41()
{
  FIX41::OrderCancelRequest orderCancelRequest(
    queryOrigClOrdID(), queryClOrdID(), querySymbol(), querySide() );

  orderCancelRequest.set( queryOrderQty() );
  queryHeader( orderCancelRequest.getHeader() );
  return orderCancelRequest;
}

FIX42::OrderCancelRequest Application::queryOrderCancelRequest42()
{
  FIX42::OrderCancelRequest orderCancelRequest( queryOrigClOrdID(),
      queryClOrdID(), querySymbol(), querySide(), FIX::TransactTime() );

  orderCancelRequest.set( queryOrderQty() );
  queryHeader( orderCancelRequest.getHeader() );
  return orderCancelRequest;
}

FIX43::OrderCancelRequest Application::queryOrderCancelRequest43()
{
  FIX43::OrderCancelRequest orderCancelRequest( queryOrigClOrdID(),
      queryClOrdID(), querySide(), FIX::TransactTime() );

  orderCancelRequest.set( querySymbol() );
  orderCancelRequest.set( queryOrderQty() );
  queryHeader( orderCancelRequest.getHeader() );
  return orderCancelRequest;
}

FIX44::OrderCancelRequest Application::queryOrderCancelRequest44()
{
  FIX44::OrderCancelRequest orderCancelRequest( queryOrigClOrdID(),
      queryClOrdID(), querySide(), FIX::TransactTime() );

  orderCancelRequest.set( querySymbol() );
  orderCancelRequest.set( queryOrderQty() );
  queryHeader( orderCancelRequest.getHeader() );
  return orderCancelRequest;
}

FIX50::OrderCancelRequest Application::queryOrderCancelRequest50()
{
  FIX50::OrderCancelRequest orderCancelRequest( queryOrigClOrdID(),
      queryClOrdID(), querySide(), FIX::TransactTime() );

  orderCancelRequest.set( querySymbol() );
  orderCancelRequest.set( queryOrderQty() );
  queryHeader( orderCancelRequest.getHeader() );
  return orderCancelRequest;
}

FIX40::OrderCancelReplaceRequest Application::queryCancelReplaceRequest40()
{
  FIX40::OrderCancelReplaceRequest cancelReplaceRequest(
    queryOrigClOrdID(), queryClOrdID(), FIX::HandlInst( '1' ),
    querySymbol(), querySide(), queryOrderQty(), queryOrdType() );

  if ( queryConfirm( "New price" ) )
    cancelReplaceRequest.set( queryPrice() );
  if ( queryConfirm( "New quantity" ) )
    cancelReplaceRequest.set( queryOrderQty() );

  queryHeader( cancelReplaceRequest.getHeader() );
  return cancelReplaceRequest;
}

FIX41::OrderCancelReplaceRequest Application::queryCancelReplaceRequest41()
{
  FIX41::OrderCancelReplaceRequest cancelReplaceRequest(
    queryOrigClOrdID(), queryClOrdID(), FIX::HandlInst( '1' ),
    querySymbol(), querySide(), queryOrdType() );

  if ( queryConfirm( "New price" ) )
    cancelReplaceRequest.set( queryPrice() );
  if ( queryConfirm( "New quantity" ) )
    cancelReplaceRequest.set( queryOrderQty() );

  queryHeader( cancelReplaceRequest.getHeader() );
  return cancelReplaceRequest;
}

FIX42::OrderCancelReplaceRequest Application::queryCancelReplaceRequest42()
{
  FIX42::OrderCancelReplaceRequest cancelReplaceRequest(
    queryOrigClOrdID(), queryClOrdID(), FIX::HandlInst( '1' ),
    querySymbol(), querySide(), FIX::TransactTime(), queryOrdType() );

  if ( queryConfirm( "New price" ) )
    cancelReplaceRequest.set( queryPrice() );
  if ( queryConfirm( "New quantity" ) )
    cancelReplaceRequest.set( queryOrderQty() );

  queryHeader( cancelReplaceRequest.getHeader() );
  return cancelReplaceRequest;
}

FIX43::OrderCancelReplaceRequest Application::queryCancelReplaceRequest43()
{
  FIX43::OrderCancelReplaceRequest cancelReplaceRequest(
    queryOrigClOrdID(), queryClOrdID(), FIX::HandlInst( '1' ),
    querySide(), FIX::TransactTime(), queryOrdType() );

  cancelReplaceRequest.set( querySymbol() );
  if ( queryConfirm( "New price" ) )
    cancelReplaceRequest.set( queryPrice() );
  if ( queryConfirm( "New quantity" ) )
    cancelReplaceRequest.set( queryOrderQty() );

  queryHeader( cancelReplaceRequest.getHeader() );
  return cancelReplaceRequest;
}

FIX44::OrderCancelReplaceRequest Application::queryCancelReplaceRequest44()
{
  FIX44::OrderCancelReplaceRequest cancelReplaceRequest(
    queryOrigClOrdID(), queryClOrdID(),
    querySide(), FIX::TransactTime(), queryOrdType() );

  cancelReplaceRequest.set( FIX::HandlInst('1') );
  cancelReplaceRequest.set( querySymbol() );
  if ( queryConfirm( "New price" ) )
    cancelReplaceRequest.set( queryPrice() );
  if ( queryConfirm( "New quantity" ) )
    cancelReplaceRequest.set( queryOrderQty() );

  queryHeader( cancelReplaceRequest.getHeader() );
  return cancelReplaceRequest;
}

FIX50::OrderCancelReplaceRequest Application::queryCancelReplaceRequest50()
{
  FIX50::OrderCancelReplaceRequest cancelReplaceRequest(
    queryOrigClOrdID(), queryClOrdID(),
    querySide(), FIX::TransactTime(), queryOrdType() );

  cancelReplaceRequest.set( FIX::HandlInst('1') );
  cancelReplaceRequest.set( querySymbol() );
  if ( queryConfirm( "New price" ) )
    cancelReplaceRequest.set( queryPrice() );
  if ( queryConfirm( "New quantity" ) )
    cancelReplaceRequest.set( queryOrderQty() );

  queryHeader( cancelReplaceRequest.getHeader() );
  return cancelReplaceRequest;
}

FIX43::MarketDataRequest Application::queryMarketDataRequest43()
{
  FIX::MDReqID mdReqID( "MARKETDATAID" );
  FIX::SubscriptionRequestType subType( FIX::SubscriptionRequestType_SNAPSHOT );
  FIX::MarketDepth marketDepth( 0 );

  FIX43::MarketDataRequest::NoMDEntryTypes marketDataEntryGroup;
  FIX::MDEntryType mdEntryType( FIX::MDEntryType_BID );
  marketDataEntryGroup.set( mdEntryType );

  FIX43::MarketDataRequest::NoRelatedSym symbolGroup;
  FIX::Symbol symbol( "LNUX" );
  symbolGroup.set( symbol );

  FIX43::MarketDataRequest message( mdReqID, subType, marketDepth );
  message.addGroup( marketDataEntryGroup );
  message.addGroup( symbolGroup );

  queryHeader( message.getHeader() );

  std::cout << message.toXML() << std::endl;
  std::cout << message.toString() << std::endl;

  return message;
}

FIX44::MarketDataRequest Application::queryMarketDataRequest44()
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

  queryHeader( message.getHeader() );

  std::cout << message.toXML() << std::endl;
  std::cout << message.toString() << std::endl;

  return message;
}

FIX50::MarketDataRequest Application::queryMarketDataRequest50()
{
  FIX::MDReqID mdReqID( "MARKETDATAID" );
  FIX::SubscriptionRequestType subType( FIX::SubscriptionRequestType_SNAPSHOT );
  FIX::MarketDepth marketDepth( 0 );

  FIX50::MarketDataRequest::NoMDEntryTypes marketDataEntryGroup;
  FIX::MDEntryType mdEntryType( FIX::MDEntryType_BID );
  marketDataEntryGroup.set( mdEntryType );

  FIX50::MarketDataRequest::NoRelatedSym symbolGroup;
  FIX::Symbol symbol( "LNUX" );
  symbolGroup.set( symbol );

  FIX50::MarketDataRequest message( mdReqID, subType, marketDepth );
  message.addGroup( marketDataEntryGroup );
  message.addGroup( symbolGroup );

  queryHeader( message.getHeader() );

  std::cout << message.toXML() << std::endl;
  std::cout << message.toString() << std::endl;

  return message;
}

void Application::queryHeader( FIX::Header& header )
{
  header.setField( querySenderCompID() );
  header.setField( queryTargetCompID() );

  if ( queryConfirm( "Use a TargetSubID" ) )
    header.setField( queryTargetSubID() );
}

char Application::queryAction()
{
  char value;
  std::cout << std::endl
  << "1) Enter Order" << std::endl
  << "2) Cancel Order" << std::endl
  << "3) Replace Order" << std::endl
  << "4) Market data test" << std::endl
  << "5) Quit" << std::endl
  << "Action: ";
  std::cin >> value;
  switch ( value )
  {
    case '1': case '2': case '3': case '4': case '5': break;
    default: throw std::exception();
  }
  return value;
}

int Application::queryVersion()
{
  char value;
  std::cout << std::endl
  << "1) FIX.4.0" << std::endl
  << "2) FIX.4.1" << std::endl
  << "3) FIX.4.2" << std::endl
  << "4) FIX.4.3" << std::endl
  << "5) FIX.4.4" << std::endl
  << "6) FIXT.1.1 (FIX.5.0)" << std::endl
  << "BeginString: ";
  std::cin >> value;
  switch ( value )
  {
    case '1': return 40;
    case '2': return 41;
    case '3': return 42;
    case '4': return 43;
    case '5': return 44;
    case '6': return 50;
    default: throw std::exception();
  }
}

bool Application::queryConfirm( const std::string& query )
{
  std::string value;
  std::cout << std::endl << query << "?: ";
  std::cin >> value;
  return toupper( *value.c_str() ) == 'Y';
}

FIX::SenderCompID Application::querySenderCompID()
{
  std::string value;
  std::cout << std::endl << "SenderCompID: ";
  std::cin >> value;
  return FIX::SenderCompID( value );
}

FIX::TargetCompID Application::queryTargetCompID()
{
  std::string value;
  std::cout << std::endl << "TargetCompID: ";
  std::cin >> value;
  return FIX::TargetCompID( value );
}

FIX::TargetSubID Application::queryTargetSubID()
{
  std::string value;
  std::cout << std::endl << "TargetSubID: ";
  std::cin >> value;
  return FIX::TargetSubID( value );
}

FIX::ClOrdID Application::queryClOrdID()
{
  std::string value;
  std::cout << std::endl << "ClOrdID: ";
  std::cin >> value;
  return FIX::ClOrdID( value );
}

FIX::OrigClOrdID Application::queryOrigClOrdID()
{
  std::string value;
  std::cout << std::endl << "OrigClOrdID: ";
  std::cin >> value;
  return FIX::OrigClOrdID( value );
}

FIX::Symbol Application::querySymbol()
{
  std::string value;
  std::cout << std::endl << "Symbol: ";
  std::cin >> value;
  return FIX::Symbol( value );
}

FIX::Side Application::querySide()
{
  char value;
  std::cout << std::endl
  << "1) Buy" << std::endl
  << "2) Sell" << std::endl
  << "3) Sell Short" << std::endl
  << "4) Sell Short Exempt" << std::endl
  << "5) Cross" << std::endl
  << "6) Cross Short" << std::endl
  << "7) Cross Short Exempt" << std::endl
  << "Side: ";

  std::cin >> value;
  switch ( value )
  {
    case '1': return FIX::Side( FIX::Side_BUY );
    case '2': return FIX::Side( FIX::Side_SELL );
    case '3': return FIX::Side( FIX::Side_SELL_SHORT );
    case '4': return FIX::Side( FIX::Side_SELL_SHORT_EXEMPT );
    case '5': return FIX::Side( FIX::Side_CROSS );
    case '6': return FIX::Side( FIX::Side_CROSS_SHORT );
    case '7': return FIX::Side( 'A' );
    default: throw std::exception();
  }
}

FIX::OrderQty Application::queryOrderQty()
{
  long value;
  std::cout << std::endl << "OrderQty: ";
  std::cin >> value;
  return FIX::OrderQty( value );
}

FIX::OrdType Application::queryOrdType()
{
  char value;
  std::cout << std::endl
  << "1) Market" << std::endl
  << "2) Limit" << std::endl
  << "3) Stop" << std::endl
  << "4) Stop Limit" << std::endl
  << "OrdType: ";

  std::cin >> value;
  switch ( value )
  {
    case '1': return FIX::OrdType( FIX::OrdType_MARKET );
    case '2': return FIX::OrdType( FIX::OrdType_LIMIT );
    case '3': return FIX::OrdType( FIX::OrdType_STOP );
    case '4': return FIX::OrdType( FIX::OrdType_STOP_LIMIT );
    default: throw std::exception();
  }
}

FIX::Price Application::queryPrice()
{
  double value;
  std::cout << std::endl << "Price: ";
  std::cin >> value;
  return FIX::Price( value );
}

FIX::StopPx Application::queryStopPx()
{
  double value;
  std::cout << std::endl << "StopPx: ";
  std::cin >> value;
  return FIX::StopPx( value );
}

FIX::TimeInForce Application::queryTimeInForce()
{
  char value;
  std::cout << std::endl
  << "1) Day" << std::endl
  << "2) IOC" << std::endl
  << "3) OPG" << std::endl
  << "4) GTC" << std::endl
  << "5) GTX" << std::endl
  << "TimeInForce: ";

  std::cin >> value;
  switch ( value )
  {
    case '1': return FIX::TimeInForce( FIX::TimeInForce_DAY );
    case '2': return FIX::TimeInForce( FIX::TimeInForce_IMMEDIATE_OR_CANCEL );
    case '3': return FIX::TimeInForce( FIX::TimeInForce_AT_THE_OPENING );
    case '4': return FIX::TimeInForce( FIX::TimeInForce_GOOD_TILL_CANCEL );
    case '5': return FIX::TimeInForce( FIX::TimeInForce_GOOD_TILL_CROSSING );
    default: throw std::exception();
  }
}
