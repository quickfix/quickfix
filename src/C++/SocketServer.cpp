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

#include "SocketServer.h"
#include "Utility.h"
#ifndef _MSC_VER
#include <unistd.h>
#include <sys/ioctl.h>
#include <sys/types.h>
#include <sys/stat.h>
#endif
#include <exception>

namespace FIX
{
class ServerWrapper : public SocketMonitor::Strategy
{
public:
  ServerWrapper( int socket, SocketServer& server,
                 SocketServer::Strategy& strategy )
: m_socket( socket ), m_server( server ), m_strategy( strategy ) {}

private:
  void onEvent( SocketMonitor&, int socket )
  { QF_STACK_PUSH(ServerWrapper::onEvent)

    if ( socket == m_socket )
    {
      m_strategy.onConnect( m_server, m_server.accept() );
    }
    else
      if ( socket_disconnected( socket ) )
      {
        m_server.getMonitor().drop( socket );
      }
      else
        m_strategy.onData( m_server, socket );

    QF_STACK_POP
  }

  void onError( SocketMonitor&, int socket )
  { QF_STACK_PUSH(ServerWrapper::onError)

    m_strategy.onDisconnect( m_server, socket );
    m_server.getMonitor().drop( socket );

    QF_STACK_POP
  }

  void onError( SocketMonitor& )
  { QF_STACK_PUSH(ServerWrapper::onEvent)
    m_strategy.onError( m_server ); 
    QF_STACK_POP
  }

  void onTimeout( SocketMonitor& )
  { QF_STACK_PUSH(ServerWrapper::onTimeout)
    m_strategy.onTimeout( m_server );
    QF_STACK_POP
  };

  int m_socket;
  SocketServer& m_server;
  SocketServer::Strategy& m_strategy;
};

SocketServer::SocketServer( int port, int timeout, bool reuse )
: m_port( port ), m_monitor( timeout )
{
  m_socket = socket_createAcceptor( port, reuse ); 
  if ( m_socket < 0 ) throw std::exception();
  m_monitor.add( m_socket );
}

int SocketServer::accept()
{ QF_STACK_PUSH(SocketServer::accept)

  int result = ::accept( m_socket, 0, 0 );
  if ( result >= 0 ) m_monitor.add( result );
  return result;

  QF_STACK_POP
}

void SocketServer::close()
{ QF_STACK_PUSH(SocketServer::close)

  socket_close( m_socket );
  socket_invalidate( m_socket );

  QF_STACK_POP
}

bool SocketServer::block( Strategy& strategy )
{ QF_STACK_PUSH(SocketServer::block)

  if ( socket_isValid( m_socket ) )
  {
    ServerWrapper wrapper( m_socket, *this, strategy );
    m_monitor.block( wrapper );
    return true;
  }
  return false;

  QF_STACK_POP
}
}
