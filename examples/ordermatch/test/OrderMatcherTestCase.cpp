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
#pragma warning( disable : 4503 4355 4786 )
#endif

#include "OrderMatcherTestCase.h"

void OrderMatcherTestCase::matchFull::onRun( OrderMatcher& object )
{
  Order order1("1", "LNUX", "OWNER1", "TARGET", 
               Order::buy, Order::limit, 12.32, 100);
  Order order2("2", "LNUX", "OWNER2", "TARGET", 
               Order::sell, Order::limit, 12.32, 100);
  
  assert(object.insert(order1));
  assert(object.insert(order2));

  std::queue<Order> orders;
  assert(object.match("LNUX", orders));
  assert(orders.size() == 2);

  Order matchedOrder1 = orders.front();
  orders.pop();
  Order matchedOrder2 = orders.front();
  orders.pop();

  assert(matchedOrder1.getClientID() == "1");
  assert(matchedOrder1.isFilled());
  assert(matchedOrder1.isClosed());
  assert(matchedOrder1.getOpenQuantity() == 0);
  assert(matchedOrder1.getExecutedQuantity() == 100);
  assert(matchedOrder1.getAvgExecutedPrice() == 12.32);
  assert(matchedOrder1.getLastExecutedPrice() == 12.32);
  assert(matchedOrder1.getLastExecutedQuantity() == 100);

  assert(matchedOrder2.getClientID() == "2");
  assert(matchedOrder2.isFilled());
  assert(matchedOrder2.isClosed());
  assert(matchedOrder2.getOpenQuantity() == 0);
  assert(matchedOrder2.getExecutedQuantity() == 100);
  assert(matchedOrder2.getAvgExecutedPrice() == 12.32);
  assert(matchedOrder2.getLastExecutedPrice() == 12.32);
  assert(matchedOrder2.getLastExecutedQuantity() == 100);
}

void OrderMatcherTestCase::matchPartial::onRun( OrderMatcher& object )
{
  Order order1("1", "LNUX", "OWNER1", "TARGET", 
               Order::buy, Order::limit, 12.32, 100);
  Order order2("2", "LNUX", "OWNER2", "TARGET", 
               Order::sell, Order::limit, 12.32, 50);
  Order order3("3", "LNUX", "OWNER3", "TARGET", 
               Order::sell, Order::limit, 12.30, 50);
  
  assert(object.insert(order1));
  assert(object.insert(order2));

  std::queue<Order> orders;
  assert(object.match("LNUX", orders));
  assert(orders.size() == 2);

  Order matchedOrder1 = orders.front();
  orders.pop();
  Order matchedOrder2 = orders.front();
  orders.pop();

  assert(matchedOrder1.getClientID() == "1");
  assert(!matchedOrder1.isFilled());
  assert(!matchedOrder1.isClosed());
  assert(matchedOrder1.getOpenQuantity() == 50);
  assert(matchedOrder1.getExecutedQuantity() == 50);
  assert(matchedOrder1.getAvgExecutedPrice() == 12.32);
  assert(matchedOrder1.getLastExecutedPrice() == 12.32);
  assert(matchedOrder1.getLastExecutedQuantity() == 50);

  assert(matchedOrder2.getClientID() == "2");
  assert(matchedOrder2.isFilled());
  assert(matchedOrder2.isClosed());
  assert(matchedOrder2.getOpenQuantity() == 0);
  assert(matchedOrder2.getExecutedQuantity() == 50);
  assert(matchedOrder2.getAvgExecutedPrice() == 12.32);
  assert(matchedOrder2.getLastExecutedPrice() == 12.32);
  assert(matchedOrder2.getLastExecutedQuantity() == 50);

  assert(object.insert(order3));
  assert(object.match("LNUX", orders));
  assert(orders.size() == 2);

  matchedOrder1 = orders.front();
  orders.pop();
  Order matchedOrder3 = orders.front();
  orders.pop();

  assert(matchedOrder1.getClientID() == "1");
  assert(matchedOrder1.isFilled());
  assert(matchedOrder1.isClosed());
  assert(matchedOrder1.getOpenQuantity() == 0);
  assert(matchedOrder1.getExecutedQuantity() == 100);
  assert(matchedOrder1.getAvgExecutedPrice() == 12.31);
  assert(matchedOrder1.getLastExecutedPrice() == 12.30);
  assert(matchedOrder1.getLastExecutedQuantity() == 50);

  assert(matchedOrder3.getClientID() == "3");
  assert(matchedOrder3.isFilled());
  assert(matchedOrder3.isClosed());
  assert(matchedOrder3.getOpenQuantity() == 0);
  assert(matchedOrder3.getExecutedQuantity() == 50);
  assert(matchedOrder3.getAvgExecutedPrice() == 12.30);
  assert(matchedOrder3.getLastExecutedPrice() == 12.30);
  assert(matchedOrder3.getLastExecutedQuantity() == 50);
}

