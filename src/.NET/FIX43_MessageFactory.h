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

#include "Message.h"
#include "MessageFactory.h"

namespace Fix43
{

  public __gc class MessageFactory : public Fix::MessageFactory
  {
  public:
    Fix::Message* create( String* beginString, String* msgType ) {
    
     if(msgType->Equals("0")) {
       return new Fix43::Heartbeat();
     }
   
     if(msgType->Equals("A")) {
       return new Fix43::Logon();
     }
   
     if(msgType->Equals("1")) {
       return new Fix43::TestRequest();
     }
   
     if(msgType->Equals("2")) {
       return new Fix43::ResendRequest();
     }
   
     if(msgType->Equals("3")) {
       return new Fix43::Reject();
     }
   
     if(msgType->Equals("4")) {
       return new Fix43::SequenceReset();
     }
   
     if(msgType->Equals("5")) {
       return new Fix43::Logout();
     }
   
     if(msgType->Equals("j")) {
       return new Fix43::BusinessMessageReject();
     }
   
     if(msgType->Equals("7")) {
       return new Fix43::Advertisement();
     }
   
     if(msgType->Equals("6")) {
       return new Fix43::IndicationOfInterest();
     }
   
     if(msgType->Equals("B")) {
       return new Fix43::News();
     }
   
     if(msgType->Equals("C")) {
       return new Fix43::Email();
     }
   
     if(msgType->Equals("R")) {
       return new Fix43::QuoteRequest();
     }
   
     if(msgType->Equals("AG")) {
       return new Fix43::QuoteRequestReject();
     }
   
     if(msgType->Equals("AH")) {
       return new Fix43::RFQRequest();
     }
   
     if(msgType->Equals("S")) {
       return new Fix43::Quote();
     }
   
     if(msgType->Equals("Z")) {
       return new Fix43::QuoteCancel();
     }
   
     if(msgType->Equals("a")) {
       return new Fix43::QuoteStatusRequest();
     }
   
     if(msgType->Equals("AI")) {
       return new Fix43::QuoteStatusReport();
     }
   
     if(msgType->Equals("i")) {
       return new Fix43::MassQuote();
     }
   
     if(msgType->Equals("b")) {
       return new Fix43::MassQuoteAcknowledgement();
     }
   
     if(msgType->Equals("V")) {
       return new Fix43::MarketDataRequest();
     }
   
     if(msgType->Equals("W")) {
       return new Fix43::MarketDataSnapshotFullRefresh();
     }
   
     if(msgType->Equals("X")) {
       return new Fix43::MarketDataIncrementalRefresh();
     }
   
     if(msgType->Equals("Y")) {
       return new Fix43::MarketDataRequestReject();
     }
   
     if(msgType->Equals("c")) {
       return new Fix43::SecurityDefinitionRequest();
     }
   
     if(msgType->Equals("d")) {
       return new Fix43::SecurityDefinition();
     }
   
     if(msgType->Equals("v")) {
       return new Fix43::SecurityTypeRequest();
     }
   
     if(msgType->Equals("w")) {
       return new Fix43::SecurityTypes();
     }
   
     if(msgType->Equals("x")) {
       return new Fix43::SecurityListRequest();
     }
   
     if(msgType->Equals("y")) {
       return new Fix43::SecurityList();
     }
   
     if(msgType->Equals("z")) {
       return new Fix43::DerivativeSecurityListRequest();
     }
   
     if(msgType->Equals("AA")) {
       return new Fix43::DerivativeSecurityList();
     }
   
     if(msgType->Equals("e")) {
       return new Fix43::SecurityStatusRequest();
     }
   
     if(msgType->Equals("f")) {
       return new Fix43::SecurityStatus();
     }
   
     if(msgType->Equals("g")) {
       return new Fix43::TradingSessionStatusRequest();
     }
   
     if(msgType->Equals("h")) {
       return new Fix43::TradingSessionStatus();
     }
   
     if(msgType->Equals("D")) {
       return new Fix43::NewOrderSingle();
     }
   
     if(msgType->Equals("8")) {
       return new Fix43::ExecutionReport();
     }
   
     if(msgType->Equals("Q")) {
       return new Fix43::DontKnowTrade();
     }
   
     if(msgType->Equals("G")) {
       return new Fix43::OrderCancelReplaceRequest();
     }
   
     if(msgType->Equals("F")) {
       return new Fix43::OrderCancelRequest();
     }
   
     if(msgType->Equals("9")) {
       return new Fix43::OrderCancelReject();
     }
   
     if(msgType->Equals("H")) {
       return new Fix43::OrderStatusRequest();
     }
   
     if(msgType->Equals("q")) {
       return new Fix43::OrderMassCancelRequest();
     }
   
     if(msgType->Equals("r")) {
       return new Fix43::OrderMassCancelReport();
     }
   
     if(msgType->Equals("AF")) {
       return new Fix43::OrderMassStatusRequest();
     }
   
     if(msgType->Equals("s")) {
       return new Fix43::NewOrderCross();
     }
   
     if(msgType->Equals("t")) {
       return new Fix43::CrossOrderCancelReplaceRequest();
     }
   
     if(msgType->Equals("u")) {
       return new Fix43::CrossOrderCancelRequest();
     }
   
     if(msgType->Equals("AB")) {
       return new Fix43::NewOrderMultileg();
     }
   
     if(msgType->Equals("AC")) {
       return new Fix43::MultilegOrderCancelReplaceRequest();
     }
   
     if(msgType->Equals("k")) {
       return new Fix43::BidRequest();
     }
   
     if(msgType->Equals("l")) {
       return new Fix43::BidResponse();
     }
   
     if(msgType->Equals("E")) {
       return new Fix43::NewOrderList();
     }
   
     if(msgType->Equals("m")) {
       return new Fix43::ListStrikePrice();
     }
   
     if(msgType->Equals("L")) {
       return new Fix43::ListExecute();
     }
   
     if(msgType->Equals("K")) {
       return new Fix43::ListCancelRequest();
     }
   
     if(msgType->Equals("M")) {
       return new Fix43::ListStatusRequest();
     }
   
     if(msgType->Equals("N")) {
       return new Fix43::ListStatus();
     }
   
     if(msgType->Equals("J")) {
       return new Fix43::Allocation();
     }
   
     if(msgType->Equals("P")) {
       return new Fix43::AllocationACK();
     }
   
     if(msgType->Equals("T")) {
       return new Fix43::SettlementInstructions();
     }
   
     if(msgType->Equals("AD")) {
       return new Fix43::TradeCaptureReportRequest();
     }
   
     if(msgType->Equals("AE")) {
       return new Fix43::TradeCaptureReport();
     }
   
     if(msgType->Equals("o")) {
       return new Fix43::RegistrationInstructions();
     }
   
     if(msgType->Equals("p")) {
       return new Fix43::RegistrationInstructionsResponse();
     }
   
    return new Fix43::Message();
    }
  };
}
  