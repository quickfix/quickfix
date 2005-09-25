/* -*- C++ -*- */
 
/****************************************************************************
** Copyright (c) 2001-2005 quickfixengine.org  All rights reserved.
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
 
package quickfix.fix42;

import quickfix.Message;

public class MessageFactory implements quickfix.MessageFactory
{
  public Message create( String beginString, String msgType ) {
  
   if("0".equals(msgType)) {
     return new quickfix.fix42.Heartbeat();
   }
 
   if("A".equals(msgType)) {
     return new quickfix.fix42.Logon();
   }
 
   if("1".equals(msgType)) {
     return new quickfix.fix42.TestRequest();
   }
 
   if("2".equals(msgType)) {
     return new quickfix.fix42.ResendRequest();
   }
 
   if("3".equals(msgType)) {
     return new quickfix.fix42.Reject();
   }
 
   if("4".equals(msgType)) {
     return new quickfix.fix42.SequenceReset();
   }
 
   if("5".equals(msgType)) {
     return new quickfix.fix42.Logout();
   }
 
   if("7".equals(msgType)) {
     return new quickfix.fix42.Advertisement();
   }
 
   if("6".equals(msgType)) {
     return new quickfix.fix42.IndicationofInterest();
   }
 
   if("B".equals(msgType)) {
     return new quickfix.fix42.News();
   }
 
   if("C".equals(msgType)) {
     return new quickfix.fix42.Email();
   }
 
   if("R".equals(msgType)) {
     return new quickfix.fix42.QuoteRequest();
   }
 
   if("S".equals(msgType)) {
     return new quickfix.fix42.Quote();
   }
 
   if("i".equals(msgType)) {
     return new quickfix.fix42.MassQuote();
   }
 
   if("Z".equals(msgType)) {
     return new quickfix.fix42.QuoteCancel();
   }
 
   if("a".equals(msgType)) {
     return new quickfix.fix42.QuoteStatusRequest();
   }
 
   if("b".equals(msgType)) {
     return new quickfix.fix42.QuoteAcknowledgement();
   }
 
   if("V".equals(msgType)) {
     return new quickfix.fix42.MarketDataRequest();
   }
 
   if("W".equals(msgType)) {
     return new quickfix.fix42.MarketDataSnapshotFullRefresh();
   }
 
   if("X".equals(msgType)) {
     return new quickfix.fix42.MarketDataIncrementalRefresh();
   }
 
   if("Y".equals(msgType)) {
     return new quickfix.fix42.MarketDataRequestReject();
   }
 
   if("c".equals(msgType)) {
     return new quickfix.fix42.SecurityDefinitionRequest();
   }
 
   if("d".equals(msgType)) {
     return new quickfix.fix42.SecurityDefinition();
   }
 
   if("e".equals(msgType)) {
     return new quickfix.fix42.SecurityStatusRequest();
   }
 
   if("f".equals(msgType)) {
     return new quickfix.fix42.SecurityStatus();
   }
 
   if("g".equals(msgType)) {
     return new quickfix.fix42.TradingSessionStatusRequest();
   }
 
   if("h".equals(msgType)) {
     return new quickfix.fix42.TradingSessionStatus();
   }
 
   if("D".equals(msgType)) {
     return new quickfix.fix42.NewOrderSingle();
   }
 
   if("8".equals(msgType)) {
     return new quickfix.fix42.ExecutionReport();
   }
 
   if("Q".equals(msgType)) {
     return new quickfix.fix42.DontKnowTrade();
   }
 
   if("G".equals(msgType)) {
     return new quickfix.fix42.OrderCancelReplaceRequest();
   }
 
   if("F".equals(msgType)) {
     return new quickfix.fix42.OrderCancelRequest();
   }
 
   if("9".equals(msgType)) {
     return new quickfix.fix42.OrderCancelReject();
   }
 
   if("H".equals(msgType)) {
     return new quickfix.fix42.OrderStatusRequest();
   }
 
   if("J".equals(msgType)) {
     return new quickfix.fix42.Allocation();
   }
 
   if("P".equals(msgType)) {
     return new quickfix.fix42.AllocationACK();
   }
 
   if("T".equals(msgType)) {
     return new quickfix.fix42.SettlementInstructions();
   }
 
   if("k".equals(msgType)) {
     return new quickfix.fix42.BidRequest();
   }
 
   if("l".equals(msgType)) {
     return new quickfix.fix42.BidResponse();
   }
 
   if("E".equals(msgType)) {
     return new quickfix.fix42.NewOrderList();
   }
 
   if("m".equals(msgType)) {
     return new quickfix.fix42.ListStrikePrice();
   }
 
   if("N".equals(msgType)) {
     return new quickfix.fix42.ListStatus();
   }
 
   if("L".equals(msgType)) {
     return new quickfix.fix42.ListExecute();
   }
 
   if("K".equals(msgType)) {
     return new quickfix.fix42.ListCancelRequest();
   }
 
   if("M".equals(msgType)) {
     return new quickfix.fix42.ListStatusRequest();
   }
 
   if("j".equals(msgType)) {
     return new quickfix.fix42.BusinessMessageReject();
   }
 
  return new quickfix.fix42.Message();
  }
}

