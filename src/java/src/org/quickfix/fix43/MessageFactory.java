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

package org.quickfix.fix43;

import org.quickfix.Message;

public class MessageFactory implements org.quickfix.MessageFactory
{
  public Message create( String beginString, String msgType ) {
  
   if("0".equals(msgType)) {
     return new org.quickfix.fix43.Heartbeat();
   }
 
   if("A".equals(msgType)) {
     return new org.quickfix.fix43.Logon();
   }
 
   if("1".equals(msgType)) {
     return new org.quickfix.fix43.TestRequest();
   }
 
   if("2".equals(msgType)) {
     return new org.quickfix.fix43.ResendRequest();
   }
 
   if("3".equals(msgType)) {
     return new org.quickfix.fix43.Reject();
   }
 
   if("4".equals(msgType)) {
     return new org.quickfix.fix43.SequenceReset();
   }
 
   if("5".equals(msgType)) {
     return new org.quickfix.fix43.Logout();
   }
 
   if("j".equals(msgType)) {
     return new org.quickfix.fix43.BusinessMessageReject();
   }
 
   if("7".equals(msgType)) {
     return new org.quickfix.fix43.Advertisement();
   }
 
   if("6".equals(msgType)) {
     return new org.quickfix.fix43.IndicationOfInterest();
   }
 
   if("B".equals(msgType)) {
     return new org.quickfix.fix43.News();
   }
 
   if("C".equals(msgType)) {
     return new org.quickfix.fix43.Email();
   }
 
   if("R".equals(msgType)) {
     return new org.quickfix.fix43.QuoteRequest();
   }
 
   if("AH".equals(msgType)) {
     return new org.quickfix.fix43.RFQRequest();
   }
 
   if("S".equals(msgType)) {
     return new org.quickfix.fix43.Quote();
   }
 
   if("Z".equals(msgType)) {
     return new org.quickfix.fix43.QuoteCancel();
   }
 
   if("a".equals(msgType)) {
     return new org.quickfix.fix43.QuoteStatusRequest();
   }
 
   if("AI".equals(msgType)) {
     return new org.quickfix.fix43.QuoteStatusReport();
   }
 
   if("i".equals(msgType)) {
     return new org.quickfix.fix43.MassQuote();
   }
 
   if("b".equals(msgType)) {
     return new org.quickfix.fix43.MassQuoteAcknowledgement();
   }
 
   if("V".equals(msgType)) {
     return new org.quickfix.fix43.MarketDataRequest();
   }
 
   if("W".equals(msgType)) {
     return new org.quickfix.fix43.MarketDataSnapshotFullRefresh();
   }
 
   if("X".equals(msgType)) {
     return new org.quickfix.fix43.MarketDataIncrementalRefresh();
   }
 
   if("Y".equals(msgType)) {
     return new org.quickfix.fix43.MarketDataRequestReject();
   }
 
   if("c".equals(msgType)) {
     return new org.quickfix.fix43.SecurityDefinitionRequest();
   }
 
   if("d".equals(msgType)) {
     return new org.quickfix.fix43.SecurityDefinition();
   }
 
   if("v".equals(msgType)) {
     return new org.quickfix.fix43.SecurityTypeRequest();
   }
 
   if("w".equals(msgType)) {
     return new org.quickfix.fix43.SecurityTypes();
   }
 
   if("x".equals(msgType)) {
     return new org.quickfix.fix43.SecurityListRequest();
   }
 
   if("y".equals(msgType)) {
     return new org.quickfix.fix43.SecurityList();
   }
 
   if("z".equals(msgType)) {
     return new org.quickfix.fix43.DerivativeSecurityListRequest();
   }
 
   if("AA".equals(msgType)) {
     return new org.quickfix.fix43.DerivativeSecurityList();
   }
 
   if("e".equals(msgType)) {
     return new org.quickfix.fix43.SecurityStatusRequest();
   }
 
   if("f".equals(msgType)) {
     return new org.quickfix.fix43.SecurityStatus();
   }
 
   if("g".equals(msgType)) {
     return new org.quickfix.fix43.TradingSessionStatusRequest();
   }
 
   if("h".equals(msgType)) {
     return new org.quickfix.fix43.TradingSessionStatus();
   }
 
   if("D".equals(msgType)) {
     return new org.quickfix.fix43.NewOrderSingle();
   }
 
   if("8".equals(msgType)) {
     return new org.quickfix.fix43.ExecutionReport();
   }
 
   if("Q".equals(msgType)) {
     return new org.quickfix.fix43.DontKnowTrade();
   }
 
   if("G".equals(msgType)) {
     return new org.quickfix.fix43.OrderCancelReplaceRequest();
   }
 
   if("F".equals(msgType)) {
     return new org.quickfix.fix43.OrderCancelRequest();
   }
 
   if("9".equals(msgType)) {
     return new org.quickfix.fix43.OrderCancelReject();
   }
 
   if("H".equals(msgType)) {
     return new org.quickfix.fix43.OrderStatusRequest();
   }
 
   if("q".equals(msgType)) {
     return new org.quickfix.fix43.OrderMassCancelRequest();
   }
 
   if("r".equals(msgType)) {
     return new org.quickfix.fix43.OrderMassCancelReport();
   }
 
   if("AF".equals(msgType)) {
     return new org.quickfix.fix43.OrderMassStatusRequest();
   }
 
   if("s".equals(msgType)) {
     return new org.quickfix.fix43.NewOrderCross();
   }
 
   if("t".equals(msgType)) {
     return new org.quickfix.fix43.CrossOrderCancelReplaceRequest();
   }
 
   if("u".equals(msgType)) {
     return new org.quickfix.fix43.CrossOrderCancelRequest();
   }
 
   if("AB".equals(msgType)) {
     return new org.quickfix.fix43.NewOrderMultileg();
   }
 
   if("AC".equals(msgType)) {
     return new org.quickfix.fix43.MultilegOrderCancelReplaceRequest();
   }
 
   if("k".equals(msgType)) {
     return new org.quickfix.fix43.BidRequest();
   }
 
   if("l".equals(msgType)) {
     return new org.quickfix.fix43.BidResponse();
   }
 
   if("E".equals(msgType)) {
     return new org.quickfix.fix43.NewOrderList();
   }
 
   if("m".equals(msgType)) {
     return new org.quickfix.fix43.ListStrikePrice();
   }
 
   if("L".equals(msgType)) {
     return new org.quickfix.fix43.ListExecute();
   }
 
   if("K".equals(msgType)) {
     return new org.quickfix.fix43.ListCancelRequest();
   }
 
   if("M".equals(msgType)) {
     return new org.quickfix.fix43.ListStatusRequest();
   }
 
   if("N".equals(msgType)) {
     return new org.quickfix.fix43.ListStatus();
   }
 
   if("J".equals(msgType)) {
     return new org.quickfix.fix43.Allocation();
   }
 
   if("P".equals(msgType)) {
     return new org.quickfix.fix43.AllocationACK();
   }
 
   if("T".equals(msgType)) {
     return new org.quickfix.fix43.SettlementInstructions();
   }
 
   if("AD".equals(msgType)) {
     return new org.quickfix.fix43.TradeCaptureReportRequest();
   }
 
   if("AE".equals(msgType)) {
     return new org.quickfix.fix43.TradeCaptureReport();
   }
 
   if("o".equals(msgType)) {
     return new org.quickfix.fix43.RegistrationInstructions();
   }
 
   if("p".equals(msgType)) {
     return new org.quickfix.fix43.RegistrationInstructionsResponse();
   }
 
  return new org.quickfix.fix43.Message();
  }
}

