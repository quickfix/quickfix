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

#ifndef ORDERMATCH_APPLICATION_H
#define ORDERMATCH_APPLICATION_H

#include "quickfix/Application.h"
#include "quickfix/MessageCracker.h"
#include "quickfix/Values.h"
#include "quickfix/Utility.h"
#include "quickfix/Mutex.h"
#include "IDGenerator.h"
#include "OrderMatcher.h"
#include "Order.h"
#include <queue>
#include <iostream>

class Application
      : public FIX::Application,
        public FIX::MessageCracker
{
  // Application overloads
  void onCreate( const FIX::SessionID& ) {}
  void onLogon( const FIX::SessionID& sessionID );
  void onLogout( const FIX::SessionID& sessionID );
  void toAdmin( FIX::Message&, const FIX::SessionID& ) {}
  void toApp( FIX::Message&, const FIX::SessionID& )
  throw( FIX::DoNotSend& ) {}
  void fromAdmin( const FIX::Message&, const FIX::SessionID& )
  throw( FIX::FieldNotFound&, FIX::IncorrectDataFormat&, FIX::IncorrectTagValue&, FIX::RejectLogon& ) {}
  void fromApp( const FIX::Message& message, const FIX::SessionID& sessionID )
  throw( FIX::FieldNotFound&, FIX::IncorrectDataFormat&, FIX::IncorrectTagValue&, FIX::UnsupportedMessageType& );

  // MessageCracker overloads
  void onMessage( const FIX42::NewOrderSingle&, const FIX::SessionID& );
  void onMessage( const FIX42::OrderCancelRequest&, const FIX::SessionID& );
  void onMessage( const FIX42::MarketDataRequest&, const FIX::SessionID& );
  void onMessage( const FIX43::MarketDataRequest&, const FIX::SessionID& );

  // Order functionality
  void processOrder( const Order& );
  void processCancel( const std::string& id, const std::string& symbol, Order::Side );

  void updateOrder( const Order&, char status );
  void rejectOrder( const Order& order )
  { updateOrder( order, FIX::OrdStatus_REJECTED ); }
  void acceptOrder( const Order& order )
  { updateOrder( order, FIX::OrdStatus_NEW ); }
  void fillOrder( const Order& order )
  {
    updateOrder( order,
                 order.isFilled() ? FIX::OrdStatus_FILLED
                 : FIX::OrdStatus_PARTIALLY_FILLED );
  }
  void cancelOrder( const Order& order )
  { updateOrder( order, FIX::OrdStatus_CANCELED ); }

  void rejectOrder( const FIX::SenderCompID&, const FIX::TargetCompID&,
                    const FIX::ClOrdID& clOrdID, const FIX::Symbol& symbol,
                    const FIX::Side& side, const std::string& message );

  // Type conversions
  Order::Side convert( const FIX::Side& );
  Order::Type convert( const FIX::OrdType& );
  FIX::Side convert( Order::Side );
  FIX::OrdType convert( Order::Type );

  OrderMatcher m_orderMatcher;
  IDGenerator m_generator;

public: 
  const OrderMatcher& orderMatcher() { return m_orderMatcher; }
};

#endif
