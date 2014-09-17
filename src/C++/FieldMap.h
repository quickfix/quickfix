/* -*- C++ -*- */

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

#ifndef FIX_FIELDMAP
#define FIX_FIELDMAP

#ifdef _MSC_VER
#pragma warning( disable: 4786 )
#endif

#include "Field.h"
#include "MessageSorters.h"
#include "Exceptions.h"
#include "Utility.h"
#include <map>
#include <vector>
#include <sstream>
#include <algorithm>

namespace FIX
{
/**
 * Stores and organizes a collection of Fields.
 *
 * This is the basis for a message, header, and trailer.  This collection
 * class uses a sorter to keep the fields in a particular order.
 */
class FieldMap
{
public:
#if defined(_MSC_VER) && _MSC_VER < 1300
  typedef std::multimap < int, FieldBase, message_order > Fields;
  typedef std::map < int, std::vector < FieldMap* >, std::less<int> > Groups;
#else
  typedef std::multimap < int, FieldBase, message_order, 
                          ALLOCATOR<std::pair<const int,FieldBase> > > Fields;
  typedef std::map < int, std::vector < FieldMap* >, std::less<int>, 
                     ALLOCATOR<std::pair<const int, std::vector< FieldMap* > > > > Groups;
#endif

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
  { *this = copy; }

  virtual ~FieldMap();

  FieldMap& operator=( const FieldMap& rhs );

  /// Set a field without type checking
  void setField( const FieldBase& field, bool overwrite = true )
  throw( RepeatedTag )
  {
      if(!overwrite)
          m_fields.insert( Fields::value_type( field.getTag(), field ) );
      else
      {
          Fields::iterator i = m_fields.find( field.getTag() );
          if( i == m_fields.end() )
              m_fields.insert( Fields::value_type( field.getTag(), field ) );
          else
              i->second = field;
      }
  }
  /// Set a field without a field class
  void setField( int tag, const std::string& value )
  throw( RepeatedTag, NoTagValue )
  {
    FieldBase fieldBase( tag, value );
    setField( fieldBase );
  }

  /// Get a field if set
  bool getFieldIfSet( FieldBase& field ) const
  {
    Fields::const_iterator iter = m_fields.find( field.getTag() );
    if ( iter == m_fields.end() )
      return false;
    field = iter->second;
    return true;
  }

  /// Get a field without type checking
  FieldBase& getField( FieldBase& field )
  const throw( FieldNotFound )
  {
    field = getFieldRef( field.getTag() );
    return field;
  }

  /// Get a field without a field class
  const std::string& getField( int tag )
  const throw( FieldNotFound )
  {
    return getFieldRef( tag ).getString();
  }

  /// Get direct access to a field through a reference
  const FieldBase& getFieldRef( int tag )
  const throw( FieldNotFound )
  {
    Fields::const_iterator iter = m_fields.find( tag );
    if ( iter == m_fields.end() )
      throw FieldNotFound( tag );
    return iter->second;
  }

  /// Get direct access to a field through a pointer
  const FieldBase* const getFieldPtr( int tag )
  const throw( FieldNotFound )
  {
    return &getFieldRef( tag );
  }

  /// Check to see if a field is set
  bool isSetField( const FieldBase& field ) const
  { return isSetField( field.getTag() ); }
  /// Check to see if a field is set by referencing its number
  bool isSetField( int tag ) const
  { return m_fields.find( tag ) != m_fields.end(); }

  /// Remove a field. If field is not present, this is a no-op.
  void removeField( int tag );

  /// Add a group.
  void addGroup( int tag, const FieldMap& group, bool setCount = true );

  /// Acquire ownership of Group object
  void addGroupPtr( int tag, FieldMap * group, bool setCount = true );

  /// Replace a specific instance of a group.
  void replaceGroup( int num, int tag, const FieldMap& group );

  /// Get a specific instance of a group.
  FieldMap& getGroup( int num, int tag, FieldMap& group ) const
  throw( FieldNotFound )
  {
    return group = getGroupRef( num, tag );
  }

  /// Get direct access to a field through a reference
  FieldMap& getGroupRef( int num, int tag ) const
  throw( FieldNotFound )
  {
    Groups::const_iterator i = m_groups.find( tag );
    if( i == m_groups.end() ) throw FieldNotFound( tag );
    if( num <= 0 ) throw FieldNotFound( tag );
    if( i->second.size() < (unsigned)num ) throw FieldNotFound( tag );
    return *( *(i->second.begin() + (num-1) ) );
  }

  /// Get direct access to a field through a pointer
  FieldMap* getGroupPtr( int num, int tag ) const
  throw( FieldNotFound )
  {
    return &getGroupRef( num, tag );
  }

  /// Remove a specific instance of a group.
  void removeGroup( int num, int tag );
  /// Remove all instances of a group.
  void removeGroup( int tag );

  /// Check to see any instance of a group exists
  bool hasGroup( int tag ) const;
  /// Check to see if a specific instance of a group exists
  bool hasGroup( int num, int tag ) const;
  /// Count the number of instance of a group
  size_t groupCount( int tag ) const;

  /// Clear all fields from the map
  void clear();
  /// Check if map contains any fields
  bool isEmpty();

  size_t totalFields() const;

  std::string& calculateString( std::string& ) const;

  int calculateLength( int beginStringField = FIELD::BeginString,
                       int bodyLengthField = FIELD::BodyLength,
                       int checkSumField = FIELD::CheckSum ) const;

  int calculateTotal( int checkSumField = FIELD::CheckSum ) const;

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
{ return (FIELD&)(MAP).getField(field); } \
bool getIfSet( FIELD& field ) const       \
{ return (MAP).getFieldIfSet(field); }

#define FIELD_GET_PTR( MAP, FLD ) \
(const FIX::FLD*)MAP.getFieldPtr( FIX::FIELD::FLD )
#define FIELD_GET_REF( MAP, FLD ) \
(const FIX::FLD&)MAP.getFieldRef( FIX::FIELD::FLD )
#define FIELD_THROW_IF_NOT_FOUND( MAP, FLD ) \
if( !(MAP).isSetField( FIX::FIELD::FLD) ) \
  throw FieldNotFound( FIX::FIELD::FLD )
#endif //FIX_FIELDMAP

