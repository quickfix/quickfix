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

#ifndef FIX_SOCKETSERVERTESTCASE_H
#define FIX_SOCKETSERVERTESTCASE_H

#include <CPPTest/TestCase.h>
#include "../SocketServer.h"
#include "../Utility.h"

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
  typedef CPPTest::Test < SocketServer > Test;

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

class block : public Test, public SocketServer::Strategy
  {
  public:
  block( short port ) :
    m_connect( 0 ), m_data( 0 ), m_disconnect( 0 ),
    m_connectSocket( 0 ), m_dataSocket( 0 ), m_disconnectSocket( 0 ),
    m_bufLen( 0 ), m_port( port ) {}

    bool onSetup( SocketServer*& pObject );
    void onRun( SocketServer& object );
    void onTeardown( SocketServer* pObject ) { delete pObject; }

    void onConnect( SocketServer&, int socket )
    { m_connect++; m_connectSocket = socket; }
    void onData( SocketServer&, int socket )
    {
      m_data++; m_dataSocket = socket;
      m_bufLen = recv( socket, m_buf, 1, 0 );
    }
    void onDisconnect( SocketServer&, int socket )
    { m_disconnect++; m_disconnectSocket = socket; }
    void onError( SocketServer& )
    { assert( false ); }
    int m_connect, m_data, m_disconnect;
    int m_connectSocket, m_dataSocket, m_disconnectSocket;
    char m_buf[ 1 ]; size_t m_bufLen;
    short m_port;
  }
  m_block;

class close : public Test, public SocketServer::Strategy
  {
  public:
  close( short port ) : m_port( port ) {}
    bool onSetup( SocketServer*& pObject );
    void onRun( SocketServer& object );
    void onTeardown( SocketServer* pObject ) { delete pObject; }

    void onConnect( SocketServer&, int socket ) {}
    void onData( SocketServer&, int socket ) {}
    void onDisconnect( SocketServer&, int socket ) {}
    void onError( SocketServer& ) {}
    short m_port;
  }
  m_close;
};
}

#endif //FIX_SOCKETSERVERTESTCASE_H
