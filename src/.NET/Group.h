/* -*- C++ -*- */

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

#pragma once

using namespace System;
using namespace System::Collections;

#include "quickfix_net.h"
#include "FieldMap.h"
#include "Field.h"
#include "Exceptions.h"

#include "quickfix/Group.h"
#include "quickfix/CallStack.h"

namespace QuickFix
{
public __gc class Group : public FieldMap, public IDisposable
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

  FIX::FieldMap* pUnmanaged()
  { return m_pUnmanaged; }

  FIX::Group& unmanaged()
  { return * m_pUnmanaged; }

  void setUnmanaged( const FIX::Group& group )
  { *m_pUnmanaged = group; }

  int field() { checkDisposed(); return m_pUnmanaged->field(); }
  int delim() { checkDisposed(); return m_pUnmanaged->delim(); }

  void setString(int field, String* value);
  void setBoolean(int field, bool value);
  void setChar(int field, wchar_t value);
  void setInt(int field, int value);
  void setDouble(int field, double value);
  void setDouble(int field, double value, int padding);
  void setUtcTimeStamp(int field, DateTime value);
  void setUtcTimeStamp(int field, DateTime value, bool showMilliseconds);
  void setUtcDateOnly(int field, DateTime value);
  void setUtcTimeOnly(int field, DateTime value);
  void setUtcTimeOnly(int field, DateTime value, bool showMilliseconds);

  String* getString(int field);
  bool getBoolean(int field);
  wchar_t getChar(int field);
  int getInt(int field);
  double getDouble(int field);
  DateTime getUtcTimeStamp(int field);
  DateTime getUtcDateOnly(int field);
  DateTime getUtcTimeOnly(int field);

  void setField( StringField* field );
  void setField( BooleanField* field );
  void setField( CharField* field );
  void setField( IntField* field );
  void setField( DoubleField* field );
  void setField( UtcTimeStampField* field );
  void setField( UtcDateOnlyField* field );
  void setField( UtcTimeOnlyField* field );

  StringField* getField( StringField* field );
  BooleanField* getField( BooleanField* field );
  CharField* getField( CharField* field );
  IntField* getField( IntField* field );
  DoubleField* getField( DoubleField* field );
  UtcTimeStampField* getField( UtcTimeStampField* field );
  UtcDateOnlyField* getField( UtcDateOnlyField* field );
  UtcTimeOnlyField* getField( UtcTimeOnlyField* field );
  bool isSetField( Field* field );

  String* getField( int field );
  void setField( int field, String* );
  void removeField( int field );

  bool hasGroup( int field );
  bool hasGroup( unsigned num, int field );
  bool hasGroup( unsigned num, Group* group );
  bool hasGroup( Group* group );
  
  void removeGroup( int field );
  void removeGroup( unsigned num, int field );
  void removeGroup( unsigned num, Group* group );
  void removeGroup( Group* group );

  int groupCount( int field );
  bool isSetField( int field );

  void addGroup( int field, FieldMap* group )
  { QF_STACK_TRY
    checkDisposed(); pUnmanaged()->addGroup( field, *group->pUnmanaged() );
    QF_STACK_CATCH
  }

  void addGroup( Group* group )
  { QF_STACK_TRY
    checkDisposed(); unmanaged().addGroup( group->unmanaged() );
    QF_STACK_CATCH
  }

  void replaceGroup( unsigned num, int field, FieldMap* group )
  { QF_STACK_TRY
    checkDisposed(); pUnmanaged()->replaceGroup( num, field, *group->pUnmanaged() );
    QF_STACK_CATCH
  }
 
  void replaceGroup( unsigned num, Group* group )
  { QF_STACK_TRY
    checkDisposed(); unmanaged().replaceGroup( num, group->unmanaged() );
    QF_STACK_CATCH
  }

  FieldMap* getGroup( unsigned num, int field, FieldMap* group )
  {
    try
    {
      checkDisposed(); pUnmanaged()->getGroup( num, field, *group->pUnmanaged() );
      return group;
    }
    catch ( FIX::FieldNotFound & e )
    {
      throw new FieldNotFound( e.field );
    }
  }

  Group* getGroup( unsigned num, Group* group )
  { QF_STACK_TRY

    try
    {
      checkDisposed(); unmanaged().getGroup( num, group->unmanaged() );
      return group;
    }
    catch ( FIX::FieldNotFound & e )
    {
      throw new FieldNotFound( e.field );
    }

    QF_STACK_CATCH
  }

  IEnumerator* GetEnumerator()
  {
    checkDisposed(); return new Enumerator( this );
  }

  __gc class Enumerator : public IEnumerator
  {
  public:
    Enumerator( Group* group )
      : m_group( group ), m_iterator(0) {}

    ~Enumerator()
    {
      if( m_iterator )
        delete m_iterator;
    }

    __property Object* get_Current()
    {
      if( m_iterator == 0 )
        return 0;
      if( *m_iterator == m_group->unmanaged().end() )
        return 0;
      FIX::FieldBase field = (*m_iterator)->second;
      return new StringField( field.getField(), field.getString().c_str() );
    }

    bool MoveNext()
    {
      if( m_iterator == 0 )
      {
        m_iterator = new FIX::Group::iterator();
        *m_iterator = m_group->unmanaged().begin();
      }
      else
      {
        (*m_iterator)++;
      }

      return *m_iterator != m_group->unmanaged().end();
    }

    void Reset()
    {
      if( m_iterator )
        delete m_iterator;
      m_iterator = 0;
    }

    private:
      Group* m_group;
      FIX::Group::iterator* m_iterator;
    };

private:
  FIX::Group* m_pUnmanaged;
  bool disposed;
};
}
