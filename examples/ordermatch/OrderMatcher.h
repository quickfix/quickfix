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

#ifndef ORDERMATCH_ORDERMATCHER_H
#define ORDERMATCH_ORDERMATCHER_H

#include "Market.h"
#include <map>
#include <iostream>

class OrderMatcher
{
  typedef std::map < std::string, Market > Markets;
public:
  bool insert( const Order& order )
  {
    Markets::iterator i = m_markets.find( order.getSymbol() );
    if ( i == m_markets.end() )
      i = m_markets.insert( std::make_pair( order.getSymbol(), Market() ) ).first;
    return i->second.insert( order );
  }

  void erase( const Order& order )
  {
    Markets::iterator i = m_markets.find( order.getSymbol() );
    if ( i == m_markets.end() ) return ;
    i->second.erase( order );
  }

  Order& find( std::string symbol, Order::Side side, std::string id )
  {
    Markets::iterator i = m_markets.find( symbol );
    if ( i == m_markets.end() ) throw std::exception();
    return i->second.find( side, id );
  }

  bool match( std::string symbol, std::queue < Order > & orders )
  {
    Markets::iterator i = m_markets.find( symbol );
    if ( i == m_markets.end() ) return false;
    return i->second.match( orders );
  }

  bool match( std::queue < Order > & orders )
  {
    Markets::iterator i;
    for ( i = m_markets.begin(); i != m_markets.end(); ++i )
      i->second.match( orders );
    return orders.size() != 0;
  }

  void display( std::string symbol ) const
  {
    Markets::const_iterator i = m_markets.find( symbol );
    if ( i == m_markets.end() ) return ;
    i->second.display();
  }

  void display() const
  {
    std::cout << "SYMBOLS:" << std::endl;
    std::cout << "--------" << std::endl;

    Markets::const_iterator i;
    for ( i = m_markets.begin(); i != m_markets.end(); ++i )
      std::cout << i->first << std::endl;
  }

private:
  Markets m_markets;
};

#endif
