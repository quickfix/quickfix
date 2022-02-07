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

#ifndef FIX_GROUP
#define FIX_GROUP

#ifdef _MSC_VER
#pragma warning( disable: 4786 )
#endif

#include "FieldMap.h"
#include "Fields.h"
#include <vector>

namespace FIX
{
/**
 * Base class for all %FIX repeating groups.
 *
 * A group consists of a count field, deliminator, and a sorting order.
 */
class Group : public FieldMap
{
public:
  Group( int field, int delim )
  : FieldMap( message_order( delim, 0 ) ),
    m_field( field ), m_delim( delim ) {}

  Group( int field, int delim, const int order[] )
  : FieldMap( order ), m_field( field ), m_delim( delim ) {}

  Group( int field, int delim, const message_order& order )
  : FieldMap( order ), m_field( field ), m_delim( delim ) {}

  Group( const Group& copy )
  : FieldMap( copy ), m_field( copy.m_field ), m_delim( copy.m_delim ) {}

  int field() const { return m_field; }
  int delim() const { return m_delim; }

  void addGroup( const Group& group );
  void replaceGroup( unsigned num, const Group& group );
  Group& getGroup( unsigned num, Group& group ) const EXCEPT ( FieldNotFound );
  void removeGroup( unsigned num, const Group& group );
  void removeGroup( const Group& group );
  bool hasGroup( const Group& group );
  bool hasGroup( unsigned num, const Group& group );

private:
  int m_field;
  int m_delim;
};
}

#endif //FIX_GROUP
