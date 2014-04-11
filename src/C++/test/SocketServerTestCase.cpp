/****************************************************************************
** Copyright (c) 2001-2014
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

#ifdef _MSC_VER
#pragma warning( disable : 4503 4355 4786 )
#include "stdafx.h"
#else
#include "config.h"
#endif

#include <UnitTest++.h>
#include <TestHelper.h>
#include <SocketServer.h>
#ifdef _MSC_VER
#include <stdlib.h>
#endif

using namespace FIX;

class socketServerFixture : public SocketServer::Strategy
{
public:
  socketServerFixture() 
  : connect( 0 ), write( 0 ), data( 0 ), disconnect( 0 ),
    connectSocket( 0 ), writeSocket( 0 ),
    dataSocket( 0 ), disconnectSocket( 0 ),
    bufLen( 0 ) {}

  void onConnect( SocketServer&, int accept, int socket )
  { connect++; connectSocket = socket; }
  void onWrite( SocketServer&, int socket )
  { write++; writeSocket = socket; }
  bool onData( SocketServer& server, int socket )
  {
    data++; dataSocket = socket;
    bufLen = recv( socket, buf, 1, 0 );
    return bufLen > 0;
  }
  void onDisconnect( SocketServer&, int socket )
  { disconnect++; disconnectSocket = socket; }
  void onError( SocketServer& )
  {}

  int connect, write, data, disconnect;
  int connectSocket, writeSocket;
  int dataSocket, disconnectSocket;
  char buf[ 1 ]; size_t bufLen;
};

SUITE(SocketServerTests)
{

TEST_FIXTURE(socketServerFixture, accept)
{
  SocketServer object( 0 );
  int serverS1 = object.add( TestSettings::port, true, true );
  int clientS1 = createSocket( TestSettings::port, "127.0.0.1" );
  CHECK( clientS1 > 0 );
  process_sleep(0.1);
  int s1 = object.accept( serverS1 );
  CHECK( s1 >= 0 );
  object.block( *this );
  CHECK( object.numConnections() == 1 );

  int clientS2 = createSocket( TestSettings::port, "127.0.0.1" );
  CHECK( clientS2 > 0 );
  process_sleep(0.1);
  int s2 = object.accept( serverS1 );
  CHECK( s2 >= 0 );
  object.block( *this );
  CHECK( object.numConnections() == 2 );

  int clientS3 = createSocket( TestSettings::port, "127.0.0.1" );
  CHECK( clientS3 > 0 );
  process_sleep(0.1);
  int s3 = object.accept( serverS1 );
  CHECK( s3 >= 0 );
  object.block( *this );
  CHECK( object.numConnections() == 3 );

  SocketMonitor& monitor = object.getMonitor();
  CHECK( !monitor.drop( -1 ) );
  CHECK( object.numConnections() == 3 );
  CHECK( monitor.drop( s1 ) );
  CHECK( object.numConnections() == 2 );
  CHECK( monitor.drop( s2 ) );
  CHECK( object.numConnections() == 1 );
  CHECK( monitor.drop( s3 ) );
  CHECK( object.numConnections() == 0 );

  destroySocket( clientS1 );
  destroySocket( clientS2 );
  destroySocket( clientS3 );
}

TEST_FIXTURE(socketServerFixture, block)
{
  SocketServer object( 0 );
  object.add( TestSettings::port, true, true );
  int clientS = createSocket( TestSettings::port, "127.0.0.1" );
  CHECK( clientS >= 0 );

  object.block( *this );
  CHECK_EQUAL( 1, connect );
  CHECK( connectSocket > 0 );

  send( clientS, "1", 1, 0 );
  object.block( *this );
  object.block( *this );
  CHECK_EQUAL( 1, data );
  CHECK_EQUAL( 1U, bufLen );
  CHECK_EQUAL( '1', *buf );
  CHECK( dataSocket > 0 );

  destroySocket( clientS );
  object.block( *this );
  CHECK_EQUAL( 1, disconnect );
  CHECK( disconnectSocket > 0 );
}

TEST_FIXTURE(socketServerFixture, close)
{
  SocketServer object( 0 );
  object.add( TestSettings::port, true, true );
  object.close();
  object.block( *this );
}

}
