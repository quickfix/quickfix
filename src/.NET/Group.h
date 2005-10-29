/* -*- C++ -*- */

/****************************************************************************
** Copyright (c) 2001-2005 quickfixengine.org  All rights reserved.
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

#pragma once

using namespace System;

#include "quickfix_net.h"
#include "Field.h"
#include "Exceptions.h"

#include "quickfix/Group.h"
#include "quickfix/CallStack.h"

namespace QuickFix
{
public __gc class Group : public IDisposable
{
public:
  Group( int field, int delim ) : disposed( false )
  { QF_STACK_TRY
    m_pUnmanaged = new FIX::Group( field, delim );
    QF_STACK_CATCH
  }

  Group( int field, int delim, int message_order __gc[] ) : disposed( false )
  { QF_STACK_TRY

    int size = message_order->get_Length();
    int* order = new int[ size + 1 ];
    order[ size ] = 0;
    for ( int i = 0; i < size; ++i )
    {
      order[ i ] = message_order[ i ];
    }

    m_pUnmanaged = new FIX::Group( field, delim, order );
    delete [] order;

    QF_STACK_CATCH
  }

  Group( const FIX::Group& group ) : disposed( false )
  { QF_STACK_TRY
    m_pUnmanaged = new FIX::Group( group.field(), group.delim() );
    *m_pUnmanaged = group;
    QF_STACK_CATCH
  }

  ~Group()
  {
    delete m_pUnmanaged;
    m_pUnmanaged = 0;
  }

  void Dispose()
  {
    if ( !disposed )
    {
      delete m_pUnmanaged; m_pUnmanaged = 0;
      System::GC::SuppressFinalize( this );
      disposed = true;
    }
  }

  void checkDisposed()
  {
    if ( disposed )
      throw new System::ObjectDisposedException( this->ToString() );
  }

  FIX::Group& unmanaged()
  { return * m_pUnmanaged; }

  void setUnmanaged( const FIX::Group& group )
  { *m_pUnmanaged = group; }

  int field() { return m_pUnmanaged->field(); }
  int delim() { return m_pUnmanaged->delim(); }

  void setField( StringField* field );
  void setField( BooleanField* field );
  void setField( CharField* field );
  void setField( IntField* field );
  void setField( DoubleField* field );
  void setField( UtcTimeStampField* field );
  void setField( UtcDateOnlyField* field );
  void setField( UtcTimeOnlyField* field );

  StringField* getField( StringField* field ) throw( FieldNotFound* );
  BooleanField* getField( BooleanField* field ) throw( FieldNotFound* );
  CharField* getField( CharField* field ) throw( FieldNotFound* );
  IntField* getField( IntField* field ) throw( FieldNotFound* );
  DoubleField* getField( DoubleField* field ) throw( FieldNotFound* );
  UtcTimeStampField* getField( UtcTimeStampField* field ) throw( FieldNotFound* );
  UtcDateOnlyField* getField( UtcDateOnlyField* field ) throw( FieldNotFound* );
  UtcTimeOnlyField* getField( UtcTimeOnlyField* field ) throw( FieldNotFound* );
  bool isSetField( Field* field );

  String* getField( int field ) throw( FieldNotFound* );
  void setField( int field, String* );
  void removeField( int field );
  bool hasGroup( int field );
  int groupCount( int field );
  bool isSetField( int field );

  void addGroup( Group* group )
  { QF_STACK_TRY
    m_pUnmanaged->addGroup( group->unmanaged() );
    QF_STACK_CATCH
  }

  Group* getGroup( unsigned num, Group* group )
  { QF_STACK_TRY

    try
    {
      m_pUnmanaged->getGroup( num, group->unmanaged() );
      return group;
    }
    catch ( FIX::FieldNotFound & e )
    {
      throw new FieldNotFound( e.field );
    }

    QF_STACK_CATCH
  }

  void removeGroup( Group* group )
  { QF_STACK_TRY
    m_pUnmanaged->removeGroup( group->unmanaged() );
    QF_STACK_CATCH
  }

private:
  FIX::Group* m_pUnmanaged;
  bool disposed;
};
}
