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

#ifndef FIX_ACCEPTORTESTCASE_H
#define FIX_ACCEPTORTESTCASE_H

#include <CPPTest/TestCase.h>
#include "Acceptor.h"

namespace FIX
{
class TestApplication : public NullApplication
{
  void fromApp( const Message&, const SessionID& )
  throw( FieldNotFound, IncorrectDataFormat, IncorrectTagValue, UnsupportedMessageType ) {}
  void onRun() {}}
;

class TestAcceptor : public Acceptor
{
public:
  TestAcceptor( const SessionSettings& settings,
                MemoryStoreFactory& factory )
: Acceptor( *( m_pApp = new TestApplication() ), factory, settings ) {}
  ~TestAcceptor() { delete m_pApp; }
  void onInitialize( const SessionSettings& ) throw( RuntimeError ) {}
  void onStart() {}
  bool onPoll() { return false; }
  void onStop() {}
  TestApplication* m_pApp;
};

class AcceptorTestCase : public CPPTest::TestCase < Acceptor >
{
public:
  AcceptorTestCase()
  {
    add( &m_parseStream );
  }

private:
  typedef CPPTest::Test < Acceptor > Test;

class parseStream : public Test
  {
    bool onSetup( Acceptor*& pObject );
    void onRun( Acceptor& object );
    void onTeardown( Acceptor* pObject )
    {
      delete pObject;
      delete m_pFactory;
    }
    MemoryStoreFactory* m_pFactory;
  }
  m_parseStream;
};
}

#endif //FIX_ACCEPTORTESTCASE_H
