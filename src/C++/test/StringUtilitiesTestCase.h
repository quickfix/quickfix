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

#ifndef FIX_STRINGUTILITIESTESTCASE_H
#define FIX_STRINGUTILITIESTESTCASE_H

#include <CPPTest/TestCase.h>
#include "Utility.h"

namespace FIX
{
class StringUtilitiesTestCase : public CPPTest::TestCase < std::string >
{
public:
  StringUtilitiesTestCase()
  {
    add( &m_replace );
  }

private:
  typedef CPPTest::SimpleTest < std::string > Test;

  class replace : public Test
  {
    void onRun( std::string& object );
  }
  m_replace;
};
}

#endif //FIX_STRINGUTILITIESTESTCASE_H
