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

#include "SocketConnectorTestCase.h"
#include "SocketServer.h"
#ifdef _MSC_VER
#include <stdlib.h>
#endif

namespace FIX
{
bool SocketConnectorTestCase::accept::onSetup( SocketConnector*& pObject )
{
  try
  {
    pObject = new SocketConnector();
    return true;
  }
  catch ( std::exception& ) { return false; }
}

void SocketConnectorTestCase::accept::onRun( SocketConnector& object )
{
  SocketServer server( m_port, 0, true );
  assert( object.connect( "127.0.0.1", m_port ) );
  assert( server.accept() );
}
}
