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

#ifndef FIX_UTCTIMESTAMPTESTCASE_H
#define FIX_UTCTIMESTAMPTESTCASE_H

#include <CPPTest/TestCase.h>
#include "FieldTypes.h"

namespace FIX
{
class UtcTimeStampTestCase : public CPPTest::TestCase < UtcTimeStamp >
{
public:
  UtcTimeStampTestCase()
  {
    add( &m_compare );
    add( &m_subtract );
    add( &m_addSeconds );
  }

private:
  typedef CPPTest::Test < UtcTimeStamp > Test;

class compare : public Test
  {
  public:
    bool onSetup( UtcTimeStamp*& pObject );
    void onRun( UtcTimeStamp& object );
    UtcTimeStamp m_object;
  }
  m_compare;

class subtract : public Test
  {
  public:
    bool onSetup( UtcTimeStamp*& pObject ) { return true; }
    void onRun( UtcTimeStamp& object );
  }
  m_subtract;

class addSeconds : public Test
  {
  public:
    bool onSetup( UtcTimeStamp*& pObject ) { return true; }
    void onRun( UtcTimeStamp& object );
  }
  m_addSeconds;
};
}

#endif //FIX_UTCTIMESTAMPTESTCASE_H
