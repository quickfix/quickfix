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

#include <gtest/gtest.h>
#include "../OrderMatcher.h"

TEST(OrderMatcherTests,  matchFull )
{
  OrderMatcher object;
  Order order1("1", "LNUX", "OWNER1", "TARGET",
               Order::buy, Order::limit, 12.32, 100);
  Order order2("2", "LNUX", "OWNER2", "TARGET",
               Order::sell, Order::limit, 12.32, 100);

  ASSERT_TRUE(object.insert(order1));
  ASSERT_TRUE(object.insert(order2));

  std::queue<Order> orders;
  ASSERT_TRUE(object.match("LNUX", orders));
  ASSERT_EQ(2U, orders.size());

  Order matchedOrder1 = orders.front();
  orders.pop();
  Order matchedOrder2 = orders.front();
  orders.pop();

  ASSERT_EQ("1", matchedOrder1.getClientID());
  ASSERT_TRUE(matchedOrder1.isFilled());
  ASSERT_TRUE(matchedOrder1.isClosed());
  ASSERT_EQ(0, matchedOrder1.getOpenQuantity());
  ASSERT_EQ(100, matchedOrder1.getExecutedQuantity());
  ASSERT_DOUBLE_EQ(12.32, matchedOrder1.getAvgExecutedPrice());
  ASSERT_DOUBLE_EQ(12.32, matchedOrder1.getLastExecutedPrice());
  ASSERT_EQ(100, matchedOrder1.getLastExecutedQuantity());

  ASSERT_EQ("2", matchedOrder2.getClientID());
  ASSERT_TRUE(matchedOrder2.isFilled());
  ASSERT_TRUE(matchedOrder2.isClosed());
  ASSERT_EQ(0, matchedOrder2.getOpenQuantity());
  ASSERT_EQ(100, matchedOrder2.getExecutedQuantity());
  ASSERT_DOUBLE_EQ(12.32, matchedOrder2.getAvgExecutedPrice());
  ASSERT_DOUBLE_EQ(12.32, matchedOrder2.getLastExecutedPrice());
  ASSERT_EQ(100, matchedOrder2.getLastExecutedQuantity());
}

