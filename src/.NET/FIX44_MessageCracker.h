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


namespace QuickFix44
{
  public __gc class MessageCracker 
  {
  public:
  virtual ~MessageCracker() {}
  virtual void onMessage( QuickFix::Message*, QuickFix::SessionID* )
    { throw new QuickFix::UnsupportedMessageType(); }
 virtual void onMessage( Advertisement*, QuickFix::SessionID* ) 
    { throw new QuickFix::UnsupportedMessageType(); }
  virtual void onMessage( IndicationOfInterest*, QuickFix::SessionID* ) 
    { throw new QuickFix::UnsupportedMessageType(); }
  virtual void onMessage( News*, QuickFix::SessionID* ) 
    { throw new QuickFix::UnsupportedMessageType(); }
  virtual void onMessage( Email*, QuickFix::SessionID* ) 
    { throw new QuickFix::UnsupportedMessageType(); }
  virtual void onMessage( QuoteRequest*, QuickFix::SessionID* ) 
    { throw new QuickFix::UnsupportedMessageType(); }
  virtual void onMessage( QuoteResponse*, QuickFix::SessionID* ) 
    { throw new QuickFix::UnsupportedMessageType(); }
  virtual void onMessage( QuoteRequestReject*, QuickFix::SessionID* ) 
    { throw new QuickFix::UnsupportedMessageType(); }
  virtual void onMessage( RFQRequest*, QuickFix::SessionID* ) 
    { throw new QuickFix::UnsupportedMessageType(); }
  virtual void onMessage( Quote*, QuickFix::SessionID* ) 
    { throw new QuickFix::UnsupportedMessageType(); }
  virtual void onMessage( QuoteCancel*, QuickFix::SessionID* ) 
    { throw new QuickFix::UnsupportedMessageType(); }
  virtual void onMessage( QuoteStatusRequest*, QuickFix::SessionID* ) 
    { throw new QuickFix::UnsupportedMessageType(); }
  virtual void onMessage( QuoteStatusReport*, QuickFix::SessionID* ) 
    { throw new QuickFix::UnsupportedMessageType(); }
  virtual void onMessage( MassQuote*, QuickFix::SessionID* ) 
    { throw new QuickFix::UnsupportedMessageType(); }
  virtual void onMessage( MassQuoteAcknowledgement*, QuickFix::SessionID* ) 
    { throw new QuickFix::UnsupportedMessageType(); }
  virtual void onMessage( MarketDataRequest*, QuickFix::SessionID* ) 
    { throw new QuickFix::UnsupportedMessageType(); }
  virtual void onMessage( MarketDataSnapshotFullRefresh*, QuickFix::SessionID* ) 
    { throw new QuickFix::UnsupportedMessageType(); }
  virtual void onMessage( MarketDataIncrementalRefresh*, QuickFix::SessionID* ) 
    { throw new QuickFix::UnsupportedMessageType(); }
  virtual void onMessage( MarketDataRequestReject*, QuickFix::SessionID* ) 
    { throw new QuickFix::UnsupportedMessageType(); }
  virtual void onMessage( SecurityDefinitionRequest*, QuickFix::SessionID* ) 
    { throw new QuickFix::UnsupportedMessageType(); }
  virtual void onMessage( SecurityDefinition*, QuickFix::SessionID* ) 
    { throw new QuickFix::UnsupportedMessageType(); }
  virtual void onMessage( SecurityTypeRequest*, QuickFix::SessionID* ) 
    { throw new QuickFix::UnsupportedMessageType(); }
  virtual void onMessage( SecurityTypes*, QuickFix::SessionID* ) 
    { throw new QuickFix::UnsupportedMessageType(); }
  virtual void onMessage( SecurityListRequest*, QuickFix::SessionID* ) 
    { throw new QuickFix::UnsupportedMessageType(); }
  virtual void onMessage( SecurityList*, QuickFix::SessionID* ) 
    { throw new QuickFix::UnsupportedMessageType(); }
  virtual void onMessage( DerivativeSecurityListRequest*, QuickFix::SessionID* ) 
    { throw new QuickFix::UnsupportedMessageType(); }
  virtual void onMessage( DerivativeSecurityList*, QuickFix::SessionID* ) 
    { throw new QuickFix::UnsupportedMessageType(); }
  virtual void onMessage( SecurityStatusRequest*, QuickFix::SessionID* ) 
    { throw new QuickFix::UnsupportedMessageType(); }
  virtual void onMessage( SecurityStatus*, QuickFix::SessionID* ) 
    { throw new QuickFix::UnsupportedMessageType(); }
  virtual void onMessage( TradingSessionStatusRequest*, QuickFix::SessionID* ) 
    { throw new QuickFix::UnsupportedMessageType(); }
  virtual void onMessage( TradingSessionStatus*, QuickFix::SessionID* ) 
    { throw new QuickFix::UnsupportedMessageType(); }
  virtual void onMessage( NewOrderSingle*, QuickFix::SessionID* ) 
    { throw new QuickFix::UnsupportedMessageType(); }
  virtual void onMessage( ExecutionReport*, QuickFix::SessionID* ) 
    { throw new QuickFix::UnsupportedMessageType(); }
  virtual void onMessage( DontKnowTrade*, QuickFix::SessionID* ) 
    { throw new QuickFix::UnsupportedMessageType(); }
  virtual void onMessage( OrderCancelReplaceRequest*, QuickFix::SessionID* ) 
    { throw new QuickFix::UnsupportedMessageType(); }
  virtual void onMessage( OrderCancelRequest*, QuickFix::SessionID* ) 
    { throw new QuickFix::UnsupportedMessageType(); }
  virtual void onMessage( OrderCancelReject*, QuickFix::SessionID* ) 
    { throw new QuickFix::UnsupportedMessageType(); }
  virtual void onMessage( OrderStatusRequest*, QuickFix::SessionID* ) 
    { throw new QuickFix::UnsupportedMessageType(); }
  virtual void onMessage( OrderMassCancelRequest*, QuickFix::SessionID* ) 
    { throw new QuickFix::UnsupportedMessageType(); }
  virtual void onMessage( OrderMassCancelReport*, QuickFix::SessionID* ) 
    { throw new QuickFix::UnsupportedMessageType(); }
  virtual void onMessage( OrderMassStatusRequest*, QuickFix::SessionID* ) 
    { throw new QuickFix::UnsupportedMessageType(); }
  virtual void onMessage( NewOrderCross*, QuickFix::SessionID* ) 
    { throw new QuickFix::UnsupportedMessageType(); }
  virtual void onMessage( CrossOrderCancelReplaceRequest*, QuickFix::SessionID* ) 
    { throw new QuickFix::UnsupportedMessageType(); }
  virtual void onMessage( CrossOrderCancelRequest*, QuickFix::SessionID* ) 
    { throw new QuickFix::UnsupportedMessageType(); }
  virtual void onMessage( NewOrderMultileg*, QuickFix::SessionID* ) 
    { throw new QuickFix::UnsupportedMessageType(); }
  virtual void onMessage( MultilegOrderCancelReplaceRequest*, QuickFix::SessionID* ) 
    { throw new QuickFix::UnsupportedMessageType(); }
  virtual void onMessage( BidRequest*, QuickFix::SessionID* ) 
    { throw new QuickFix::UnsupportedMessageType(); }
  virtual void onMessage( BidResponse*, QuickFix::SessionID* ) 
    { throw new QuickFix::UnsupportedMessageType(); }
  virtual void onMessage( NewOrderList*, QuickFix::SessionID* ) 
    { throw new QuickFix::UnsupportedMessageType(); }
  virtual void onMessage( ListStrikePrice*, QuickFix::SessionID* ) 
    { throw new QuickFix::UnsupportedMessageType(); }
  virtual void onMessage( ListStatus*, QuickFix::SessionID* ) 
    { throw new QuickFix::UnsupportedMessageType(); }
  virtual void onMessage( ListExecute*, QuickFix::SessionID* ) 
    { throw new QuickFix::UnsupportedMessageType(); }
  virtual void onMessage( ListCancelRequest*, QuickFix::SessionID* ) 
    { throw new QuickFix::UnsupportedMessageType(); }
  virtual void onMessage( ListStatusRequest*, QuickFix::SessionID* ) 
    { throw new QuickFix::UnsupportedMessageType(); }
  virtual void onMessage( AllocationInstruction*, QuickFix::SessionID* ) 
    { throw new QuickFix::UnsupportedMessageType(); }
  virtual void onMessage( AllocationInstructionAck*, QuickFix::SessionID* ) 
    { throw new QuickFix::UnsupportedMessageType(); }
  virtual void onMessage( AllocationReport*, QuickFix::SessionID* ) 
    { throw new QuickFix::UnsupportedMessageType(); }
  virtual void onMessage( AllocationReportAck*, QuickFix::SessionID* ) 
    { throw new QuickFix::UnsupportedMessageType(); }
  virtual void onMessage( Confirmation*, QuickFix::SessionID* ) 
    { throw new QuickFix::UnsupportedMessageType(); }
  virtual void onMessage( ConfirmationAck*, QuickFix::SessionID* ) 
    { throw new QuickFix::UnsupportedMessageType(); }
  virtual void onMessage( ConfirmationRequest*, QuickFix::SessionID* ) 
    { throw new QuickFix::UnsupportedMessageType(); }
  virtual void onMessage( SettlementInstructions*, QuickFix::SessionID* ) 
    { throw new QuickFix::UnsupportedMessageType(); }
  virtual void onMessage( SettlementInstructionRequest*, QuickFix::SessionID* ) 
    { throw new QuickFix::UnsupportedMessageType(); }
  virtual void onMessage( TradeCaptureReportRequest*, QuickFix::SessionID* ) 
    { throw new QuickFix::UnsupportedMessageType(); }
  virtual void onMessage( TradeCaptureReportRequestAck*, QuickFix::SessionID* ) 
    { throw new QuickFix::UnsupportedMessageType(); }
  virtual void onMessage( TradeCaptureReport*, QuickFix::SessionID* ) 
    { throw new QuickFix::UnsupportedMessageType(); }
  virtual void onMessage( TradeCaptureReportAck*, QuickFix::SessionID* ) 
    { throw new QuickFix::UnsupportedMessageType(); }
  virtual void onMessage( RegistrationInstructions*, QuickFix::SessionID* ) 
    { throw new QuickFix::UnsupportedMessageType(); }
  virtual void onMessage( RegistrationInstructionsResponse*, QuickFix::SessionID* ) 
    { throw new QuickFix::UnsupportedMessageType(); }
  virtual void onMessage( PositionMaintenanceRequest*, QuickFix::SessionID* ) 
    { throw new QuickFix::UnsupportedMessageType(); }
  virtual void onMessage( PositionMaintenanceReport*, QuickFix::SessionID* ) 
    { throw new QuickFix::UnsupportedMessageType(); }
  virtual void onMessage( RequestForPositions*, QuickFix::SessionID* ) 
    { throw new QuickFix::UnsupportedMessageType(); }
  virtual void onMessage( RequestForPositionsAck*, QuickFix::SessionID* ) 
    { throw new QuickFix::UnsupportedMessageType(); }
  virtual void onMessage( PositionReport*, QuickFix::SessionID* ) 
    { throw new QuickFix::UnsupportedMessageType(); }
  virtual void onMessage( AssignmentReport*, QuickFix::SessionID* ) 
    { throw new QuickFix::UnsupportedMessageType(); }
  virtual void onMessage( CollateralRequest*, QuickFix::SessionID* ) 
    { throw new QuickFix::UnsupportedMessageType(); }
  virtual void onMessage( CollateralAssignment*, QuickFix::SessionID* ) 
    { throw new QuickFix::UnsupportedMessageType(); }
  virtual void onMessage( CollateralResponse*, QuickFix::SessionID* ) 
    { throw new QuickFix::UnsupportedMessageType(); }
  virtual void onMessage( CollateralReport*, QuickFix::SessionID* ) 
    { throw new QuickFix::UnsupportedMessageType(); }
  virtual void onMessage( CollateralInquiry*, QuickFix::SessionID* ) 
    { throw new QuickFix::UnsupportedMessageType(); }
  virtual void onMessage( CollateralInquiryAck*, QuickFix::SessionID* ) 
    { throw new QuickFix::UnsupportedMessageType(); }
 
public:
  void crack( QuickFix::Message* message, 
              QuickFix::SessionID* sessionID )
  {
    QuickFix::MsgType* msgType = new QuickFix::MsgType();
    message->getHeader()->getField(msgType);
    std::string msgTypeValue = QuickFix::convertString(msgType->getValue());

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
    if( msgTypeValue == "AJ" )
      onMessage( dynamic_cast<QuoteResponse*>(message), sessionID );
    else
    if( msgTypeValue == "AG" )
      onMessage( dynamic_cast<QuoteRequestReject*>(message), sessionID );
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
    if( msgTypeValue == "N" )
      onMessage( dynamic_cast<ListStatus*>(message), sessionID );
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
    if( msgTypeValue == "J" )
      onMessage( dynamic_cast<AllocationInstruction*>(message), sessionID );
    else
    if( msgTypeValue == "P" )
      onMessage( dynamic_cast<AllocationInstructionAck*>(message), sessionID );
    else
    if( msgTypeValue == "AS" )
      onMessage( dynamic_cast<AllocationReport*>(message), sessionID );
    else
    if( msgTypeValue == "AS" )
      onMessage( dynamic_cast<AllocationReportAck*>(message), sessionID );
    else
    if( msgTypeValue == "AK" )
      onMessage( dynamic_cast<Confirmation*>(message), sessionID );
    else
    if( msgTypeValue == "AU" )
      onMessage( dynamic_cast<ConfirmationAck*>(message), sessionID );
    else
    if( msgTypeValue == "BS" )
      onMessage( dynamic_cast<ConfirmationRequest*>(message), sessionID );
    else
    if( msgTypeValue == "T" )
      onMessage( dynamic_cast<SettlementInstructions*>(message), sessionID );
    else
    if( msgTypeValue == "AV" )
      onMessage( dynamic_cast<SettlementInstructionRequest*>(message), sessionID );
    else
    if( msgTypeValue == "AD" )
      onMessage( dynamic_cast<TradeCaptureReportRequest*>(message), sessionID );
    else
    if( msgTypeValue == "AQ" )
      onMessage( dynamic_cast<TradeCaptureReportRequestAck*>(message), sessionID );
    else
    if( msgTypeValue == "AE" )
      onMessage( dynamic_cast<TradeCaptureReport*>(message), sessionID );
    else
    if( msgTypeValue == "AR" )
      onMessage( dynamic_cast<TradeCaptureReportAck*>(message), sessionID );
    else
    if( msgTypeValue == "o" )
      onMessage( dynamic_cast<RegistrationInstructions*>(message), sessionID );
    else
    if( msgTypeValue == "p" )
      onMessage( dynamic_cast<RegistrationInstructionsResponse*>(message), sessionID );
    else
    if( msgTypeValue == "AL" )
      onMessage( dynamic_cast<PositionMaintenanceRequest*>(message), sessionID );
    else
    if( msgTypeValue == "AM" )
      onMessage( dynamic_cast<PositionMaintenanceReport*>(message), sessionID );
    else
    if( msgTypeValue == "AN" )
      onMessage( dynamic_cast<RequestForPositions*>(message), sessionID );
    else
    if( msgTypeValue == "AO" )
      onMessage( dynamic_cast<RequestForPositionsAck*>(message), sessionID );
    else
    if( msgTypeValue == "AO" )
      onMessage( dynamic_cast<PositionReport*>(message), sessionID );
    else
    if( msgTypeValue == "AW" )
      onMessage( dynamic_cast<AssignmentReport*>(message), sessionID );
    else
    if( msgTypeValue == "AX" )
      onMessage( dynamic_cast<CollateralRequest*>(message), sessionID );
    else
    if( msgTypeValue == "AY" )
      onMessage( dynamic_cast<CollateralAssignment*>(message), sessionID );
    else
    if( msgTypeValue == "AZ" )
      onMessage( dynamic_cast<CollateralResponse*>(message), sessionID );
    else
    if( msgTypeValue == "BA" )
      onMessage( dynamic_cast<CollateralReport*>(message), sessionID );
    else
    if( msgTypeValue == "BB" )
      onMessage( dynamic_cast<CollateralInquiry*>(message), sessionID );
    else
    if( msgTypeValue == "BB" )
      onMessage( dynamic_cast<CollateralInquiryAck*>(message), sessionID );
    else onMessage( message, sessionID );    
  }

  };
}

