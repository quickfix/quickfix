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

#ifndef FIX41_MESSAGECRACKER_H
#define FIX41_MESSAGECRACKER_H

#include "Messages.h"
#include "SessionID.h"
#include "Exceptions.h"

namespace FIX41
{
  class MessageCracker
  {
  public:
  virtual ~MessageCracker() {}
  virtual void onMessage( const Message&, const FIX::SessionID& )
    { throw FIX::UnsupportedMessageType(); }
 virtual void onMessage( const Advertisement&, const FIX::SessionID& ) 
    { throw FIX::UnsupportedMessageType(); }
  virtual void onMessage( const IndicationofInterest&, const FIX::SessionID& ) 
    { throw FIX::UnsupportedMessageType(); }
  virtual void onMessage( const News&, const FIX::SessionID& ) 
    { throw FIX::UnsupportedMessageType(); }
  virtual void onMessage( const Email&, const FIX::SessionID& ) 
    { throw FIX::UnsupportedMessageType(); }
  virtual void onMessage( const QuoteRequest&, const FIX::SessionID& ) 
    { throw FIX::UnsupportedMessageType(); }
  virtual void onMessage( const Quote&, const FIX::SessionID& ) 
    { throw FIX::UnsupportedMessageType(); }
  virtual void onMessage( const NewOrderSingle&, const FIX::SessionID& ) 
    { throw FIX::UnsupportedMessageType(); }
  virtual void onMessage( const ExecutionReport&, const FIX::SessionID& ) 
    { throw FIX::UnsupportedMessageType(); }
  virtual void onMessage( const DontKnowTrade&, const FIX::SessionID& ) 
    { throw FIX::UnsupportedMessageType(); }
  virtual void onMessage( const OrderCancelReplaceRequest&, const FIX::SessionID& ) 
    { throw FIX::UnsupportedMessageType(); }
  virtual void onMessage( const OrderCancelRequest&, const FIX::SessionID& ) 
    { throw FIX::UnsupportedMessageType(); }
  virtual void onMessage( const OrderCancelReject&, const FIX::SessionID& ) 
    { throw FIX::UnsupportedMessageType(); }
  virtual void onMessage( const OrderStatusRequest&, const FIX::SessionID& ) 
    { throw FIX::UnsupportedMessageType(); }
  virtual void onMessage( const Allocation&, const FIX::SessionID& ) 
    { throw FIX::UnsupportedMessageType(); }
  virtual void onMessage( const AllocationACK&, const FIX::SessionID& ) 
    { throw FIX::UnsupportedMessageType(); }
  virtual void onMessage( const SettlementInstructions&, const FIX::SessionID& ) 
    { throw FIX::UnsupportedMessageType(); }
  virtual void onMessage( const NewOrderList&, const FIX::SessionID& ) 
    { throw FIX::UnsupportedMessageType(); }
  virtual void onMessage( const ListStatus&, const FIX::SessionID& ) 
    { throw FIX::UnsupportedMessageType(); }
  virtual void onMessage( const ListExecute&, const FIX::SessionID& ) 
    { throw FIX::UnsupportedMessageType(); }
  virtual void onMessage( const ListCancelRequest&, const FIX::SessionID& ) 
    { throw FIX::UnsupportedMessageType(); }
  virtual void onMessage( const ListStatusRequest&, const FIX::SessionID& ) 
    { throw FIX::UnsupportedMessageType(); }
 
public:
  void crack( const Message& message, 
              const FIX::SessionID& sessionID )
  {
    FIX::MsgType msgType;
    message.getHeader().getField(msgType);
    std::string msgTypeValue = msgType.getValue();
    
    if( msgTypeValue == "0" )
      onMessage( (Heartbeat&)message, sessionID );
    else
    if( msgTypeValue == "A" )
      onMessage( (Logon&)message, sessionID );
    else
    if( msgTypeValue == "1" )
      onMessage( (TestRequest&)message, sessionID );
    else
    if( msgTypeValue == "2" )
      onMessage( (ResendRequest&)message, sessionID );
    else
    if( msgTypeValue == "3" )
      onMessage( (Reject&)message, sessionID );
    else
    if( msgTypeValue == "4" )
      onMessage( (SequenceReset&)message, sessionID );
    else
    if( msgTypeValue == "5" )
      onMessage( (Logout&)message, sessionID );
    else
    if( msgTypeValue == "7" )
      onMessage( (Advertisement&)message, sessionID );
    else
    if( msgTypeValue == "6" )
      onMessage( (IndicationofInterest&)message, sessionID );
    else
    if( msgTypeValue == "B" )
      onMessage( (News&)message, sessionID );
    else
    if( msgTypeValue == "C" )
      onMessage( (Email&)message, sessionID );
    else
    if( msgTypeValue == "R" )
      onMessage( (QuoteRequest&)message, sessionID );
    else
    if( msgTypeValue == "S" )
      onMessage( (Quote&)message, sessionID );
    else
    if( msgTypeValue == "D" )
      onMessage( (NewOrderSingle&)message, sessionID );
    else
    if( msgTypeValue == "8" )
      onMessage( (ExecutionReport&)message, sessionID );
    else
    if( msgTypeValue == "Q" )
      onMessage( (DontKnowTrade&)message, sessionID );
    else
    if( msgTypeValue == "G" )
      onMessage( (OrderCancelReplaceRequest&)message, sessionID );
    else
    if( msgTypeValue == "F" )
      onMessage( (OrderCancelRequest&)message, sessionID );
    else
    if( msgTypeValue == "9" )
      onMessage( (OrderCancelReject&)message, sessionID );
    else
    if( msgTypeValue == "H" )
      onMessage( (OrderStatusRequest&)message, sessionID );
    else
    if( msgTypeValue == "J" )
      onMessage( (Allocation&)message, sessionID );
    else
    if( msgTypeValue == "P" )
      onMessage( (AllocationACK&)message, sessionID );
    else
    if( msgTypeValue == "T" )
      onMessage( (SettlementInstructions&)message, sessionID );
    else
    if( msgTypeValue == "E" )
      onMessage( (NewOrderList&)message, sessionID );
    else
    if( msgTypeValue == "N" )
      onMessage( (ListStatus&)message, sessionID );
    else
    if( msgTypeValue == "L" )
      onMessage( (ListExecute&)message, sessionID );
    else
    if( msgTypeValue == "K" )
      onMessage( (ListCancelRequest&)message, sessionID );
    else
    if( msgTypeValue == "M" )
      onMessage( (ListStatusRequest&)message, sessionID );
    else onMessage( message, sessionID );
  }

  };
}

#endif //FIX41_MESSAGECRACKER_H

