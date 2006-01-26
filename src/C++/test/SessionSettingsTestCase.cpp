/****************************************************************************
** Copyright (c) quickfixengine.org  All rights reserved.
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

#include "SessionSettingsTestCase.h"
#include <sstream>

namespace FIX
{
void SessionSettingsTestCase::readFromIstream::onRun
( SessionSettings& object )
{
  std::string configuration =
    "[DEFAULT]\n"
    "ConnectionType=initiator\n"
    "BeginString=FIX.4.0\n"
    "Value=4\n"
    "[SESSION]\n"
    "BeginString=FIX.4.2\n"
    "SenderCompID=ISLD\n"
    "TargetCompID=TW\n"
    "Value=1\n"
    "# this is a comment\n"
    "[SESSION]\n"
    "BeginString=FIX.4.1\n"
    "SenderCompID=ISLD\n"
    "TargetCompID=WT\n"
    "Value=2\n"
    "[SESSION]\n"
    "SenderCompID=ARCA\n"
    "TargetCompID=TW\n"
    "Value=3\n"
    "[SESSION]\n"
    "SenderCompID=ARCA\n"
    "TargetCompID=WT\n";

  std::istringstream input( configuration );

  input >> object;

  SessionID session1( BeginString( "FIX.4.2" ),
                      SenderCompID( "ISLD" ),
                      TargetCompID( "TW" ) );
  SessionID session2( BeginString( "FIX.4.1" ),
                      SenderCompID( "ISLD" ),
                      TargetCompID( "WT" ) );
  SessionID session3( BeginString( "FIX.4.0" ),
                      SenderCompID( "ARCA" ),
                      TargetCompID( "TW" ) );
  SessionID session4( BeginString( "FIX.4.0" ),
                      SenderCompID( "ARCA" ),
                      TargetCompID( "WT" ) );

  assert( object.get().getLong( "Value" ) == 4 );
  assert( object.get( session1 ).getLong( "Value" ) == 1 );
  assert( object.get( session2 ).getLong( "Value" ) == 2 );
  assert( object.get( session3 ).getLong( "Value" ) == 3 );
  assert( object.get( session4 ).getLong( "Value" ) == 4 );
}

void SessionSettingsTestCase::validate::onRun( SessionSettings& object )
{
  SessionID sessionID = SessionID( "FIX.4.2", "SenderCompID", "TargetCompID" );

  // ConnectionType not set
  Dictionary dictionary;
  try
  {
    object.set( sessionID, dictionary );
    assert( false );
  }
  catch( ConfigError& ) {}

  // ConnectionType set to invalid value
  dictionary.setString( CONNECTION_TYPE, "badvalue" );
  try
  {
    object.set( sessionID, dictionary );
    assert( false );
  }
  catch( ConfigError& ) {}

    // ConnectionType set to valid value
  dictionary.setString( CONNECTION_TYPE, "initiator" );
  try
  {
    object.set( sessionID, dictionary );
  }
  catch( ConfigError& )
  {
    assert( false );
  }

  // Invalid BeginString
  sessionID = SessionID( "FIX4.2", "SenderCompID", "TargetCompID" );
  try
  {
    object.set( sessionID, dictionary );
    assert( false );
  }
  catch( ConfigError& )
  {
  }
}

}
