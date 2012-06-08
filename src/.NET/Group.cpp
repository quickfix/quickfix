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

namespace QuickFix
{
void Group::setString(int field, String* value)
{
  checkDisposed(); 
  if( value == 0 ) throw new NullReferenceException(); 
  mapSetString( field, value, *m_pUnmanaged );
}

void Group::setBoolean(int field, bool value)
{
  checkDisposed(); mapSetBoolean( field, value, *m_pUnmanaged );
}

void Group::setChar(int field, wchar_t value)
{
  checkDisposed(); mapSetChar( field, value, *m_pUnmanaged );
}

void Group::setInt(int field, int value)
{
  checkDisposed(); mapSetInt( field, value, *m_pUnmanaged );
}

void Group::setDouble(int field, double value)
{
  checkDisposed(); mapSetDouble( field, value, *m_pUnmanaged );
}

void Group::setDouble(int field, double value, int padding)
{
  checkDisposed(); mapSetDouble( field, value, padding, *m_pUnmanaged );
}

void Group::setUtcTimeStamp(int field, DateTime value)
{
  checkDisposed(); mapSetUtcTimeStamp( field, value, false, *m_pUnmanaged );
}

void Group::setUtcTimeStamp(int field, DateTime value, bool showMilliseconds)
{
  checkDisposed(); mapSetUtcTimeStamp( field, value, showMilliseconds, *m_pUnmanaged );
}

void Group::setUtcDateOnly(int field, DateTime value)
{
  checkDisposed(); mapSetUtcDateOnly( field, value, *m_pUnmanaged );
}

void Group::setUtcTimeOnly(int field, DateTime value)
{
  checkDisposed(); mapSetUtcTimeOnly( field, value, false, *m_pUnmanaged );
}

void Group::setUtcTimeOnly(int field, DateTime value, bool showMilliseconds)
{
  checkDisposed(); mapSetUtcTimeOnly( field, value, showMilliseconds, *m_pUnmanaged );
}

String* Group::getString(int field)
{
  checkDisposed(); return mapGetString( field, *m_pUnmanaged );
}

bool Group::getBoolean(int field)
{
  checkDisposed(); return mapGetBoolean( field, *m_pUnmanaged );
}

wchar_t Group::getChar(int field)
{
  checkDisposed(); return mapGetChar( field, *m_pUnmanaged );
}

int Group::getInt(int field)
{
  checkDisposed(); return mapGetInt( field, *m_pUnmanaged );
}

double Group::getDouble(int field)
{
  checkDisposed(); return mapGetDouble( field, *m_pUnmanaged );
}

DateTime Group::getUtcTimeStamp(int field)
{
  checkDisposed(); return mapGetUtcTimeStamp( field, *m_pUnmanaged );
}

DateTime Group::getUtcDateOnly(int field)
{
  checkDisposed(); return mapGetUtcDateOnly( field, *m_pUnmanaged );
}

DateTime Group::getUtcTimeOnly(int field)
{
  checkDisposed(); return mapGetUtcTimeOnly( field, *m_pUnmanaged );
}

void Group::setField( StringField* field )
{
  checkDisposed();

  m_pUnmanaged->setField
    ( FIX::StringField
      ( field->getField(), convertString( field->getValue() ) ) );
}

void Group::setField( BooleanField* field )
{
  checkDisposed();

  m_pUnmanaged->setField
    ( FIX::BoolField( field->getField(), field->getValue() ) );
}

void Group::setField( CharField* field )
{
  checkDisposed();

  m_pUnmanaged->setField
    ( FIX::CharField( field->getField(), field->getValue() ) );
}

void Group::setField( IntField* field )
{
  checkDisposed();

  m_pUnmanaged->setField
    ( FIX::IntField( field->getField(), field->getValue() ) );
}

void Group::setField( DoubleField* field )
{
  checkDisposed();

  m_pUnmanaged->setField
    ( FIX::DoubleField( field->getField(), field->getValue(), field->getPadding() ) );
}

void Group::setField( UtcTimeStampField* field )
{
  checkDisposed();

  DateTime value = field->getValue();
  m_pUnmanaged->setField
    ( FIX::UtcTimeStampField
      ( field->getField(),
        field->showMilliseconds() ? FIX::UtcTimeStamp( value.Hour, value.Minute, value.Second, value.Millisecond,
			                                                 value.Day, value.Month, value.Year )
                                  : FIX::UtcTimeStamp( value.Hour, value.Minute, value.Second,
                                                       value.Day, value.Month, value.Year ) ) );
}

void Group::setField( UtcDateOnlyField* field )
{
  checkDisposed();

  DateTime value = field->getValue();
  m_pUnmanaged->setField
    ( FIX::UtcDateOnlyField
      ( field->getField(),
        FIX::UtcDate( value.Day, value.Month, value.Year ) ) );
}

void Group::setField( UtcTimeOnlyField* field )
{
  checkDisposed();

  DateTime value = field->getValue();
  m_pUnmanaged->setField
    ( FIX::UtcTimeOnlyField
      ( field->getField(),
        field->showMilliseconds() ? FIX::UtcTimeOnly( value.Hour, value.Minute, value.Second, value.Millisecond )
                                  : FIX::UtcTimeOnly( value.Hour, value.Minute, value.Second, value.Millisecond ) ) );
}

StringField* Group::getField( StringField* field )
{
  checkDisposed();
  try
  {
    field->setValue( m_pUnmanaged->getField( field->getField() ).c_str() );
    return field;
  }
  catch ( FIX::FieldNotFound & e )
  { throw new FieldNotFound( e.field ); }
}

BooleanField* Group::getField( BooleanField* field )
{
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
}

CharField* Group::getField( CharField* field )
{
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
}

IntField* Group::getField( IntField* field )
{
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
}

DoubleField* Group::getField( DoubleField* field )
{
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
}

UtcTimeStampField* Group::getField( UtcTimeStampField* field )
{
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
}

UtcDateOnlyField* Group::getField( UtcDateOnlyField* field )
{
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
}

UtcTimeOnlyField* Group::getField( UtcTimeOnlyField* field )
{
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
}

bool Group::isSetField( Field* field )
{
  checkDisposed(); return m_pUnmanaged->isSetField( field->getField() );
}

String* Group::getField( int field )
{
  checkDisposed(); return m_pUnmanaged->getField( field ).c_str();
}

void Group::setField( int field, String* value )
{
  checkDisposed(); m_pUnmanaged->setField( field, convertString(value) );
}

void Group::removeField( int field )
{
  checkDisposed(); m_pUnmanaged->removeField( field );
}

bool Group::hasGroup( int field )
{
  checkDisposed(); return ((FIX::FieldMap*)m_pUnmanaged)->hasGroup( field );
}

bool Group::hasGroup( unsigned num, int field )
{
  checkDisposed(); return ((FIX::FieldMap*)m_pUnmanaged)->hasGroup( num, field );
}

bool Group::hasGroup( unsigned num, Group* group )
{
  checkDisposed(); return ((FIX::FieldMap*)m_pUnmanaged)->hasGroup( num, group->field() );
}

bool Group::hasGroup( Group* group )
{
  checkDisposed(); return ((FIX::FieldMap*)m_pUnmanaged)->hasGroup( group->field() );
}

void Group::removeGroup( int field )
{
  checkDisposed(); return ((FIX::FieldMap*)m_pUnmanaged)->removeGroup( field );
}

void Group::removeGroup( unsigned num, int field )
{
  checkDisposed(); return ((FIX::FieldMap*)m_pUnmanaged)->removeGroup( num, field );
}

void Group::removeGroup( unsigned num, Group* group )
{
  checkDisposed(); return ((FIX::FieldMap*)m_pUnmanaged)->removeGroup( num, group->field() );
}

void Group::removeGroup( Group* group )
{
  checkDisposed(); return ((FIX::FieldMap*)m_pUnmanaged)->removeGroup( group->field() );
}

int Group::groupCount( int field )
{
  checkDisposed(); return m_pUnmanaged->groupCount( field );
}

bool Group::isSetField( int field )
{
  checkDisposed(); return m_pUnmanaged->isSetField( field );
}
}
