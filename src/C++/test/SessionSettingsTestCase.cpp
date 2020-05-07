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

#include <gtest/gtest.h>
#include <SessionSettings.h>
#include <sstream>

using namespace FIX;

TEST(SessionSettingsTests, readFromIstream)
{
  SessionSettings object;
  std::string configuration =
    "[DEFAULT]\n"
    "ConnectionType=initiator\n"
    "BeginString=FIX.4.0\n"
    "Value=4\n"
    "Empty=\n"
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
    "TargetCompID=WT\n"
    "[SESSION]\n"
    "SenderCompID=NYSE\n"
    "TargetCompID=TW\n"
    "SessionQualifier=QUAL1\n"
    "Value=5\n"
    "[SESSION]\n"
    "SenderCompID=NYSE\n"
    "TargetCompID=TW\n"
    "SessionQualifier=QUAL2\n"
    "Value=6\n"
    "[SESSION]\n"
    "BeginString=FIXT.1.1\n"
    "SenderCompID=NYSE\n"
    "TargetCompID=TW\n";

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
  SessionID session5( BeginString( "FIX.4.0" ),
                      SenderCompID( "NYSE" ),
                      TargetCompID( "TW" ),
                      "QUAL1" );
  SessionID session6( BeginString( "FIX.4.0" ),
                      SenderCompID( "NYSE" ),
                      TargetCompID( "TW" ),
                      "QUAL2" );

  ASSERT_EQ( "", object.get().getString( "Empty" ) );

  ASSERT_EQ( 4, object.get().getInt( "Value" ) );
  ASSERT_EQ( 1, object.get( session1 ).getInt( "Value" ) );
  ASSERT_EQ( 2, object.get( session2 ).getInt( "Value" ) );
  ASSERT_EQ( 3, object.get( session3 ).getInt( "Value" ) );
  ASSERT_EQ( 4, object.get( session4 ).getInt( "Value" ) );
  ASSERT_EQ( 5, object.get( session5 ).getInt( "Value" ) );
  ASSERT_EQ( 6, object.get( session6 ).getInt( "Value" ) );

  // case insensitivity
  ASSERT_EQ( 4, object.get().getInt( "value" ) );
  ASSERT_EQ( 1, object.get( session1 ).getInt( "value" ) );
  ASSERT_EQ( 2, object.get( session2 ).getInt( "value" ) );
  ASSERT_EQ( 3, object.get( session3 ).getInt( "value" ) );
  ASSERT_EQ( 4, object.get( session4 ).getInt( "value" ) );
  ASSERT_EQ( 5, object.get( session5 ).getInt( "value" ) );
  ASSERT_EQ( 6, object.get( session6 ).getInt( "value" ) );

  ASSERT_EQ( 4, object.get().getInt( "VALUE" ) );
  ASSERT_EQ( 1, object.get( session1 ).getInt( "VALUE" ) );
  ASSERT_EQ( 2, object.get( session2 ).getInt( "VALUE" ) );
  ASSERT_EQ( 3, object.get( session3 ).getInt( "VALUE" ) );
  ASSERT_EQ( 4, object.get( session4 ).getInt( "VALUE" ) );
  ASSERT_EQ( 5, object.get( session5 ).getInt( "VALUE" ) );
  ASSERT_EQ( 6, object.get( session6 ).getInt( "VALUE" ) );
}

