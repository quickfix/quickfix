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

#pragma once

#include "quickfix_net.h"
#include "Messages.h"
#include "SessionID.h"
#include "Exceptions.h"
#include "FIX40_MessageCracker.h"

namespace QuickFix41
{
  public __gc class MessageCracker : public QuickFix40::MessageCracker
  {
  public:
  virtual ~MessageCracker() {}
  virtual void onMessage( QuickFix::Message*, QuickFix::SessionID* )
    { throw new QuickFix::UnsupportedMessageType(); }
 virtual void onMessage( Advertisement*, QuickFix::SessionID* ) 
    { throw new QuickFix::UnsupportedMessageType(); }
  virtual void onMessage( IndicationofInterest*, QuickFix::SessionID* ) 
    { throw new QuickFix::UnsupportedMessageType(); }
  virtual void onMessage( News*, QuickFix::SessionID* ) 
    { throw new QuickFix::UnsupportedMessageType(); }
  virtual void onMessage( Email*, QuickFix::SessionID* ) 
    { throw new QuickFix::UnsupportedMessageType(); }
  virtual void onMessage( QuoteRequest*, QuickFix::SessionID* ) 
    { throw new QuickFix::UnsupportedMessageType(); }
  virtual void onMessage( Quote*, QuickFix::SessionID* ) 
    { throw new QuickFix::UnsupportedMessageType(); }
  virtual void onMessage( NewOrderSingle*, QuickFix::SessionID* ) 
    { throw new QuickFix::UnsupportedMessageType(); }
  virtual void onMessage( ExecutionReport*, QuickFix::SessionID* ) 
    { throw new QuickFix::UnsupportedMessageType(); }
  virtual void onMessage( DontKnowTrade*, QuickFix::SessionID* ) 
    { throw new QuickFix::UnsupportedMessageType(); }
  virtual void onMessage( OrderCancelReplaceRequest*, QuickFix::SessionID* ) 
    { throw new QuickFix::UnsupportedMessageType(); }
  virtual void onMessage( OrderCancelRequest*, QuickFix::SessionID* ) 
    { throw new QuickFix::UnsupportedMessageType(); }
  virtual void onMessage( OrderCancelReject*, QuickFix::SessionID* ) 
    { throw new QuickFix::UnsupportedMessageType(); }
  virtual void onMessage( OrderStatusRequest*, QuickFix::SessionID* ) 
    { throw new QuickFix::UnsupportedMessageType(); }
  virtual void onMessage( Allocation*, QuickFix::SessionID* ) 
    { throw new QuickFix::UnsupportedMessageType(); }
  virtual void onMessage( AllocationACK*, QuickFix::SessionID* ) 
    { throw new QuickFix::UnsupportedMessageType(); }
  virtual void onMessage( SettlementInstructions*, QuickFix::SessionID* ) 
    { throw new QuickFix::UnsupportedMessageType(); }
  virtual void onMessage( NewOrderList*, QuickFix::SessionID* ) 
    { throw new QuickFix::UnsupportedMessageType(); }
  virtual void onMessage( ListStatus*, QuickFix::SessionID* ) 
    { throw new QuickFix::UnsupportedMessageType(); }
  virtual void onMessage( ListExecute*, QuickFix::SessionID* ) 
    { throw new QuickFix::UnsupportedMessageType(); }
  virtual void onMessage( ListCancelRequest*, QuickFix::SessionID* ) 
    { throw new QuickFix::UnsupportedMessageType(); }
  virtual void onMessage( ListStatusRequest*, QuickFix::SessionID* ) 
    { throw new QuickFix::UnsupportedMessageType(); }
 
public:
  void crack( QuickFix::Message* message, 
              QuickFix::SessionID* sessionID )
  {
    QuickFix::MsgType* msgType = new QuickFix::MsgType();
    message->getHeader()->getField(msgType);
    std::string msgTypeValue = QuickFix::convertString(msgType->getValue());

    if( msgTypeValue == "0" )
      onMessage( dynamic_cast<Heartbeat*>(message), sessionID );
    else
    if( msgTypeValue == "A" )
      onMessage( dynamic_cast<Logon*>(message), sessionID );
    else
    if( msgTypeValue == "1" )
      onMessage( dynamic_cast<TestRequest*>(message), sessionID );
    else
    if( msgTypeValue == "2" )
      onMessage( dynamic_cast<ResendRequest*>(message), sessionID );
    else
    if( msgTypeValue == "3" )
      onMessage( dynamic_cast<Reject*>(message), sessionID );
    else
    if( msgTypeValue == "4" )
      onMessage( dynamic_cast<SequenceReset*>(message), sessionID );
    else
    if( msgTypeValue == "5" )
      onMessage( dynamic_cast<Logout*>(message), sessionID );
    else
    if( msgTypeValue == "7" )
      onMessage( dynamic_cast<Advertisement*>(message), sessionID );
    else
    if( msgTypeValue == "6" )
      onMessage( dynamic_cast<IndicationofInterest*>(message), sessionID );
    else
    if( msgTypeValue == "B" )
      onMessage( dynamic_cast<News*>(message), sessionID );
    else
    if( msgTypeValue == "C" )
      onMessage( dynamic_cast<Email*>(message), sessionID );
    else
    if( msgTypeValue == "R" )
      onMessage( dynamic_cast<QuoteRequest*>(message), sessionID );
    else
    if( msgTypeValue == "S" )
      onMessage( dynamic_cast<Quote*>(message), sessionID );
    else
    if( msgTypeValue == "D" )
      onMessage( dynamic_cast<NewOrderSingle*>(message), sessionID );
    else
    if( msgTypeValue == "8" )
      onMessage( dynamic_cast<ExecutionReport*>(message), sessionID );
    else
    if( msgTypeValue == "Q" )
      onMessage( dynamic_cast<DontKnowTrade*>(message), sessionID );
    else
    if( msgTypeValue == "G" )
      onMessage( dynamic_cast<OrderCancelReplaceRequest*>(message), sessionID );
    else
    if( msgTypeValue == "F" )
      onMessage( dynamic_cast<OrderCancelRequest*>(message), sessionID );
    else
    if( msgTypeValue == "9" )
      onMessage( dynamic_cast<OrderCancelReject*>(message), sessionID );
    else
    if( msgTypeValue == "H" )
      onMessage( dynamic_cast<OrderStatusRequest*>(message), sessionID );
    else
    if( msgTypeValue == "J" )
      onMessage( dynamic_cast<Allocation*>(message), sessionID );
    else
    if( msgTypeValue == "P" )
      onMessage( dynamic_cast<AllocationACK*>(message), sessionID );
    else
    if( msgTypeValue == "T" )
      onMessage( dynamic_cast<SettlementInstructions*>(message), sessionID );
    else
    if( msgTypeValue == "E" )
      onMessage( dynamic_cast<NewOrderList*>(message), sessionID );
    else
    if( msgTypeValue == "N" )
      onMessage( dynamic_cast<ListStatus*>(message), sessionID );
    else
    if( msgTypeValue == "L" )
      onMessage( dynamic_cast<ListExecute*>(message), sessionID );
    else
    if( msgTypeValue == "K" )
      onMessage( dynamic_cast<ListCancelRequest*>(message), sessionID );
    else
    if( msgTypeValue == "M" )
      onMessage( dynamic_cast<ListStatusRequest*>(message), sessionID );
    else onMessage( message, sessionID );    
  }

  };
}

