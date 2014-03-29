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

#ifndef ORDERMATCH_ORDER_H
#define ORDERMATCH_ORDER_H

#include <string>
#include <iomanip>
#include <ostream>

class Order
{
  friend std::ostream& operator<<( std::ostream&, const Order& );

public:
  enum Side { buy, sell };
  enum Type { market, limit };

  Order( const std::string& clientId, const std::string& symbol,
         const std::string& owner, const std::string& target,
         Side side, Type type, double price, long quantity )
: m_clientId( clientId ), m_symbol( symbol ), m_owner( owner ),
  m_target( target ), m_side( side ), m_type( type ), m_price( price ),
  m_quantity( quantity )
  {
    m_openQuantity = m_quantity;
    m_executedQuantity = 0;
    m_avgExecutedPrice = 0;
    m_lastExecutedPrice = 0;
    m_lastExecutedQuantity = 0;
  }

  const std::string& getClientID() const { return m_clientId; }
  const std::string& getSymbol() const { return m_symbol; }
  const std::string& getOwner() const { return m_owner; }
  const std::string& getTarget() const { return m_target; }
  Side getSide() const { return m_side; }
  Type getType() const { return m_type; }
  double getPrice() const { return m_price; }
  long getQuantity() const { return m_quantity; }

  long getOpenQuantity() const { return m_openQuantity; }
  long getExecutedQuantity() const { return m_executedQuantity; }
  double getAvgExecutedPrice() const { return m_avgExecutedPrice; }
  double getLastExecutedPrice() const { return m_lastExecutedPrice; }
  long getLastExecutedQuantity() const { return m_lastExecutedQuantity; }

  bool isFilled() const { return m_quantity == m_executedQuantity; }
  bool isClosed() const { return m_openQuantity == 0; }

  void execute( double price, long quantity )
  {
    m_avgExecutedPrice =
      ( ( quantity * price ) + ( m_avgExecutedPrice * m_executedQuantity ) )
      / ( quantity + m_executedQuantity );

    m_openQuantity -= quantity;
    m_executedQuantity += quantity;
    m_lastExecutedPrice = price;
    m_lastExecutedQuantity = quantity;
  }
  void cancel()
  {
    m_openQuantity = 0;
  }

private:
  std::string m_clientId;
  std::string m_symbol;
  std::string m_owner;
  std::string m_target;
  Side m_side;
  Type m_type;
  double m_price;
  long m_quantity;

  long m_openQuantity;
  long m_executedQuantity;
  double m_avgExecutedPrice;
  double m_lastExecutedPrice;
  long m_lastExecutedQuantity;
};

inline std::ostream& operator<<( std::ostream& ostream, const Order& order )
{
  return ostream
         << "ID: " << std::setw( 10 ) << "," << order.getClientID()
         << " OWNER: " << std::setw( 10 ) << "," << order.getOwner()
         << " PRICE: " << std::setw( 10 ) << "," << order.getPrice()
         << " QUANTITY: " << std::setw( 10 ) << "," << order.getQuantity();
}

#endif