TEST( OrderMatcherTests,  matchPartial )
{
  OrderMatcher object;
  Order order1("1", "LNUX", "OWNER1", "TARGET",
               Order::buy, Order::limit, 12.32, 100);
  Order order2("2", "LNUX", "OWNER2", "TARGET",
               Order::sell, Order::limit, 12.32, 50);
  Order order3("3", "LNUX", "OWNER3", "TARGET",
               Order::sell, Order::limit, 12.30, 50);

  ASSERT_TRUE(object.insert(order1));
  ASSERT_TRUE(object.insert(order2));

  std::queue<Order> orders;
  ASSERT_TRUE(object.match("LNUX", orders));
  ASSERT_EQ(2U, orders.size());

  Order matchedOrder1 = orders.front();
  orders.pop();
  Order matchedOrder2 = orders.front();
  orders.pop();

  ASSERT_EQ("1", matchedOrder1.getClientID());
  ASSERT_TRUE(!matchedOrder1.isFilled());
  ASSERT_TRUE(!matchedOrder1.isClosed());
  ASSERT_EQ(50, matchedOrder1.getOpenQuantity());
  ASSERT_EQ(50, matchedOrder1.getExecutedQuantity());
  ASSERT_DOUBLE_EQ(12.32, matchedOrder1.getAvgExecutedPrice());
  ASSERT_DOUBLE_EQ(12.32, matchedOrder1.getLastExecutedPrice());
  ASSERT_EQ(50, matchedOrder1.getLastExecutedQuantity());

  ASSERT_EQ("2", matchedOrder2.getClientID());
  ASSERT_TRUE(matchedOrder2.isFilled());
  ASSERT_TRUE(matchedOrder2.isClosed());
  ASSERT_EQ(0, matchedOrder2.getOpenQuantity());
  ASSERT_EQ(50, matchedOrder2.getExecutedQuantity());
  ASSERT_DOUBLE_EQ(12.32, matchedOrder2.getAvgExecutedPrice());
  ASSERT_DOUBLE_EQ(12.32, matchedOrder2.getLastExecutedPrice());
  ASSERT_EQ(50, matchedOrder2.getLastExecutedQuantity());

  ASSERT_TRUE(object.insert(order3));
  ASSERT_TRUE(object.match("LNUX", orders));
  ASSERT_EQ(2U, orders.size());

  matchedOrder1 = orders.front();
  orders.pop();
  Order matchedOrder3 = orders.front();
  orders.pop();

  ASSERT_EQ("1", matchedOrder1.getClientID());
  ASSERT_TRUE(matchedOrder1.isFilled());
  ASSERT_TRUE(matchedOrder1.isClosed());
  ASSERT_EQ(0, matchedOrder1.getOpenQuantity());
  ASSERT_EQ(100, matchedOrder1.getExecutedQuantity());
  ASSERT_DOUBLE_EQ(12.31, matchedOrder1.getAvgExecutedPrice());
  ASSERT_DOUBLE_EQ(12.30, matchedOrder1.getLastExecutedPrice());
  ASSERT_EQ(50, matchedOrder1.getLastExecutedQuantity());

  ASSERT_EQ("3", matchedOrder3.getClientID());
  ASSERT_TRUE(matchedOrder3.isFilled());
  ASSERT_TRUE(matchedOrder3.isClosed());
  ASSERT_EQ(0, matchedOrder3.getOpenQuantity());
  ASSERT_EQ(50, matchedOrder3.getExecutedQuantity());
  ASSERT_DOUBLE_EQ(12.30, matchedOrder3.getAvgExecutedPrice());
  ASSERT_DOUBLE_EQ(12.30, matchedOrder3.getLastExecutedPrice());
  ASSERT_EQ(50, matchedOrder3.getLastExecutedQuantity());
}

TEST(OrderMatcherTests,  matchTimePriority )
{
  OrderMatcher object;
  Order order1("1", "LNUX", "OWNER1", "TARGET",
               Order::sell, Order::limit, 12.32, 50);
  Order order2("2", "LNUX", "OWNER2", "TARGET",
               Order::sell, Order::limit, 12.32, 50);
  Order order3("3", "LNUX", "OWNER3", "TARGET",
               Order::buy, Order::limit, 12.32, 50);

  ASSERT_TRUE(object.insert(order1));
  ASSERT_TRUE(object.insert(order2));

  std::queue<Order> orders;
  ASSERT_TRUE(!object.match("LNUX", orders));
  ASSERT_EQ(0U, orders.size());

  ASSERT_TRUE(object.insert(order3));

  ASSERT_TRUE(object.match("LNUX", orders));
  ASSERT_EQ(2U, orders.size());

  Order matchedOrder3 = orders.front();
  orders.pop();
  Order matchedOrder1 = orders.front();
  orders.pop();

  ASSERT_EQ("1", matchedOrder1.getClientID());
  ASSERT_EQ("3", matchedOrder3.getClientID());
}

TEST( OrderMatcherTests,  matchPricePriority )
{  
  OrderMatcher object;
  Order order1("1", "LNUX", "OWNER1", "TARGET",
               Order::sell, Order::limit, 12.32, 50);
  Order order2("2", "LNUX", "OWNER2", "TARGET",
               Order::sell, Order::limit, 12.31, 50);
  Order order3("3", "LNUX", "OWNER3", "TARGET",
               Order::buy, Order::limit, 12.32, 50);

  ASSERT_TRUE(object.insert(order1));
  ASSERT_TRUE(object.insert(order2));

  std::queue<Order> orders;
  ASSERT_TRUE(!object.match("LNUX", orders));
  ASSERT_EQ(0U, orders.size());

  ASSERT_TRUE(object.insert(order3));

  ASSERT_TRUE(object.match("LNUX", orders));
  ASSERT_EQ(2U, orders.size());

  Order matchedOrder3 = orders.front();
  orders.pop();
  Order matchedOrder2 = orders.front();
  orders.pop();

  ASSERT_EQ("2", matchedOrder2.getClientID());
  ASSERT_EQ("3", matchedOrder3.getClientID());
}

