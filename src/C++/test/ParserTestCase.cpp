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

#include "ParserTestCase.h"
#include <string>
#include <sstream>

namespace FIX
{
bool ParserTestCase::extractLength::onSetup( Parser*& pObject )
{
  m_normalLength = "8=FIX.4.2\0019=12\00135=A\001108=30\00110=31\001";
  m_badLength = "8=FIX.4.2\0019=A\00135=A\001108=30\00110=31\001";
  m_negativeLength = "8=FIX.4.2\0019=-1\00135=A\001108=30\00110=31\001";
  return true;
}

void ParserTestCase::extractLength::onRun( Parser& object )
{
  int length = 0;
  std::string::size_type pos = 0;

  assert( object.extractLength(length, pos, m_normalLength) );
  assert( length == 12 );
  assert( pos == 15 );

  try { object.extractLength(length, pos, m_badLength);
        assert(false); }
  catch( MessageParseError& ) {}

  try { object.extractLength(length, pos, m_negativeLength);
        assert(false); }
  catch( MessageParseError& ) {}

  assert( !object.extractLength(length, pos, "") );
}

bool ParserTestCase::readFixMessage::onSetup( Parser*& pObject )
{
  m_fixMsg1 = "8=FIX.4.2\0019=12\00135=A\001108=30\00110=31\001";
  m_fixMsg2 = "8=FIX.4.2\0019=17\00135=4\00136=88\001123=Y\00110=34\001";
  m_fixMsg3 = "8=FIX.4.2\0019=19\00135=A\001108=30\0019710=8\00110=31\001";

  m_pStream = new std::stringstream( m_fixMsg1 + m_fixMsg2 + m_fixMsg3 );

  pObject = new Parser( *m_pStream );
  return true;
}

void ParserTestCase::readFixMessage::onRun( Parser& object )
{
  std::string fixMsg1;
  assert( object.readFixMessage( fixMsg1 ) );
  assert( fixMsg1 == m_fixMsg1 );

  std::string fixMsg2;
  assert( object.readFixMessage( fixMsg2 ) );
  assert( fixMsg2 == m_fixMsg2 );

  std::string fixMsg3;
  assert( object.readFixMessage( fixMsg3 ) );
  assert( fixMsg3 == m_fixMsg3 );
}

bool ParserTestCase::readPartialFixMessage::onSetup( Parser*& pObject )
{
  m_partFixMsg1 = "8=FIX.4.2\0019=17\00135=4\00136=";
  m_partFixMsg2 = "88\001123=Y\00110=34\001";

  m_pStream = new std::stringstream( m_partFixMsg1 );
  pObject = new Parser( *m_pStream );
  return true;
}

void ParserTestCase::readPartialFixMessage::onRun( Parser& object )
{
  std::string partFixMsg;
  assert( !object.readFixMessage( partFixMsg ) );
  std::stringstream finishStream( m_partFixMsg2 );
  object.setStream( finishStream );
  assert( object.readFixMessage( partFixMsg ) );
  assert( partFixMsg == ( m_partFixMsg1 + m_partFixMsg2 ) );
}

bool ParserTestCase::readFromSocket::onSetup( Parser*& pObject )
{
  m_fixMsg1 = "8=FIX.4.2\0019=12\00135=A\001108=30\00110=31\001";
  m_fixMsg2 = "8=FIX.4.2\0019=17\00135=4\00136=88\001123=Y\00110=34\001";
  m_fixMsg3 = "8=FIX.4.2\0019=19\00135=A\001108=30\0019710=8\00110=31\001";

  m_pServer = new SocketServer( m_port, 0, true );
  m_pConnector = new SocketConnector;
  int connSocket = m_pConnector->connect( "127.0.0.1", m_port );
  int recvSocket = m_pServer->accept();

  std::string buffer = m_fixMsg1 + m_fixMsg2 + m_fixMsg3;
  if ( !socket_send( connSocket, buffer.c_str(), buffer.length() ) )
    return false;

  pObject = new Parser( recvSocket );
  return true;
}

void ParserTestCase::readFromSocket::onRun( Parser& object )
{
  std::string fixMsg1;
  assert( object.readFixMessage( fixMsg1 ) );
  assert( fixMsg1 == m_fixMsg1 );

  std::string fixMsg2;
  assert( object.readFixMessage( fixMsg2 ) );
  assert( fixMsg2 == m_fixMsg2 );

  std::string fixMsg3;
  assert( object.readFixMessage( fixMsg3 ) );
  assert( fixMsg3 == m_fixMsg3 );
}

}
