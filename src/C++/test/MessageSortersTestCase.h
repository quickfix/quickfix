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

#ifndef FIX_MESSAGESORTERSTESTCASE_H
#define FIX_MESSAGESORTERSTESTCASE_H

#include <CPPTest/TestCase.h>
#include "MessageSorters.h"

namespace FIX
{
class MessageSortersTestCase : public CPPTest::TestCase < void* >
{
public:
  MessageSortersTestCase()
  {
    add( &m_headerOrder );
    add( &m_trailerOrder );
    add( &m_normalOrder );
    add( &m_groupOrder );
  }

private:
  typedef CPPTest::VoidTest Test;

  class headerOrder : public Test
  {
    void onRun( void*& object );
  }
  m_headerOrder;

  class trailerOrder : public Test
  {
    void onRun( void*& object );
  }
  m_trailerOrder;

  class normalOrder : public Test
  {
    void onRun( void*& object );
  }
  m_normalOrder;

  class groupOrder : public Test
  {
    void onRun( void*& object );
  }
  m_groupOrder;
};
}

#endif //FIX_MESSAGESORTERSTESTCASE_H
