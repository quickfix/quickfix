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

#ifdef _MSC_VER
#pragma warning( disable : 4786 )
#endif

#include "Market.h"
#include <iostream>

bool Market::insert( const Order& order )
{
  if ( order.getSide() == Order::buy )
    m_bidOrders.insert( std::make_pair( order.getPrice(), order ) );
  else
    m_askOrders.insert( std::make_pair( order.getPrice(), order ) );
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
  int quantity = 0;

  if ( bid.getOpenQuantity() > ask.getOpenQuantity() )
    quantity = ask.getOpenQuantity();
  else
    quantity = bid.getOpenQuantity();

  bid.execute( price, quantity );
  ask.execute( price, quantity );
}

void Market::display()
{
  BidOrders::iterator iBid;
  AskOrders::iterator iAsk;

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
