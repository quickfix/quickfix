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

#ifndef TRADECLIENT_APPLICATION_H
#define TRADECLIENT_APPLICATION_H

#include "quickfix/Application.h"
#include "quickfix/MessageCracker.h"
#include "quickfix/Values.h"
#include "quickfix/Messages.h"
#include "quickfix/Mutex.h"

#include <queue>

class Application :
      public FIX::Application,
      public FIX::MessageCracker
{
public:
  void run();

private:
  void onCreate( const FIX::SessionID& ) {}
  void onLogon( const FIX::SessionID& sessionID );
  void onLogout( const FIX::SessionID& sessionID );
  void toAdmin( FIX::Message&, const FIX::SessionID& ) {}
  void toApp( FIX::Message&, const FIX::SessionID& )
  throw( FIX::DoNotSend& );
  void fromAdmin( const FIX::Message&, const FIX::SessionID& )
  throw( FIX::FieldNotFound&, FIX::IncorrectDataFormat&, FIX::IncorrectTagValue&, FIX::RejectLogon& ) {}
  void fromApp( const FIX::Message& message, const FIX::SessionID& sessionID )
  throw( FIX::FieldNotFound&, FIX::IncorrectDataFormat&, FIX::IncorrectTagValue&, FIX::UnsupportedMessageType& );   

  void onMessage( const FIX40::ExecutionReport&, const FIX::SessionID& );
  void onMessage( const FIX40::OrderCancelReject&, const FIX::SessionID& );
  void onMessage( const FIX41::ExecutionReport&, const FIX::SessionID& );
  void onMessage( const FIX41::OrderCancelReject&, const FIX::SessionID& );
  void onMessage( const FIX42::ExecutionReport&, const FIX::SessionID& );
  void onMessage( const FIX42::OrderCancelReject&, const FIX::SessionID& );

  void queryEnterOrder();
  void queryCancelOrder();
  void queryReplaceOrder();
  void queryMarketDataRequest();

  FIX43::MarketDataRequest queryMarketDataRequest43();

  FIX40::NewOrderSingle queryNewOrderSingle40();
  FIX41::NewOrderSingle queryNewOrderSingle41();
  FIX42::NewOrderSingle queryNewOrderSingle42();
  FIX40::OrderCancelRequest queryOrderCancelRequest40();
  FIX41::OrderCancelRequest queryOrderCancelRequest41();
  FIX42::OrderCancelRequest queryOrderCancelRequest42();
  FIX40::OrderCancelReplaceRequest queryCancelReplaceRequest40();
  FIX41::OrderCancelReplaceRequest queryCancelReplaceRequest41();
  FIX42::OrderCancelReplaceRequest queryCancelReplaceRequest42();

  void queryHeader( FIX::Header& header );
  char queryAction();
  int queryVersion();
  bool queryConfirm( const std::string& query );

  FIX::SenderCompID querySenderCompID();
  FIX::TargetCompID queryTargetCompID();
  FIX::TargetSubID queryTargetSubID();
  FIX::ClOrdID queryClOrdID();
  FIX::OrigClOrdID queryOrigClOrdID();
  FIX::Symbol querySymbol();
  FIX::Side querySide();
  FIX::OrderQty queryOrderQty();
  FIX::OrdType queryOrdType();
  FIX::Price queryPrice();
  FIX::StopPx queryStopPx();
  FIX::TimeInForce queryTimeInForce();
};

#endif
