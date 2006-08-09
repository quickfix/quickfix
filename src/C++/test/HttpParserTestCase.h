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

#ifndef FIX_HTTPPARSERTESTCASE_H
#define FIX_HTTPPARSERTESTCASE_H

#include <CPPTest/TestCase.h>
#include "HttpParser.h"
#include "Utility.h"
#include <string>

namespace FIX
{
class HttpParserTestCase : public CPPTest::TestCase < HttpParser >
{
public:
  HttpParserTestCase()
  {
    add( &m_readHttpMessage );
    add( &m_readPartialHttpMessage );
  }

private:
  typedef CPPTest::Test < HttpParser > Test;

  class readHttpMessage : public Test
  {
    bool onSetup( HttpParser*& pObject );
    void onRun( HttpParser& object );
    void onTeardown( HttpParser* pObject )
    { delete pObject; }

    std::string m_httpMsg1, m_httpMsg2, m_httpMsg3;
  }
  m_readHttpMessage;

  class readPartialHttpMessage : public Test
  {
    bool onSetup( HttpParser*& pObject );
    void onRun( HttpParser& object );
    void onTeardown( HttpParser* pObject )
    { delete pObject; }

    std::string m_partHttpMsg1, m_partHttpMsg2;
  }
  m_readPartialHttpMessage;

};
}

#endif //FIX_HTTPPARSERTESTCASE_H
