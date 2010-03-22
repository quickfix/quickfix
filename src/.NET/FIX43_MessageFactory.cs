/* -*- C++ -*- */
 
/****************************************************************************
** Copyright (c) quickfixengine.org  All rights reserved.
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

using System;

namespace QuickFix43
{

  public class MessageFactory : QuickFix.MessageFactory
  {
    public QuickFix.Message create( String beginString, String msgType ) {
    
     if(msgType.Equals("0")) {
       return new QuickFix43.Heartbeat();
     }
   
     if(msgType.Equals("1")) {
       return new QuickFix43.TestRequest();
     }
   
     if(msgType.Equals("2")) {
       return new QuickFix43.ResendRequest();
     }
   
     if(msgType.Equals("3")) {
       return new QuickFix43.Reject();
     }
   
     if(msgType.Equals("4")) {
       return new QuickFix43.SequenceReset();
     }
   
     if(msgType.Equals("5")) {
       return new QuickFix43.Logout();
     }
   
     if(msgType.Equals("6")) {
       return new QuickFix43.IOI();
     }
   
     if(msgType.Equals("7")) {
       return new QuickFix43.Advertisement();
     }
   
     if(msgType.Equals("8")) {
       return new QuickFix43.ExecutionReport();
     }
   
     if(msgType.Equals("9")) {
       return new QuickFix43.OrderCancelReject();
     }
   
     if(msgType.Equals("A")) {
       return new QuickFix43.Logon();
     }
   
     if(msgType.Equals("B")) {
       return new QuickFix43.News();
     }
   
     if(msgType.Equals("C")) {
       return new QuickFix43.Email();
     }
   
     if(msgType.Equals("D")) {
       return new QuickFix43.NewOrderSingle();
     }
   
     if(msgType.Equals("E")) {
       return new QuickFix43.NewOrderList();
     }
   
     if(msgType.Equals("F")) {
       return new QuickFix43.OrderCancelRequest();
     }
   
     if(msgType.Equals("G")) {
       return new QuickFix43.OrderCancelReplaceRequest();
     }
   
     if(msgType.Equals("H")) {
       return new QuickFix43.OrderStatusRequest();
     }
   
     if(msgType.Equals("J")) {
       return new QuickFix43.Allocation();
     }
   
     if(msgType.Equals("K")) {
       return new QuickFix43.ListCancelRequest();
     }
   
     if(msgType.Equals("L")) {
       return new QuickFix43.ListExecute();
     }
   
     if(msgType.Equals("M")) {
       return new QuickFix43.ListStatusRequest();
     }
   
     if(msgType.Equals("N")) {
       return new QuickFix43.ListStatus();
     }
   
     if(msgType.Equals("P")) {
       return new QuickFix43.AllocationAck();
     }
   
     if(msgType.Equals("Q")) {
       return new QuickFix43.DontKnowTrade();
     }
   
     if(msgType.Equals("R")) {
       return new QuickFix43.QuoteRequest();
     }
   
     if(msgType.Equals("S")) {
       return new QuickFix43.Quote();
     }
   
     if(msgType.Equals("T")) {
       return new QuickFix43.SettlementInstructions();
     }
   
     if(msgType.Equals("V")) {
       return new QuickFix43.MarketDataRequest();
     }
   
     if(msgType.Equals("W")) {
       return new QuickFix43.MarketDataSnapshotFullRefresh();
     }
   
     if(msgType.Equals("X")) {
       return new QuickFix43.MarketDataIncrementalRefresh();
     }
   
     if(msgType.Equals("Y")) {
       return new QuickFix43.MarketDataRequestReject();
     }
   
     if(msgType.Equals("Z")) {
       return new QuickFix43.QuoteCancel();
     }
   
     if(msgType.Equals("a")) {
       return new QuickFix43.QuoteStatusRequest();
     }
   
     if(msgType.Equals("b")) {
       return new QuickFix43.MassQuoteAcknowledgement();
     }
   
     if(msgType.Equals("c")) {
       return new QuickFix43.SecurityDefinitionRequest();
     }
   
     if(msgType.Equals("d")) {
       return new QuickFix43.SecurityDefinition();
     }
   
     if(msgType.Equals("e")) {
       return new QuickFix43.SecurityStatusRequest();
     }
   
     if(msgType.Equals("f")) {
       return new QuickFix43.SecurityStatus();
     }
   
     if(msgType.Equals("g")) {
       return new QuickFix43.TradingSessionStatusRequest();
     }
   
     if(msgType.Equals("h")) {
       return new QuickFix43.TradingSessionStatus();
     }
   
     if(msgType.Equals("i")) {
       return new QuickFix43.MassQuote();
     }
   
     if(msgType.Equals("j")) {
       return new QuickFix43.BusinessMessageReject();
     }
   
     if(msgType.Equals("k")) {
       return new QuickFix43.BidRequest();
     }
   
     if(msgType.Equals("l")) {
       return new QuickFix43.BidResponse();
     }
   
     if(msgType.Equals("m")) {
       return new QuickFix43.ListStrikePrice();
     }
   
     if(msgType.Equals("o")) {
       return new QuickFix43.RegistrationInstructions();
     }
   
     if(msgType.Equals("p")) {
       return new QuickFix43.RegistrationInstructionsResponse();
     }
   
     if(msgType.Equals("q")) {
       return new QuickFix43.OrderMassCancelRequest();
     }
   
     if(msgType.Equals("r")) {
       return new QuickFix43.OrderMassCancelReport();
     }
   
     if(msgType.Equals("s")) {
       return new QuickFix43.NewOrderCross();
     }
   
     if(msgType.Equals("u")) {
       return new QuickFix43.CrossOrderCancelRequest();
     }
   
     if(msgType.Equals("t")) {
       return new QuickFix43.CrossOrderCancelReplaceRequest();
     }
   
     if(msgType.Equals("v")) {
       return new QuickFix43.SecurityTypeRequest();
     }
   
     if(msgType.Equals("w")) {
       return new QuickFix43.SecurityTypes();
     }
   
     if(msgType.Equals("x")) {
       return new QuickFix43.SecurityListRequest();
     }
   
     if(msgType.Equals("y")) {
       return new QuickFix43.SecurityList();
     }
   
     if(msgType.Equals("z")) {
       return new QuickFix43.DerivativeSecurityListRequest();
     }
   
     if(msgType.Equals("AA")) {
       return new QuickFix43.DerivativeSecurityList();
     }
   
     if(msgType.Equals("AB")) {
       return new QuickFix43.NewOrderMultileg();
     }
   
     if(msgType.Equals("AC")) {
       return new QuickFix43.MultilegOrderCancelReplaceRequest();
     }
   
     if(msgType.Equals("AD")) {
       return new QuickFix43.TradeCaptureReportRequest();
     }
   
     if(msgType.Equals("AE")) {
       return new QuickFix43.TradeCaptureReport();
     }
   
     if(msgType.Equals("AF")) {
       return new QuickFix43.OrderMassStatusRequest();
     }
   
     if(msgType.Equals("AG")) {
       return new QuickFix43.QuoteRequestReject();
     }
   
     if(msgType.Equals("AH")) {
       return new QuickFix43.RFQRequest();
     }
   
     if(msgType.Equals("AI")) {
       return new QuickFix43.QuoteStatusReport();
     }
   
    return new QuickFix43.Message();
    }
  };
}
  