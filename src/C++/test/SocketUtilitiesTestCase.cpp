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
  assert( !strcmp( socket_hostname( "localhost" ), "127.0.0.1" ) );
  assert( socket_hostname( "not_likely_to_be_a_real_name" ) == 0 );
  assert( !strcmp( socket_hostname( "127.0.0.1" ), "127.0.0.1" ) );
}
}
