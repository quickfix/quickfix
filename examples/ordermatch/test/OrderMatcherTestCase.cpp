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
#pragma warning( disable : 4503 4355 4786 )
#else
#include "config.h"
#endif

#include <UnitTest++.h>
#include "OrderMatcher.h"

TEST( matchFull )
{
  OrderMatcher object;
  Order order1("1", "LNUX", "OWNER1", "TARGET",
               Order::buy, Order::limit, 12.32, 100);
  Order order2("2", "LNUX", "OWNER2", "TARGET",
               Order::sell, Order::limit, 12.32, 100);

  CHECK(object.insert(order1));
  CHECK(object.insert(order2));

  std::queue<Order> orders;
  CHECK(object.match("LNUX", orders));
  CHECK_EQUAL(1U, orders.size());

  Order matchedOrder1 = orders.front();
  orders.pop();
  Order matchedOrder2 = orders.front();
  orders.pop();

  CHECK_EQUAL("1", matchedOrder1.getClientID());
  CHECK(matchedOrder1.isFilled());
  CHECK(matchedOrder1.isClosed());
  CHECK_EQUAL(0, matchedOrder1.getOpenQuantity());
  CHECK_EQUAL(100, matchedOrder1.getExecutedQuantity());
  CHECK_EQUAL(12.32, matchedOrder1.getAvgExecutedPrice());
  CHECK_EQUAL(12.32, matchedOrder1.getLastExecutedPrice());
  CHECK_EQUAL(100, matchedOrder1.getLastExecutedQuantity());

  CHECK_EQUAL("2", matchedOrder2.getClientID());
  CHECK(matchedOrder2.isFilled());
  CHECK(matchedOrder2.isClosed());
  CHECK_EQUAL(0, matchedOrder2.getOpenQuantity());
  CHECK_EQUAL(100, matchedOrder2.getExecutedQuantity());
  CHECK_EQUAL(12.32, matchedOrder2.getAvgExecutedPrice());
  CHECK_EQUAL(12.32, matchedOrder2.getLastExecutedPrice());
  CHECK_EQUAL(100, matchedOrder2.getLastExecutedQuantity());
}

TEST( matchPartial )
{
  OrderMatcher object;
  Order order1("1", "LNUX", "OWNER1", "TARGET",
               Order::buy, Order::limit, 12.32, 100);
  Order order2("2", "LNUX", "OWNER2", "TARGET",
               Order::sell, Order::limit, 12.32, 50);
  Order order3("3", "LNUX", "OWNER3", "TARGET",
               Order::sell, Order::limit, 12.30, 50);

  CHECK(object.insert(order1));
  CHECK(object.insert(order2));

  std::queue<Order> orders;
  CHECK(object.match("LNUX", orders));
  CHECK_EQUAL(2U, orders.size());

  Order matchedOrder1 = orders.front();
  orders.pop();
  Order matchedOrder2 = orders.front();
  orders.pop();

  CHECK_EQUAL("1", matchedOrder1.getClientID());
  CHECK(!matchedOrder1.isFilled());
  CHECK(!matchedOrder1.isClosed());
  CHECK_EQUAL(50, matchedOrder1.getOpenQuantity());
  CHECK_EQUAL(50, matchedOrder1.getExecutedQuantity());
  CHECK_EQUAL(12.32, matchedOrder1.getAvgExecutedPrice());
  CHECK_EQUAL(12.32, matchedOrder1.getLastExecutedPrice());
  CHECK_EQUAL(50, matchedOrder1.getLastExecutedQuantity());

  CHECK_EQUAL("2", matchedOrder2.getClientID());
  CHECK(matchedOrder2.isFilled());
  CHECK(matchedOrder2.isClosed());
  CHECK_EQUAL(0, matchedOrder2.getOpenQuantity());
  CHECK_EQUAL(50, matchedOrder2.getExecutedQuantity());
  CHECK_EQUAL(12.32, matchedOrder2.getAvgExecutedPrice());
  CHECK_EQUAL(12.32, matchedOrder2.getLastExecutedPrice());
  CHECK_EQUAL(50, matchedOrder2.getLastExecutedQuantity());

  CHECK(object.insert(order3));
  CHECK(object.match("LNUX", orders));
  CHECK_EQUAL(2U, orders.size());

  matchedOrder1 = orders.front();
  orders.pop();
  Order matchedOrder3 = orders.front();
  orders.pop();

  CHECK_EQUAL("1", matchedOrder1.getClientID());
  CHECK(!matchedOrder1.isFilled());
  CHECK(!matchedOrder1.isClosed());
  CHECK_EQUAL(0, matchedOrder1.getOpenQuantity());
  CHECK_EQUAL(100, matchedOrder1.getExecutedQuantity());
  CHECK_EQUAL(12.31, matchedOrder1.getAvgExecutedPrice());
  CHECK_EQUAL(12.30, matchedOrder1.getLastExecutedPrice());
  CHECK_EQUAL(50, matchedOrder1.getLastExecutedQuantity());

  CHECK_EQUAL("3", matchedOrder3.getClientID());
  CHECK(matchedOrder3.isFilled());
  CHECK(matchedOrder3.isClosed());
  CHECK_EQUAL(0, matchedOrder3.getOpenQuantity());
  CHECK_EQUAL(50, matchedOrder3.getExecutedQuantity());
  CHECK_EQUAL(12.30, matchedOrder3.getAvgExecutedPrice());
  CHECK_EQUAL(12.30, matchedOrder3.getLastExecutedPrice());
  CHECK_EQUAL(50, matchedOrder3.getLastExecutedQuantity());
}

