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

#include "AcceptorTestCase.h"
#include <sstream>

namespace FIX
{
bool AcceptorTestCase::parseStream::onSetup( Acceptor*& pObject )
{
  SessionSettings settings;
  std::string input =
    "[DEFAULT]\n"
    "ConnectionType=acceptor\n"
    "SocketAcceptPort=5000\n"
    "StartTime=00:00:00\n"
    "EndTime=00:00:00\n"
    "UseDataDictionary=N\n"
    "[SESSION]\n"
    "BeginString=FIX.4.2\n"
    "SenderCompID=ISLD\n"
    "TargetCompID=TW\n"
    "[SESSION]\n"
    "BeginString=FIX.4.1\n"
    "SenderCompID=ISLD\n"
    "TargetCompID=WT\n";
  std::stringstream stream( input );
  stream >> settings;
  m_pFactory = new MemoryStoreFactory();
  pObject = new TestAcceptor( settings, *m_pFactory );
  return true;
}

void AcceptorTestCase::parseStream::onRun( Acceptor& object )
{
  assert( object.has( SessionID( BeginString( "FIX.4.2" ),
                                 SenderCompID( "ISLD" ),
                                 TargetCompID( "TW" ) ) ) );
  assert( object.has( SessionID( BeginString( "FIX.4.1" ),
                                 SenderCompID( "ISLD" ),
                                 TargetCompID( "WT" ) ) ) );
}
}
