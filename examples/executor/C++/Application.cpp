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

void Application::onCreate( const FIX::SessionID& sessionID ) {}
void Application::onLogon( const FIX::SessionID& sessionID ) {}
void Application::onLogout( const FIX::SessionID& sessionID ) {}
void Application::toAdmin( FIX::Message& message,
                           const FIX::SessionID& sessionID ) {}
void Application::toApp( FIX::Message& message,
                         const FIX::SessionID& sessionID )
throw( FIX::DoNotSend& ) {}

void Application::fromAdmin( const FIX::Message& message,
                             const FIX::SessionID& sessionID )
throw( FIX::FieldNotFound&, FIX::RejectLogon& ) {}

void Application::fromApp( const FIX::Message& message,
                           const FIX::SessionID& sessionID )
throw( FIX::FieldNotFound&, FIX::UnsupportedMessageType&,
       FIX::IncorrectTagValue& )
{ crack( message, sessionID ); }

void Application::onRun()
{
  while ( true ) FIX::process_sleep( 1 );
}

void Application::onMessage( const FIX40::NewOrderSingle& message,
                             const FIX::SessionID& sessionID )
{
  FIX::Symbol symbol;
  FIX::Side side;
  FIX::OrdType ordType;
  FIX::OrderQty orderQty;
  FIX::Price price;
  FIX::ClOrdID clOrdID;

  message.get( ordType );

  if ( ordType != FIX::OrdType_LIMIT )
    throw FIX::IncorrectTagValue( ordType.getField() );

  message.get( symbol );
  message.get( side );
  message.get( orderQty );
  message.get( price );
  message.get( clOrdID );

  FIX40::ExecutionReport executionReport = FIX40::ExecutionReport
      ( FIX::OrderID( genOrderID() ),
        FIX::ExecID( genExecID() ),
        FIX::ExecTransType( FIX::ExecTransType_NEW ),
        FIX::OrdStatus( FIX::OrdStatus_FILLED ),
        symbol,
        side,
        orderQty,
        FIX::LastShares( orderQty ),
        FIX::LastPx( price ),
        FIX::CumQty( orderQty ),
        FIX::AvgPx( price ) );

  executionReport.set( clOrdID );

  try
  {
    FIX::Session::sendToTarget( executionReport, sessionID );
  }
  catch ( FIX::SessionNotFound& ) {}
}

void Application::onMessage( const FIX41::NewOrderSingle& message,
                             const FIX::SessionID& sessionID )
{
  FIX::Symbol symbol;
  FIX::Side side;
  FIX::OrdType ordType;
  FIX::OrderQty orderQty;
  FIX::Price price;
  FIX::ClOrdID clOrdID;

  message.get( ordType );

  if ( ordType != FIX::OrdType_LIMIT )
    throw FIX::IncorrectTagValue( ordType.getField() );

  message.get( symbol );
  message.get( side );
  message.get( orderQty );
  message.get( price );
  message.get( clOrdID );

  FIX41::ExecutionReport executionReport = FIX41::ExecutionReport
      ( FIX::OrderID( genOrderID() ),
        FIX::ExecID( genExecID() ),
        FIX::ExecTransType( FIX::ExecTransType_NEW ),
        FIX::ExecType( FIX::OrdStatus_FILLED ),
        FIX::OrdStatus( FIX::OrdStatus_FILLED ),
        symbol,
        side,
        orderQty,
        FIX::LastShares( orderQty ),
        FIX::LastPx( price ),
        FIX::LeavesQty( 0 ),
        FIX::CumQty( orderQty ),
        FIX::AvgPx( price ) );

  executionReport.set( clOrdID );

  try
  {
    FIX::Session::sendToTarget( executionReport, sessionID );
  }
  catch ( FIX::SessionNotFound& ) {}
}

void Application::onMessage( const FIX42::NewOrderSingle& message,
                             const FIX::SessionID& sessionID )
{
  FIX::Symbol symbol;
  FIX::Side side;
  FIX::OrdType ordType;
  FIX::OrderQty orderQty;
  FIX::Price price;
  FIX::ClOrdID clOrdID;

  message.get( ordType );

  if ( ordType != FIX::OrdType_LIMIT )
    throw FIX::IncorrectTagValue( ordType.getField() );

  message.get( symbol );
  message.get( side );
  message.get( orderQty );
  message.get( price );
  message.get( clOrdID );

  FIX42::ExecutionReport executionReport = FIX42::ExecutionReport
      ( FIX::OrderID( genOrderID() ),
        FIX::ExecID( genExecID() ),
        FIX::ExecTransType( FIX::ExecTransType_NEW ),
        FIX::ExecType( FIX::OrdStatus_FILLED ),
        FIX::OrdStatus( FIX::OrdStatus_FILLED ),
        symbol,
        side,
        FIX::LeavesQty( 0 ),
        FIX::CumQty( orderQty ),
        FIX::AvgPx( price ) );

  executionReport.set( clOrdID );
  executionReport.set( orderQty );
  executionReport.set( FIX::LastShares( orderQty ) );
  executionReport.set( FIX::LastPx( price ) );

  try
  {
    FIX::Session::sendToTarget( executionReport, sessionID );
  }
  catch ( FIX::SessionNotFound& ) {}
}

void Application::onMessage( const FIX43::NewOrderSingle& message,
                             const FIX::SessionID& sessionID )
{
  FIX::Symbol symbol;
  FIX::Side side;
  FIX::OrdType ordType;
  FIX::OrderQty orderQty;
  FIX::Price price;
  FIX::ClOrdID clOrdID;

  message.get( ordType );

  if ( ordType != FIX::OrdType_LIMIT )
    throw FIX::IncorrectTagValue( ordType.getField() );

  message.get( symbol );
  message.get( side );
  message.get( orderQty );
  message.get( price );
  message.get( clOrdID );

  FIX43::ExecutionReport executionReport = FIX43::ExecutionReport
      ( FIX::OrderID( genOrderID() ),
        FIX::ExecID( genExecID() ),
        FIX::ExecType( FIX::OrdStatus_FILLED ),
        FIX::OrdStatus( FIX::OrdStatus_FILLED ),
        side,
        FIX::LeavesQty( 0 ),
        FIX::CumQty( orderQty ),
        FIX::AvgPx( price ) );

  executionReport.set( clOrdID );
  executionReport.set( symbol );
  executionReport.set( orderQty );
  executionReport.set( FIX::LastQty( orderQty ) );
  executionReport.set( FIX::LastPx( price ) );

  try
  {
    FIX::Session::sendToTarget( executionReport, sessionID );
  }
  catch ( FIX::SessionNotFound& ) {}
}