TEST( matchTimePriority )
{
  OrderMatcher object;
  Order order1("1", "LNUX", "OWNER1", "TARGET",
               Order::sell, Order::limit, 12.32, 50);
  Order order2("2", "LNUX", "OWNER2", "TARGET",
               Order::sell, Order::limit, 12.32, 50);
  Order order3("3", "LNUX", "OWNER3", "TARGET",
               Order::buy, Order::limit, 12.32, 50);

  CHECK(object.insert(order1));
  CHECK(object.insert(order2));

  std::queue<Order> orders;
  CHECK(!object.match("LNUX", orders));
  CHECK_EQUAL(0U, orders.size());

  CHECK(object.insert(order3));

  CHECK(object.match("LNUX", orders));
  CHECK_EQUAL(2U, orders.size());

  Order matchedOrder3 = orders.front();
  orders.pop();
  Order matchedOrder1 = orders.front();
  orders.pop();

  CHECK_EQUAL("1", matchedOrder1.getClientID());
  CHECK_EQUAL("3", matchedOrder3.getClientID());
}

TEST( matchPricePriority )
{  
  OrderMatcher object;
  Order order1("1", "LNUX", "OWNER1", "TARGET",
               Order::sell, Order::limit, 12.32, 50);
  Order order2("2", "LNUX", "OWNER2", "TARGET",
               Order::sell, Order::limit, 12.31, 50);
  Order order3("3", "LNUX", "OWNER3", "TARGET",
               Order::buy, Order::limit, 12.32, 50);

  CHECK(object.insert(order1));
  CHECK(object.insert(order2));

  std::queue<Order> orders;
  CHECK(!object.match("LNUX", orders));
  CHECK_EQUAL(0U, orders.size());

  CHECK(object.insert(order3));

  CHECK(object.match("LNUX", orders));
  CHECK_EQUAL(2U, orders.size());

  Order matchedOrder3 = orders.front();
  orders.pop();
  Order matchedOrder2 = orders.front();
  orders.pop();

  CHECK_EQUAL("2", matchedOrder2.getClientID());
  CHECK_EQUAL("3", matchedOrder3.getClientID());
}

TEST( matchMultiple )
{
  OrderMatcher object;
  Order order1("1", "LNUX", "OWNER1", "TARGET",
               Order::sell, Order::limit, 12.32, 50);
  Order order2("2", "LNUX", "OWNER2", "TARGET",
               Order::sell, Order::limit, 12.30, 50);
  Order order3("3", "LNUX", "OWNER3", "TARGET",
               Order::buy, Order::limit, 12.32, 100);

  CHECK(object.insert(order1));
  CHECK(object.insert(order2));
  CHECK(object.insert(order3));

  std::queue<Order> orders;
  CHECK(object.match("LNUX", orders));
  CHECK_EQUAL(4U, orders.size());

  Order matchedOrder3_1 = orders.front();
  orders.pop();
  Order matchedOrder2 = orders.front();
  orders.pop();
  Order matchedOrder3_2 = orders.front();
  orders.pop();
  Order matchedOrder1 = orders.front();
  orders.pop();

  CHECK_EQUAL("3", matchedOrder3_1.getClientID());
  CHECK(!matchedOrder3_1.isFilled());
  CHECK(!matchedOrder3_1.isClosed());
  CHECK_EQUAL(50, matchedOrder3_1.getOpenQuantity());
  CHECK_EQUAL(50, matchedOrder3_1.getExecutedQuantity());
  CHECK_EQUAL(12.30, matchedOrder3_1.getAvgExecutedPrice());
  CHECK_EQUAL(12.30, matchedOrder3_1.getLastExecutedPrice());
  CHECK_EQUAL(50, matchedOrder3_1.getLastExecutedQuantity());

  CHECK_EQUAL("2", matchedOrder2.getClientID());
  CHECK(matchedOrder2.isFilled());
  CHECK(matchedOrder2.isClosed());
  CHECK_EQUAL(0, matchedOrder2.getOpenQuantity());
  CHECK_EQUAL(50, matchedOrder2.getExecutedQuantity());
  CHECK_EQUAL(12.3, matchedOrder2.getAvgExecutedPrice());
  CHECK_EQUAL(12.3, matchedOrder2.getLastExecutedPrice());
  CHECK_EQUAL(50, matchedOrder2.getLastExecutedQuantity());

  CHECK_EQUAL("3", matchedOrder3_2.getClientID());
  CHECK(matchedOrder3_2.isFilled());
  CHECK(matchedOrder3_2.isClosed());
  CHECK_EQUAL(0, matchedOrder3_2.getOpenQuantity());
  CHECK_EQUAL(100, matchedOrder3_2.getExecutedQuantity());
  CHECK_EQUAL(12.31, matchedOrder3_2.getAvgExecutedPrice());
  CHECK_EQUAL(12.32, matchedOrder3_2.getLastExecutedPrice());
  CHECK_EQUAL(50, matchedOrder3_2.getLastExecutedQuantity());

  CHECK_EQUAL("1", matchedOrder1.getClientID());
  CHECK(matchedOrder1.isFilled());
  CHECK(matchedOrder1.isClosed());
  CHECK_EQUAL(0, matchedOrder1.getOpenQuantity());
  CHECK_EQUAL(50, matchedOrder1.getExecutedQuantity());
  CHECK_EQUAL(12.32, matchedOrder1.getAvgExecutedPrice());
  CHECK_EQUAL(12.32, matchedOrder1.getLastExecutedPrice());
  CHECK_EQUAL(50, matchedOrder1.getLastExecutedQuantity());
}

