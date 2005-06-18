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

#ifndef FIELDBASETESTCASE_H
#define FIELDBASETESTCASE_H

#include <CPPTest/TestCase.h>
#include "../Field.h"

namespace FIX
{
class FieldBaseTestCase : public CPPTest::TestCase<FieldBase>
{
  public:
    FieldBaseTestCase()
    {
      add(&m_set);
    }

  private:
    typedef CPPTest::Test<FieldBase> Test;

class set : public Test
  {
  public:
    set() : m_object( 12, "VALUE" ) {}
    bool onSetup( FieldBase*& pObject ) { pObject = &m_object; return true; }
    void onRun( FieldBase& object );
    FieldBase m_object;
  } m_set;
};
}

#endif //FIELDBASETESTCASE_H
