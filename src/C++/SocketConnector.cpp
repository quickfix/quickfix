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

#include "SocketConnector.h"
#include "Utility.h"
#ifndef _MSC_VER
#include <unistd.h>
#include <sys/ioctl.h>
#include <sys/types.h>
#include <sys/stat.h>
#endif
#include <iostream>

namespace FIX
{
class ConnectorWrapper : public SocketMonitor::Strategy
{
public:
  ConnectorWrapper( SocketConnector& connector,
                    SocketConnector::Strategy& strategy )
: m_connector( connector ), m_strategy( strategy ) {}

private:
  void onEvent( SocketMonitor&, int socket )
  { QF_STACK_PUSH(ConnectorWrapper::onEvent)

    if ( socket_disconnected( socket ) )
    {
      m_connector.getMonitor().drop( socket );
    }
    else
      m_strategy.onData( m_connector, socket );

    QF_STACK_POP
  }

  void onError( SocketMonitor&, int socket )
  { QF_STACK_PUSH(ConnectorWrapper::onError)

    m_strategy.onDisconnect( m_connector, socket );
    m_connector.getMonitor().drop( socket );

    QF_STACK_POP
  }

  void onError( SocketMonitor& )
  { QF_STACK_PUSH(ConnectorWrapper::onError)
    m_strategy.onError( m_connector ); 
    QF_STACK_POP
  }

  void onTimeout( SocketMonitor& )
  { QF_STACK_PUSH(ConnectorWrapper::onTimeout)
    m_strategy.onTimeout( m_connector );
    QF_STACK_POP
  };

  SocketConnector& m_connector;
  SocketConnector::Strategy& m_strategy;
};

SocketConnector::SocketConnector( int timeout )
: m_monitor( timeout ) {}

int SocketConnector::connect( const std::string& address, int port )
{ QF_STACK_PUSH(SocketConnector::connect)

  int sock = socket( PF_INET, SOCK_STREAM, IPPROTO_TCP );

  sockaddr_in addr;
  addr.sin_family = PF_INET;
  addr.sin_port = htons( port );
  addr.sin_addr.s_addr = inet_addr( socket_hostname( address.c_str() ) );

  int result = ::connect( sock, reinterpret_cast < sockaddr* > ( &addr ),
                          sizeof( addr ) );
  if ( result == 0 )
  {
    m_monitor.add( sock );
    return sock;
  }
  else
  {
    socket_close( sock );
    return 0;
  }

  QF_STACK_POP
}

int SocketConnector::connect( const std::string& address, int port,
                              Strategy& strategy )
{ QF_STACK_PUSH(SocketConnector::connect)

  int sock = connect( address, port );
  if ( sock )
    strategy.onConnect( *this, sock );
  return sock;

  QF_STACK_POP
}

void SocketConnector::block( Strategy& strategy )
{ QF_STACK_PUSH(SocketConnector::block)

  ConnectorWrapper wrapper( *this, strategy );
  m_monitor.block( wrapper );

  QF_STACK_POP
}
}
