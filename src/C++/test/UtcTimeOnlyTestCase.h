/* -*- C++ -*- */

/****************************************************************************
** Copyright (c) 2001-2004 quickfixengine.org  All rights reserved.
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

#ifndef FIX_UTCTIMEONLYTESTCASE_H
#define FIX_UTCTIMEONLYTESTCASE_H

#include <CPPTest/TestCase.h>
#include "FieldTypes.h"

namespace FIX
{
class UtcTimeOnlyTestCase : public CPPTest::TestCase < UtcTimeOnly >
{
public:
  UtcTimeOnlyTestCase()
  {
    add( &m_compare );
  }

private:
  typedef CPPTest::Test < UtcTimeOnly > Test;

class compare : public Test
  {
  public:
    bool onSetup( UtcTimeOnly*& pObject );
    void onRun( UtcTimeOnly& object );
    UtcTimeOnly m_object;
  }
  m_compare;
};
}

#endif //FIX_UTCTIMEONLYTESTCASE_H
