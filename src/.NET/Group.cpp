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

#include "stdafx.h"

#include "Group.h"
#include "quickfix/CallStack.h"

namespace QuickFix
{
void Group::setString(int field, String* value)
{ QF_STACK_TRY
  checkDisposed(); 
  if( value == 0 ) throw new NullReferenceException(); 
  mapSetString( field, value, *m_pUnmanaged );
  QF_STACK_CATCH
}

void Group::setBoolean(int field, bool value)
{ QF_STACK_TRY
  checkDisposed(); mapSetBoolean( field, value, *m_pUnmanaged );
  QF_STACK_CATCH
}

void Group::setChar(int field, wchar_t value)
{ QF_STACK_TRY
  checkDisposed(); mapSetChar( field, value, *m_pUnmanaged );
  QF_STACK_CATCH
}

void Group::setInt(int field, int value)
{ QF_STACK_TRY
  checkDisposed(); mapSetInt( field, value, *m_pUnmanaged );
  QF_STACK_CATCH
}

void Group::setDouble(int field, double value)
{ QF_STACK_TRY
  checkDisposed(); mapSetDouble( field, value, *m_pUnmanaged );
  QF_STACK_CATCH
}

void Group::setDouble(int field, double value, int padding)
{ QF_STACK_TRY
  checkDisposed(); mapSetDouble( field, value, padding, *m_pUnmanaged );
  QF_STACK_CATCH
}

void Group::setUtcTimeStamp(int field, DateTime value)
{ QF_STACK_TRY
  checkDisposed(); mapSetUtcTimeStamp( field, value, false, *m_pUnmanaged );
  QF_STACK_CATCH
}

void Group::setUtcTimeStamp(int field, DateTime value, bool showMilliseconds)
{ QF_STACK_TRY
  checkDisposed(); mapSetUtcTimeStamp( field, value, showMilliseconds, *m_pUnmanaged );
  QF_STACK_CATCH
}

void Group::setUtcDateOnly(int field, DateTime value)
{ QF_STACK_TRY
  checkDisposed(); mapSetUtcDateOnly( field, value, *m_pUnmanaged );
  QF_STACK_CATCH
}

void Group::setUtcTimeOnly(int field, DateTime value)
{ QF_STACK_TRY
  checkDisposed(); mapSetUtcTimeOnly( field, value, false, *m_pUnmanaged );
  QF_STACK_CATCH
}

void Group::setUtcTimeOnly(int field, DateTime value, bool showMilliseconds)
{ QF_STACK_TRY
  checkDisposed(); mapSetUtcTimeOnly( field, value, showMilliseconds, *m_pUnmanaged );
  QF_STACK_CATCH
}

String* Group::getString(int field)
{ QF_STACK_TRY
  checkDisposed(); return mapGetString( field, *m_pUnmanaged );
  QF_STACK_CATCH
}

bool Group::getBoolean(int field)
{ QF_STACK_TRY
  checkDisposed(); return mapGetBoolean( field, *m_pUnmanaged );
  QF_STACK_CATCH
}

wchar_t Group::getChar(int field)
{ QF_STACK_TRY
  checkDisposed(); return mapGetChar( field, *m_pUnmanaged );
  QF_STACK_CATCH
}

int Group::getInt(int field)
{ QF_STACK_TRY
  checkDisposed(); return mapGetInt( field, *m_pUnmanaged );
  QF_STACK_CATCH
}

double Group::getDouble(int field)
{ QF_STACK_TRY
  checkDisposed(); return mapGetDouble( field, *m_pUnmanaged );
  QF_STACK_CATCH
}

DateTime Group::getUtcTimeStamp(int field)
{ QF_STACK_TRY
  checkDisposed(); return mapGetUtcTimeStamp( field, *m_pUnmanaged );
  QF_STACK_CATCH
}

DateTime Group::getUtcDateOnly(int field)
{ QF_STACK_TRY
  checkDisposed(); return mapGetUtcDateOnly( field, *m_pUnmanaged );
  QF_STACK_CATCH
}

DateTime Group::getUtcTimeOnly(int field)
{ QF_STACK_TRY
  checkDisposed(); return mapGetUtcTimeOnly( field, *m_pUnmanaged );
  QF_STACK_CATCH
}

void Group::setField( StringField* field )
{ QF_STACK_TRY

  checkDisposed();

  m_pUnmanaged->setField
    ( FIX::StringField
      ( field->getField(), convertString( field->getValue() ) ) );

  QF_STACK_CATCH
}

void Group::setField( BooleanField* field )
{ QF_STACK_TRY

  checkDisposed();

  m_pUnmanaged->setField
    ( FIX::BoolField( field->getField(), field->getValue() ) );

  QF_STACK_CATCH
}

void Group::setField( CharField* field )
{ QF_STACK_TRY

  checkDisposed();

  m_pUnmanaged->setField
    ( FIX::CharField( field->getField(), field->getValue() ) );

  QF_STACK_CATCH
}

void Group::setField( IntField* field )
{ QF_STACK_TRY

  checkDisposed();

  m_pUnmanaged->setField
    ( FIX::IntField( field->getField(), field->getValue() ) );

  QF_STACK_CATCH
}

void Group::setField( DoubleField* field )
{ QF_STACK_TRY

  checkDisposed();

  m_pUnmanaged->setField
    ( FIX::DoubleField( field->getField(), field->getValue(), field->getPadding() ) );

  QF_STACK_CATCH
}

void Group::setField( UtcTimeStampField* field )
{ QF_STACK_TRY

  checkDisposed();

  DateTime value = field->getValue();
  m_pUnmanaged->setField
    ( FIX::UtcTimeStampField
      ( field->getField(),
        field->showMilliseconds() ? FIX::UtcTimeStamp( value.Hour, value.Minute, value.Second, value.Millisecond,
			                                                 value.Day, value.Month, value.Year )
                                  : FIX::UtcTimeStamp( value.Hour, value.Minute, value.Second,
                                                       value.Day, value.Month, value.Year ) ) );

  QF_STACK_CATCH
}

void Group::setField( UtcDateOnlyField* field )
{ QF_STACK_TRY

  checkDisposed();

  DateTime value = field->getValue();
  m_pUnmanaged->setField
    ( FIX::UtcDateOnlyField
      ( field->getField(),
        FIX::UtcDate( value.Day, value.Month, value.Year ) ) );

  QF_STACK_CATCH
}

void Group::setField( UtcTimeOnlyField* field )
{ QF_STACK_TRY

  checkDisposed();

  DateTime value = field->getValue();
  m_pUnmanaged->setField
    ( FIX::UtcTimeOnlyField
      ( field->getField(),
        field->showMilliseconds() ? FIX::UtcTimeOnly( value.Hour, value.Minute, value.Second, value.Millisecond )
                                  : FIX::UtcTimeOnly( value.Hour, value.Minute, value.Second, value.Millisecond ) ) );

  QF_STACK_CATCH
}

StringField* Group::getField( StringField* field )
{ QF_STACK_TRY

  checkDisposed();
  try
  {
    field->setValue( m_pUnmanaged->getField( field->getField() ).c_str() );
    return field;
  }
  catch ( FIX::FieldNotFound & e )
  { throw new FieldNotFound( e.field ); }

  QF_STACK_CATCH
}

BooleanField* Group::getField( BooleanField* field )
{ QF_STACK_TRY

  checkDisposed();
  try
  {
    field->setValue
      ( FIX::BoolConvertor::convert
	( m_pUnmanaged->getField( field->getField() ) ) );
    return field;
  }
  catch ( FIX::FieldNotFound & e )
  { throw new FieldNotFound( e.field ); }

  QF_STACK_CATCH
}

CharField* Group::getField( CharField* field )
{ QF_STACK_TRY

  checkDisposed();
  try
  {
    field->setValue
      ( FIX::CharConvertor::convert
	( m_pUnmanaged->getField( field->getField() ) ) );
    return field;
  }
  catch ( FIX::FieldNotFound & e )
  { throw new FieldNotFound( e.field ); }

  QF_STACK_CATCH
}

IntField* Group::getField( IntField* field )
{ QF_STACK_TRY

  checkDisposed();
  try
  {
    field->setValue
      ( FIX::IntConvertor::convert
	( m_pUnmanaged->getField( field->getField() ) ) );
    return field;
  }
  catch ( FIX::FieldNotFound & e )
  { throw new FieldNotFound( e.field ); }

  QF_STACK_CATCH
}

DoubleField* Group::getField( DoubleField* field )
{ QF_STACK_TRY

  checkDisposed();
  try
  {
    field->setValue
      ( FIX::DoubleConvertor::convert
	( m_pUnmanaged->getField( field->getField() ) ) );
    return field;
  }
  catch ( FIX::FieldNotFound & e )
  { throw new FieldNotFound( e.field ); }

  QF_STACK_CATCH
}

UtcTimeStampField* Group::getField( UtcTimeStampField* field )
{ QF_STACK_TRY

  checkDisposed();
  try
  {
    FIX::UtcTimeStamp fixd;
    fixd = FIX::UtcTimeStampConvertor::convert
      ( m_pUnmanaged->getField( field->getField() ) );
    DateTime d( fixd.getYear(), fixd.getMonth(), fixd.getDate(),
                fixd.getHour(), fixd.getMinute(), fixd.getSecond() );
    field->setValue( d );
    return field;
  }
  catch ( FIX::FieldNotFound & e )
  { throw new FieldNotFound( e.field ); }

  QF_STACK_CATCH
}

UtcDateOnlyField* Group::getField( UtcDateOnlyField* field )
{ QF_STACK_TRY

  checkDisposed();
  try
  {
    FIX::UtcDate fixd;
    fixd = FIX::UtcDateConvertor::convert
      ( m_pUnmanaged->getField( field->getField() ) );
    DateTime d( fixd.getYear(), fixd.getMonth(), fixd.getDate(), 0, 0, 0 );
    field->setValue( d );
    return field;
  }
  catch ( FIX::FieldNotFound & e )
  { throw new FieldNotFound( e.field ); }

  QF_STACK_CATCH
}

UtcTimeOnlyField* Group::getField( UtcTimeOnlyField* field )
{ QF_STACK_TRY

  checkDisposed();
  try
  {
    FIX::UtcTimeOnly fixd;
    fixd = FIX::UtcTimeOnlyConvertor::convert
      ( m_pUnmanaged->getField( field->getField() ) );
    DateTime d( 1, 1, 1, fixd.getHour(), fixd.getMinute(), fixd.getSecond() );
    field->setValue( d );
    return field;
  }
  catch ( FIX::FieldNotFound & e )
  { throw new FieldNotFound( e.field ); }

  QF_STACK_CATCH
}

bool Group::isSetField( Field* field )
{ QF_STACK_TRY
  checkDisposed(); return m_pUnmanaged->isSetField( field->getField() );
  QF_STACK_CATCH
}

String* Group::getField( int field )
{ QF_STACK_TRY
  checkDisposed(); return m_pUnmanaged->getField( field ).c_str();
  QF_STACK_CATCH
}

void Group::setField( int field, String* value )
{ QF_STACK_TRY
  checkDisposed(); m_pUnmanaged->setField( field, convertString(value) );
  QF_STACK_CATCH
}

void Group::removeField( int field )
{ QF_STACK_TRY
  checkDisposed(); m_pUnmanaged->removeField( field );
  QF_STACK_CATCH
}

bool Group::hasGroup( int field )
{ QF_STACK_TRY
  checkDisposed(); return ((FIX::FieldMap*)m_pUnmanaged)->hasGroup( field );
  QF_STACK_CATCH
}

bool Group::hasGroup( unsigned num, int field )
{ QF_STACK_TRY
  checkDisposed(); return ((FIX::FieldMap*)m_pUnmanaged)->hasGroup( num, field );
  QF_STACK_CATCH
}

bool Group::hasGroup( unsigned num, Group* group )
{ QF_STACK_TRY
  checkDisposed(); return ((FIX::FieldMap*)m_pUnmanaged)->hasGroup( num, group->field() );
  QF_STACK_CATCH
}

bool Group::hasGroup( Group* group )
{ QF_STACK_TRY
  checkDisposed(); return ((FIX::FieldMap*)m_pUnmanaged)->hasGroup( group->field() );
  QF_STACK_CATCH
}

void Group::removeGroup( int field )
{ QF_STACK_TRY
  checkDisposed(); return ((FIX::FieldMap*)m_pUnmanaged)->removeGroup( field );
  QF_STACK_CATCH
}

void Group::removeGroup( unsigned num, int field )
{ QF_STACK_TRY
  checkDisposed(); return ((FIX::FieldMap*)m_pUnmanaged)->removeGroup( num, field );
  QF_STACK_CATCH
}

void Group::removeGroup( unsigned num, Group* group )
{ QF_STACK_TRY
  checkDisposed(); return ((FIX::FieldMap*)m_pUnmanaged)->removeGroup( num, group->field() );
  QF_STACK_CATCH
}

void Group::removeGroup( Group* group )
{ QF_STACK_TRY
  checkDisposed(); return ((FIX::FieldMap*)m_pUnmanaged)->removeGroup( group->field() );
  QF_STACK_CATCH
}

int Group::groupCount( int field )
{ QF_STACK_TRY
  checkDisposed(); return m_pUnmanaged->groupCount( field );
  QF_STACK_CATCH
}

bool Group::isSetField( int field )
{ QF_STACK_TRY
  checkDisposed(); return m_pUnmanaged->isSetField( field );
  QF_STACK_CATCH
}
}
