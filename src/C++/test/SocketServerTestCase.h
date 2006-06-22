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

#ifndef FIX_SOCKETSERVERTESTCASE_H
#define FIX_SOCKETSERVERTESTCASE_H

#include <CPPTest/TestCase.h>
#include "SocketServer.h"
#include "Utility.h"

namespace FIX
{
class SocketServerTestCase : public CPPTest::TestCase < SocketServer >
{
public:
SocketServerTestCase( short port ) : m_accept( port ), m_block( port ),
  m_close( port )
  {
    add( &m_accept );
    add( &m_block );
    add( &m_close );
  }

private:
  class Test : public CPPTest::Test<SocketServer>, public SocketServer::Strategy
  {
  public:
    Test() 
    : m_connect( 0 ), m_write( 0 ), m_data( 0 ), m_disconnect( 0 ),
      m_connectSocket( 0 ), m_writeSocket( 0 ),
      m_dataSocket( 0 ), m_disconnectSocket( 0 ),
      m_bufLen( 0 ) {}

    void onConnect( SocketServer&, int accept, int socket )
    { m_connect++; m_connectSocket = socket; }
    void onWrite( SocketServer&, int socket )
    { m_write++; m_writeSocket = socket; }
    void onData( SocketServer& server, int socket )
    {
      m_data++; m_dataSocket = socket;
      m_bufLen = recv( socket, m_buf, 1, 0 );
      if( m_bufLen <= 0 )
        onDisconnect( server, socket );
    }
    void onDisconnect( SocketServer&, int socket )
    { m_disconnect++; m_disconnectSocket = socket; }
    void onError( SocketServer& )
    { assert( false ); }

    int m_connect, m_write, m_data, m_disconnect;
    int m_connectSocket, m_writeSocket;
    int m_dataSocket, m_disconnectSocket;
    char m_buf[ 1 ]; size_t m_bufLen;
  };

  class accept : public Test
  {
  public:
    accept( short port ) : m_port( port ) {}

    bool onSetup( SocketServer*& pObject );
    void onRun( SocketServer& object );
    void onTeardown( SocketServer* pObject ) { delete pObject; }

    short m_port;
  }
  m_accept;

class block : public Test
  {
  public:
    block( short port ) : m_port( port ) {}

    bool onSetup( SocketServer*& pObject );
    void onRun( SocketServer& object );
    void onTeardown( SocketServer* pObject ) { delete pObject; }

    short m_port;
  }
  m_block;

class close : public Test
  {
  public:
    close( short port ) : m_port( port ) {}

    bool onSetup( SocketServer*& pObject );
    void onRun( SocketServer& object );
    void onTeardown( SocketServer* pObject ) { delete pObject; }

    short m_port;
  }
  m_close;
};
}

#endif //FIX_SOCKETSERVERTESTCASE_H
