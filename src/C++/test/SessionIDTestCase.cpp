/****************************************************************************
** Copyright (c) 2001-2005 quickfixengine.org  All rights reserved.
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

#include "SessionIDTestCase.h"
#include <string>
#include <sstream>

namespace FIX
{
SessionIDTestCase::lessThan::lessThan()
    :
    m_less1( BeginString( "A" ), SenderCompID( "A" ), TargetCompID( "A" ) ),
    m_less2( BeginString( "A" ), SenderCompID( "A" ), TargetCompID( "B" ) ),
    m_less3( BeginString( "A" ), SenderCompID( "B" ), TargetCompID( "A" ) ),
    m_less4( BeginString( "B" ), SenderCompID( "A" ), TargetCompID( "A" ) ),
    m_less5( BeginString( "B" ), SenderCompID( "B" ), TargetCompID( "B" ) ),
    m_less6( BeginString( "C" ), SenderCompID( "A" ), TargetCompID( "C" ) )
{}

void SessionIDTestCase::lessThan::onRun( SessionID& object )
{
  assert( !( m_less1 < m_less1 ) );
  assert( m_less1 < m_less2 );
  assert( m_less1 < m_less3 );
  assert( m_less1 < m_less4 );
  assert( m_less1 < m_less5 );
  assert( m_less1 < m_less6 );

  assert( !( m_less2 < m_less1 ) );
  assert( !( m_less2 < m_less2 ) );
  assert( m_less2 < m_less3 );
  assert( m_less2 < m_less4 );
  assert( m_less2 < m_less5 );
  assert( m_less2 < m_less6 );

  assert( !( m_less3 < m_less1 ) );
  assert( !( m_less3 < m_less2 ) );
  assert( !( m_less3 < m_less3 ) );
  assert( m_less3 < m_less4 );
  assert( m_less3 < m_less5 );
  assert( m_less3 < m_less6 );

  assert( !( m_less4 < m_less1 ) );
  assert( !( m_less4 < m_less2 ) );
  assert( !( m_less4 < m_less3 ) );
  assert( !( m_less4 < m_less4 ) );
  assert( m_less4 < m_less5 );
  assert( m_less4 < m_less6 );

  assert( !( m_less5 < m_less1 ) );
  assert( !( m_less5 < m_less2 ) );
  assert( !( m_less5 < m_less3 ) );
  assert( !( m_less5 < m_less4 ) );
  assert( !( m_less5 < m_less5 ) );
  assert( m_less5 < m_less6 );

  assert( !( m_less6 < m_less1 ) );
  assert( !( m_less6 < m_less2 ) );
  assert( !( m_less6 < m_less3 ) );
  assert( !( m_less6 < m_less4 ) );
  assert( !( m_less6 < m_less5 ) );
  assert( !( m_less6 < m_less6 ) );
}

SessionIDTestCase::streamOut::streamOut()
    : m_object( BeginString( "FIX.4.2" ),
                SenderCompID( "SENDER" ),
                TargetCompID( "TARGET" ) )
{}

bool SessionIDTestCase::streamOut::onSetup( SessionID*& pObject )
{
  pObject = &m_object;
  return true;
}

void SessionIDTestCase::streamOut::onRun( SessionID& object )
{
  std::stringstream strstream;
  strstream << object;
  assert( strstream.str() == "FIX.4.2:SENDER->TARGET" );
}

SessionIDTestCase::streamIn::streamIn()
    : m_object()
{}

bool SessionIDTestCase::streamIn::onSetup( SessionID*& pObject )
{
  pObject = &m_object;
  return true;
}

void SessionIDTestCase::streamIn::onRun( SessionID& object )
{
  std::stringstream strstream;
  strstream << "FIX.4.2:SENDER->TARGET";
  strstream >> object;
  assert( object.toString() == "FIX.4.2:SENDER->TARGET" );

  std::stringstream strstream2;
  strstream2 << "FIX.4.2:SENDER->TARGET:QUALIFIER";
  strstream2 >> object;
  assert( object.toString() == "FIX.4.2:SENDER->TARGET:QUALIFIER" );

  std::stringstream strstream3;
  strstream3 << "FIX.4.2:SENDER-ID->TARGET:QUALIFIER";
  strstream3 >> object;
  assert( object.toString() == "FIX.4.2:SENDER-ID->TARGET:QUALIFIER" );
}

}
