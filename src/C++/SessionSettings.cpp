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
#include "stdafx.h"
#else
#include "config.h"
#endif
#include "CallStack.h"

#include "SessionSettings.h"
#include "Settings.h"
#include <fstream>

namespace FIX
{
SessionSettings::SessionSettings( std::istream& stream )
throw( ConfigError& )
{
  stream >> *this;
}

SessionSettings::SessionSettings( const std::string& file )
throw( ConfigError& )
{
  std::ifstream fstream( file.c_str() );
  if ( !fstream.is_open() )
    throw ConfigError( ( "File " + file + " not found" ).c_str() );
  fstream >> *this;
}

std::istream& operator>>( std::istream& stream, SessionSettings& s )
throw( ConfigError& )
{
  Settings settings;
  stream >> settings;

  Settings::Sections section;

  section = settings.get( "DEFAULT" );
  Dictionary def;
  if ( section.size() )
    def = section[ 0 ];
  s.set( def );

  section = settings.get( "SESSION" );
  Settings::Sections::size_type session;
  Dictionary dict;
  for ( session = 0; session < section.size(); ++session )
  {
    dict = section[ session ];
    dict.merge( def );
    BeginString beginString
    ( dict.getString( "BeginString" ) );
    SenderCompID senderCompID
    ( dict.getString( "SenderCompID" ) );
    TargetCompID targetCompID
    ( dict.getString( "TargetCompID" ) );
    SessionID sessionID( beginString, senderCompID, targetCompID );
    s.set( sessionID, dict );
  }
  return stream;
}

Dictionary SessionSettings::get( const SessionID& sessionID ) const
throw( ConfigError& )
{ QF_STACK_PUSH(SessionSettings::get)

  Dictionaries::const_iterator i;
  i = m_settings.find( sessionID );
  if ( i == m_settings.end() ) throw ConfigError( "Session not found" );
  return i->second;

  QF_STACK_POP
}

void SessionSettings::set( const SessionID& sessionID,
                           const Dictionary& settings )
{ QF_STACK_PUSH(SessionSettings::set)
  m_settings[ sessionID ] = settings;
  QF_STACK_POP
}

std::set < SessionID > SessionSettings::getSessions() const
{ QF_STACK_PUSH(SessionSettings::getSessions)

  std::set < SessionID > result;
  Dictionaries::const_iterator i;
  for ( i = m_settings.begin(); i != m_settings.end(); ++i )
    result.insert( i->first );
  return result;

  QF_STACK_POP
}
}
