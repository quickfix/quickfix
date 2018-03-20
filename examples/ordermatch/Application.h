/* -*- C++ -*- */

/****************************************************************************
** Copyright (c) 2001-2014
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

#ifndef ORDERMATCH_APPLICATION_H
#define ORDERMATCH_APPLICATION_H

#include "IDGenerator.h"
#include "OrderMatcher.h"
#include "Order.h"
#include <queue>
#include <iostream>

#include "quickfix/Application.h"
#include "quickfix/MessageCracker.h"
#include "quickfix/Values.h"
#include "quickfix/Utility.h"
#include "quickfix/Mutex.h"

#include "quickfix/fix42/NewOrderSingle.h"
#include "quickfix/fix42/OrderCancelRequest.h"
#include "quickfix/fix42/MarketDataRequest.h"
#include "quickfix/fix43/MarketDataRequest.h"

class Application
      : public FIX::Application,
        public FIX::MessageCracker
{
  // Application overloads
  void onCreate( const FIX::SessionID& ) {}
  void onLogon( const FIX::SessionID& sessionID );
  void onLogout( const FIX::SessionID& sessionID );
  void toAdmin( FIX::Message&, const FIX::SessionID& ) {}
  void toApp( FIX::Message&, const FIX::SessionID& ) {}
  void fromAdmin( const FIX::Message&, const FIX::SessionID& ) {}
  void fromApp( const FIX::Message& message, const FIX::SessionID& sessionID );

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
