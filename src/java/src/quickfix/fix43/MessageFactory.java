/* -*- C++ -*- */
 
/****************************************************************************
** Copyright (c) 2001-2004 quickfixengine.org  All rights reserved.
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
 
package quickfix.fix43;

import quickfix.Message;

public class MessageFactory implements quickfix.MessageFactory
{
  public Message create( String beginString, String msgType ) {
  
   if("0".equals(msgType)) {
     return new quickfix.fix43.Heartbeat();
   }
 
   if("A".equals(msgType)) {
     return new quickfix.fix43.Logon();
   }
 
   if("1".equals(msgType)) {
     return new quickfix.fix43.TestRequest();
   }
 
   if("2".equals(msgType)) {
     return new quickfix.fix43.ResendRequest();
   }
 
   if("3".equals(msgType)) {
     return new quickfix.fix43.Reject();
   }
 
   if("4".equals(msgType)) {
     return new quickfix.fix43.SequenceReset();
   }
 
   if("5".equals(msgType)) {
     return new quickfix.fix43.Logout();
   }
 
   if("j".equals(msgType)) {
     return new quickfix.fix43.BusinessMessageReject();
   }
 
   if("7".equals(msgType)) {
     return new quickfix.fix43.Advertisement();
   }
 
   if("6".equals(msgType)) {
     return new quickfix.fix43.IndicationOfInterest();
   }
 
   if("B".equals(msgType)) {
     return new quickfix.fix43.News();
   }
 
   if("C".equals(msgType)) {
     return new quickfix.fix43.Email();
   }
 
   if("R".equals(msgType)) {
     return new quickfix.fix43.QuoteRequest();
   }
 
   if("AG".equals(msgType)) {
     return new quickfix.fix43.QuoteRequestReject();
   }
 
   if("AH".equals(msgType)) {
     return new quickfix.fix43.RFQRequest();
   }
 
   if("S".equals(msgType)) {
     return new quickfix.fix43.Quote();
   }
 
   if("Z".equals(msgType)) {
     return new quickfix.fix43.QuoteCancel();
   }
 
   if("a".equals(msgType)) {
     return new quickfix.fix43.QuoteStatusRequest();
   }
 
   if("AI".equals(msgType)) {
     return new quickfix.fix43.QuoteStatusReport();
   }
 
   if("i".equals(msgType)) {
     return new quickfix.fix43.MassQuote();
   }
 
   if("b".equals(msgType)) {
     return new quickfix.fix43.MassQuoteAcknowledgement();
   }
 
   if("V".equals(msgType)) {
     return new quickfix.fix43.MarketDataRequest();
   }
 
   if("W".equals(msgType)) {
     return new quickfix.fix43.MarketDataSnapshotFullRefresh();
   }
 
   if("X".equals(msgType)) {
     return new quickfix.fix43.MarketDataIncrementalRefresh();
   }
 
   if("Y".equals(msgType)) {
     return new quickfix.fix43.MarketDataRequestReject();
   }
 
   if("c".equals(msgType)) {
     return new quickfix.fix43.SecurityDefinitionRequest();
   }
 
   if("d".equals(msgType)) {
     return new quickfix.fix43.SecurityDefinition();
   }
 
   if("v".equals(msgType)) {
     return new quickfix.fix43.SecurityTypeRequest();
   }
 
   if("w".equals(msgType)) {
     return new quickfix.fix43.SecurityTypes();
   }
 
   if("x".equals(msgType)) {
     return new quickfix.fix43.SecurityListRequest();
   }
 
   if("y".equals(msgType)) {
     return new quickfix.fix43.SecurityList();
   }
 
   if("z".equals(msgType)) {
     return new quickfix.fix43.DerivativeSecurityListRequest();
   }
 
   if("AA".equals(msgType)) {
     return new quickfix.fix43.DerivativeSecurityList();
   }
 
   if("e".equals(msgType)) {
     return new quickfix.fix43.SecurityStatusRequest();
   }
 
   if("f".equals(msgType)) {
     return new quickfix.fix43.SecurityStatus();
   }
 
   if("g".equals(msgType)) {
     return new quickfix.fix43.TradingSessionStatusRequest();
   }
 
   if("h".equals(msgType)) {
     return new quickfix.fix43.TradingSessionStatus();
   }
 
   if("D".equals(msgType)) {
     return new quickfix.fix43.NewOrderSingle();
   }
 
   if("8".equals(msgType)) {
     return new quickfix.fix43.ExecutionReport();
   }
 
   if("Q".equals(msgType)) {
     return new quickfix.fix43.DontKnowTrade();
   }
 
   if("G".equals(msgType)) {
     return new quickfix.fix43.OrderCancelReplaceRequest();
   }
 
   if("F".equals(msgType)) {
     return new quickfix.fix43.OrderCancelRequest();
   }
 
   if("9".equals(msgType)) {
     return new quickfix.fix43.OrderCancelReject();
   }
 
   if("H".equals(msgType)) {
     return new quickfix.fix43.OrderStatusRequest();
   }
 
   if("q".equals(msgType)) {
     return new quickfix.fix43.OrderMassCancelRequest();
   }
 
   if("r".equals(msgType)) {
     return new quickfix.fix43.OrderMassCancelReport();
   }
 
   if("AF".equals(msgType)) {
     return new quickfix.fix43.OrderMassStatusRequest();
   }
 
   if("s".equals(msgType)) {
     return new quickfix.fix43.NewOrderCross();
   }
 
   if("t".equals(msgType)) {
     return new quickfix.fix43.CrossOrderCancelReplaceRequest();
   }
 
   if("u".equals(msgType)) {
     return new quickfix.fix43.CrossOrderCancelRequest();
   }
 
   if("AB".equals(msgType)) {
     return new quickfix.fix43.NewOrderMultileg();
   }
 
   if("AC".equals(msgType)) {
     return new quickfix.fix43.MultilegOrderCancelReplaceRequest();
   }
 
   if("k".equals(msgType)) {
     return new quickfix.fix43.BidRequest();
   }
 
   if("l".equals(msgType)) {
     return new quickfix.fix43.BidResponse();
   }
 
   if("E".equals(msgType)) {
     return new quickfix.fix43.NewOrderList();
   }
 
   if("m".equals(msgType)) {
     return new quickfix.fix43.ListStrikePrice();
   }
 
   if("L".equals(msgType)) {
     return new quickfix.fix43.ListExecute();
   }
 
   if("K".equals(msgType)) {
     return new quickfix.fix43.ListCancelRequest();
   }
 
   if("M".equals(msgType)) {
     return new quickfix.fix43.ListStatusRequest();
   }
 
   if("N".equals(msgType)) {
     return new quickfix.fix43.ListStatus();
   }
 
   if("J".equals(msgType)) {
     return new quickfix.fix43.Allocation();
   }
 
   if("P".equals(msgType)) {
     return new quickfix.fix43.AllocationACK();
   }
 
   if("T".equals(msgType)) {
     return new quickfix.fix43.SettlementInstructions();
   }
 
   if("AD".equals(msgType)) {
     return new quickfix.fix43.TradeCaptureReportRequest();
   }
 
   if("AE".equals(msgType)) {
     return new quickfix.fix43.TradeCaptureReport();
   }
 
   if("o".equals(msgType)) {
     return new quickfix.fix43.RegistrationInstructions();
   }
 
   if("p".equals(msgType)) {
     return new quickfix.fix43.RegistrationInstructionsResponse();
   }
 
  return new quickfix.fix43.Message();
  }
}

