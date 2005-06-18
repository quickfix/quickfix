/* -*- C++ -*- */

/****************************************************************************
** Copyright (c) 2001-2005 quickfixengine.org  All rights reserved.
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

#ifndef FIX_SESSIONTIMETESTCASE_H
#define FIX_SESSIONTIMETESTCASE_H

#include <CPPTest/TestCase.h>
#include "SessionTime.h"

namespace FIX
{
class SessionTimeTestCase : public CPPTest::TestCase < SessionTime >
{
public:
  SessionTimeTestCase()
  {
    add( &m_isSessionTime );
    add( &m_isSessionTimeWithDay );
    add( &m_isSameSession );
    add( &m_isSameSessionWithDay );
  }

private:
  typedef CPPTest::EmptyTest<SessionTime> Test;

  class isSessionTime : public Test
  {
    void onRun( SessionTime& object );
  } m_isSessionTime;

  class isSessionTimeWithDay : public Test
  {
    void onRun( SessionTime& object );
  } m_isSessionTimeWithDay;

  class isSameSession : public Test
  {
    void onRun( SessionTime& object );
  } m_isSameSession;

  class isSameSessionWithDay : public Test
  {
    void onRun( SessionTime& object );
  } m_isSameSessionWithDay;
};
}

#endif //FIX_SESSIONTIMETESTCASE_H
