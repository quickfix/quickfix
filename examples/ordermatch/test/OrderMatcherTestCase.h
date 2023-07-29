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

#ifndef ORDERMATCHERTESTCASE_H
#define ORDERMATCHERTESTCASE_H

#include "../../../CPPTest/TestCase.h"
#include "../OrderMatcher.h"

class OrderMatcherTestCase : public CPPTest::TestCase<OrderMatcher>
{
public:
  OrderMatcherTestCase()
  {
    add(&m_matchFull);
    add(&m_matchPartial);
    add(&m_matchTimePriority);
    add(&m_matchPricePriority);
    add(&m_matchMultiple);
    add(&m_overMatch);
  }

private:
  typedef CPPTest::SimpleTest<OrderMatcher> Test;

  class matchFull : public Test
  {
    void onRun( OrderMatcher& object );
  } m_matchFull;

  class matchPartial : public Test
  {
    void onRun( OrderMatcher& object );
  } m_matchPartial;

  class matchTimePriority : public Test
  {
    void onRun( OrderMatcher& object );
  } m_matchTimePriority;

  class matchPricePriority : public Test
  {
    void onRun( OrderMatcher& object );
  } m_matchPricePriority;

  class matchMultiple : public Test
  {
    void onRun( OrderMatcher& object );
  } m_matchMultiple;

  class overMatch : public Test
  {
    void onRun( OrderMatcher& object );
  } m_overMatch;
};

#endif
