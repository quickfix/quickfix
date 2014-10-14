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
#include "stdafx.h"
#else
#include "config.h"
#endif

#include "FieldMap.h"
#include <algorithm>
#include <iterator>
#include <deque>

namespace FIX
{
FieldMap::~FieldMap()
{
  clear();
}

FieldMap& FieldMap::operator=( const FieldMap& rhs )
{
  clear();

  m_fields = rhs.m_fields;

  Groups::const_iterator i;
  for ( i = rhs.m_groups.begin(); i != rhs.m_groups.end(); ++i )
  {
    std::vector < FieldMap* > ::const_iterator j;
    for ( j = i->second.begin(); j != i->second.end(); ++j )
    {
        FieldMap * pGroup = new FieldMap( **j );
        m_groups[ i->first ].push_back( pGroup );
    }
  }

  return *this;
}

void FieldMap::addGroup( int field, const FieldMap& group, bool setCount )
{
  FieldMap * pGroup = new FieldMap( group );

  addGroupPtr( field, pGroup, setCount );
}

void FieldMap::addGroupPtr( int field, FieldMap * group, bool setCount )
{
    if( group == 0 )
        return;

    std::vector< FieldMap* >& vec = m_groups[ field ];
    vec.push_back( group );

    if( setCount )
        setField( IntField( field, (int)vec.size() ) );
}

void FieldMap::replaceGroup( int num, int field, const FieldMap& group )
{
  Groups::const_iterator i = m_groups.find( field );
  if ( i == m_groups.end() ) return;
  if ( num <= 0 ) return;
  if ( i->second.size() < ( unsigned ) num ) return;
  *( *( i->second.begin() + ( num - 1 ) ) ) = group;
}

void FieldMap::removeGroup( int num, int field )
{
  Groups::iterator i = m_groups.find( field );
  if ( i == m_groups.end() ) return;
  if ( num <= 0 ) return;
  std::vector< FieldMap* >& vector = i->second;
  if ( vector.size() < ( unsigned ) num ) return;

  std::vector< FieldMap* >::iterator iter = vector.begin();
  std::advance( iter, ( num - 1 ) );

  delete (*iter);
  vector.erase( iter );

  if( vector.size() == 0 )
  {
    m_groups.erase( field );
    removeField( field );
  }
  else
  {
    IntField groupCount( field, (int)vector.size() );
    setField( groupCount, true );
  }
}

void FieldMap::removeGroup( int field )
{
  removeGroup( (int)groupCount(field), field );
}

void FieldMap::removeField( int field )
{
  Fields::iterator i = m_fields.find( field );
  if ( i != m_fields.end() )
    m_fields.erase( i );
}

bool FieldMap::hasGroup( int num, int field ) const
{
  return (int)groupCount(field) >= num;
}

bool FieldMap::hasGroup( int field ) const
{
  Groups::const_iterator i = m_groups.find( field );
  return i != m_groups.end();
}

size_t FieldMap::groupCount( int field ) const
{
  Groups::const_iterator i = m_groups.find( field );
  if( i == m_groups.end() )
    return 0;
  return i->second.size();
}

void FieldMap::clear()
{
  m_fields.clear();

  Groups::iterator i;
  for ( i = m_groups.begin(); i != m_groups.end(); ++i )
  {
    std::vector < FieldMap* > ::iterator j;
    for ( j = i->second.begin(); j != i->second.end(); ++j )
      delete *j;
  }
  m_groups.clear();
}

bool FieldMap::isEmpty()
{
  return m_fields.size() == 0;
}

size_t FieldMap::totalFields() const
{
  size_t result = m_fields.size();
    
  Groups::const_iterator i;
  for ( i = m_groups.begin(); i != m_groups.end(); ++i )
  {
    std::vector < FieldMap* > ::const_iterator j;
    for ( j = i->second.begin(); j != i->second.end(); ++j )
      result += ( *j ) ->totalFields();
  }
  return result;
}

std::string& FieldMap::calculateString( std::string& result ) const
{  
  Fields::const_iterator i;
  for ( i = m_fields.begin(); i != m_fields.end(); ++i )
  {
    result += i->second.getFixString();

    // add groups if they exist
    if( !m_groups.size() ) continue;
    Groups::const_iterator j = m_groups.find( i->first );
    if ( j == m_groups.end() ) continue;
    std::vector < FieldMap* > ::const_iterator k;
    for ( k = j->second.begin(); k != j->second.end(); ++k )
      ( *k ) ->calculateString( result );
  }
  return result;
}

int FieldMap::calculateLength( int beginStringField,
                               int bodyLengthField,
                               int checkSumField ) const
{
  int result = 0;
  Fields::const_iterator i;
  for ( i = m_fields.begin(); i != m_fields.end(); ++i )
  {
    if ( i->first != beginStringField
         && i->first != bodyLengthField
         && i->first != checkSumField )
    { result += i->second.getLength(); }
  }

  Groups::const_iterator j;
  for ( j = m_groups.begin(); j != m_groups.end(); ++j )
  {
    std::vector < FieldMap* > ::const_iterator k;
    for ( k = j->second.begin(); k != j->second.end(); ++k )
      result += ( *k ) ->calculateLength();
  }
  return result;
}

int FieldMap::calculateTotal( int checkSumField ) const
{
  int result = 0;
  Fields::const_iterator i;
  for ( i = m_fields.begin(); i != m_fields.end(); ++i )
  {
    if ( i->first != checkSumField )
      result += i->second.getTotal();
  }

  Groups::const_iterator j;
  for ( j = m_groups.begin(); j != m_groups.end(); ++j )
  {
    std::vector < FieldMap* > ::const_iterator k;
    for ( k = j->second.begin(); k != j->second.end(); ++k )
      result += ( *k ) ->calculateTotal();
  }
  return result;
}

}
