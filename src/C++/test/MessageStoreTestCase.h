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

#ifndef FIX_MESSAGESTORETESTCASE_H
#define FIX_MESSAGESTORETESTCASE_H

#include <CPPTest/TestCase.h>
#include "MessageStore.h"

namespace FIX
{
class MessageStoreTestCase : public CPPTest::TestCase < MessageStore >
{
public:
  MessageStoreTestCase()
  {}

public:
  typedef CPPTest::Test < MessageStore > Test;

  class setGet : public Test
  {
  public:
    bool onSetup( MessageStore*& pObject )
    { pObject = &( *m_object ); pObject->reset(); return true; }
    void onRun( MessageStore& object );
    MessageStore* m_object;
  };
  
  class other : public Test
  {
  public:
    bool onSetup( MessageStore*& pObject )
    { pObject = &( *m_object ); pObject->reset(); return true; }
    void onRun( MessageStore& object );
    MessageStore* m_object;
  };
  
  class reload : public Test
  {
  public:
    bool onSetup( MessageStore*& pObject )
    { pObject = &( *m_object ); return true; }
    void onRun( MessageStore& object );
    MessageStore* m_object;
  };
};
}

#endif //FIX_MESSAGESTORETESTCASE_H
