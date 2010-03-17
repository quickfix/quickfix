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

namespace QuickFix42
{

  public class MessageFactory : QuickFix.MessageFactory
  {
    public QuickFix.Message create( String beginString, String msgType ) {
    
     if(msgType.Equals("0")) {
       return new QuickFix42.Heartbeat();
     }
   
     if(msgType.Equals("1")) {
       return new QuickFix42.TestRequest();
     }
   
     if(msgType.Equals("2")) {
       return new QuickFix42.ResendRequest();
     }
   
     if(msgType.Equals("3")) {
       return new QuickFix42.Reject();
     }
   
     if(msgType.Equals("4")) {
       return new QuickFix42.SequenceReset();
     }
   
     if(msgType.Equals("5")) {
       return new QuickFix42.Logout();
     }
   
     if(msgType.Equals("6")) {
       return new QuickFix42.IndicationofInterest();
     }
   
     if(msgType.Equals("7")) {
       return new QuickFix42.Advertisement();
     }
   
     if(msgType.Equals("8")) {
       return new QuickFix42.ExecutionReport();
     }
   
     if(msgType.Equals("9")) {
       return new QuickFix42.OrderCancelReject();
     }
   
     if(msgType.Equals("A")) {
       return new QuickFix42.Logon();
     }
   
     if(msgType.Equals("B")) {
       return new QuickFix42.News();
     }
   
     if(msgType.Equals("C")) {
       return new QuickFix42.Email();
     }
   
     if(msgType.Equals("D")) {
       return new QuickFix42.NewOrderSingle();
     }
   
     if(msgType.Equals("E")) {
       return new QuickFix42.NewOrderList();
     }
   
     if(msgType.Equals("F")) {
       return new QuickFix42.OrderCancelRequest();
     }
   
     if(msgType.Equals("G")) {
       return new QuickFix42.OrderCancelReplaceRequest();
     }
   
     if(msgType.Equals("H")) {
       return new QuickFix42.OrderStatusRequest();
     }
   
     if(msgType.Equals("J")) {
       return new QuickFix42.Allocation();
     }
   
     if(msgType.Equals("K")) {
       return new QuickFix42.ListCancelRequest();
     }
   
     if(msgType.Equals("L")) {
       return new QuickFix42.ListExecute();
     }
   
     if(msgType.Equals("M")) {
       return new QuickFix42.ListStatusRequest();
     }
   
     if(msgType.Equals("N")) {
       return new QuickFix42.ListStatus();
     }
   
     if(msgType.Equals("P")) {
       return new QuickFix42.AllocationACK();
     }
   
     if(msgType.Equals("Q")) {
       return new QuickFix42.DontKnowTrade();
     }
   
     if(msgType.Equals("R")) {
       return new QuickFix42.QuoteRequest();
     }
   
     if(msgType.Equals("S")) {
       return new QuickFix42.Quote();
     }
   
     if(msgType.Equals("T")) {
       return new QuickFix42.SettlementInstructions();
     }
   
     if(msgType.Equals("V")) {
       return new QuickFix42.MarketDataRequest();
     }
   
     if(msgType.Equals("W")) {
       return new QuickFix42.MarketDataSnapshotFullRefresh();
     }
   
     if(msgType.Equals("X")) {
       return new QuickFix42.MarketDataIncrementalRefresh();
     }
   
     if(msgType.Equals("Y")) {
       return new QuickFix42.MarketDataRequestReject();
     }
   
     if(msgType.Equals("Z")) {
       return new QuickFix42.QuoteCancel();
     }
   
     if(msgType.Equals("a")) {
       return new QuickFix42.QuoteStatusRequest();
     }
   
     if(msgType.Equals("b")) {
       return new QuickFix42.QuoteAcknowledgement();
     }
   
     if(msgType.Equals("c")) {
       return new QuickFix42.SecurityDefinitionRequest();
     }
   
     if(msgType.Equals("d")) {
       return new QuickFix42.SecurityDefinition();
     }
   
     if(msgType.Equals("e")) {
       return new QuickFix42.SecurityStatusRequest();
     }
   
     if(msgType.Equals("f")) {
       return new QuickFix42.SecurityStatus();
     }
   
     if(msgType.Equals("g")) {
       return new QuickFix42.TradingSessionStatusRequest();
     }
   
     if(msgType.Equals("h")) {
       return new QuickFix42.TradingSessionStatus();
     }
   
     if(msgType.Equals("i")) {
       return new QuickFix42.MassQuote();
     }
   
     if(msgType.Equals("j")) {
       return new QuickFix42.BusinessMessageReject();
     }
   
     if(msgType.Equals("k")) {
       return new QuickFix42.BidRequest();
     }
   
     if(msgType.Equals("l")) {
       return new QuickFix42.BidResponse();
     }
   
     if(msgType.Equals("m")) {
       return new QuickFix42.ListStrikePrice();
     }
   
    return new QuickFix42.Message();
    }
  };
}
  