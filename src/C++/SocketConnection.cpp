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
#include "stdafx.h"
#else
#include "config.h"
#endif
#include "CallStack.h"

#include "SocketConnection.h"
#include "SocketAcceptor.h"
#include "SocketConnector.h"
#include "SocketInitiator.h"
#include "Utility.h"

namespace FIX
{
SocketConnection::SocketConnection( int s, SocketMonitor* pMonitor )
: m_socket( s ), m_parser( s ),
  m_pSession( 0 ), m_pMonitor( pMonitor ) {}

SocketConnection::SocketConnection( SocketInitiator& i,
                                    const SessionID& sessionID, int s,
                                    SocketMonitor* pMonitor )
: m_socket( s ), m_parser( s ),
  m_pSession( i.getSession( sessionID, *this ) ),
  m_pMonitor( pMonitor ) {}

bool SocketConnection::send( const std::string& msg )
{ QF_STACK_PUSH(SocketConnection::send)
  return socket_send( m_socket, msg.c_str(), msg.length() );
  QF_STACK_POP
}

void SocketConnection::disconnect()
{ QF_STACK_PUSH(SocketConnection::disconnect)

  if ( m_pMonitor )
    m_pMonitor->drop( m_socket );

  QF_STACK_POP
}

bool SocketConnection::read( SocketConnector& s )
{ QF_STACK_PUSH(SocketConnection::read)

  if ( !m_pSession ) return false;

  std::string msg;
  if ( !readMessage( msg ) ) return false;

  try
  {
    m_pSession->next( msg );
  }
  catch ( InvalidMessage& ) {}
  return true;

  QF_STACK_POP
}

bool SocketConnection::read( SocketAcceptor& a, SocketServer& s )
{ QF_STACK_PUSH(SocketConnection::read)

  std::string msg;
  try
  {
    if ( !readMessage( msg ) ) return false;

    if ( !m_pSession )
      m_pSession = a.getSession( msg, *this );

    if ( m_pSession )
      m_pSession->next( msg );
    else
      s.getMonitor().drop( m_socket );
    return true;
  }
  catch ( RecvFailed& )
  {
    s.getMonitor().drop( m_socket );
  }
  catch ( InvalidMessage& )
  {
    if ( !m_pSession->isLoggedOn() )
      s.getMonitor().drop( m_socket );
  }
  return true;

  QF_STACK_POP
}

bool SocketConnection::readMessage( std::string& msg )
throw( RecvFailed& )
{ QF_STACK_PUSH(SocketConnection::readMessage)

  try
  {
    return m_parser.readFixMessage( msg );
  }
  catch ( MessageParseError& ) {}
  return true;

  QF_STACK_POP
}

void SocketConnection::onTimeout()
{ QF_STACK_PUSH(SocketConnection::onTimeout)
  if ( m_pSession ) m_pSession->next();
  QF_STACK_POP
}
} // namespace FIX
