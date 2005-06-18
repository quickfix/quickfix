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

#ifndef FIX_SOCKETACCEPTORTESTCASE_H
#define FIX_SOCKETACCEPTORTESTCASE_H

#include <CPPTest/TestCase.h>
#include "AcceptorTestCase.h"
#include "SocketUtilitiesTestCase.h"
#include "SocketAcceptor.h"

namespace FIX
{

class SocketAcceptorTestCase : public CPPTest::TestCase < SocketAcceptor >
{
public:
  SocketAcceptorTestCase()
  {
    add( &m_receivePartialMessage );
  }

private:
  typedef CPPTest::Test < SocketAcceptor > Test;

  class receivePartialMessage : public Test
  {
    bool onSetup( SocketAcceptor*& pObject );
    void onRun( SocketAcceptor& object );
    void onTeardown( SocketAcceptor* pObject )
    {
      pObject->stop( true );
      delete pObject;
      delete m_pFactory;
      delete m_pApplication;
      SocketUtilitiesTestCase::destroySocket(s);
    }
    TestApplication* m_pApplication;
    MemoryStoreFactory* m_pFactory;
    int s;
  }
  m_receivePartialMessage;
};
}

#endif //FIX_SOCKETACCEPTORTESTCASE_H
