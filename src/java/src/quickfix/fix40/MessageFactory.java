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
 
package quickfix.fix40;

import quickfix.Message;

public class MessageFactory implements quickfix.MessageFactory
{
  public Message create( String beginString, String msgType ) {
  
   if("0".equals(msgType)) {
     return new quickfix.fix40.Heartbeat();
   }
 
   if("A".equals(msgType)) {
     return new quickfix.fix40.Logon();
   }
 
   if("1".equals(msgType)) {
     return new quickfix.fix40.TestRequest();
   }
 
   if("2".equals(msgType)) {
     return new quickfix.fix40.ResendRequest();
   }
 
   if("3".equals(msgType)) {
     return new quickfix.fix40.Reject();
   }
 
   if("4".equals(msgType)) {
     return new quickfix.fix40.SequenceReset();
   }
 
   if("5".equals(msgType)) {
     return new quickfix.fix40.Logout();
   }
 
   if("7".equals(msgType)) {
     return new quickfix.fix40.Advertisement();
   }
 
   if("6".equals(msgType)) {
     return new quickfix.fix40.IndicationofInterest();
   }
 
   if("B".equals(msgType)) {
     return new quickfix.fix40.News();
   }
 
   if("C".equals(msgType)) {
     return new quickfix.fix40.Email();
   }
 
   if("R".equals(msgType)) {
     return new quickfix.fix40.QuoteRequest();
   }
 
   if("S".equals(msgType)) {
     return new quickfix.fix40.Quote();
   }
 
   if("D".equals(msgType)) {
     return new quickfix.fix40.NewOrderSingle();
   }
 
   if("8".equals(msgType)) {
     return new quickfix.fix40.ExecutionReport();
   }
 
   if("Q".equals(msgType)) {
     return new quickfix.fix40.DontKnowTrade();
   }
 
   if("G".equals(msgType)) {
     return new quickfix.fix40.OrderCancelReplaceRequest();
   }
 
   if("F".equals(msgType)) {
     return new quickfix.fix40.OrderCancelRequest();
   }
 
   if("9".equals(msgType)) {
     return new quickfix.fix40.OrderCancelReject();
   }
 
   if("H".equals(msgType)) {
     return new quickfix.fix40.OrderStatusRequest();
   }
 
   if("J".equals(msgType)) {
     return new quickfix.fix40.Allocation();
   }
 
   if("P".equals(msgType)) {
     return new quickfix.fix40.AllocationACK();
   }
 
   if("E".equals(msgType)) {
     return new quickfix.fix40.NewOrderList();
   }
 
   if("N".equals(msgType)) {
     return new quickfix.fix40.ListStatus();
   }
 
   if("L".equals(msgType)) {
     return new quickfix.fix40.ListExecute();
   }
 
   if("K".equals(msgType)) {
     return new quickfix.fix40.ListCancelRequest();
   }
 
   if("M".equals(msgType)) {
     return new quickfix.fix40.ListStatusRequest();
   }
 
  return new quickfix.fix40.Message();
  }
}

