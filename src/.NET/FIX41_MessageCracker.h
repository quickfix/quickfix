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

namespace Fix41
{
  public __gc class MessageCracker : public Fix40::MessageCracker
  {
  public:
  virtual ~MessageCracker() {}
  virtual void onMessage( Fix::Message*, Fix::SessionID* )
    { throw new Fix::UnsupportedMessageType(); }
 virtual void onMessage( Advertisement*, Fix::SessionID* ) 
    { throw new Fix::UnsupportedMessageType(); }
  virtual void onMessage( IndicationofInterest*, Fix::SessionID* ) 
    { throw new Fix::UnsupportedMessageType(); }
  virtual void onMessage( News*, Fix::SessionID* ) 
    { throw new Fix::UnsupportedMessageType(); }
  virtual void onMessage( Email*, Fix::SessionID* ) 
    { throw new Fix::UnsupportedMessageType(); }
  virtual void onMessage( QuoteRequest*, Fix::SessionID* ) 
    { throw new Fix::UnsupportedMessageType(); }
  virtual void onMessage( Quote*, Fix::SessionID* ) 
    { throw new Fix::UnsupportedMessageType(); }
  virtual void onMessage( NewOrderSingle*, Fix::SessionID* ) 
    { throw new Fix::UnsupportedMessageType(); }
  virtual void onMessage( ExecutionReport*, Fix::SessionID* ) 
    { throw new Fix::UnsupportedMessageType(); }
  virtual void onMessage( DontKnowTrade*, Fix::SessionID* ) 
    { throw new Fix::UnsupportedMessageType(); }
  virtual void onMessage( OrderCancelReplaceRequest*, Fix::SessionID* ) 
    { throw new Fix::UnsupportedMessageType(); }
  virtual void onMessage( OrderCancelRequest*, Fix::SessionID* ) 
    { throw new Fix::UnsupportedMessageType(); }
  virtual void onMessage( OrderCancelReject*, Fix::SessionID* ) 
    { throw new Fix::UnsupportedMessageType(); }
  virtual void onMessage( OrderStatusRequest*, Fix::SessionID* ) 
    { throw new Fix::UnsupportedMessageType(); }
  virtual void onMessage( Allocation*, Fix::SessionID* ) 
    { throw new Fix::UnsupportedMessageType(); }
  virtual void onMessage( AllocationACK*, Fix::SessionID* ) 
    { throw new Fix::UnsupportedMessageType(); }
  virtual void onMessage( SettlementInstructions*, Fix::SessionID* ) 
    { throw new Fix::UnsupportedMessageType(); }
  virtual void onMessage( NewOrderList*, Fix::SessionID* ) 
    { throw new Fix::UnsupportedMessageType(); }
  virtual void onMessage( ListStatus*, Fix::SessionID* ) 
    { throw new Fix::UnsupportedMessageType(); }
  virtual void onMessage( ListExecute*, Fix::SessionID* ) 
    { throw new Fix::UnsupportedMessageType(); }
  virtual void onMessage( ListCancelRequest*, Fix::SessionID* ) 
    { throw new Fix::UnsupportedMessageType(); }
  virtual void onMessage( ListStatusRequest*, Fix::SessionID* ) 
    { throw new Fix::UnsupportedMessageType(); }
 
public:
  void crack( Fix::Message* message, 
              Fix::SessionID* sessionID )
  {
    Fix::MsgType* msgType = new Fix::MsgType();
    message->getHeader()->getField(msgType);
    std::string msgTypeString = Fix::convertString(msgType->getValue());
    if(msgTypeString.size() > 1)
    {
      onMessage( message, sessionID );
      return;
    }

    switch(msgTypeString[0])
    {
      case '0':
        onMessage( dynamic_cast<Heartbeat*>(message), sessionID );
	      break;
      case 'A':
        onMessage( dynamic_cast<Logon*>(message), sessionID );
	      break;
      case '1':
        onMessage( dynamic_cast<TestRequest*>(message), sessionID );
	      break;
      case '2':
        onMessage( dynamic_cast<ResendRequest*>(message), sessionID );
	      break;
      case '3':
        onMessage( dynamic_cast<Reject*>(message), sessionID );
	      break;
      case '4':
        onMessage( dynamic_cast<SequenceReset*>(message), sessionID );
	      break;
      case '5':
        onMessage( dynamic_cast<Logout*>(message), sessionID );
	      break;
      case '7':
        onMessage( dynamic_cast<Advertisement*>(message), sessionID );
	      break;
      case '6':
        onMessage( dynamic_cast<IndicationofInterest*>(message), sessionID );
	      break;
      case 'B':
        onMessage( dynamic_cast<News*>(message), sessionID );
	      break;
      case 'C':
        onMessage( dynamic_cast<Email*>(message), sessionID );
	      break;
      case 'R':
        onMessage( dynamic_cast<QuoteRequest*>(message), sessionID );
	      break;
      case 'S':
        onMessage( dynamic_cast<Quote*>(message), sessionID );
	      break;
      case 'D':
        onMessage( dynamic_cast<NewOrderSingle*>(message), sessionID );
	      break;
      case '8':
        onMessage( dynamic_cast<ExecutionReport*>(message), sessionID );
	      break;
      case 'Q':
        onMessage( dynamic_cast<DontKnowTrade*>(message), sessionID );
	      break;
      case 'G':
        onMessage( dynamic_cast<OrderCancelReplaceRequest*>(message), sessionID );
	      break;
      case 'F':
        onMessage( dynamic_cast<OrderCancelRequest*>(message), sessionID );
	      break;
      case '9':
        onMessage( dynamic_cast<OrderCancelReject*>(message), sessionID );
	      break;
      case 'H':
        onMessage( dynamic_cast<OrderStatusRequest*>(message), sessionID );
	      break;
      case 'J':
        onMessage( dynamic_cast<Allocation*>(message), sessionID );
	      break;
      case 'P':
        onMessage( dynamic_cast<AllocationACK*>(message), sessionID );
	      break;
      case 'T':
        onMessage( dynamic_cast<SettlementInstructions*>(message), sessionID );
	      break;
      case 'E':
        onMessage( dynamic_cast<NewOrderList*>(message), sessionID );
	      break;
      case 'N':
        onMessage( dynamic_cast<ListStatus*>(message), sessionID );
	      break;
      case 'L':
        onMessage( dynamic_cast<ListExecute*>(message), sessionID );
	      break;
      case 'K':
        onMessage( dynamic_cast<ListCancelRequest*>(message), sessionID );
	      break;
      case 'M':
        onMessage( dynamic_cast<ListStatusRequest*>(message), sessionID );
	      break;
      default:
        onMessage( message, sessionID );
    }
  }

  };
}