TEST( OrderMatcherTests,  matchMultiple )
{
  OrderMatcher object;
  Order order1("1", "LNUX", "OWNER1", "TARGET",
               Order::sell, Order::limit, 12.32, 50);
  Order order2("2", "LNUX", "OWNER2", "TARGET",
               Order::sell, Order::limit, 12.30, 50);
  Order order3("3", "LNUX", "OWNER3", "TARGET",
               Order::buy, Order::limit, 12.32, 100);

  ASSERT_TRUE(object.insert(order1));
  ASSERT_TRUE(object.insert(order2));
  ASSERT_TRUE(object.insert(order3));

  std::queue<Order> orders;
  ASSERT_TRUE(object.match("LNUX", orders));
  ASSERT_EQ(4U, orders.size());

  Order matchedOrder3_1 = orders.front();
  orders.pop();
  Order matchedOrder2 = orders.front();
  orders.pop();
  Order matchedOrder3_2 = orders.front();
  orders.pop();
  Order matchedOrder1 = orders.front();
  orders.pop();

  ASSERT_EQ("3", matchedOrder3_1.getClientID());
  ASSERT_TRUE(!matchedOrder3_1.isFilled());
  ASSERT_TRUE(!matchedOrder3_1.isClosed());
  ASSERT_EQ(50, matchedOrder3_1.getOpenQuantity());
  ASSERT_EQ(50, matchedOrder3_1.getExecutedQuantity());
  ASSERT_DOUBLE_EQ(12.30, matchedOrder3_1.getAvgExecutedPrice());
  ASSERT_DOUBLE_EQ(12.30, matchedOrder3_1.getLastExecutedPrice());
  ASSERT_EQ(50, matchedOrder3_1.getLastExecutedQuantity());

  ASSERT_EQ("2", matchedOrder2.getClientID());
  ASSERT_TRUE(matchedOrder2.isFilled());
  ASSERT_TRUE(matchedOrder2.isClosed());
  ASSERT_EQ(0, matchedOrder2.getOpenQuantity());
  ASSERT_EQ(50, matchedOrder2.getExecutedQuantity());
  ASSERT_DOUBLE_EQ(12.3, matchedOrder2.getAvgExecutedPrice());
  ASSERT_DOUBLE_EQ(12.3, matchedOrder2.getLastExecutedPrice());
  ASSERT_EQ(50, matchedOrder2.getLastExecutedQuantity());

  ASSERT_EQ("3", matchedOrder3_2.getClientID());
  ASSERT_TRUE(matchedOrder3_2.isFilled());
  ASSERT_TRUE(matchedOrder3_2.isClosed());
  ASSERT_EQ(0, matchedOrder3_2.getOpenQuantity());
  ASSERT_EQ(100, matchedOrder3_2.getExecutedQuantity());
  ASSERT_DOUBLE_EQ(12.31, matchedOrder3_2.getAvgExecutedPrice());
  ASSERT_DOUBLE_EQ(12.32, matchedOrder3_2.getLastExecutedPrice());
  ASSERT_EQ(50, matchedOrder3_2.getLastExecutedQuantity());

  ASSERT_EQ("1", matchedOrder1.getClientID());
  ASSERT_TRUE(matchedOrder1.isFilled());
  ASSERT_TRUE(matchedOrder1.isClosed());
  ASSERT_EQ(0, matchedOrder1.getOpenQuantity());
  ASSERT_EQ(50, matchedOrder1.getExecutedQuantity());
  ASSERT_DOUBLE_EQ(12.32, matchedOrder1.getAvgExecutedPrice());
  ASSERT_DOUBLE_EQ(12.32, matchedOrder1.getLastExecutedPrice());
  ASSERT_EQ(50, matchedOrder1.getLastExecutedQuantity());
}