void OrderMatcherTestCase::matchTimePriority::onRun( OrderMatcher& object )
{
  Order order1("1", "LNUX", "OWNER1", "TARGET", 
               Order::sell, Order::limit, 12.32, 50);
  Order order2("2", "LNUX", "OWNER2", "TARGET", 
               Order::sell, Order::limit, 12.32, 50);
  Order order3("3", "LNUX", "OWNER3", "TARGET", 
               Order::buy, Order::limit, 12.32, 50);

  assert(object.insert(order1));
  assert(object.insert(order2));

  std::queue<Order> orders;
  assert(!object.match("LNUX", orders));
  assert(orders.size() == 0);

  assert(object.insert(order3));

  assert(object.match("LNUX", orders));
  assert(orders.size() == 2);

  Order matchedOrder3 = orders.front();
  orders.pop();
  Order matchedOrder1 = orders.front();
  orders.pop();

  assert(matchedOrder1.getClientID() == "1");
  assert(matchedOrder3.getClientID() == "3");
}

void OrderMatcherTestCase::matchPricePriority::onRun( OrderMatcher& object )
{
  Order order1("1", "LNUX", "OWNER1", "TARGET", 
               Order::sell, Order::limit, 12.32, 50);
  Order order2("2", "LNUX", "OWNER2", "TARGET", 
               Order::sell, Order::limit, 12.31, 50);
  Order order3("3", "LNUX", "OWNER3", "TARGET", 
               Order::buy, Order::limit, 12.32, 50);

  assert(object.insert(order1));
  assert(object.insert(order2));

  std::queue<Order> orders;
  assert(!object.match("LNUX", orders));
  assert(orders.size() == 0);

  assert(object.insert(order3));

  assert(object.match("LNUX", orders));
  assert(orders.size() == 2);

  Order matchedOrder3 = orders.front();
  orders.pop();
  Order matchedOrder2 = orders.front();
  orders.pop();

  assert(matchedOrder2.getClientID() == "2");
  assert(matchedOrder3.getClientID() == "3");
}

void OrderMatcherTestCase::matchMultiple::onRun( OrderMatcher& object )
{
  Order order1("1", "LNUX", "OWNER1", "TARGET", 
               Order::sell, Order::limit, 12.32, 50);
  Order order2("2", "LNUX", "OWNER2", "TARGET", 
               Order::sell, Order::limit, 12.30, 50);
  Order order3("3", "LNUX", "OWNER3", "TARGET", 
               Order::buy, Order::limit, 12.32, 100);

  assert(object.insert(order1));
  assert(object.insert(order2));
  assert(object.insert(order3));

  std::queue<Order> orders;
  assert(object.match("LNUX", orders));
  assert(orders.size() == 4);

  Order matchedOrder3_1 = orders.front();
  orders.pop();
  Order matchedOrder2 = orders.front();
  orders.pop();
  Order matchedOrder3_2 = orders.front();
  orders.pop();
  Order matchedOrder1 = orders.front();
  orders.pop();

  assert(matchedOrder3_1.getClientID() == "3");
  assert(!matchedOrder3_1.isFilled());
  assert(!matchedOrder3_1.isClosed());
  assert(matchedOrder3_1.getOpenQuantity() == 50);
  assert(matchedOrder3_1.getExecutedQuantity() == 50);
  assert(matchedOrder3_1.getAvgExecutedPrice() == 12.30);
  assert(matchedOrder3_1.getLastExecutedPrice() == 12.30);
  assert(matchedOrder3_1.getLastExecutedQuantity() == 50);

  assert(matchedOrder2.getClientID() == "2");
  assert(matchedOrder2.isFilled());
  assert(matchedOrder2.isClosed());
  assert(matchedOrder2.getOpenQuantity() == 0);
  assert(matchedOrder2.getExecutedQuantity() == 50);
  assert(matchedOrder2.getAvgExecutedPrice() == 12.30);
  assert(matchedOrder2.getLastExecutedPrice() == 12.30);
  assert(matchedOrder2.getLastExecutedQuantity() == 50);

  assert(matchedOrder3_2.getClientID() == "3");
  assert(matchedOrder3_2.isFilled());
  assert(matchedOrder3_2.isClosed());
  assert(matchedOrder3_2.getOpenQuantity() == 0);
  assert(matchedOrder3_2.getExecutedQuantity() == 100);
  assert(matchedOrder3_2.getAvgExecutedPrice() == 12.31);
  assert(matchedOrder3_2.getLastExecutedPrice() == 12.32);
  assert(matchedOrder3_2.getLastExecutedQuantity() == 50);

  assert(matchedOrder1.getClientID() == "1");
  assert(matchedOrder1.isFilled());
  assert(matchedOrder1.isClosed());
  assert(matchedOrder1.getOpenQuantity() == 0);
  assert(matchedOrder1.getExecutedQuantity() == 50);
  assert(matchedOrder1.getAvgExecutedPrice() == 12.32);
  assert(matchedOrder1.getLastExecutedPrice() == 12.32);
  assert(matchedOrder1.getLastExecutedQuantity() == 50);
}

