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
    pObject = new SocketServer( m_port );
    return true;
  }
  catch ( std::exception& ) { return false; }
}

void SocketServerTestCase::accept::onRun( SocketServer& object )
{
  int clientS1 = SocketUtilitiesTestCase::createSocket( m_port, "127.0.0.1" );
  int s1 = object.accept();
  assert( s1 >= 0 );
  assert( object.numConnections() == 1 );

  int clientS2 = SocketUtilitiesTestCase::createSocket( m_port, "127.0.0.1" );
  int s2 = object.accept();
  assert( s2 >= 0 );
  assert( object.numConnections() == 2 );

  int clientS3 = SocketUtilitiesTestCase::createSocket( m_port, "127.0.0.1" );
  int s3 = object.accept();
  assert( s3 >= 0 );
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
    pObject = new SocketServer( m_port );
    return true;
  }
  catch ( std::exception& ) { return false; }
}

void SocketServerTestCase::block::onRun( SocketServer& object )
{
  int s = SocketUtilitiesTestCase::createSocket( m_port, "127.0.0.1" );
  assert( s >= 0 );

  object.block( *this );
  assert( m_connect == 1 );
  assert( m_connectSocket > 0 );

  send( s, "1", 1, 0 );
  object.block( *this );
  assert( m_data == 1 );
  assert( m_bufLen == 1 );
  assert( *m_buf == '1' );
  assert( m_dataSocket > 0 );

  SocketUtilitiesTestCase::destroySocket( s );
  object.block( *this );
  object.block( *this );
  assert( m_disconnect == 1 );
  assert( m_disconnectSocket > 0 );
}

bool SocketServerTestCase::close::onSetup( SocketServer*& pObject )
{
  try
  {
    pObject = new SocketServer( m_port );
    return true;
  }
  catch ( std::exception& ) { return false; }
}

void SocketServerTestCase::close::onRun( SocketServer& object )
{
  object.close();
  object.block( *this );
}
}
