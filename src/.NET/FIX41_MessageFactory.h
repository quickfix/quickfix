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

#include "Message.h"
#include "MessageFactory.h"

namespace QuickFix41
{

  public __gc class MessageFactory : public QuickFix::MessageFactory
  {
  public:
    QuickFix::Message* create( String* beginString, String* msgType ) {
    
     if(msgType->Equals("0")) {
       return new QuickFix41::Heartbeat();
     }
   
     if(msgType->Equals("A")) {
       return new QuickFix41::Logon();
     }
   
     if(msgType->Equals("1")) {
       return new QuickFix41::TestRequest();
     }
   
     if(msgType->Equals("2")) {
       return new QuickFix41::ResendRequest();
     }
   
     if(msgType->Equals("3")) {
       return new QuickFix41::Reject();
     }
   
     if(msgType->Equals("4")) {
       return new QuickFix41::SequenceReset();
     }
   
     if(msgType->Equals("5")) {
       return new QuickFix41::Logout();
     }
   
     if(msgType->Equals("7")) {
       return new QuickFix41::Advertisement();
     }
   
     if(msgType->Equals("6")) {
       return new QuickFix41::IndicationofInterest();
     }
   
     if(msgType->Equals("B")) {
       return new QuickFix41::News();
     }
   
     if(msgType->Equals("C")) {
       return new QuickFix41::Email();
     }
   
     if(msgType->Equals("R")) {
       return new QuickFix41::QuoteRequest();
     }
   
     if(msgType->Equals("S")) {
       return new QuickFix41::Quote();
     }
   
     if(msgType->Equals("D")) {
       return new QuickFix41::NewOrderSingle();
     }
   
     if(msgType->Equals("8")) {
       return new QuickFix41::ExecutionReport();
     }
   
     if(msgType->Equals("Q")) {
       return new QuickFix41::DontKnowTrade();
     }
   
     if(msgType->Equals("G")) {
       return new QuickFix41::OrderCancelReplaceRequest();
     }
   
     if(msgType->Equals("F")) {
       return new QuickFix41::OrderCancelRequest();
     }
   
     if(msgType->Equals("9")) {
       return new QuickFix41::OrderCancelReject();
     }
   
     if(msgType->Equals("H")) {
       return new QuickFix41::OrderStatusRequest();
     }
   
     if(msgType->Equals("J")) {
       return new QuickFix41::Allocation();
     }
   
     if(msgType->Equals("P")) {
       return new QuickFix41::AllocationACK();
     }
   
     if(msgType->Equals("T")) {
       return new QuickFix41::SettlementInstructions();
     }
   
     if(msgType->Equals("E")) {
       return new QuickFix41::NewOrderList();
     }
   
     if(msgType->Equals("N")) {
       return new QuickFix41::ListStatus();
     }
   
     if(msgType->Equals("L")) {
       return new QuickFix41::ListExecute();
     }
   
     if(msgType->Equals("K")) {
       return new QuickFix41::ListCancelRequest();
     }
   
     if(msgType->Equals("M")) {
       return new QuickFix41::ListStatusRequest();
     }
   
    return new QuickFix41::Message();
    }
  };
}
  