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

#include "FieldMap.h"

namespace QuickFix
{
void mapSetString(int field, String* value, FIX::FieldMap& map)
{
  map.setField( FIX::StringField( field, convertString( value ) ) );
}

void mapSetBoolean(int field, bool value, FIX::FieldMap& map)
{
  map.setField( FIX::BoolField( field, value ) );
}

void mapSetChar(int field, char value, FIX::FieldMap& map)
{
  map.setField( FIX::CharField( field, value ) );
}

void mapSetInt(int field, int value, FIX::FieldMap& map)
{
  map.setField( FIX::IntField( field, value ) );
}

void mapSetDouble(int field, double value, FIX::FieldMap& map)
{
  map.setField( FIX::DoubleField(field, value) );
}

void mapSetDouble(int field, double value, int padding, FIX::FieldMap& map)
{
  map.setField( FIX::DoubleField(field, value, padding) );
}

void mapSetUtcTimeStamp(int field, DateTime value, bool showMilliseconds, FIX::FieldMap& map)
{
  map.setField( FIX::UtcTimeStampField(
                  field,
                  showMilliseconds ? FIX::UtcTimeStamp( value.Hour, value.Minute, value.Second, value.Millisecond,
                                     value.Day, value.Month, value.Year )
                                   : FIX::UtcTimeStamp( value.Hour, value.Minute, value.Second,
                                     value.Day, value.Month, value.Year ),
                  showMilliseconds ) );
}

void mapSetUtcTimeOnly(int field, DateTime value, bool showMilliseconds, FIX::FieldMap& map)
{
  map.setField( FIX::UtcTimeOnlyField(
                  field,
                  showMilliseconds ? FIX::UtcTimeOnly( value.Hour, value.Minute, value.Second, value.Millisecond )
                                   : FIX::UtcTimeOnly( value.Hour, value.Minute, value.Second ),
                  showMilliseconds ) );
}

void mapSetUtcDateOnly(int field, DateTime value, FIX::FieldMap& map)
{
  map.setField( FIX::UtcDateOnlyField(
                  field,
                  FIX::UtcDate( value.Day, value.Month, value.Year ) ) );
}

String* mapGetString(int field, FIX::FieldMap& map)
{
  StringField* stringField = new StringField(field);
  return mapGetField( stringField, map )->getValue();
}

bool mapGetBoolean(int field, FIX::FieldMap& map)
{
  BooleanField* booleanField = new BooleanField(field);
  return mapGetField( booleanField, map )->getValue();
}

char mapGetChar(int field, FIX::FieldMap& map)
{
  CharField* charField = new CharField(field);
  return mapGetField( charField, map )->getValue();
}

int mapGetInt(int field, FIX::FieldMap& map)
{
  IntField* intField = new IntField(field);
  return mapGetField( intField, map )->getValue();
}

double mapGetDouble(int field, FIX::FieldMap& map)
{
  DoubleField* doubleField = new DoubleField(field);
  return mapGetField( doubleField, map )->getValue();
}

DateTime mapGetUtcTimeStamp(int field, FIX::FieldMap& map)
{
  UtcTimeStampField* utcTimeStampField = new UtcTimeStampField(field);
  return mapGetField( utcTimeStampField, map )->getValue();
}

DateTime mapGetUtcDateOnly(int field, FIX::FieldMap& map)
{
  UtcDateOnlyField* utcDateOnlyField = new UtcDateOnlyField(field);
  return mapGetField( utcDateOnlyField, map )->getValue();
}

DateTime mapGetUtcTimeOnly(int field, FIX::FieldMap& map)
{
  UtcTimeOnlyField* utcTimeOnlyField = new UtcTimeOnlyField(field);
  return mapGetField( utcTimeOnlyField, map )->getValue();
}

void mapSetField( StringField* field, FIX::FieldMap& map )
{
  mapSetString( field->getField(), field->getValue(), map );
}

void mapSetField( BooleanField* field, FIX::FieldMap& map )
{
  mapSetBoolean( field->getField(), field->getValue(), map );
}

void mapSetField( CharField* field, FIX::FieldMap& map )
{
  mapSetChar( field->getField(), field->getValue(), map );
}

void mapSetField( IntField* field, FIX::FieldMap& map )
{
  mapSetInt( field->getField(), field->getValue(), map );
}

void mapSetField( DoubleField* field, FIX::FieldMap& map )
{
  mapSetDouble( field->getField(), field->getValue(), field->getPadding(), map );
}

void mapSetField( UtcTimeStampField* field, FIX::FieldMap& map )
{
  mapSetUtcTimeStamp( field->getField(), field->getValue(), field->showMilliseconds(), map );
}

void mapSetField( UtcDateOnlyField* field, FIX::FieldMap& map )
{
  mapSetUtcDateOnly( field->getField(), field->getValue(), map );
}

void mapSetField( UtcTimeOnlyField* field, FIX::FieldMap& map )
{
  mapSetUtcTimeOnly( field->getField(), field->getValue(), field->showMilliseconds(), map );
}

StringField* mapGetField( StringField* field, FIX::FieldMap& map )
{
  try
  {
    field->setValue( map.getField( field->getField() ).c_str() );
    return field;
  }
  catch ( FIX::FieldNotFound & e )
  { throw new FieldNotFound( e.field ); }
}

BooleanField* mapGetField( BooleanField* field, FIX::FieldMap& map )
{
  try
  {
    field->setValue
      ( FIX::BoolConvertor::convert( map.getField( field->getField() ) ) );
    return field;
  }
  catch ( FIX::FieldNotFound & e )
  { throw new FieldNotFound( e.field ); }
  catch ( FIX::FieldConvertError & e )
  { throw new IncorrectDataFormat( field->getField() ); }
}

CharField* mapGetField( CharField* field, FIX::FieldMap& map )
{
  try
  {
    field->setValue
      ( FIX::CharConvertor::convert( map.getField( field->getField() ) ) );
    return field;
  }
  catch ( FIX::FieldNotFound & e )
  { throw new FieldNotFound( e.field ); }
  catch ( FIX::FieldConvertError & e )
  { throw new IncorrectDataFormat( field->getField() ); }
}

IntField* mapGetField( IntField* field, FIX::FieldMap& map )
{
  try
  {
    field->setValue
      ( FIX::IntConvertor::convert( map.getField( field->getField() ) ) );
    return field;
  }
  catch ( FIX::FieldNotFound & e )
  { throw new FieldNotFound( e.field ); }
  catch ( FIX::FieldConvertError & e )
  { throw new IncorrectDataFormat( field->getField() ); }
}

DoubleField* mapGetField( DoubleField* field, FIX::FieldMap& map )
{
  try
  {
    field->setValue
      ( FIX::DoubleConvertor::convert( map.getField( field->getField() ) ) );
    return field;
  }
  catch ( FIX::FieldNotFound & e )
  { throw new FieldNotFound( e.field ); }
  catch ( FIX::FieldConvertError & e )
  { throw new IncorrectDataFormat( field->getField() ); }
}

UtcTimeStampField* mapGetField( UtcTimeStampField* field,
				      FIX::FieldMap& map )
{
  try
  {
    FIX::UtcTimeStamp fixd;
    fixd = FIX::UtcTimeStampConvertor::convert
      ( map.getField( field->getField() ) );
    DateTime d( fixd.getYear(), fixd.getMonth(), fixd.getDate(),
                fixd.getHour(), fixd.getMinute(), fixd.getSecond(), fixd.getMillisecond() );
    field->setValue( d );
    return field;
  }
  catch ( FIX::FieldNotFound & e )
  { throw new FieldNotFound( e.field ); }
  catch ( FIX::FieldConvertError & e )
  { throw new IncorrectDataFormat( field->getField() ); }
}

UtcDateOnlyField* mapGetField( UtcDateOnlyField* field, FIX::FieldMap& map )
{
  try
  {
    FIX::UtcDate fixd;
    fixd = FIX::UtcDateConvertor::convert( map.getField( field->getField() ) );
    DateTime d( fixd.getYear(), fixd.getMonth(), fixd.getDate(), 0, 0, 0 );
    field->setValue( d );
    return field;
  }
  catch ( FIX::FieldNotFound & e )
  { throw new FieldNotFound( e.field ); }
  catch ( FIX::FieldConvertError & e )
  { throw new IncorrectDataFormat( field->getField() ); }
}

UtcTimeOnlyField* mapGetField( UtcTimeOnlyField* field, FIX::FieldMap& map )
{
  try
  {
    FIX::UtcTimeOnly fixd;
    fixd = FIX::UtcTimeOnlyConvertor::convert
      ( map.getField( field->getField() ) );
    DateTime d( 1, 1, 1, fixd.getHour(), fixd.getMinute(), fixd.getSecond(), fixd.getMillisecond() );
    field->setValue( d );
    return field;
  }
  catch ( FIX::FieldNotFound & e )
  { throw new FieldNotFound( e.field ); }
  catch ( FIX::FieldConvertError & e )
  { throw new IncorrectDataFormat( field->getField() ); }
}

void mapSetField( int field, String* value, FIX::FieldMap& map )
{
  map.setField( field, convertString(value) );
}

String* mapGetField( int field, FIX::FieldMap& map )
{
  try
  {
    return map.getField( field ).c_str();
  }
  catch ( FIX::FieldNotFound & e )
  { throw new FieldNotFound( e.field ); }
}

void mapRemoveField( int field, FIX::FieldMap& map )
{
  map.removeField( field );
}

bool mapHasGroup( int field, FIX::FieldMap& map )
{
  return map.hasGroup( field );
}

bool mapHasGroup( unsigned num, int field, FIX::FieldMap& map )
{
  return map.hasGroup( num, field );
}

void mapRemoveGroup( int field, FIX::FieldMap& map )
{
  map.removeGroup( field );
}

void mapRemoveGroup( unsigned num, int field, FIX::FieldMap& map )
{
  map.removeGroup( num, field );
}

int mapGroupCount( int field, FIX::FieldMap& map )
{
  return map.groupCount(field);
}
}