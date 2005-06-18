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

#ifndef FIX_SESSIONIDTESTCASE_H
#define FIX_SESSIONIDTESTCASE_H

#include <CPPTest/TestCase.h>
#include "SessionID.h"
#include <string>
#include <sstream>

namespace FIX
{
class SessionIDTestCase : public CPPTest::TestCase < SessionID >
{
public:
  SessionIDTestCase()
  {
    add( &m_lessThan );
    add( &m_streamOut );
    add( &m_streamIn );
  }

private:
  typedef CPPTest::EmptyTest < SessionID > EmptyTest;
  typedef CPPTest::Test < SessionID > Test;

class lessThan : public EmptyTest
  {
  public:
    lessThan();
    void onRun( SessionID& object );
    SessionID m_less1, m_less2, m_less3;
    SessionID m_less4, m_less5, m_less6;
  }
  m_lessThan;

class streamOut : public Test
  {
  public:
    streamOut();
    bool onSetup( SessionID*& pObject );
    void onRun( SessionID& object );
    SessionID m_object;
  }
  m_streamOut;

class streamIn : public Test
  {
  public:
    streamIn();
    bool onSetup( SessionID*& pObject );
    void onRun( SessionID& object );
    SessionID m_object;
  }
  m_streamIn;
};
}

#endif //FIX_SESSIONIDTESTCASE_H
