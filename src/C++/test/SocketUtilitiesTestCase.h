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

#ifndef FIX_SOCKETUTILITIESTESTCASE_H
#define FIX_SOCKETUTILITIESTESTCASE_H

#include <CPPTest/TestCase.h>
#include "Utility.h"
#include "SocketServer.h"

namespace FIX
{
class SocketUtilitiesTestCase : public CPPTest::TestCase < int >
{
public:
  static int createSocket( int port, char* address );
  static void destroySocket( int s );

SocketUtilitiesTestCase( short port ) : m_fionread( port ), m_send( port )
  {
    //add( &m_fionread );
    //add( &m_send );
    //add( &m_hostname );
  }

private:
  typedef CPPTest::SimpleTest < int > SimpleTest;
class Test : public CPPTest::Test < int >
  {
  public:
  Test( short port ) : m_port( port ) {}
#ifdef _MSC_VER
    SOCKET
#else
int
#endif
    listener, s1, s2;
    SocketServer* pServer;
    short m_port;
    bool onSetup( int*& );
    void onTeardown( int* );
  };

class fionread : public Test
  {
  public:
  fionread( short port ) : Test( port ) {}
    void onRun( int& );
    short m_port;
  }
  m_fionread;

class send : public Test
  {
  public:
  send( short port ) : Test( port ) {}
    void onRun( int& );
    short m_port;
  }
  m_send;

class hostname : public SimpleTest
  {
    void onRun( int& );
  }
  m_hostname;
};
}

#endif //FIX_SOCKETUTILITIESTESTCASE_H