TEST(SessionSettingsTests, readFromIstreamDefaultLast)
{
  SessionSettings object;
  std::string configuration =
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
    "TargetCompID=WT\n"
    "[SESSION]\n"
    "SenderCompID=NYSE\n"
    "TargetCompID=TW\n"
    "SessionQualifier=QUAL1\n"
    "Value=5\n"
    "[SESSION]\n"
    "SenderCompID=NYSE\n"
    "TargetCompID=TW\n"
    "SessionQualifier=QUAL2\n"
    "Value=6\n"
    "[DEFAULT]\n"
    "ConnectionType=initiator\n"
    "BeginString=FIX.4.0\n"
    "Value=4\n"
    "Empty=\n";

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
  SessionID session5( BeginString( "FIX.4.0" ),
                      SenderCompID( "NYSE" ),
                      TargetCompID( "TW" ),
                      "QUAL1" );
  SessionID session6( BeginString( "FIX.4.0" ),
                      SenderCompID( "NYSE" ),
                      TargetCompID( "TW" ),
                      "QUAL2" );

  ASSERT_EQ( "", object.get().getString( "Empty" ) );

  ASSERT_EQ( 4, object.get().getInt( "Value" ) );
  ASSERT_EQ( 1, object.get( session1 ).getInt( "Value" ) );
  ASSERT_EQ( 2, object.get( session2 ).getInt( "Value" ) );
  ASSERT_EQ( 3, object.get( session3 ).getInt( "Value" ) );
  ASSERT_EQ( 4, object.get( session4 ).getInt( "Value" ) );
  ASSERT_EQ( 5, object.get( session5 ).getInt( "Value" ) );
  ASSERT_EQ( 6, object.get( session6 ).getInt( "Value" ) );

  // case insensitivity
  ASSERT_EQ( 4, object.get().getInt( "value" ) );
  ASSERT_EQ( 1, object.get( session1 ).getInt( "value" ) );
  ASSERT_EQ( 2, object.get( session2 ).getInt( "value" ) );
  ASSERT_EQ( 3, object.get( session3 ).getInt( "value" ) );
  ASSERT_EQ( 4, object.get( session4 ).getInt( "value" ) );
  ASSERT_EQ( 5, object.get( session5 ).getInt( "value" ) );
  ASSERT_EQ( 6, object.get( session6 ).getInt( "value" ) );

  ASSERT_EQ( 4, object.get().getInt( "VALUE" ) );
  ASSERT_EQ( 1, object.get( session1 ).getInt( "VALUE" ) );
  ASSERT_EQ( 2, object.get( session2 ).getInt( "VALUE" ) );
  ASSERT_EQ( 3, object.get( session3 ).getInt( "VALUE" ) );
  ASSERT_EQ( 4, object.get( session4 ).getInt( "VALUE" ) );
  ASSERT_EQ( 5, object.get( session5 ).getInt( "VALUE" ) );
  ASSERT_EQ( 6, object.get( session6 ).getInt( "VALUE" ) );
}

TEST(SessionSettingsTests, readFromIstreamDuplicateSession)
{
  SessionSettings object;
  std::string configuration =
    "[DEFAULT]\n"
    "ConnectionType=initiator\n"
    "BeginString=FIX.4.0\n"
    "[SESSION]\n"
    "BeginString=FIX.4.2\n"
    "SenderCompID=ISLD\n"
    "TargetCompID=TW\n"
    "[SESSION]\n"
    "BeginString=FIX.4.2\n"
    "SenderCompID=ISLD\n"
    "TargetCompID=TW\n";

  std::istringstream input( configuration );

  ASSERT_THROW( input >> object, ConfigError );
}

