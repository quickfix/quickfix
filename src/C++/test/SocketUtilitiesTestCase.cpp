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

#ifdef _MSC_VER
#pragma warning( disable : 4503 4355 4786 )
#include "stdafx.h"
#else
#include "config.h"
#endif

#include "SocketUtilitiesTestCase.h"

namespace FIX
{
int SocketUtilitiesTestCase::createSocket( int port, char* address )
{
  int sock = socket( PF_INET, SOCK_STREAM, IPPROTO_TCP );

  sockaddr_in addr;
  addr.sin_family = PF_INET;
  addr.sin_port = htons( port );
  addr.sin_addr.s_addr = inet_addr( address );

  int result = ::connect( sock, reinterpret_cast < sockaddr* > ( &addr ),
                          sizeof( addr ) );
  if ( result != 0 )
  {
    destroySocket( sock );
    return -1;
  }
  return sock;
}

void SocketUtilitiesTestCase::destroySocket( int s )
{
  socket_close( s );
  socket_invalidate( s );
}

bool SocketUtilitiesTestCase::Test::onSetup( int*& )
{
  pServer = new SocketServer( m_port, 0, true );
  s1 = createSocket( m_port, "127.0.0.1" );
  return s1 > 0;
}

void SocketUtilitiesTestCase::Test::onTeardown( int* )
{
  pServer->close();
  delete pServer;
  destroySocket( s2 );
}

void SocketUtilitiesTestCase::fionread::onRun( int& )
{
  s2 = pServer->accept();
  assert( socket_send( s1, "ooga", 4 ) );
  int bytes = 0;
  socket_fionread( s2, bytes );
  assert( bytes == 4 );
  recv( s2, ( char* ) ( &bytes ), 4, 0 );
  destroySocket( s1 );
}

void SocketUtilitiesTestCase::send::onRun( int& )
{
  s2 = pServer->accept();
  assert( socket_send( s1, "ooga", 4 ) );
  destroySocket( s1 );
  assert( !socket_send( s1, "ooga", 4 ) );
}

void SocketUtilitiesTestCase::hostname::onRun( int& )
{
  assert( !std::strcmp( socket_hostname( "localhost" ), "127.0.0.1" ) );
  assert( socket_hostname( "not_likely_to_be_a_real_name" ) == 0 );
  assert( !std::strcmp( socket_hostname( "127.0.0.1" ), "127.0.0.1" ) );
}
}
