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

#include "FieldMap.h"

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

  Groups::const_iterator i;
  for ( i = rhs.m_groups.begin(); i != rhs.m_groups.end(); ++i )
  {
    std::vector < FieldMap* > ::const_iterator j;
    for ( j = i->second.begin(); j != i->second.end(); ++j )
      addGroup( i->first, **j );
  }
  m_fields = rhs.m_fields;

  return *this;

  QF_STACK_POP
}

void FieldMap::addGroup( int field, const FieldMap& group, bool setCount )
{ QF_STACK_PUSH(FieldMap::addGroup)

  FieldMap * pGroup = new FieldMap;
  *pGroup = group;
  m_groups[ field ].push_back( pGroup );
  Groups::iterator i = m_groups.find( field );
  if( setCount )
    setField( IntField( field, i->second.size() ) );

  QF_STACK_POP
}

FieldMap& FieldMap::getGroup( int num, int field, FieldMap& group ) const
throw( FieldNotFound& )
{ QF_STACK_PUSH(FieldMap::getGroup)

  Groups::const_iterator i = m_groups.find( field );
  if ( i == m_groups.end() ) throw FieldNotFound( field );
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

std::string FieldMap::calculateString() const
{ QF_STACK_PUSH(FieldMap::calculateString)

  std::string result;
  Fields::const_iterator i;
  for ( i = m_fields.begin(); i != m_fields.end(); ++i )
  {
    result += i->second.getValue();

    // add groups if they exist
    Groups::const_iterator j = m_groups.find( i->first );
    if ( j == m_groups.end() ) continue;
    std::vector < FieldMap* > ::const_iterator k;
    for ( k = j->second.begin(); k != j->second.end(); ++k )
      result += ( *k ) ->calculateString();
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
