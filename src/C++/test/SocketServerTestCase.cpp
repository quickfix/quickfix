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

#ifdef _MSC_VER
#pragma warning( disable : 4503 4355 4786 )
#include "stdafx.h"
#else
#include "config.h"
#endif

#include "SocketServerTestCase.h"
#include "SocketUtilitiesTestCase.h"
#ifdef _MSC_VER
#include <stdlib.h>
#endif

namespace FIX
{
bool SocketServerTestCase::accept::onSetup( SocketServer*& pObject )
{
  try
  {
    pObject = new SocketServer( 0 );
    return true;
  }
  catch ( std::exception& ) { return false; }
}

void SocketServerTestCase::accept::onRun( SocketServer& object )
{
  int serverS1 = object.add( m_port, true, true );
  int clientS1 = SocketUtilitiesTestCase::createSocket( m_port, "127.0.0.1" );
  assert( clientS1 > 0 );
  int s1 = object.accept( serverS1 );
  assert( s1 >= 0 );
  object.block( *this );
  assert( object.numConnections() == 1 );

  int clientS2 = SocketUtilitiesTestCase::createSocket( m_port, "127.0.0.1" );
  assert( clientS2 > 0 );
  int s2 = object.accept( serverS1 );
  assert( s2 >= 0 );
  object.block( *this );
  assert( object.numConnections() == 2 );

  int clientS3 = SocketUtilitiesTestCase::createSocket( m_port, "127.0.0.1" );
  assert( clientS3 > 0 );
  int s3 = object.accept( serverS1 );
  assert( s3 >= 0 );
  object.block( *this );
  assert( object.numConnections() == 3 );

  SocketMonitor& monitor = object.getMonitor();
  assert( !monitor.drop( -1 ) );
  assert( object.numConnections() == 3 );
  assert( monitor.drop( s1 ) );
  assert( object.numConnections() == 2 );
  assert( monitor.drop( s2 ) );
  assert( object.numConnections() == 1 );
  assert( monitor.drop( s3 ) );
  assert( object.numConnections() == 0 );

  SocketUtilitiesTestCase::destroySocket( clientS1 );
  SocketUtilitiesTestCase::destroySocket( clientS2 );
  SocketUtilitiesTestCase::destroySocket( clientS3 );
}

bool SocketServerTestCase::block::onSetup( SocketServer*& pObject )
{
  try
  {
    pObject = new SocketServer( 0 );
    return true;
  }
  catch ( std::exception& ) { return false; }
}

void SocketServerTestCase::block::onRun( SocketServer& object )
{
  object.add( m_port, true, true );
  int clientS = SocketUtilitiesTestCase::createSocket( m_port, "127.0.0.1" );
  assert( clientS >= 0 );

  object.block( *this );
  assert( m_connect == 1 );
  assert( m_connectSocket > 0 );

  send( clientS, "1", 1, 0 );
  object.block( *this );
  object.block( *this );
  assert( m_data == 1 );
  assert( m_bufLen == 1 );
  assert( *m_buf == '1' );
  assert( m_dataSocket > 0 );

  SocketUtilitiesTestCase::destroySocket( clientS );
  object.block( *this );
  assert( m_disconnect == 1 );
  assert( m_disconnectSocket > 0 );
}

bool SocketServerTestCase::close::onSetup( SocketServer*& pObject )
{
  try
  {
    pObject = new SocketServer( 0 );
    return true;
  }
  catch ( std::exception& ) { return false; }
}

void SocketServerTestCase::close::onRun( SocketServer& object )
{
  object.add( m_port, true, true );
  object.close();
  object.block( *this );
}
}
