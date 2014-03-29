/****************************************************************************
** Copyright (c) 2001-2014
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

#include <UnitTest++.h>
#include <SocketConnector.h>
#include <SocketServer.h>
#include "TestHelper.h"
#ifdef _MSC_VER
#include <stdlib.h>
#endif

using namespace FIX;

SUITE(SocketConnectorTests)
{

TEST(accept)
{
  SocketConnector object;
  SocketServer server( 0 );
  int socket = server.add( TestSettings::port, true, true );
  CHECK( object.connect( "127.0.0.1", TestSettings::port, false, 1024, 1024 ) );
  CHECK( server.accept(socket) );
}

}