TEST( overMatch )
{
  OrderMatcher object;
  Order order1("1", "LNUX", "OWNER1", "TARGET",
               Order::buy, Order::limit, 12.32, 100);
  Order order2("2", "LNUX", "OWNER2", "TARGET",
               Order::sell, Order::limit, 12.32, 110);
  Order order3("3", "LNUX", "OWNER3", "TARGET",
               Order::buy, Order::limit, 12.32, 100);

  CHECK(object.insert(order1));
  CHECK(object.insert(order2));

  std::queue<Order> orders;
  CHECK(object.match("LNUX", orders));
  CHECK_EQUAL(2U, orders.size());

  Order matchedOrder1 = orders.front();
  orders.pop();
  Order matchedOrder2 = orders.front();
  orders.pop();

  CHECK_EQUAL("1", matchedOrder1.getClientID());
  CHECK(matchedOrder1.isFilled());
  CHECK(matchedOrder1.isClosed());
  CHECK_EQUAL(0, matchedOrder1.getOpenQuantity());
  CHECK_EQUAL(100, matchedOrder1.getExecutedQuantity());
  CHECK_EQUAL(12.32, matchedOrder1.getAvgExecutedPrice());
  CHECK_EQUAL(12.32, matchedOrder1.getLastExecutedPrice());
  CHECK_EQUAL(100, matchedOrder1.getLastExecutedQuantity());

  CHECK_EQUAL("2", matchedOrder2.getClientID());
  CHECK(!matchedOrder2.isFilled());
  CHECK(!matchedOrder2.isClosed());
  CHECK_EQUAL(10, matchedOrder2.getOpenQuantity());
  CHECK_EQUAL(100, matchedOrder2.getExecutedQuantity());
  CHECK_EQUAL(12.32, matchedOrder2.getAvgExecutedPrice());
  CHECK_EQUAL(12.32, matchedOrder2.getLastExecutedPrice());
  CHECK_EQUAL(100, matchedOrder2.getLastExecutedQuantity());

  CHECK(object.insert(order3));
  CHECK(object.match("LNUX", orders));
  CHECK_EQUAL(2U, orders.size());

  Order matchedOrder3 = orders.front();
  orders.pop();
  matchedOrder2 = orders.front();
  orders.pop();

  CHECK_EQUAL("3", matchedOrder3.getClientID());
  CHECK(!matchedOrder3.isFilled());
  CHECK(!matchedOrder3.isClosed());
  CHECK_EQUAL(90, matchedOrder3.getOpenQuantity());
  CHECK_EQUAL(10, matchedOrder3.getExecutedQuantity());
  CHECK_EQUAL(12.32, matchedOrder3.getAvgExecutedPrice());
  CHECK_EQUAL(12.32, matchedOrder3.getLastExecutedPrice());
  CHECK_EQUAL(10, matchedOrder3.getLastExecutedQuantity());

  CHECK_EQUAL("2", matchedOrder2.getClientID());
  CHECK(matchedOrder2.isFilled());
  CHECK(matchedOrder2.isClosed());
  CHECK_EQUAL(0, matchedOrder2.getOpenQuantity());
  CHECK_EQUAL(110, matchedOrder2.getExecutedQuantity());
  CHECK_EQUAL(12.32, matchedOrder2.getAvgExecutedPrice());
  CHECK_EQUAL(12.32, matchedOrder2.getLastExecutedPrice());
  CHECK_EQUAL(10, matchedOrder2.getLastExecutedQuantity());

}
