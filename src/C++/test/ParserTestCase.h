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

#ifndef FIX_PARSERTESTCASE_H
#define FIX_PARSERTESTCASE_H

#include <CPPTest/TestCase.h>
#include "Parser.h"
#include "Utility.h"
#include "SocketServer.h"
#include "SocketConnector.h"
#include <string>

namespace FIX
{
class ParserTestCase : public CPPTest::TestCase < Parser >
{
public:
  ParserTestCase( short m_port )
  {
    add( &m_extractLength );
    add( &m_readFixMessage );
    add( &m_readPartialFixMessage );
    add( &m_readMessageWithBadLength );
  }

private:
  typedef CPPTest::Test < Parser > Test;

  class extractLength : public Test
  {
    bool onSetup( Parser*& pObject );
    void onRun( Parser& object );

    std::string m_normalLength;
    std::string m_badLength;
    std::string m_negativeLength;
    std::string m_incomplete_1;
    std::string m_incomplete_2;
  }
  m_extractLength;

  class readFixMessage : public Test
  {
    bool onSetup( Parser*& pObject );
    void onRun( Parser& object );
    void onTeardown( Parser* pObject )
    { delete pObject; }

    std::string m_fixMsg1, m_fixMsg2, m_fixMsg3;
  }
  m_readFixMessage;

  class readPartialFixMessage : public Test
  {
    bool onSetup( Parser*& pObject );
    void onRun( Parser& object );
    void onTeardown( Parser* pObject )
    { delete pObject; }

    std::string m_partFixMsg1, m_partFixMsg2;
  }
  m_readPartialFixMessage;

  class readMessageWithBadLength : public Test
  {
    bool onSetup( Parser*& pObject );
    void onRun( Parser& object );
    void onTeardown( Parser* pObject )
    { delete pObject; }

    std::string m_fixMsg;
  }
  m_readMessageWithBadLength;

};
}

#endif //FIX_PARSERTESTCASE_H
