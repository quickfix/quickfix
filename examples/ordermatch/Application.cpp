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

#include "Application.h"
#include "quickfix/include/Session.h"

#ifdef _MSC_VER
#pragma warning( disable : 4503 4355 4786 )
#else
#include "config.h"
#endif

void Application::onLogon( const FIX::SessionID& sessionID )
{
  std::cout << "Logon - " << sessionID << std::endl;
}

void Application::onLogout( const FIX::SessionID& sessionID )
{
  std::cout << "Logout - " << sessionID << std::endl;
}

void Application::fromApp( const FIX::Message& message,
                           const FIX::SessionID& sessionID )
throw( FIX::FieldNotFound&, FIX::UnsupportedMessageType&, FIX::IncorrectTagValue& )
{
  crack( message, sessionID );
}

void Application::onRun()
{
  while ( true )
  {
    std::string value;
    std::cin >> value;

    if ( value == "#symbols" )
      m_orderMatcher.display();
    else
      m_orderMatcher.display( value );

    std::cout << std::endl;
  }
}

void Application::onMessage( const FIX42::NewOrderSingle& message, const FIX::SessionID& )
{
  FIX::SenderCompID senderCompID;
  FIX::TargetCompID targetCompID;
  FIX::ClOrdID clOrdID;
  FIX::Symbol symbol;
  FIX::Side side;
  FIX::OrdType ordType;
  FIX::Price price;
  FIX::OrderQty orderQty;
  FIX::TimeInForce timeInForce( FIX::TimeInForce_DAY );

  message.getHeader().get( senderCompID );
  message.getHeader().get( targetCompID );
  message.get( clOrdID );
  message.get( symbol );
  message.get( side );
  message.get( ordType );
  if ( ordType == FIX::OrdType_LIMIT )
    message.get( price );
  message.get( orderQty );
  if ( message.isSetField( timeInForce ) )
    message.get( timeInForce );

  try
  {
    if ( timeInForce != FIX::TimeInForce_DAY )
      throw std::logic_error( "Unsupported TIF, use Day" );

    Order order( clOrdID, symbol, senderCompID, targetCompID,
                 convert( side ), convert( ordType ),
                 price, orderQty );

    processOrder( order );
  }
  catch ( std::exception & e )
  {
    rejectOrder( senderCompID, targetCompID, clOrdID, symbol, side, e.what() );
  }
}

void Application::onMessage( const FIX42::OrderCancelRequest& message, const FIX::SessionID& )
{
  FIX::OrigClOrdID origClOrdID;
  FIX::Symbol symbol;
  FIX::Side side;

  message.get( origClOrdID );
  message.get( symbol );
  message.get( side );

  try
  {
    processCancel( origClOrdID, symbol, convert( side ) );
  }
  catch ( std::exception& ) {}}

void Application::onMessage( const FIX42::MarketDataRequest& message, const FIX::SessionID& )
{
  FIX::MDReqID mdReqID;
  FIX::SubscriptionRequestType subscriptionRequestType;
  FIX::MarketDepth marketDepth;
  FIX::NoRelatedSym noRelatedSym;
  FIX42::MarketDataRequest::NoRelatedSym noRelatedSymGroup;

  message.get( mdReqID );
  message.get( subscriptionRequestType );
  if ( subscriptionRequestType != FIX::SubscriptionRequestType_SNAPSHOT )
    throw( FIX::IncorrectTagValue( subscriptionRequestType.getField() ) );
  message.get( marketDepth );
  message.get( noRelatedSym );

  for ( int i = 1; i <= noRelatedSym; ++i )
  {
    FIX::Symbol symbol;
    message.getGroup( i, noRelatedSymGroup );
    noRelatedSymGroup.get( symbol );
  }
}