void OrderMatcherTestCase::overMatch::onRun( OrderMatcher& object )
{
  Order order1("1", "LNUX", "OWNER1", "TARGET", 
               Order::buy, Order::limit, 12.32, 100);
  Order order2("2", "LNUX", "OWNER2", "TARGET", 
               Order::sell, Order::limit, 12.32, 110);
  Order order3("3", "LNUX", "OWNER3", "TARGET", 
               Order::buy, Order::limit, 12.32, 100);

  assert(object.insert(order1));
  assert(object.insert(order2));

  std::queue<Order> orders;
  assert(object.match("LNUX", orders));
  assert(orders.size() == 2);

  Order matchedOrder1 = orders.front();
  orders.pop();
  Order matchedOrder2 = orders.front();
  orders.pop();
  
  assert(matchedOrder1.getClientID() == "1");
  assert(matchedOrder1.isFilled());
  assert(matchedOrder1.isClosed());
  assert(matchedOrder1.getOpenQuantity() == 0);
  assert(matchedOrder1.getExecutedQuantity() == 100);
  assert(matchedOrder1.getAvgExecutedPrice() == 12.32);
  assert(matchedOrder1.getLastExecutedPrice() == 12.32);
  assert(matchedOrder1.getLastExecutedQuantity() == 100);

  assert(matchedOrder2.getClientID() == "2");
  assert(!matchedOrder2.isFilled());
  assert(!matchedOrder2.isClosed());
  assert(matchedOrder2.getOpenQuantity() == 10);
  assert(matchedOrder2.getExecutedQuantity() == 100);
  assert(matchedOrder2.getAvgExecutedPrice() == 12.32);
  assert(matchedOrder2.getLastExecutedPrice() == 12.32);
  assert(matchedOrder2.getLastExecutedQuantity() == 100);

  assert(object.insert(order3));
  assert(object.match("LNUX", orders));
  assert(orders.size() == 2);

  Order matchedOrder3 = orders.front();
  orders.pop();
  matchedOrder2 = orders.front();
  orders.pop();

  assert(matchedOrder3.getClientID() == "3");
  assert(!matchedOrder3.isFilled());
  assert(!matchedOrder3.isClosed());
  assert(matchedOrder3.getOpenQuantity() == 90);
  assert(matchedOrder3.getExecutedQuantity() == 10);
  assert(matchedOrder3.getAvgExecutedPrice() == 12.32);
  assert(matchedOrder3.getLastExecutedPrice() == 12.32);
  assert(matchedOrder3.getLastExecutedQuantity() == 10);

  assert(matchedOrder2.getClientID() == "2");
  assert(matchedOrder2.isFilled());
  assert(matchedOrder2.isClosed());
  assert(matchedOrder2.getOpenQuantity() == 0);
  assert(matchedOrder2.getExecutedQuantity() == 110);
  assert(matchedOrder2.getAvgExecutedPrice() == 12.32);
  assert(matchedOrder2.getLastExecutedPrice() == 12.32);
  assert(matchedOrder2.getLastExecutedQuantity() == 10);

}


