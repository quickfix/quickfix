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
