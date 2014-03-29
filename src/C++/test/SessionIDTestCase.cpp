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
#include <SessionID.h>
#include <string>
#include <sstream>

using namespace FIX;

SUITE(SessionIDTests)
{

struct lessThanFixture
{
  lessThanFixture()
  : less1( BeginString( "A" ), SenderCompID( "A" ), TargetCompID( "A" ) ),
    less2( BeginString( "A" ), SenderCompID( "A" ), TargetCompID( "B" ) ),
    less3( BeginString( "A" ), SenderCompID( "B" ), TargetCompID( "A" ) ),
    less4( BeginString( "B" ), SenderCompID( "A" ), TargetCompID( "A" ) ),
    less5( BeginString( "B" ), SenderCompID( "B" ), TargetCompID( "B" ) ),
    less6( BeginString( "C" ), SenderCompID( "A" ), TargetCompID( "C" ) )
  {}

  SessionID less1;
  SessionID less2;
  SessionID less3;
  SessionID less4;
  SessionID less5;
  SessionID less6;
};

TEST_FIXTURE(lessThanFixture,lessThan)
{
  CHECK( !( less1 < less1 ) );
  CHECK( less1 < less2 );
  CHECK( less1 < less3 );
  CHECK( less1 < less4 );
  CHECK( less1 < less5 );
  CHECK( less1 < less6 );

  CHECK( !( less2 < less1 ) );
  CHECK( !( less2 < less2 ) );
  CHECK( less2 < less3 );
  CHECK( less2 < less4 );
  CHECK( less2 < less5 );
  CHECK( less2 < less6 );

  CHECK( !( less3 < less1 ) );
  CHECK( !( less3 < less2 ) );
  CHECK( !( less3 < less3 ) );
  CHECK( less3 < less4 );
  CHECK( less3 < less5 );
  CHECK( less3 < less6 );

  CHECK( !( less4 < less1 ) );
  CHECK( !( less4 < less2 ) );
  CHECK( !( less4 < less3 ) );
  CHECK( !( less4 < less4 ) );
  CHECK( less4 < less5 );
  CHECK( less4 < less6 );

  CHECK( !( less5 < less1 ) );
  CHECK( !( less5 < less2 ) );
  CHECK( !( less5 < less3 ) );
  CHECK( !( less5 < less4 ) );
  CHECK( !( less5 < less5 ) );
  CHECK( less5 < less6 );

  CHECK( !( less6 < less1 ) );
  CHECK( !( less6 < less2 ) );
  CHECK( !( less6 < less3 ) );
  CHECK( !( less6 < less4 ) );
  CHECK( !( less6 < less5 ) );
  CHECK( !( less6 < less6 ) );
}

TEST(streamOut)
{
  SessionID object( BeginString( "FIX.4.2" ),
                    SenderCompID( "SENDER" ),
                    TargetCompID( "TARGET" ) );

  std::stringstream strstream;
  strstream << object;
  CHECK_EQUAL( "FIX.4.2:SENDER->TARGET", strstream.str() );
}

TEST(streamIn)
{
  SessionID object;
  std::stringstream strstream;
  strstream << "FIX.4.2:SENDER->TARGET";
  strstream >> object;
  CHECK_EQUAL( "FIX.4.2:SENDER->TARGET", object.toString() );

  std::stringstream strstream2;
  strstream2 << "FIX.4.2:SENDER->TARGET:QUALIFIER";
  strstream2 >> object;
  CHECK_EQUAL( "FIX.4.2:SENDER->TARGET:QUALIFIER", object.toString() );

  std::stringstream strstream3;
  strstream3 << "FIX.4.2:SENDER-ID->TARGET:QUALIFIER";
  strstream3 >> object;
  CHECK_EQUAL( "FIX.4.2:SENDER-ID->TARGET:QUALIFIER", object.toString() );
}

TEST(isTransportSession)
{
  SessionID object( BeginString( "FIX.4.2" ),
                    SenderCompID( "SENDER" ),
                    TargetCompID( "TARGET" ) );
  CHECK( !object.isFIXT() );

  object = SessionID( BeginString( "FIXT.1.1" ),
                      SenderCompID( "SENDER" ),
                      TargetCompID( "TARGET" ) );
  CHECK( object.isFIXT() );
}
}