void Application::updateOrder( const Order& order, char status )
{
  FIX::TargetCompID targetCompID( order.getOwner() );
  FIX::SenderCompID senderCompID( order.getTarget() );

  FIX42::ExecutionReport fixOrder
  ( FIX::OrderID ( order.getClientID() ),
    FIX::ExecID ( m_generator.genExecutionID() ),
    FIX::ExecTransType ( FIX::ExecTransType_NEW ),
    FIX::ExecType ( status ),
    FIX::OrdStatus ( status ),
    FIX::Symbol ( order.getSymbol() ),
    FIX::Side ( convert( order.getSide() ) ),
    FIX::LeavesQty ( order.getOpenQuantity() ),
    FIX::CumQty ( order.getExecutedQuantity() ),
    FIX::AvgPx ( order.getAvgExecutedPrice() ) );

  fixOrder.set( FIX::ClOrdID( order.getClientID() ) );
  fixOrder.set( FIX::OrderQty( order.getQuantity() ) );

  if ( status == FIX::OrdStatus_FILLED ||
       status == FIX::OrdStatus_PARTIALLY_FILLED )
  {
    fixOrder.set( FIX::LastShares( order.getLastExecutedQuantity() ) );
    fixOrder.set( FIX::LastPx( order.getLastExecutedPrice() ) );
  }

  try
  {
    FIX::Session::sendToTarget( fixOrder, senderCompID, targetCompID );
  }
  catch ( FIX::SessionNotFound& ) {}}

void Application::rejectOrder
( const FIX::SenderCompID& sender, const FIX::TargetCompID& target,
  const FIX::ClOrdID& clOrdID, const FIX::Symbol& symbol,
  const FIX::Side& side, const std::string& message )
{
  FIX::TargetCompID targetCompID( sender.getValue() );
  FIX::SenderCompID senderCompID( target.getValue() );

  FIX42::ExecutionReport fixOrder
  ( FIX::OrderID ( clOrdID.getValue() ),
    FIX::ExecID ( m_generator.genExecutionID() ),
    FIX::ExecTransType ( FIX::ExecTransType_NEW ),
    FIX::ExecType ( FIX::ExecType_REJECTED ),
    FIX::OrdStatus ( FIX::ExecType_REJECTED ),
    symbol, side, FIX::LeavesQty( 0 ), FIX::CumQty( 0 ), FIX::AvgPx( 0 ) );

  fixOrder.set( clOrdID );
  fixOrder.set( FIX::Text( message ) );

  try
  {
    FIX::Session::sendToTarget( fixOrder, senderCompID, targetCompID );
  }
  catch ( FIX::SessionNotFound& ) {}}

void Application::processOrder( const Order& order )
{
  if ( m_orderMatcher.insert( order ) )
  {
    acceptOrder( order );

    std::queue < Order > orders;
    m_orderMatcher.match( order.getSymbol(), orders );

    while ( orders.size() )
    {
      fillOrder( orders.front() );
      orders.pop();
    }
  }
  else
    rejectOrder( order );
}

void Application::processCancel( const std::string& id,
                                 const std::string& symbol, Order::Side side )
{
  Order & order = m_orderMatcher.find( symbol, side, id );
  order.cancel();
  cancelOrder( order );
  m_orderMatcher.erase( order );
}

Order::Side Application::convert( const FIX::Side& side )
{
  switch ( side )
  {
    case FIX::Side_BUY: return Order::buy;
    case FIX::Side_SELL: return Order::sell;
    default: throw std::logic_error( "Unsupported Side, use buy or sell" );
  }
}

Order::Type Application::convert( const FIX::OrdType& ordType )
{
  switch ( ordType )
  {
    case FIX::OrdType_LIMIT: return Order::limit;
    default: throw std::logic_error( "Unsupported Order Type, use limit" );
  }
}

FIX::Side Application::convert( Order::Side side )
{
  switch ( side )
  {
    case Order::buy: return FIX::Side( FIX::Side_BUY );
    case Order::sell: return FIX::Side( FIX::Side_SELL );
    default: throw std::logic_error( "Unsupported Side, use buy or sell" );
  }
}

FIX::OrdType Application::convert( Order::Type type )
{
  switch ( type )
  {
    case Order::limit: return FIX::OrdType( FIX::OrdType_LIMIT );
    default: throw std::logic_error( "Unsupported Order Type, use limit" );
  }
}
