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

#ifndef ORDERMATCH_ORDER_H
#define ORDERMATCH_ORDER_H

#include <string>
#include <iomanip>

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