TEST(OrderMatcherTests,  overMatch )
{
  OrderMatcher object;
  Order order1("1", "LNUX", "OWNER1", "TARGET",
               Order::buy, Order::limit, 12.32, 100);
  Order order2("2", "LNUX", "OWNER2", "TARGET",
               Order::sell, Order::limit, 12.32, 110);
  Order order3("3", "LNUX", "OWNER3", "TARGET",
               Order::buy, Order::limit, 12.32, 100);

  ASSERT_TRUE(object.insert(order1));
  ASSERT_TRUE(object.insert(order2));

  std::queue<Order> orders;
  ASSERT_TRUE(object.match("LNUX", orders));
  ASSERT_EQ(2U, orders.size());

  Order matchedOrder1 = orders.front();
  orders.pop();
  Order matchedOrder2 = orders.front();
  orders.pop();

  ASSERT_EQ("1", matchedOrder1.getClientID());
  ASSERT_TRUE(matchedOrder1.isFilled());
  ASSERT_TRUE(matchedOrder1.isClosed());
  ASSERT_EQ(0, matchedOrder1.getOpenQuantity());
  ASSERT_EQ(100, matchedOrder1.getExecutedQuantity());
  ASSERT_DOUBLE_EQ(12.32, matchedOrder1.getAvgExecutedPrice());
  ASSERT_DOUBLE_EQ(12.32, matchedOrder1.getLastExecutedPrice());
  ASSERT_EQ(100, matchedOrder1.getLastExecutedQuantity());

  ASSERT_EQ("2", matchedOrder2.getClientID());
  ASSERT_TRUE(!matchedOrder2.isFilled());
  ASSERT_TRUE(!matchedOrder2.isClosed());
  ASSERT_EQ(10, matchedOrder2.getOpenQuantity());
  ASSERT_EQ(100, matchedOrder2.getExecutedQuantity());
  ASSERT_DOUBLE_EQ(12.32, matchedOrder2.getAvgExecutedPrice());
  ASSERT_DOUBLE_EQ(12.32, matchedOrder2.getLastExecutedPrice());
  ASSERT_EQ(100, matchedOrder2.getLastExecutedQuantity());

  ASSERT_TRUE(object.insert(order3));
  ASSERT_TRUE(object.match("LNUX", orders));
  ASSERT_EQ(2U, orders.size());

  Order matchedOrder3 = orders.front();
  orders.pop();
  matchedOrder2 = orders.front();
  orders.pop();

  ASSERT_EQ("3", matchedOrder3.getClientID());
  ASSERT_TRUE(!matchedOrder3.isFilled());
  ASSERT_TRUE(!matchedOrder3.isClosed());
  ASSERT_EQ(90, matchedOrder3.getOpenQuantity());
  ASSERT_EQ(10, matchedOrder3.getExecutedQuantity());
  ASSERT_DOUBLE_EQ(12.32, matchedOrder3.getAvgExecutedPrice());
  ASSERT_DOUBLE_EQ(12.32, matchedOrder3.getLastExecutedPrice());
  ASSERT_EQ(10, matchedOrder3.getLastExecutedQuantity());

  ASSERT_EQ("2", matchedOrder2.getClientID());
  ASSERT_TRUE(matchedOrder2.isFilled());
  ASSERT_TRUE(matchedOrder2.isClosed());
  ASSERT_EQ(0, matchedOrder2.getOpenQuantity());
  ASSERT_EQ(110, matchedOrder2.getExecutedQuantity());
  ASSERT_DOUBLE_EQ(12.32, matchedOrder2.getAvgExecutedPrice());
  ASSERT_DOUBLE_EQ(12.32, matchedOrder2.getLastExecutedPrice());
  ASSERT_EQ(10, matchedOrder2.getLastExecutedQuantity());
}
