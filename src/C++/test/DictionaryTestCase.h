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

#ifndef FIX_DICTIONARYTESTCASE_H
#define FIX_DICTIONARYTESTCASE_H

#include <CPPTest/TestCase.h>
#include "Dictionary.h"

namespace FIX
{
class DictionaryTestCase : public CPPTest::TestCase < Dictionary >
{
public:
  DictionaryTestCase()
  {
    add( &m_setGetString );
    add( &m_setGetLong );
    add( &m_setGetDouble );
    add( &m_merge );
  }

private:
  typedef CPPTest::SimpleTest < Dictionary > Test;

class setGetString : public Test
  {
    void onRun( Dictionary& object );
  }
  m_setGetString;

class setGetLong : public Test
  {
    void onRun( Dictionary& object );
  }
  m_setGetLong;

class setGetDouble : public Test
  {
    void onRun( Dictionary& object );
  }
  m_setGetDouble;

class merge : public Test
  {
    void onRun( Dictionary& object );
  }
  m_merge;
};
}

#endif //FIX_DICTIONARYTESTCASE_H
