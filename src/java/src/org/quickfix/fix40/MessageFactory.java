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


package org.quickfix.fix40;



import org.quickfix.Message;



public class MessageFactory implements org.quickfix.MessageFactory

{

  public Message create( String beginString, String msgType ) {

  

   if("0".equals(msgType)) {

     return new org.quickfix.fix40.Heartbeat();

   }

 

   if("A".equals(msgType)) {

     return new org.quickfix.fix40.Logon();

   }

 

   if("1".equals(msgType)) {

     return new org.quickfix.fix40.TestRequest();

   }

 

   if("2".equals(msgType)) {

     return new org.quickfix.fix40.ResendRequest();

   }

 

   if("3".equals(msgType)) {

     return new org.quickfix.fix40.Reject();

   }

 

   if("4".equals(msgType)) {

     return new org.quickfix.fix40.SequenceReset();

   }

 

   if("5".equals(msgType)) {

     return new org.quickfix.fix40.Logout();

   }

 

   if("7".equals(msgType)) {

     return new org.quickfix.fix40.Advertisement();

   }

 

   if("6".equals(msgType)) {

     return new org.quickfix.fix40.IndicationofInterest();

   }

 

   if("B".equals(msgType)) {

     return new org.quickfix.fix40.News();

   }

 

   if("C".equals(msgType)) {

     return new org.quickfix.fix40.Email();

   }

 

   if("R".equals(msgType)) {

     return new org.quickfix.fix40.QuoteRequest();

   }

 

   if("S".equals(msgType)) {

     return new org.quickfix.fix40.Quote();

   }

 

   if("D".equals(msgType)) {

     return new org.quickfix.fix40.NewOrderSingle();

   }

 

   if("8".equals(msgType)) {

     return new org.quickfix.fix40.ExecutionReport();

   }

 

   if("Q".equals(msgType)) {

     return new org.quickfix.fix40.DontKnowTrade();

   }

 

   if("G".equals(msgType)) {

     return new org.quickfix.fix40.OrderCancelReplaceRequest();

   }

 

   if("F".equals(msgType)) {

     return new org.quickfix.fix40.OrderCancelRequest();

   }

 

   if("9".equals(msgType)) {

     return new org.quickfix.fix40.OrderCancelReject();

   }

 

   if("H".equals(msgType)) {

     return new org.quickfix.fix40.OrderStatusRequest();

   }

 

   if("J".equals(msgType)) {

     return new org.quickfix.fix40.Allocation();

   }

 

   if("P".equals(msgType)) {

     return new org.quickfix.fix40.AllocationACK();

   }

 

   if("E".equals(msgType)) {

     return new org.quickfix.fix40.NewOrderList();

   }

 

   if("N".equals(msgType)) {

     return new org.quickfix.fix40.ListStatus();

   }

 

   if("L".equals(msgType)) {

     return new org.quickfix.fix40.ListExecute();

   }

 

   if("K".equals(msgType)) {

     return new org.quickfix.fix40.ListCancelRequest();

   }

 

   if("M".equals(msgType)) {

     return new org.quickfix.fix40.ListStatusRequest();

   }

 

  return new org.quickfix.fix40.Message();

  }

}



