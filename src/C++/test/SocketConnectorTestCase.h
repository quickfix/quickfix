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

#ifndef FIX_SOCKETCONNECTORTESTCASE_H
#define FIX_SOCKETCONNECTORTESTCASE_H

#include <CPPTest/TestCase.h>
#include "SocketConnector.h"

namespace FIX
{
class SocketConnectorTestCase : public CPPTest::TestCase < SocketConnector >
{
public:
SocketConnectorTestCase( short port ) : m_connect( port )
  {
    add( &m_connect );
  }

private:
  typedef CPPTest::Test < SocketConnector > Test;

class accept : public Test
  {
  public:
  accept( short port ) : m_port( port ) {}
    bool onSetup( SocketConnector*& pObject );
    void onRun( SocketConnector& object );
    void onTeardown( SocketConnector* pObject ) { delete pObject; }
    short m_port;
  }
  m_connect;
};
}

#endif //FIX_SOCKETCONNECTORTESTCASE_H
