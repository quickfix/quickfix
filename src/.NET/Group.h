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

#pragma once

using namespace System;

#include "quickfix_net.h"
#include "Field.h"
#include "Exceptions.h"

#include "quickfix/include/Group.h"
#include "quickfix/include/CallStack.h"

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
  void setField( UtcDateField* field );
  void setField( UtcTimeOnlyField* field );

  StringField* getField( StringField* field ) throw( FieldNotFound* );
  BooleanField* getField( BooleanField* field ) throw( FieldNotFound* );
  CharField* getField( CharField* field ) throw( FieldNotFound* );
  IntField* getField( IntField* field ) throw( FieldNotFound* );
  DoubleField* getField( DoubleField* field ) throw( FieldNotFound* );
  UtcTimeStampField* getField( UtcTimeStampField* field ) 
    throw( FieldNotFound* );
  UtcDateField* getField( UtcDateField* field ) throw( FieldNotFound* );
  UtcTimeOnlyField* getField( UtcTimeOnlyField* field ) 
    throw( FieldNotFound* );

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

private:
  FIX::Group* m_pUnmanaged;
  bool disposed;
};
}
