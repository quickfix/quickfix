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

#include <gtest/gtest.h>
#include <TestHelper.h>
#include <SocketServer.h>
#ifdef _MSC_VER
#include <stdlib.h>
#endif

using namespace FIX;

class socketServerFixture : public SocketServer::Strategy, public ::testing::Test
{
public:
  socketServerFixture() 
  : connect( 0 ), write( 0 ), data( 0 ), disconnect( 0 ),
    connectSocket( 0 ), writeSocket( 0 ),
    dataSocket( 0 ), disconnectSocket( 0 ),
    bufLen( 0 ) {}

  void onConnect( SocketServer&, socket_handle accept, socket_handle socket )
  { connect++; connectSocket = socket; }
  void onWrite( SocketServer&, socket_handle socket )
  { write++; writeSocket = socket; }
  bool onData( SocketServer& server, socket_handle socket )
  {
    data++; dataSocket = socket;
    bufLen = recv( socket, buf, 1, 0 );
    return bufLen > 0;
  }
  void onDisconnect( SocketServer&, socket_handle socket )
  { disconnect++; disconnectSocket = socket; }
  void onError( SocketServer& )
  {}

  int connect, write, data, disconnect;
  socket_handle connectSocket, writeSocket;
  socket_handle dataSocket, disconnectSocket;
  char buf[ 1 ]; size_t bufLen;
};

TEST_F(socketServerFixture, accept)
{
  SocketServer object( 0 );
  socket_handle serverS1 = object.add( TestSettings::port, true, true );
  socket_handle clientS1 = createSocket( TestSettings::port, "127.0.0.1" );
  ASSERT_TRUE( clientS1 > 0 );
  process_sleep(0.1);
  socket_handle s1 = object.accept( serverS1 );
  ASSERT_TRUE( s1 >= 0 );
  object.block( *this );
  ASSERT_TRUE( object.numConnections() == 1 );

  socket_handle clientS2 = createSocket( TestSettings::port, "127.0.0.1" );
  ASSERT_TRUE( clientS2 > 0 );
  process_sleep(0.1);
  socket_handle s2 = object.accept( serverS1 );
  ASSERT_TRUE( s2 >= 0 );
  object.block( *this );
  ASSERT_TRUE( object.numConnections() == 2 );

  socket_handle clientS3 = createSocket( TestSettings::port, "127.0.0.1" );
  ASSERT_TRUE( clientS3 > 0 );
  process_sleep(0.1);
  socket_handle s3 = object.accept( serverS1 );
  ASSERT_TRUE( s3 >= 0 );
  object.block( *this );
  ASSERT_TRUE( object.numConnections() == 3 );

  SocketMonitor& monitor = object.getMonitor();
  ASSERT_TRUE( !monitor.drop( -1 ) );
  ASSERT_TRUE( object.numConnections() == 3 );
  ASSERT_TRUE( monitor.drop( s1 ) );
  ASSERT_TRUE( object.numConnections() == 2 );
  ASSERT_TRUE( monitor.drop( s2 ) );
  ASSERT_TRUE( object.numConnections() == 1 );
  ASSERT_TRUE( monitor.drop( s3 ) );
  ASSERT_TRUE( object.numConnections() == 0 );

  destroySocket( clientS1 );
  destroySocket( clientS2 );
  destroySocket( clientS3 );
}

TEST_F(socketServerFixture, block)
{
  SocketServer object( 0 );
  object.add( TestSettings::port, true, true );
  socket_handle clientS = createSocket( TestSettings::port, "127.0.0.1" );
  ASSERT_TRUE( clientS >= 0 );

  object.block( *this );
  ASSERT_EQ( 1, connect );
  ASSERT_TRUE( connectSocket > 0 );

  send( clientS, "1", 1, 0 );
  object.block( *this );
  object.block( *this );
  ASSERT_EQ( 1, data );
  ASSERT_EQ( 1U, bufLen );
  ASSERT_EQ( '1', *buf );
  ASSERT_TRUE( dataSocket > 0 );

  destroySocket( clientS );
  object.block( *this );
  ASSERT_EQ( 1, disconnect );
  ASSERT_TRUE( disconnectSocket > 0 );
}

TEST_F(socketServerFixture, close)
{
  SocketServer object( 0 );
  object.add( TestSettings::port, true, true );
  object.close();
  object.block( *this );
}
