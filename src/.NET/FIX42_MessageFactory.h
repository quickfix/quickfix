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

namespace Fix42
{

public __gc class MessageFactory : public Fix::MessageFactory
{
public:
  Fix::Message* create( String* beginString, String* msgType )
  {

    if ( msgType->Equals( "0" ) )
    {
      return new Fix42::Heartbeat();
    }

    if ( msgType->Equals( "A" ) )
    {
      return new Fix42::Logon();
    }

    if ( msgType->Equals( "1" ) )
    {
      return new Fix42::TestRequest();
    }

    if ( msgType->Equals( "2" ) )
    {
      return new Fix42::ResendRequest();
    }

    if ( msgType->Equals( "3" ) )
    {
      return new Fix42::Reject();
    }

    if ( msgType->Equals( "4" ) )
    {
      return new Fix42::SequenceReset();
    }

    if ( msgType->Equals( "5" ) )
    {
      return new Fix42::Logout();
    }

    if ( msgType->Equals( "7" ) )
    {
      return new Fix42::Advertisement();
    }

    if ( msgType->Equals( "6" ) )
    {
      return new Fix42::IndicationofInterest();
    }

    if ( msgType->Equals( "B" ) )
    {
      return new Fix42::News();
    }

    if ( msgType->Equals( "C" ) )
    {
      return new Fix42::Email();
    }

    if ( msgType->Equals( "R" ) )
    {
      return new Fix42::QuoteRequest();
    }

    if ( msgType->Equals( "S" ) )
    {
      return new Fix42::Quote();
    }

    if ( msgType->Equals( "i" ) )
    {
      return new Fix42::MassQuote();
    }

    if ( msgType->Equals( "Z" ) )
    {
      return new Fix42::QuoteCancel();
    }

    if ( msgType->Equals( "a" ) )
    {
      return new Fix42::QuoteStatusRequest();
    }

    if ( msgType->Equals( "b" ) )
    {
      return new Fix42::QuoteAcknowledgement();
    }

    if ( msgType->Equals( "V" ) )
    {
      return new Fix42::MarketDataRequest();
    }

    if ( msgType->Equals( "W" ) )
    {
      return new Fix42::MarketDataSnapshotFullRefresh();
    }

    if ( msgType->Equals( "X" ) )
    {
      return new Fix42::MarketDataIncrementalRefresh();
    }

    if ( msgType->Equals( "Y" ) )
    {
      return new Fix42::MarketDataRequestReject();
    }

    if ( msgType->Equals( "c" ) )
    {
      return new Fix42::SecurityDefinitionRequest();
    }

    if ( msgType->Equals( "d" ) )
    {
      return new Fix42::SecurityDefinition();
    }

    if ( msgType->Equals( "e" ) )
    {
      return new Fix42::SecurityStatusRequest();
    }

    if ( msgType->Equals( "f" ) )
    {
      return new Fix42::SecurityStatus();
    }

    if ( msgType->Equals( "g" ) )
    {
      return new Fix42::TradingSessionStatusRequest();
    }

    if ( msgType->Equals( "h" ) )
    {
      return new Fix42::TradingSessionStatus();
    }

    if ( msgType->Equals( "D" ) )
    {
      return new Fix42::NewOrderSingle();
    }

    if ( msgType->Equals( "8" ) )
    {
      return new Fix42::ExecutionReport();
    }

    if ( msgType->Equals( "Q" ) )
    {
      return new Fix42::DontKnowTrade();
    }

    if ( msgType->Equals( "G" ) )
    {
      return new Fix42::OrderCancelReplaceRequest();
    }

    if ( msgType->Equals( "F" ) )
    {
      return new Fix42::OrderCancelRequest();
    }

    if ( msgType->Equals( "9" ) )
    {
      return new Fix42::OrderCancelReject();
    }

    if ( msgType->Equals( "H" ) )
    {
      return new Fix42::OrderStatusRequest();
    }

    if ( msgType->Equals( "J" ) )
    {
      return new Fix42::Allocation();
    }

    if ( msgType->Equals( "P" ) )
    {
      return new Fix42::AllocationACK();
    }

    if ( msgType->Equals( "T" ) )
    {
      return new Fix42::SettlementInstructions();
    }

    if ( msgType->Equals( "E" ) )
    {
      return new Fix42::NewOrderList();
    }

    if ( msgType->Equals( "N" ) )
    {
      return new Fix42::ListStatus();
    }

    if ( msgType->Equals( "L" ) )
    {
      return new Fix42::ListExecute();
    }

    if ( msgType->Equals( "K" ) )
    {
      return new Fix42::ListCancelRequest();
    }

    if ( msgType->Equals( "M" ) )
    {
      return new Fix42::ListStatusRequest();
    }

    if ( msgType->Equals( "j" ) )
    {
      return new Fix42::BusinessMessageReject();
    }

    return new Fix42::Message();
  }
};
}

