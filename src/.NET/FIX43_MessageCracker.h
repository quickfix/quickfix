/* -*- C++ -*- */
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

#pragma once

#include "quickfix_net.h"
#include "Messages.h"
#include "SessionID.h"
#include "Exceptions.h"
#include "FIX42_MessageCracker.h"

namespace Fix43
{
  public __gc class MessageCracker : public Fix42::MessageCracker
  {
  public:
  virtual ~MessageCracker() {}
  virtual void onMessage( Fix::Message*, Fix::SessionID* )
    { throw new Fix::UnsupportedMessageType(); }
 virtual void onMessage( Advertisement*, Fix::SessionID* ) 
    { throw new Fix::UnsupportedMessageType(); }
  virtual void onMessage( IndicationOfInterest*, Fix::SessionID* ) 
    { throw new Fix::UnsupportedMessageType(); }
  virtual void onMessage( News*, Fix::SessionID* ) 
    { throw new Fix::UnsupportedMessageType(); }
  virtual void onMessage( Email*, Fix::SessionID* ) 
    { throw new Fix::UnsupportedMessageType(); }
  virtual void onMessage( QuoteRequest*, Fix::SessionID* ) 
    { throw new Fix::UnsupportedMessageType(); }
  virtual void onMessage( RFQRequest*, Fix::SessionID* ) 
    { throw new Fix::UnsupportedMessageType(); }
  virtual void onMessage( Quote*, Fix::SessionID* ) 
    { throw new Fix::UnsupportedMessageType(); }
  virtual void onMessage( QuoteCancel*, Fix::SessionID* ) 
    { throw new Fix::UnsupportedMessageType(); }
  virtual void onMessage( QuoteStatusRequest*, Fix::SessionID* ) 
    { throw new Fix::UnsupportedMessageType(); }
  virtual void onMessage( QuoteStatusReport*, Fix::SessionID* ) 
    { throw new Fix::UnsupportedMessageType(); }
  virtual void onMessage( MassQuote*, Fix::SessionID* ) 
    { throw new Fix::UnsupportedMessageType(); }
  virtual void onMessage( MassQuoteAcknowledgement*, Fix::SessionID* ) 
    { throw new Fix::UnsupportedMessageType(); }
  virtual void onMessage( MarketDataRequest*, Fix::SessionID* ) 
    { throw new Fix::UnsupportedMessageType(); }
  virtual void onMessage( MarketDataSnapshotFullRefresh*, Fix::SessionID* ) 
    { throw new Fix::UnsupportedMessageType(); }
  virtual void onMessage( MarketDataIncrementalRefresh*, Fix::SessionID* ) 
    { throw new Fix::UnsupportedMessageType(); }
  virtual void onMessage( MarketDataRequestReject*, Fix::SessionID* ) 
    { throw new Fix::UnsupportedMessageType(); }
  virtual void onMessage( SecurityDefinitionRequest*, Fix::SessionID* ) 
    { throw new Fix::UnsupportedMessageType(); }
  virtual void onMessage( SecurityDefinition*, Fix::SessionID* ) 
    { throw new Fix::UnsupportedMessageType(); }
  virtual void onMessage( SecurityTypeRequest*, Fix::SessionID* ) 
    { throw new Fix::UnsupportedMessageType(); }
  virtual void onMessage( SecurityTypes*, Fix::SessionID* ) 
    { throw new Fix::UnsupportedMessageType(); }
  virtual void onMessage( SecurityListRequest*, Fix::SessionID* ) 
    { throw new Fix::UnsupportedMessageType(); }
  virtual void onMessage( SecurityList*, Fix::SessionID* ) 
    { throw new Fix::UnsupportedMessageType(); }
  virtual void onMessage( DerivativeSecurityListRequest*, Fix::SessionID* ) 
    { throw new Fix::UnsupportedMessageType(); }
  virtual void onMessage( DerivativeSecurityList*, Fix::SessionID* ) 
    { throw new Fix::UnsupportedMessageType(); }
  virtual void onMessage( SecurityStatusRequest*, Fix::SessionID* ) 
    { throw new Fix::UnsupportedMessageType(); }
  virtual void onMessage( SecurityStatus*, Fix::SessionID* ) 
    { throw new Fix::UnsupportedMessageType(); }
  virtual void onMessage( TradingSessionStatusRequest*, Fix::SessionID* ) 
    { throw new Fix::UnsupportedMessageType(); }
  virtual void onMessage( TradingSessionStatus*, Fix::SessionID* ) 
    { throw new Fix::UnsupportedMessageType(); }
  virtual void onMessage( NewOrderSingle*, Fix::SessionID* ) 
    { throw new Fix::UnsupportedMessageType(); }
  virtual void onMessage( ExecutionReport*, Fix::SessionID* ) 
    { throw new Fix::UnsupportedMessageType(); }
  virtual void onMessage( DontKnowTrade*, Fix::SessionID* ) 
    { throw new Fix::UnsupportedMessageType(); }
  virtual void onMessage( OrderCancelReplaceRequest*, Fix::SessionID* ) 
    { throw new Fix::UnsupportedMessageType(); }
  virtual void onMessage( OrderCancelRequest*, Fix::SessionID* ) 
    { throw new Fix::UnsupportedMessageType(); }
  virtual void onMessage( OrderCancelReject*, Fix::SessionID* ) 
    { throw new Fix::UnsupportedMessageType(); }
  virtual void onMessage( OrderStatusRequest*, Fix::SessionID* ) 
    { throw new Fix::UnsupportedMessageType(); }
  virtual void onMessage( OrderMassCancelRequest*, Fix::SessionID* ) 
    { throw new Fix::UnsupportedMessageType(); }
  virtual void onMessage( OrderMassCancelReport*, Fix::SessionID* ) 
    { throw new Fix::UnsupportedMessageType(); }
  virtual void onMessage( OrderMassStatusRequest*, Fix::SessionID* ) 
    { throw new Fix::UnsupportedMessageType(); }
  virtual void onMessage( NewOrderCross*, Fix::SessionID* ) 
    { throw new Fix::UnsupportedMessageType(); }
  virtual void onMessage( CrossOrderCancelReplaceRequest*, Fix::SessionID* ) 
    { throw new Fix::UnsupportedMessageType(); }
  virtual void onMessage( CrossOrderCancelRequest*, Fix::SessionID* ) 
    { throw new Fix::UnsupportedMessageType(); }
  virtual void onMessage( NewOrderMultileg*, Fix::SessionID* ) 
    { throw new Fix::UnsupportedMessageType(); }
  virtual void onMessage( MultilegOrderCancelReplaceRequest*, Fix::SessionID* ) 
    { throw new Fix::UnsupportedMessageType(); }
  virtual void onMessage( BidRequest*, Fix::SessionID* ) 
    { throw new Fix::UnsupportedMessageType(); }
  virtual void onMessage( BidResponse*, Fix::SessionID* ) 
    { throw new Fix::UnsupportedMessageType(); }
  virtual void onMessage( NewOrderList*, Fix::SessionID* ) 
    { throw new Fix::UnsupportedMessageType(); }
  virtual void onMessage( ListStrikePrice*, Fix::SessionID* ) 
    { throw new Fix::UnsupportedMessageType(); }
  virtual void onMessage( ListExecute*, Fix::SessionID* ) 
    { throw new Fix::UnsupportedMessageType(); }
  virtual void onMessage( ListCancelRequest*, Fix::SessionID* ) 
    { throw new Fix::UnsupportedMessageType(); }
  virtual void onMessage( ListStatusRequest*, Fix::SessionID* ) 
    { throw new Fix::UnsupportedMessageType(); }
  virtual void onMessage( ListStatus*, Fix::SessionID* ) 
    { throw new Fix::UnsupportedMessageType(); }
  virtual void onMessage( Allocation*, Fix::SessionID* ) 
    { throw new Fix::UnsupportedMessageType(); }
  virtual void onMessage( AllocationACK*, Fix::SessionID* ) 
    { throw new Fix::UnsupportedMessageType(); }
  virtual void onMessage( SettlementInstructions*, Fix::SessionID* ) 
    { throw new Fix::UnsupportedMessageType(); }
  virtual void onMessage( TradeCaptureReportRequest*, Fix::SessionID* ) 
    { throw new Fix::UnsupportedMessageType(); }
  virtual void onMessage( TradeCaptureReport*, Fix::SessionID* ) 
    { throw new Fix::UnsupportedMessageType(); }
  virtual void onMessage( RegistrationInstructions*, Fix::SessionID* ) 
    { throw new Fix::UnsupportedMessageType(); }
  virtual void onMessage( RegistrationInstructionsResponse*, Fix::SessionID* ) 
    { throw new Fix::UnsupportedMessageType(); }
 
public:
  void crack( Fix::Message* message, 
              Fix::SessionID* sessionID )
  {
    Fix::MsgType* msgType = new Fix::MsgType();
    message->getHeader()->getField(msgType);
    std::string msgTypeValue = Fix::convertString(msgType->getValue());

    if( msgTypeValue == "0" )
      onMessage( dynamic_cast<Heartbeat*>(message), sessionID );
    else
    if( msgTypeValue == "A" )
      onMessage( dynamic_cast<Logon*>(message), sessionID );
    else
    if( msgTypeValue == "1" )
      onMessage( dynamic_cast<TestRequest*>(message), sessionID );
    else
    if( msgTypeValue == "2" )
      onMessage( dynamic_cast<ResendRequest*>(message), sessionID );
    else
    if( msgTypeValue == "3" )
      onMessage( dynamic_cast<Reject*>(message), sessionID );
    else
    if( msgTypeValue == "4" )
      onMessage( dynamic_cast<SequenceReset*>(message), sessionID );
    else
    if( msgTypeValue == "5" )
      onMessage( dynamic_cast<Logout*>(message), sessionID );
    else
    if( msgTypeValue == "j" )
      onMessage( dynamic_cast<BusinessMessageReject*>(message), sessionID );
    else
    if( msgTypeValue == "7" )
      onMessage( dynamic_cast<Advertisement*>(message), sessionID );
    else
    if( msgTypeValue == "6" )
      onMessage( dynamic_cast<IndicationOfInterest*>(message), sessionID );
    else
    if( msgTypeValue == "B" )
      onMessage( dynamic_cast<News*>(message), sessionID );
    else
    if( msgTypeValue == "C" )
      onMessage( dynamic_cast<Email*>(message), sessionID );
    else
    if( msgTypeValue == "R" )
      onMessage( dynamic_cast<QuoteRequest*>(message), sessionID );
    else
    if( msgTypeValue == "AH" )
      onMessage( dynamic_cast<RFQRequest*>(message), sessionID );
    else
    if( msgTypeValue == "S" )
      onMessage( dynamic_cast<Quote*>(message), sessionID );
    else
    if( msgTypeValue == "Z" )
      onMessage( dynamic_cast<QuoteCancel*>(message), sessionID );
    else
    if( msgTypeValue == "a" )
      onMessage( dynamic_cast<QuoteStatusRequest*>(message), sessionID );
    else
    if( msgTypeValue == "AI" )
      onMessage( dynamic_cast<QuoteStatusReport*>(message), sessionID );
    else
    if( msgTypeValue == "i" )
      onMessage( dynamic_cast<MassQuote*>(message), sessionID );
    else
    if( msgTypeValue == "b" )
      onMessage( dynamic_cast<MassQuoteAcknowledgement*>(message), sessionID );
    else
    if( msgTypeValue == "V" )
      onMessage( dynamic_cast<MarketDataRequest*>(message), sessionID );
    else
    if( msgTypeValue == "W" )
      onMessage( dynamic_cast<MarketDataSnapshotFullRefresh*>(message), sessionID );
    else
    if( msgTypeValue == "X" )
      onMessage( dynamic_cast<MarketDataIncrementalRefresh*>(message), sessionID );
    else
    if( msgTypeValue == "Y" )
      onMessage( dynamic_cast<MarketDataRequestReject*>(message), sessionID );
    else
    if( msgTypeValue == "c" )
      onMessage( dynamic_cast<SecurityDefinitionRequest*>(message), sessionID );
    else
    if( msgTypeValue == "d" )
      onMessage( dynamic_cast<SecurityDefinition*>(message), sessionID );
    else
    if( msgTypeValue == "v" )
      onMessage( dynamic_cast<SecurityTypeRequest*>(message), sessionID );
    else
    if( msgTypeValue == "w" )
      onMessage( dynamic_cast<SecurityTypes*>(message), sessionID );
    else
    if( msgTypeValue == "x" )
      onMessage( dynamic_cast<SecurityListRequest*>(message), sessionID );
    else
    if( msgTypeValue == "y" )
      onMessage( dynamic_cast<SecurityList*>(message), sessionID );
    else
    if( msgTypeValue == "z" )
      onMessage( dynamic_cast<DerivativeSecurityListRequest*>(message), sessionID );
    else
    if( msgTypeValue == "AA" )
      onMessage( dynamic_cast<DerivativeSecurityList*>(message), sessionID );
    else
    if( msgTypeValue == "e" )
      onMessage( dynamic_cast<SecurityStatusRequest*>(message), sessionID );
    else
    if( msgTypeValue == "f" )
      onMessage( dynamic_cast<SecurityStatus*>(message), sessionID );
    else
    if( msgTypeValue == "g" )
      onMessage( dynamic_cast<TradingSessionStatusRequest*>(message), sessionID );
    else
    if( msgTypeValue == "h" )
      onMessage( dynamic_cast<TradingSessionStatus*>(message), sessionID );
    else
    if( msgTypeValue == "D" )
      onMessage( dynamic_cast<NewOrderSingle*>(message), sessionID );
    else
    if( msgTypeValue == "8" )
      onMessage( dynamic_cast<ExecutionReport*>(message), sessionID );
    else
    if( msgTypeValue == "Q" )
      onMessage( dynamic_cast<DontKnowTrade*>(message), sessionID );
    else
    if( msgTypeValue == "G" )
      onMessage( dynamic_cast<OrderCancelReplaceRequest*>(message), sessionID );
    else
    if( msgTypeValue == "F" )
      onMessage( dynamic_cast<OrderCancelRequest*>(message), sessionID );
    else
    if( msgTypeValue == "9" )
      onMessage( dynamic_cast<OrderCancelReject*>(message), sessionID );
    else
    if( msgTypeValue == "H" )
      onMessage( dynamic_cast<OrderStatusRequest*>(message), sessionID );
    else
    if( msgTypeValue == "q" )
      onMessage( dynamic_cast<OrderMassCancelRequest*>(message), sessionID );
    else
    if( msgTypeValue == "r" )
      onMessage( dynamic_cast<OrderMassCancelReport*>(message), sessionID );
    else
    if( msgTypeValue == "AF" )
      onMessage( dynamic_cast<OrderMassStatusRequest*>(message), sessionID );
    else
    if( msgTypeValue == "s" )
      onMessage( dynamic_cast<NewOrderCross*>(message), sessionID );
    else
    if( msgTypeValue == "t" )
      onMessage( dynamic_cast<CrossOrderCancelReplaceRequest*>(message), sessionID );
    else
    if( msgTypeValue == "u" )
      onMessage( dynamic_cast<CrossOrderCancelRequest*>(message), sessionID );
    else
    if( msgTypeValue == "AB" )
      onMessage( dynamic_cast<NewOrderMultileg*>(message), sessionID );
    else
    if( msgTypeValue == "AC" )
      onMessage( dynamic_cast<MultilegOrderCancelReplaceRequest*>(message), sessionID );
    else
    if( msgTypeValue == "k" )
      onMessage( dynamic_cast<BidRequest*>(message), sessionID );
    else
    if( msgTypeValue == "l" )
      onMessage( dynamic_cast<BidResponse*>(message), sessionID );
    else
    if( msgTypeValue == "E" )
      onMessage( dynamic_cast<NewOrderList*>(message), sessionID );
    else
    if( msgTypeValue == "m" )
      onMessage( dynamic_cast<ListStrikePrice*>(message), sessionID );
    else
    if( msgTypeValue == "L" )
      onMessage( dynamic_cast<ListExecute*>(message), sessionID );
    else
    if( msgTypeValue == "K" )
      onMessage( dynamic_cast<ListCancelRequest*>(message), sessionID );
    else
    if( msgTypeValue == "M" )
      onMessage( dynamic_cast<ListStatusRequest*>(message), sessionID );
    else
    if( msgTypeValue == "N" )
      onMessage( dynamic_cast<ListStatus*>(message), sessionID );
    else
    if( msgTypeValue == "J" )
      onMessage( dynamic_cast<Allocation*>(message), sessionID );
    else
    if( msgTypeValue == "P" )
      onMessage( dynamic_cast<AllocationACK*>(message), sessionID );
    else
    if( msgTypeValue == "T" )
      onMessage( dynamic_cast<SettlementInstructions*>(message), sessionID );
    else
    if( msgTypeValue == "AD" )
      onMessage( dynamic_cast<TradeCaptureReportRequest*>(message), sessionID );
    else
    if( msgTypeValue == "AE" )
      onMessage( dynamic_cast<TradeCaptureReport*>(message), sessionID );
    else
    if( msgTypeValue == "o" )
      onMessage( dynamic_cast<RegistrationInstructions*>(message), sessionID );
    else
    if( msgTypeValue == "p" )
      onMessage( dynamic_cast<RegistrationInstructionsResponse*>(message), sessionID );
    else onMessage( message, sessionID );    
  }

  };
}

