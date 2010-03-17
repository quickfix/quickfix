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

namespace QuickFix40
{

  public class MessageFactory : QuickFix.MessageFactory
  {
    public QuickFix.Message create( String beginString, String msgType ) {
    
     if(msgType.Equals("0")) {
       return new QuickFix40.Heartbeat();
     }
   
     if(msgType.Equals("1")) {
       return new QuickFix40.TestRequest();
     }
   
     if(msgType.Equals("2")) {
       return new QuickFix40.ResendRequest();
     }
   
     if(msgType.Equals("3")) {
       return new QuickFix40.Reject();
     }
   
     if(msgType.Equals("4")) {
       return new QuickFix40.SequenceReset();
     }
   
     if(msgType.Equals("5")) {
       return new QuickFix40.Logout();
     }
   
     if(msgType.Equals("6")) {
       return new QuickFix40.IndicationofInterest();
     }
   
     if(msgType.Equals("7")) {
       return new QuickFix40.Advertisement();
     }
   
     if(msgType.Equals("8")) {
       return new QuickFix40.ExecutionReport();
     }
   
     if(msgType.Equals("9")) {
       return new QuickFix40.OrderCancelReject();
     }
   
     if(msgType.Equals("A")) {
       return new QuickFix40.Logon();
     }
   
     if(msgType.Equals("B")) {
       return new QuickFix40.News();
     }
   
     if(msgType.Equals("C")) {
       return new QuickFix40.Email();
     }
   
     if(msgType.Equals("D")) {
       return new QuickFix40.NewOrderSingle();
     }
   
     if(msgType.Equals("E")) {
       return new QuickFix40.NewOrderList();
     }
   
     if(msgType.Equals("F")) {
       return new QuickFix40.OrderCancelRequest();
     }
   
     if(msgType.Equals("G")) {
       return new QuickFix40.OrderCancelReplaceRequest();
     }
   
     if(msgType.Equals("H")) {
       return new QuickFix40.OrderStatusRequest();
     }
   
     if(msgType.Equals("J")) {
       return new QuickFix40.Allocation();
     }
   
     if(msgType.Equals("K")) {
       return new QuickFix40.ListCancelRequest();
     }
   
     if(msgType.Equals("L")) {
       return new QuickFix40.ListExecute();
     }
   
     if(msgType.Equals("M")) {
       return new QuickFix40.ListStatusRequest();
     }
   
     if(msgType.Equals("N")) {
       return new QuickFix40.ListStatus();
     }
   
     if(msgType.Equals("P")) {
       return new QuickFix40.AllocationACK();
     }
   
     if(msgType.Equals("Q")) {
       return new QuickFix40.DontKnowTrade();
     }
   
     if(msgType.Equals("R")) {
       return new QuickFix40.QuoteRequest();
     }
   
     if(msgType.Equals("S")) {
       return new QuickFix40.Quote();
     }
   
    return new QuickFix40.Message();
    }
  };
}
  