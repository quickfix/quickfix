/* -*- C++ -*- */

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

#ifndef FIX_TIMERANGETESTCASE_H
#define FIX_TIMERANGETESTCASE_H

#include <CPPTest/TestCase.h>
#include "TimeRange.h"

namespace FIX
{
class TimeRangeTestCase : public CPPTest::TestCase < TimeRange >
{
public:
  TimeRangeTestCase()
  {
    add( &m_isInRange );
    add( &m_isInRangeWithDay );
    add( &m_isInSameRange );
    add( &m_isInSameRangeWithDay );
  }

private:
  typedef CPPTest::EmptyTest<TimeRange> Test;

  class isInRange : public Test
  {
    void onRun( TimeRange& object );
  } m_isInRange;

  class isInRangeWithDay : public Test
  {
    void onRun( TimeRange& object );
  } m_isInRangeWithDay;

  class isInSameRange : public Test
  {
    void onRun( TimeRange& object );
  } m_isInSameRange;

  class isInSameRangeWithDay : public Test
  {
    void onRun( TimeRange& object );
  } m_isInSameRangeWithDay;
};
}

#endif //FIX_TIMERANGETESTCASE_H
