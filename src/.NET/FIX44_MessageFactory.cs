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

using System;

namespace QuickFix44
{

  public class MessageFactory : QuickFix.MessageFactory
  {
    public QuickFix.Message create( String beginString, String msgType ) {
    
     if(msgType.Equals("0")) {
       return new QuickFix44.Heartbeat();
     }
   
     if(msgType.Equals("A")) {
       return new QuickFix44.Logon();
     }
   
     if(msgType.Equals("1")) {
       return new QuickFix44.TestRequest();
     }
   
     if(msgType.Equals("2")) {
       return new QuickFix44.ResendRequest();
     }
   
     if(msgType.Equals("3")) {
       return new QuickFix44.Reject();
     }
   
     if(msgType.Equals("4")) {
       return new QuickFix44.SequenceReset();
     }
   
     if(msgType.Equals("5")) {
       return new QuickFix44.Logout();
     }
   
     if(msgType.Equals("j")) {
       return new QuickFix44.BusinessMessageReject();
     }
   
     if(msgType.Equals("7")) {
       return new QuickFix44.Advertisement();
     }
   
     if(msgType.Equals("6")) {
       return new QuickFix44.IndicationOfInterest();
     }
   
     if(msgType.Equals("B")) {
       return new QuickFix44.News();
     }
   
     if(msgType.Equals("C")) {
       return new QuickFix44.Email();
     }
   
     if(msgType.Equals("R")) {
       return new QuickFix44.QuoteRequest();
     }
   
     if(msgType.Equals("AJ")) {
       return new QuickFix44.QuoteResponse();
     }
   
     if(msgType.Equals("AG")) {
       return new QuickFix44.QuoteRequestReject();
     }
   
     if(msgType.Equals("AH")) {
       return new QuickFix44.RFQRequest();
     }
   
     if(msgType.Equals("S")) {
       return new QuickFix44.Quote();
     }
   
     if(msgType.Equals("Z")) {
       return new QuickFix44.QuoteCancel();
     }
   
     if(msgType.Equals("a")) {
       return new QuickFix44.QuoteStatusRequest();
     }
   
     if(msgType.Equals("AI")) {
       return new QuickFix44.QuoteStatusReport();
     }
   
     if(msgType.Equals("i")) {
       return new QuickFix44.MassQuote();
     }
   
     if(msgType.Equals("b")) {
       return new QuickFix44.MassQuoteAcknowledgement();
     }
   
     if(msgType.Equals("V")) {
       return new QuickFix44.MarketDataRequest();
     }
   
     if(msgType.Equals("W")) {
       return new QuickFix44.MarketDataSnapshotFullRefresh();
     }
   
     if(msgType.Equals("X")) {
       return new QuickFix44.MarketDataIncrementalRefresh();
     }
   
     if(msgType.Equals("Y")) {
       return new QuickFix44.MarketDataRequestReject();
     }
   
     if(msgType.Equals("c")) {
       return new QuickFix44.SecurityDefinitionRequest();
     }
   
     if(msgType.Equals("d")) {
       return new QuickFix44.SecurityDefinition();
     }
   
     if(msgType.Equals("v")) {
       return new QuickFix44.SecurityTypeRequest();
     }
   
     if(msgType.Equals("w")) {
       return new QuickFix44.SecurityTypes();
     }
   
     if(msgType.Equals("x")) {
       return new QuickFix44.SecurityListRequest();
     }
   
     if(msgType.Equals("y")) {
       return new QuickFix44.SecurityList();
     }
   
     if(msgType.Equals("z")) {
       return new QuickFix44.DerivativeSecurityListRequest();
     }
   
     if(msgType.Equals("AA")) {
       return new QuickFix44.DerivativeSecurityList();
     }
   
     if(msgType.Equals("e")) {
       return new QuickFix44.SecurityStatusRequest();
     }
   
     if(msgType.Equals("f")) {
       return new QuickFix44.SecurityStatus();
     }
   
     if(msgType.Equals("g")) {
       return new QuickFix44.TradingSessionStatusRequest();
     }
   
     if(msgType.Equals("h")) {
       return new QuickFix44.TradingSessionStatus();
     }
   
     if(msgType.Equals("D")) {
       return new QuickFix44.NewOrderSingle();
     }
   
     if(msgType.Equals("8")) {
       return new QuickFix44.ExecutionReport();
     }
   
     if(msgType.Equals("Q")) {
       return new QuickFix44.DontKnowTrade();
     }
   
     if(msgType.Equals("G")) {
       return new QuickFix44.OrderCancelReplaceRequest();
     }
   
     if(msgType.Equals("F")) {
       return new QuickFix44.OrderCancelRequest();
     }
   
     if(msgType.Equals("9")) {
       return new QuickFix44.OrderCancelReject();
     }
   
     if(msgType.Equals("H")) {
       return new QuickFix44.OrderStatusRequest();
     }
   
     if(msgType.Equals("q")) {
       return new QuickFix44.OrderMassCancelRequest();
     }
   
     if(msgType.Equals("r")) {
       return new QuickFix44.OrderMassCancelReport();
     }
   
     if(msgType.Equals("AF")) {
       return new QuickFix44.OrderMassStatusRequest();
     }
   
     if(msgType.Equals("s")) {
       return new QuickFix44.NewOrderCross();
     }
   
     if(msgType.Equals("t")) {
       return new QuickFix44.CrossOrderCancelReplaceRequest();
     }
   
     if(msgType.Equals("u")) {
       return new QuickFix44.CrossOrderCancelRequest();
     }
   
     if(msgType.Equals("AB")) {
       return new QuickFix44.NewOrderMultileg();
     }
   
     if(msgType.Equals("AC")) {
       return new QuickFix44.MultilegOrderCancelReplaceRequest();
     }
   
     if(msgType.Equals("k")) {
       return new QuickFix44.BidRequest();
     }
   
     if(msgType.Equals("l")) {
       return new QuickFix44.BidResponse();
     }
   
     if(msgType.Equals("E")) {
       return new QuickFix44.NewOrderList();
     }
   
     if(msgType.Equals("m")) {
       return new QuickFix44.ListStrikePrice();
     }
   
     if(msgType.Equals("N")) {
       return new QuickFix44.ListStatus();
     }
   
     if(msgType.Equals("L")) {
       return new QuickFix44.ListExecute();
     }
   
     if(msgType.Equals("K")) {
       return new QuickFix44.ListCancelRequest();
     }
   
     if(msgType.Equals("M")) {
       return new QuickFix44.ListStatusRequest();
     }
   
     if(msgType.Equals("J")) {
       return new QuickFix44.AllocationInstruction();
     }
   
     if(msgType.Equals("P")) {
       return new QuickFix44.AllocationInstructionAck();
     }
   
     if(msgType.Equals("AS")) {
       return new QuickFix44.AllocationReport();
     }
   
     if(msgType.Equals("AS")) {
       return new QuickFix44.AllocationReportAck();
     }
   
     if(msgType.Equals("AK")) {
       return new QuickFix44.Confirmation();
     }
   
     if(msgType.Equals("AU")) {
       return new QuickFix44.ConfirmationAck();
     }
   
     if(msgType.Equals("BS")) {
       return new QuickFix44.ConfirmationRequest();
     }
   
     if(msgType.Equals("T")) {
       return new QuickFix44.SettlementInstructions();
     }
   
     if(msgType.Equals("AV")) {
       return new QuickFix44.SettlementInstructionRequest();
     }
   
     if(msgType.Equals("AD")) {
       return new QuickFix44.TradeCaptureReportRequest();
     }
   
     if(msgType.Equals("AQ")) {
       return new QuickFix44.TradeCaptureReportRequestAck();
     }
   
     if(msgType.Equals("AE")) {
       return new QuickFix44.TradeCaptureReport();
     }
   
     if(msgType.Equals("AR")) {
       return new QuickFix44.TradeCaptureReportAck();
     }
   
     if(msgType.Equals("o")) {
       return new QuickFix44.RegistrationInstructions();
     }
   
     if(msgType.Equals("p")) {
       return new QuickFix44.RegistrationInstructionsResponse();
     }
   
     if(msgType.Equals("AL")) {
       return new QuickFix44.PositionMaintenanceRequest();
     }
   
     if(msgType.Equals("AM")) {
       return new QuickFix44.PositionMaintenanceReport();
     }
   
     if(msgType.Equals("AN")) {
       return new QuickFix44.RequestForPositions();
     }
   
     if(msgType.Equals("AO")) {
       return new QuickFix44.RequestForPositionsAck();
     }
   
     if(msgType.Equals("AO")) {
       return new QuickFix44.PositionReport();
     }
   
     if(msgType.Equals("AW")) {
       return new QuickFix44.AssignmentReport();
     }
   
     if(msgType.Equals("AX")) {
       return new QuickFix44.CollateralRequest();
     }
   
     if(msgType.Equals("AY")) {
       return new QuickFix44.CollateralAssignment();
     }
   
     if(msgType.Equals("AZ")) {
       return new QuickFix44.CollateralResponse();
     }
   
     if(msgType.Equals("BA")) {
       return new QuickFix44.CollateralReport();
     }
   
     if(msgType.Equals("BB")) {
       return new QuickFix44.CollateralInquiry();
     }
   
     if(msgType.Equals("BB")) {
       return new QuickFix44.CollateralInquiryAck();
     }
   
    return new QuickFix44.Message();
    }
  };
}
  