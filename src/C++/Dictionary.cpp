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

#include "Dictionary.h"
#include "FieldConvertors.h"

namespace FIX
{
std::string Dictionary::getString( const std::string& key ) const
throw( ConfigError&, FieldConvertError& )
{
  Data::const_iterator i = m_data.find( key );
  if ( i == m_data.end() ) throw ConfigError( key + " not defined" );
  return i->second;
}

long Dictionary::getLong( const std::string& key ) const
throw( ConfigError&, FieldConvertError& )
{
  Data::const_iterator i = m_data.find( key );
  if ( i == m_data.end() ) throw ConfigError( key + " not defined" );
  try
  {
    return IntConvertor::convert( i->second );
  }
  catch ( FieldConvertError& )
  {
    throw ConfigError( "Illegal value " + i->second + " for " + key );
  }
}

double Dictionary::getDouble( const std::string& key ) const
throw( ConfigError&, FieldConvertError& )
{
  Data::const_iterator i = m_data.find( key );
  if ( i == m_data.end() ) throw ConfigError( key + " not defined" );
  try
  {
    return DoubleConvertor::convert( i->second );
  }
  catch ( FieldConvertError& )
  {
    throw ConfigError( "Illegal value " + i->second + " for " + key );
  }
}

bool Dictionary::getBool( const std::string& key ) const
throw( ConfigError&, FieldConvertError& )
{
  Data::const_iterator i = m_data.find( key );
  if ( i == m_data.end() ) throw ConfigError( key + " not defined" );
  try
  {
    return BoolConvertor::convert( i->second );
  }
  catch ( FieldConvertError& )
  {
    throw ConfigError( "Illegal value " + i->second + " for " + key );
  }
}

void Dictionary::setString( const std::string& key, const std::string& value )
{
  m_data[ key ] = value;
}

void Dictionary::setLong( const std::string& key, const long& value )
{
  m_data[ key ] = IntConvertor::convert( value );
}

void Dictionary::setDouble( const std::string& key, const double& value )
{
  m_data[ key ] = DoubleConvertor::convert( value );
}

void Dictionary::setBool( const std::string& key, const bool& value )
{
  m_data[ key ] = BoolConvertor::convert( value );
}

bool Dictionary::has( const std::string& key ) const
{
  return m_data.find( key ) != m_data.end();
}

void Dictionary::merge( const Dictionary& toMerge )
{
  Data::const_iterator i = toMerge.m_data.begin();
  for ( ; i != toMerge.m_data.end(); ++i )
    if ( m_data.find( i->first ) == m_data.end() )
      m_data[ i->first ] = i->second;
}
}
