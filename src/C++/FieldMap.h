/* -*- C++ -*- */
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

#ifndef FIX_FIELDMAP
#define FIX_FIELDMAP

#ifdef _MSC_VER
#pragma warning( disable: 4786 )
#endif

#include "Field.h"
#include "MessageSorters.h"
#include "Exceptions.h"
#include "CallStack.h"
#include <map>
#include <vector>
#include <sstream>
#include <algorithm>

namespace FIX
{
/*! \addtogroup user
 *  @{
 */ 
/**
 * Stores and organizes a collection of Fields.
 *
 * This is the basis for a message, header, and trailer.  This collection
 * class uses a sorter to keep the fields in a particular order.
 */
class FieldMap
{
public:
  typedef std::multimap < int, FieldBase, message_order > Fields;
  typedef std::map < int, std::vector < FieldMap* > > Groups;
  typedef Fields::const_iterator iterator;
  typedef iterator const_iterator;
  typedef Groups::const_iterator g_iterator;
  typedef Groups::const_iterator g_const_iterator;

  FieldMap( const message_order& order =
              message_order( message_order::normal ) )
  : m_fields( order ) {}

  FieldMap( const int order[] )
  : m_fields( message_order(order) ) {}

  FieldMap( const FieldMap& copy )
  {
    *this = copy;
  }

  virtual ~FieldMap();

  FieldMap& operator=( const FieldMap& rhs );

  /// Set a field without type checking
  void FieldMap::setField( const FieldBase& field, bool overwrite = true )
  throw( RepeatedTag& )
  {
    Fields::iterator i = m_fields.find( field.getField() );
    if( i == m_fields.end() )
      m_fields.insert( std::make_pair( field.getField(), field ) );
    else
    {
      if( overwrite )
        i->second = field;
      else
        m_fields.insert( std::make_pair( field.getField(), field ) );
    }
  }
  /// Set a field without a field class
  void FieldMap::setField( int field, const std::string value )
  {
    FieldBase fieldBase( field, value );
    setField( fieldBase );
  }

  /// Get a field without type checking
  FieldBase& FieldMap::getField( FieldBase& field )
  const throw( FieldNotFound& )
  {
    Fields::const_iterator iter = m_fields.find( field.getField() );
    if ( iter == m_fields.end() )
      throw FieldNotFound( field.getField() );
    field = iter->second;
    return field;
  }
  /// Get a field without a field class
  std::string FieldMap::getField( int field )
  const throw( FieldNotFound& )
  {
    FieldBase fieldBase( field, "" );
    getField( fieldBase );
    return fieldBase.getString();
  }

  /**
   * Check to see if a field is set
   */
  bool FieldMap::isSetField( const FieldBase& field ) const
  { return m_fields.find( field.getField() ) != m_fields.end(); }
  /**
   * Check to see if a field is set by referencing its number
   */
  bool FieldMap::isSetField( int field ) const
  { return m_fields.find( field ) != m_fields.end(); }

  void addGroup( int field, const FieldMap& group, bool setCount = true );

  FieldMap& getGroup( int num, int field, FieldMap& group ) const
    throw( FieldNotFound& );

  /// Remove a field. If field is not present, this is a no-op.
  void removeField( int field );

  /// Check to see if a group exists
  bool hasGroup( int field ) const;
  int groupCount( int field ) const;

  /// Clear all fields from the map
  void clear();

  std::string calculateString() const;
  int calculateLength() const;
  int calculateTotal() const;

  iterator begin() const { return m_fields.begin(); }
  iterator end() const { return m_fields.end(); }
  g_iterator g_begin() const { return m_groups.begin(); }
  g_iterator g_end() const { return m_groups.end(); }

private:
  Fields m_fields;
  Groups m_groups;
};
/*! @} */
}

#define FIELD_SET( MAP, FIELD )           \
bool isSet( const FIELD& field ) const    \
{ return (MAP).isSetField(field); }       \
void set( const FIELD& field )            \
{ (MAP).setField(field); }                \
FIELD& get( FIELD& field ) const          \
{ return (FIELD&)(MAP).getField(field); }

#endif //FIX_FIELDMAP

