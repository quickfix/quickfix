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
#include "stdafx.h"
#else
#include "config.h"
#endif
#include "CallStack.h"

#include "Dictionary.h"
#include "FieldConvertors.h"
#include <algorithm>

namespace FIX
{
std::string Dictionary::getString( const std::string& key, bool capitalize ) const
throw( ConfigError, FieldConvertError )
{ QF_STACK_PUSH(Dictionary::getString)

  Data::const_iterator i = m_data.find( string_toUpper(key) );
  if ( i == m_data.end() ) throw ConfigError( key + " not defined" );

  std::string result = i->second;
  if( capitalize )
     std::transform(result.begin(), result.end(), result.begin(), toupper);

  return result;

  QF_STACK_POP
}

long Dictionary::getLong( const std::string& key ) const
throw( ConfigError, FieldConvertError )
{ QF_STACK_PUSH(Dictionary::getLong)

  Data::const_iterator i = m_data.find( string_toUpper(key) );
  if ( i == m_data.end() ) throw ConfigError( key + " not defined" );
  try
  {
    return IntConvertor::convert( i->second );
  }
  catch ( FieldConvertError& )
  {
    throw ConfigError( "Illegal value " + i->second + " for " + key );
  }

  QF_STACK_POP
}

double Dictionary::getDouble( const std::string& key ) const
throw( ConfigError, FieldConvertError )
{ QF_STACK_PUSH(Dictionary::getDouble)

  Data::const_iterator i = m_data.find( string_toUpper(key) );
  if ( i == m_data.end() ) throw ConfigError( key + " not defined" );
  try
  {
    return DoubleConvertor::convert( i->second );
  }
  catch ( FieldConvertError& )
  {
    throw ConfigError( "Illegal value " + i->second + " for " + key );
  }

  QF_STACK_POP
}

bool Dictionary::getBool( const std::string& key ) const
throw( ConfigError, FieldConvertError )
{ QF_STACK_PUSH(Dictionary::getBool)

  Data::const_iterator i = m_data.find( string_toUpper(key) );
  if ( i == m_data.end() ) throw ConfigError( key + " not defined" );
  try
  {
    return BoolConvertor::convert( i->second );
  }
  catch ( FieldConvertError& )
  {
    throw ConfigError( "Illegal value " + i->second + " for " + key );
  }

  QF_STACK_POP
}

int Dictionary::getDay( const std::string& key ) const
throw( ConfigError, FieldConvertError )
{ QF_STACK_PUSH(Dictionary::getDay)

  Data::const_iterator i = m_data.find( string_toUpper(key) );
  if ( i == m_data.end() ) throw ConfigError( key + " not defined" );
  try
  {
    std::string value = i->second;
    if( value.size() < 2 ) throw FieldConvertError(0);
    std::string abbr = value.substr(0, 2);
    std::transform( abbr.begin(), abbr.end(), abbr.begin(), tolower );
    if( abbr == "su" ) return 1;
    if( abbr == "mo" ) return 2;
    if( abbr == "tu" ) return 3;
    if( abbr == "we" ) return 4;
    if( abbr == "th" ) return 5;
    if( abbr == "fr" ) return 6;
    if( abbr == "sa" ) return 7;
    if( value.size() < 2 ) throw FieldConvertError(0);
  }
  catch ( FieldConvertError& )
  {
    throw ConfigError( "Illegal value " + i->second + " for " + key );
  }
  return -1;

  QF_STACK_POP
}

void Dictionary::setString( const std::string& key, const std::string& value )
{ QF_STACK_PUSH(Dictionary::setString)
  m_data[ string_strip(string_toUpper(key)) ] = string_strip(value);
  QF_STACK_POP
}

void Dictionary::setLong( const std::string& key, long value )
{ QF_STACK_PUSH(Dictionary::setString)
  m_data[ string_strip(string_toUpper(key)) ] = IntConvertor::convert( value );
  QF_STACK_POP
}

void Dictionary::setDouble( const std::string& key, double value )
{ QF_STACK_PUSH(Dictionary::setDouble)
  m_data[ string_strip(string_toUpper(key)) ] = DoubleConvertor::convert( value );
  QF_STACK_POP
}

void Dictionary::setBool( const std::string& key, bool value )
{ QF_STACK_PUSH(Dictionary::setBool)
  m_data[ string_strip(string_toUpper(key)) ] = BoolConvertor::convert( value );
  QF_STACK_POP
}

void Dictionary::setDay( const std::string& key, int value )
{ QF_STACK_PUSH(Dictionary::setDay)
  
    switch( value )
    {
    case 1:
      setString( key, "SU" ); break;
    case 2:
      setString( key, "MO" ); break;
    case 3:
      setString( key, "TU" ); break;
    case 4:
      setString( key, "WE" ); break;
    case 5:
      setString( key, "TH" ); break;
    case 6:
      setString( key, "FR" ); break;
    case 7:
      setString( key, "SA" ); break;
    }

  QF_STACK_POP
}

bool Dictionary::has( const std::string& key ) const
{ QF_STACK_PUSH(Dictionary::has)
  return m_data.find( string_toUpper(key) ) != m_data.end();
  QF_STACK_POP
}

void Dictionary::merge( const Dictionary& toMerge )
{ QF_STACK_PUSH(Dictionary::merge)

  Data::const_iterator i = toMerge.m_data.begin();
  for ( ; i != toMerge.m_data.end(); ++i )
    if ( m_data.find( i->first ) == m_data.end() )
      m_data[ i->first ] = i->second;

  QF_STACK_POP
}
}
