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

namespace QuickFix41
{

  public class MessageFactory : QuickFix.MessageFactory
  {
    public QuickFix.Message create( String beginString, String msgType ) {
    
     if(msgType.Equals("0")) {
       return new QuickFix41.Heartbeat();
     }
   
     if(msgType.Equals("1")) {
       return new QuickFix41.TestRequest();
     }
   
     if(msgType.Equals("2")) {
       return new QuickFix41.ResendRequest();
     }
   
     if(msgType.Equals("3")) {
       return new QuickFix41.Reject();
     }
   
     if(msgType.Equals("4")) {
       return new QuickFix41.SequenceReset();
     }
   
     if(msgType.Equals("5")) {
       return new QuickFix41.Logout();
     }
   
     if(msgType.Equals("6")) {
       return new QuickFix41.IndicationofInterest();
     }
   
     if(msgType.Equals("7")) {
       return new QuickFix41.Advertisement();
     }
   
     if(msgType.Equals("8")) {
       return new QuickFix41.ExecutionReport();
     }
   
     if(msgType.Equals("9")) {
       return new QuickFix41.OrderCancelReject();
     }
   
     if(msgType.Equals("A")) {
       return new QuickFix41.Logon();
     }
   
     if(msgType.Equals("B")) {
       return new QuickFix41.News();
     }
   
     if(msgType.Equals("C")) {
       return new QuickFix41.Email();
     }
   
     if(msgType.Equals("D")) {
       return new QuickFix41.NewOrderSingle();
     }
   
     if(msgType.Equals("E")) {
       return new QuickFix41.NewOrderList();
     }
   
     if(msgType.Equals("F")) {
       return new QuickFix41.OrderCancelRequest();
     }
   
     if(msgType.Equals("G")) {
       return new QuickFix41.OrderCancelReplaceRequest();
     }
   
     if(msgType.Equals("H")) {
       return new QuickFix41.OrderStatusRequest();
     }
   
     if(msgType.Equals("J")) {
       return new QuickFix41.Allocation();
     }
   
     if(msgType.Equals("K")) {
       return new QuickFix41.ListCancelRequest();
     }
   
     if(msgType.Equals("L")) {
       return new QuickFix41.ListExecute();
     }
   
     if(msgType.Equals("M")) {
       return new QuickFix41.ListStatusRequest();
     }
   
     if(msgType.Equals("N")) {
       return new QuickFix41.ListStatus();
     }
   
     if(msgType.Equals("P")) {
       return new QuickFix41.AllocationACK();
     }
   
     if(msgType.Equals("Q")) {
       return new QuickFix41.DontKnowTrade();
     }
   
     if(msgType.Equals("R")) {
       return new QuickFix41.QuoteRequest();
     }
   
     if(msgType.Equals("S")) {
       return new QuickFix41.Quote();
     }
   
     if(msgType.Equals("T")) {
       return new QuickFix41.SettlementInstructions();
     }
   
    return new QuickFix41.Message();
    }
  };
}
  