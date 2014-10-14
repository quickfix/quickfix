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

#ifdef _MSC_VER
#pragma warning( disable : 4786 )
#endif

#include "Market.h"
#include <iostream>

bool Market::insert( const Order& order )
{
  if ( order.getSide() == Order::buy )
    m_bidOrders.insert( BidOrders::value_type( order.getPrice(), order ) );
  else
    m_askOrders.insert( AskOrders::value_type( order.getPrice(), order ) );
  return true;
}

void Market::erase( const Order& order )
{
  std::string id = order.getClientID();
  if ( order.getSide() == Order::buy )
  {
    BidOrders::iterator i;
    for ( i = m_bidOrders.begin(); i != m_bidOrders.end(); ++i )
      if ( i->second.getClientID() == id )
      {
        m_bidOrders.erase( i );
        return ;
      }
  }
  else if ( order.getSide() == Order::sell )
  {
    AskOrders::iterator i;
    for ( i = m_askOrders.begin(); i != m_askOrders.end(); ++i )
      if ( i->second.getClientID() == id )
      {
        m_askOrders.erase( i );
        return ;
      }
  }
}

bool Market::match( std::queue < Order > & orders )
{
  while ( true )
  {
    if ( !m_bidOrders.size() || !m_askOrders.size() )
      return orders.size() != 0;

    BidOrders::iterator iBid = m_bidOrders.begin();
    AskOrders::iterator iAsk = m_askOrders.begin();

    if ( iBid->second.getPrice() >= iAsk->second.getPrice() )
    {
      Order & bid = iBid->second;
      Order& ask = iAsk->second;

      match( bid, ask );
      orders.push( bid );
      orders.push( ask );

      if ( bid.isClosed() ) m_bidOrders.erase( iBid );
      if ( ask.isClosed() ) m_askOrders.erase( iAsk );
    }
    else
      return orders.size() != 0;
  }
}

Order& Market::find( Order::Side side, std::string id )
{
  if ( side == Order::buy )
  {
    BidOrders::iterator i;
    for ( i = m_bidOrders.begin(); i != m_bidOrders.end(); ++i )
      if ( i->second.getClientID() == id ) return i->second;
  }
  else if ( side == Order::sell )
  {
    AskOrders::iterator i;
    for ( i = m_askOrders.begin(); i != m_askOrders.end(); ++i )
      if ( i->second.getClientID() == id ) return i->second;
  }
  throw std::exception();
}

void Market::match( Order& bid, Order& ask )
{
  double price = ask.getPrice();
  long quantity = 0;

  if ( bid.getOpenQuantity() > ask.getOpenQuantity() )
    quantity = ask.getOpenQuantity();
  else
    quantity = bid.getOpenQuantity();

  bid.execute( price, quantity );
  ask.execute( price, quantity );
}

void Market::display() const
{
  BidOrders::const_iterator iBid;
  AskOrders::const_iterator iAsk;

  std::cout << "BIDS:" << std::endl;
  std::cout << "-----" << std::endl << std::endl;
  for ( iBid = m_bidOrders.begin(); iBid != m_bidOrders.end(); ++iBid )
    std::cout << iBid->second << std::endl;

  std::cout << std::endl << std::endl;

  std::cout << "ASKS:" << std::endl;
  std::cout << "-----" << std::endl << std::endl;
  for ( iAsk = m_askOrders.begin(); iAsk != m_askOrders.end(); ++iAsk )
    std::cout << iAsk->second << std::endl;
}
