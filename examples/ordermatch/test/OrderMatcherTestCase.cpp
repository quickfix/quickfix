/****************************************************************************
** Copyright (c) quickfixengine.org  All rights reserved.
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
#pragma warning( disable : 4503 4355 4786 )
#else
#include "config.h"
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


