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
#include "quickfix/CallStack.h"

namespace QuickFix
{
void mapSetString(int field, String* value, FIX::FieldMap& map)
{ QF_STACK_TRY
  map.setField( FIX::StringField( field, convertString( value ) ) );
  QF_STACK_CATCH
}

void mapSetBoolean(int field, bool value, FIX::FieldMap& map)
{ QF_STACK_TRY
  map.setField( FIX::BoolField( field, value ) );
  QF_STACK_CATCH
}

void mapSetChar(int field, char value, FIX::FieldMap& map)
{ QF_STACK_TRY
  map.setField( FIX::CharField( field, value ) );
  QF_STACK_CATCH
}

void mapSetInt(int field, int value, FIX::FieldMap& map)
{ QF_STACK_TRY
  map.setField( FIX::IntField( field, value ) );
  QF_STACK_CATCH
}

void mapSetDouble(int field, double value, FIX::FieldMap& map)
{ QF_STACK_TRY
  map.setField( FIX::DoubleField(field, value) );
  QF_STACK_CATCH
}

void mapSetDouble(int field, double value, int padding, FIX::FieldMap& map)
{ QF_STACK_TRY
  map.setField( FIX::DoubleField(field, value, padding) );
  QF_STACK_CATCH
}

void mapSetUtcTimeStamp(int field, DateTime value, bool showMilliseconds, FIX::FieldMap& map)
{ QF_STACK_TRY

  map.setField( FIX::UtcTimeStampField(
                  field,
                  showMilliseconds ? FIX::UtcTimeStamp( value.Hour, value.Minute, value.Second, value.Millisecond,
                                     value.Day, value.Month, value.Year )
                                   : FIX::UtcTimeStamp( value.Hour, value.Minute, value.Second,
                                     value.Day, value.Month, value.Year ),
                  showMilliseconds ) );

  QF_STACK_CATCH
}

void mapSetUtcTimeOnly(int field, DateTime value, bool showMilliseconds, FIX::FieldMap& map)
{ QF_STACK_TRY

  map.setField( FIX::UtcTimeOnlyField(
                  field,
                  showMilliseconds ? FIX::UtcTimeOnly( value.Hour, value.Minute, value.Second, value.Millisecond )
                                   : FIX::UtcTimeOnly( value.Hour, value.Minute, value.Second ),
                  showMilliseconds ) );

  QF_STACK_CATCH
}

void mapSetUtcDateOnly(int field, DateTime value, FIX::FieldMap& map)
{ QF_STACK_TRY

  map.setField( FIX::UtcDateOnlyField(
                  field,
                  FIX::UtcDate( value.Day, value.Month, value.Year ) ) );

  QF_STACK_CATCH
}

String* mapGetString(int field, FIX::FieldMap& map)
{ QF_STACK_TRY

  StringField* stringField = new StringField(field);
  return mapGetField( stringField, map )->getValue();

  QF_STACK_CATCH
}

bool mapGetBoolean(int field, FIX::FieldMap& map)
{ QF_STACK_TRY

  BooleanField* booleanField = new BooleanField(field);
  return mapGetField( booleanField, map )->getValue();

  QF_STACK_CATCH
}

char mapGetChar(int field, FIX::FieldMap& map)
{ QF_STACK_TRY

  CharField* charField = new CharField(field);
  return mapGetField( charField, map )->getValue();

  QF_STACK_CATCH
}

int mapGetInt(int field, FIX::FieldMap& map)
{ QF_STACK_TRY

  IntField* intField = new IntField(field);
  return mapGetField( intField, map )->getValue();

  QF_STACK_CATCH
}

double mapGetDouble(int field, FIX::FieldMap& map)
{ QF_STACK_TRY

  DoubleField* doubleField = new DoubleField(field);
  return mapGetField( doubleField, map )->getValue();

  QF_STACK_CATCH
}

DateTime mapGetUtcTimeStamp(int field, FIX::FieldMap& map)
{ QF_STACK_TRY

  UtcTimeStampField* utcTimeStampField = new UtcTimeStampField(field);
  return mapGetField( utcTimeStampField, map )->getValue();

  QF_STACK_CATCH
}

DateTime mapGetUtcDateOnly(int field, FIX::FieldMap& map)
{ QF_STACK_TRY

  UtcDateOnlyField* utcDateOnlyField = new UtcDateOnlyField(field);
  return mapGetField( utcDateOnlyField, map )->getValue();

  QF_STACK_CATCH
}

DateTime mapGetUtcTimeOnly(int field, FIX::FieldMap& map)
{ QF_STACK_TRY

  UtcTimeOnlyField* utcTimeOnlyField = new UtcTimeOnlyField(field);
  return mapGetField( utcTimeOnlyField, map )->getValue();

  QF_STACK_CATCH
}

void mapSetField( StringField* field, FIX::FieldMap& map )
{ QF_STACK_TRY
  mapSetString( field->getField(), field->getValue(), map );
  QF_STACK_CATCH
}

void mapSetField( BooleanField* field, FIX::FieldMap& map )
{ QF_STACK_TRY
  mapSetBoolean( field->getField(), field->getValue(), map );
  QF_STACK_CATCH
}

void mapSetField( CharField* field, FIX::FieldMap& map )
{ QF_STACK_TRY
  mapSetChar( field->getField(), field->getValue(), map );
  QF_STACK_CATCH
}

void mapSetField( IntField* field, FIX::FieldMap& map )
{ QF_STACK_TRY
  mapSetInt( field->getField(), field->getValue(), map );
  QF_STACK_CATCH
}

void mapSetField( DoubleField* field, FIX::FieldMap& map )
{ QF_STACK_TRY
  mapSetDouble( field->getField(), field->getValue(), field->getPadding(), map );
  QF_STACK_CATCH
}

void mapSetField( UtcTimeStampField* field, FIX::FieldMap& map )
{ QF_STACK_TRY
  mapSetUtcTimeStamp( field->getField(), field->getValue(), field->showMilliseconds(), map );
  QF_STACK_CATCH
}

void mapSetField( UtcDateOnlyField* field, FIX::FieldMap& map )
{ QF_STACK_TRY
  mapSetUtcDateOnly( field->getField(), field->getValue(), map );
  QF_STACK_CATCH
}

void mapSetField( UtcTimeOnlyField* field, FIX::FieldMap& map )
{ QF_STACK_TRY
  mapSetUtcTimeOnly( field->getField(), field->getValue(), field->showMilliseconds(), map );
  QF_STACK_CATCH
}

StringField* mapGetField( StringField* field, FIX::FieldMap& map )
{ QF_STACK_TRY

  try
  {
    field->setValue( map.getField( field->getField() ).c_str() );
    return field;
  }
  catch ( FIX::FieldNotFound & e )
  { throw new FieldNotFound( e.field ); }

  QF_STACK_CATCH
}

BooleanField* mapGetField( BooleanField* field, FIX::FieldMap& map )
{ QF_STACK_TRY

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

  QF_STACK_CATCH
}

CharField* mapGetField( CharField* field, FIX::FieldMap& map )
{ QF_STACK_TRY

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

  QF_STACK_CATCH
}

IntField* mapGetField( IntField* field, FIX::FieldMap& map )
{ QF_STACK_TRY

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

  QF_STACK_CATCH
}

DoubleField* mapGetField( DoubleField* field, FIX::FieldMap& map )
{ QF_STACK_TRY

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

  QF_STACK_CATCH
}

UtcTimeStampField* mapGetField( UtcTimeStampField* field,
				      FIX::FieldMap& map )
{ QF_STACK_TRY

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

  QF_STACK_CATCH
}

UtcDateOnlyField* mapGetField( UtcDateOnlyField* field, FIX::FieldMap& map )
{ QF_STACK_TRY

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

  QF_STACK_CATCH
}

UtcTimeOnlyField* mapGetField( UtcTimeOnlyField* field, FIX::FieldMap& map )
{ QF_STACK_TRY

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

  QF_STACK_CATCH
}

void mapSetField( int field, String* value, FIX::FieldMap& map )
{ QF_STACK_TRY
  map.setField( field, convertString(value) );
  QF_STACK_CATCH
}

String* mapGetField( int field, FIX::FieldMap& map )
{ QF_STACK_TRY

  try
  {
    return map.getField( field ).c_str();
  }
  catch ( FIX::FieldNotFound & e )
  { throw new FieldNotFound( e.field ); }
  QF_STACK_CATCH
}

void mapRemoveField( int field, FIX::FieldMap& map )
{ QF_STACK_TRY
  map.removeField( field );
  QF_STACK_CATCH
}

bool mapHasGroup( int field, FIX::FieldMap& map )
{ QF_STACK_TRY
  return map.hasGroup( field );
  QF_STACK_CATCH
}

bool mapHasGroup( unsigned num, int field, FIX::FieldMap& map )
{ QF_STACK_TRY
  return map.hasGroup( num, field );
  QF_STACK_CATCH
}

void mapRemoveGroup( int field, FIX::FieldMap& map )
{ QF_STACK_TRY
  map.removeGroup( field );
  QF_STACK_CATCH
}

void mapRemoveGroup( unsigned num, int field, FIX::FieldMap& map )
{ QF_STACK_TRY
  map.removeGroup( num, field );
  QF_STACK_CATCH
}

int mapGroupCount( int field, FIX::FieldMap& map )
{ QF_STACK_TRY
  return map.groupCount(field);
  QF_STACK_CATCH
}
}