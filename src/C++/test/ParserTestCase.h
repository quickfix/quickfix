/* -*- C++ -*- */
/* ====================================================================
 * The QuickFIX Software License, Version 1.0
 *
 * Copyright (c) 2001 ThoughtWorks, Inc.  All rights
 * reserved.
 *
 * Redistribution and use in source and binary forms, with or without
 * modification, are permitted provided that the following conditions
 * are met:
 *
 * 1. Redistributions of source code must retain the above copyright
 *    notice, this list of conditions and the following disclaimer.
 *
 * 2. Redistributions in binary form must reproduce the above copyright
 *    notice, this list of conditions and the following disclaimer in
 *    the documentation and/or other materials provided with the
 *    distribution.
 *
 * 3. The end-user documentation included with the redistribution,
 *    if any, must include the following acknowledgment:
 *       "This product includes software developed by
 *        ThoughtWorks, Inc. (http://www.thoughtworks.com/)."
 *    Alternately, this acknowledgment may appear in the software itself,
 *    if and wherever such third-party acknowledgments normally appear.
 *
 * 4. The names "QuickFIX" and "ThoughtWorks, Inc." must
 *    not be used to endorse or promote products derived from this
 *    software without prior written permission. For written
 *    permission, please contact quickfix-users@lists.sourceforge.net.
 *
 * 5. Products derived from this software may not be called "QuickFIX",
 *    nor may "QuickFIX" appear in their name, without prior written
 *    permission of ThoughtWorks, Inc.
 *
 * THIS SOFTWARE IS PROVIDED ``AS IS'' AND ANY EXPRESSED OR IMPLIED
 * WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE IMPLIED WARRANTIES
 * OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE ARE
 * DISCLAIMED.  IN NO EVENT SHALL THOUGHTWORKS INC OR
 * ITS CONTRIBUTORS BE LIABLE FOR ANY DIRECT, INDIRECT, INCIDENTAL,
 * SPECIAL, EXEMPLARY, OR CONSEQUENTIAL DAMAGES (INCLUDING, BUT NOT
 * LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS OR SERVICES; LOSS OF
 * USE, DATA, OR PROFITS; OR BUSINESS INTERRUPTION) HOWEVER CAUSED AND
 * ON ANY THEORY OF LIABILITY, WHETHER IN CONTRACT, STRICT LIABILITY,
 * OR TORT (INCLUDING NEGLIGENCE OR OTHERWISE) ARISING IN ANY WAY OUT
 * OF THE USE OF THIS SOFTWARE, EVEN IF ADVISED OF THE POSSIBILITY OF
 * SUCH DAMAGE.
 * ====================================================================
 */

#ifndef FIX_PARSERTESTCASE_H
#define FIX_PARSERTESTCASE_H

#include <CPPTest/TestCase.h>
#include "Parser.h"
#include "Utility.h"
#include "SocketServer.h"
#include "SocketConnector.h"
#include <string>
#include <sstream>

namespace FIX
{
class ParserTestCase : public CPPTest::TestCase < Parser >
{
public:
  ParserTestCase( short m_port )
  : m_readFromSocket( m_port )
  {
    add( &m_extractLength );
    add( &m_readFixMessage );
    add( &m_readPartialFixMessage );
    add( &m_readFromSocket );
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
    { delete pObject; delete m_pStream; }

    std::string m_fixMsg1, m_fixMsg2;
    std::string m_partFixMsg1, m_partFixMsg2;
    std::string m_fixMsg3;
    std::stringstream* m_pStream;
  }
  m_readFixMessage;

class readPartialFixMessage : public Test
  {
    bool onSetup( Parser*& pObject );
    void onRun( Parser& object );
    void onTeardown( Parser* pObject )
    { delete pObject; delete m_pStream; }

    std::string m_partFixMsg1, m_partFixMsg2;
    std::stringstream* m_pStream;
  }
  m_readPartialFixMessage;

class readFromSocket : public Test
  {
  public:
  readFromSocket( short port ) : m_port( port ) {}
    bool onSetup( Parser*& pObject );
    void onRun( Parser& object );
    void onTeardown( Parser* pObject )
    {
      delete pObject;
      delete m_pServer; delete m_pConnector;
    }

    std::string m_fixMsg1, m_fixMsg2;
    std::string m_partFixMsg1, m_partFixMsg2;
    std::string m_fixMsg3;
    short m_port;
    SocketServer* m_pServer;
    SocketConnector* m_pConnector;
  }
  m_readFromSocket;
};
}

#endif //FIX_PARSERTESTCASE_H
