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

#ifndef FIX_NULLSTORETESTCASE_H
#define FIX_NULLSTORETESTCASE_H

#include <CPPTest/TestCase.h>
#include "NullStore.h"

namespace FIX
{
class NullStoreTestCase : public CPPTest::TestCase < NullStore >
{
public:
  NullStoreTestCase()
  {}

public:
  typedef CPPTest::Test < NullStore > Test;

  class setGet : public Test
  {
  public:
    bool onSetup( NullStore*& pObject )
    { pObject = &( *m_object ); pObject->reset(); return true; }
    void onRun( NullStore& object );
    NullStore* m_object;
  };

  class setGetWithQuote : public Test
  {
  public:
    bool onSetup( NullStore*& pObject )
    { pObject = &( *m_object ); pObject->reset(); return true; }
    void onRun( NullStore& object );
    NullStore* m_object;
  };

  class other : public Test
  {
  public:
    bool onSetup( NullStore*& pObject )
    { pObject = &( *m_object ); pObject->reset(); return true; }
    void onRun( NullStore& object );
    NullStore* m_object;
  };

  class reload : public Test
  {
  public:
    bool onSetup( NullStore*& pObject )
    { pObject = &( *m_object ); return true; }
    void onRun( NullStore& object );
    NullStore* m_object;
  };

  class refresh : public Test
  {
  public:
    bool onSetup( NullStore*& pObject )
    { pObject = &( *m_object ); return true; }
    void onRun( NullStore& object );
    NullStore* m_object;
  };
};
}

#endif //FIX_NULLSTORETESTCASE_H