TEST(SessionSettingsTests, stripSpaces)
{
  SessionSettings object;
  std::string configuration =
    " [ DEFAULT ] \n"
    "StringValue1=StringValue1\n"
    "StringValue2=StringValue2 \n"
    "StringValue3= StringValue3\n"
    "StringValue4 =StringValue4\n"
    " StringValue5=StringValue5\n"
    "  StringValue6  =  StringValue6  \n"
    "IntegerValue1=1\n"
    "IntegerValue2=2 \n"
    "IntegerValue3= 3\n"
    "IntegerValue4 =4\n"
    " IntegerValue5=5\n"
    "  IntegerValue6  =  6  \n"
    "  [  SESSION  ]  \n"
    "ConnectionType=initiator\n"
    "BeginString=FIX.4.0\n"
    "SenderCompID=ISLD\n"
    "TargetCompID=TW\n"
    "DoubleValue1=1.1\n"
    "DoubleValue2=2.2 \n"
    "DoubleValue3= 3.3\n"
    "DoubleValue4 =4.4\n"
    " DoubleValue5=5.5\n"
    "  DoubleValue6  =  6.6  \n";

  std::istringstream input( configuration );

  input >> object;

  SessionID session1( BeginString( "FIX.4.0" ),
                      SenderCompID( "ISLD" ),
                      TargetCompID( "TW" ) );

  ASSERT_EQ( "StringValue1", object.get().getString( "StringValue1" ) );
  ASSERT_EQ( "StringValue2", object.get().getString( "StringValue2" ) );
  ASSERT_EQ( "StringValue3", object.get().getString( "StringValue3" ) );
  ASSERT_EQ( "StringValue4", object.get().getString( "StringValue4" ) );
  ASSERT_EQ( "StringValue5", object.get().getString( "StringValue5" ) );
  ASSERT_EQ( "StringValue6", object.get().getString( "StringValue6" ) );

  ASSERT_EQ( 1, object.get().getInt( "IntegerValue1" ) );
  ASSERT_EQ( 2, object.get().getInt( "IntegerValue2" ) );
  ASSERT_EQ( 3, object.get().getInt( "IntegerValue3" ) );
  ASSERT_EQ( 4, object.get().getInt( "IntegerValue4" ) );
  ASSERT_EQ( 5, object.get().getInt( "IntegerValue5" ) );
  ASSERT_EQ( 6, object.get().getInt( "IntegerValue6" ) );

  ASSERT_DOUBLE_EQ( 1.1, object.get(session1).getDouble( "DoubleValue1" ) );
  ASSERT_DOUBLE_EQ( 2.2, object.get(session1).getDouble( "DoubleValue2" ) );
  ASSERT_DOUBLE_EQ( 3.3, object.get(session1).getDouble( "DoubleValue3" ) );
  ASSERT_DOUBLE_EQ( 4.4, object.get(session1).getDouble( "DoubleValue4" ) );
  ASSERT_DOUBLE_EQ( 5.5, object.get(session1).getDouble( "DoubleValue5" ) );
  ASSERT_DOUBLE_EQ( 6.6, object.get(session1).getDouble( "DoubleValue6" ) );
}

TEST(SessionSettingsTests, writeToOstream)
{
  SessionSettings object;
  std::stringstream istream;
  istream 
    << "[DEFAULT]" << std::endl
    << "BEGINSTRING=FIX.4.0" << std::endl
    << "CONNECTIONTYPE=initiator" << std::endl
    << "VALUE=4" << std::endl
    << std::endl
    << "[SESSION]" << std::endl
    << "BEGINSTRING=FIX.4.2" << std::endl
    << "SENDERCOMPID=SENDER1" << std::endl
    << "TARGETCOMPID=TARGET1" << std::endl
    << "VALUE=1" << std::endl
    << std::endl
    << "[SESSION]" << std::endl
    << "BEGINSTRING=FIX.4.2" << std::endl
    << "SENDERCOMPID=SENDER2" << std::endl
    << "TARGETCOMPID=TARGET2" << std::endl
    << "VALUE=2" << std::endl
    << std::endl;

  istream >> object;
  
  std::stringstream ostream;
  ostream << object;
  ASSERT_EQ( istream.str(), ostream.str() );
}

TEST(SessionSettingsTests, validate)
{
  SessionSettings object;
  SessionID sessionID = SessionID( "FIX.4.2", "SenderCompID", "TargetCompID" );

  // ConnectionType not set
  Dictionary dictionary;    
  ASSERT_THROW( object.set( sessionID, dictionary ), ConfigError );

  // ConnectionType set to invalid value
  dictionary.setString( CONNECTION_TYPE, "badvalue" );
  ASSERT_THROW( object.set( sessionID, dictionary ), ConfigError );

  // ConnectionType set to valid value
  dictionary.setString( CONNECTION_TYPE, "initiator" );
  object.set( sessionID, dictionary );

  // Invalid BeginString
  sessionID = SessionID( "FIX4.2", "SenderCompID", "TargetCompID" );
  ASSERT_THROW( object.set( sessionID, dictionary ), ConfigError );
}
