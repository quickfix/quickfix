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

#include "FieldMap.h"
#include <algorithm>
#include <iterator>

namespace FIX
{
FieldMap::~FieldMap()
{ QF_STACK_IGNORE_BEGIN
  clear(); 
  QF_STACK_IGNORE_END
}

FieldMap& FieldMap::operator=( const FieldMap& rhs )
{ QF_STACK_PUSH(FieldMap::operator=)

  clear();

  std::copy( rhs.m_fields.begin (), rhs.m_fields.end(),
             std::inserter(m_fields, m_fields.begin()) );

  Groups::const_iterator i;
  for ( i = rhs.m_groups.begin(); i != rhs.m_groups.end(); ++i )
  {
    std::vector < FieldMap* > ::const_iterator j;
    for ( j = i->second.begin(); j != i->second.end(); ++j )
      addGroup( i->first, **j );
  }

  return *this;

  QF_STACK_POP
}

void FieldMap::addGroup( int field, const FieldMap& group, bool setCount )
{ QF_STACK_PUSH(FieldMap::addGroup)

  FieldMap * pGroup = new FieldMap( group.m_fields.key_comp() );
  *pGroup = group;
  m_groups[ field ].push_back( pGroup );
  Groups::iterator i = m_groups.find( field );
  if( setCount )
    setField( IntField( field, i->second.size() ) );

  QF_STACK_POP
}

FieldMap& FieldMap::getGroup( int num, int field, FieldMap& group ) const
throw( FieldNotFound )
{ QF_STACK_PUSH(FieldMap::getGroup)

  Groups::const_iterator i = m_groups.find( field );
  if ( i == m_groups.end() ) throw FieldNotFound( field );
  if ( num <= 0 ) throw FieldNotFound( field );
  if ( i->second.size() < ( unsigned ) num ) throw FieldNotFound( field );
  group = *( *( i->second.begin() + ( num - 1 ) ) );
  return group;

  QF_STACK_POP
}

void FieldMap::removeField( int field )
{ QF_STACK_PUSH(FieldMap::removeField)

  Fields::iterator i = m_fields.find( field );
  if ( i != m_fields.end() )
    m_fields.erase( i );

  QF_STACK_POP
}

bool FieldMap::hasGroup( int field ) const
{ QF_STACK_PUSH(FieldMap::hasGroup)

  Groups::const_iterator i = m_groups.find( field );
  return i != m_groups.end();

  QF_STACK_POP
}

int FieldMap::groupCount( int field ) const
{ QF_STACK_PUSH(FieldMap::groupCount)

  Groups::const_iterator i = m_groups.find( field );
  if( i == m_groups.end() )
    return 0;
  return i->second.size();

  QF_STACK_POP
}

void FieldMap::clear()
{ QF_STACK_PUSH(FieldMap::clear)

  m_fields.clear();

  Groups::iterator i;
  for ( i = m_groups.begin(); i != m_groups.end(); ++i )
  {
    std::vector < FieldMap* > ::iterator j;
    for ( j = i->second.begin(); j != i->second.end(); ++j )
      delete *j;
  }
  m_groups.clear();

  QF_STACK_POP
}

std::string& FieldMap::calculateString( std::string& result, bool clear ) const
{ QF_STACK_PUSH(FieldMap::calculateString)

#if defined(_MSC_VER) && _MSC_VER < 1300
  if( clear ) result = "";
#else
  if( clear ) result.clear();
#endif

  Fields::const_iterator i;
  for ( i = m_fields.begin(); i != m_fields.end(); ++i )
  {
    result += i->second.getValue();

    // add groups if they exist
    Groups::const_iterator j = m_groups.find( i->first );
    if ( j == m_groups.end() ) continue;
    std::vector < FieldMap* > ::const_iterator k;
    for ( k = j->second.begin(); k != j->second.end(); ++k )
      ( *k ) ->calculateString( result, false );
  }
  return result;

  QF_STACK_POP
}

int FieldMap::calculateLength() const
{ QF_STACK_PUSH(FieldMap::calculateLength)

  int result = 0;
  Fields::const_iterator i;
  for ( i = m_fields.begin(); i != m_fields.end(); ++i )
  {
    if ( i->first != FIELD::BeginString
         && i->first != FIELD::BodyLength
         && i->first != FIELD::CheckSum )
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

  QF_STACK_POP
}

int FieldMap::calculateTotal() const
{ QF_STACK_PUSH(FieldMap::calculateTotal)

  int result = 0;
  Fields::const_iterator i;
  for ( i = m_fields.begin(); i != m_fields.end(); ++i )
  {
    if ( i->first != FIELD::CheckSum )
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

  QF_STACK_POP
}
}
