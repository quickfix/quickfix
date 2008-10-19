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
#include "Field.h"
#include "Exceptions.h"

#include "quickfix/FieldMap.h"

namespace QuickFix
{
public __abstract __gc class FieldMap {

public:
  virtual void setString(int field, String* value) = 0;
  virtual void setBoolean(int field, bool value) = 0;
  virtual void setChar(int field, wchar_t value) = 0;
  virtual void setInt(int field, int value) = 0;
  virtual void setDouble(int field, double value) = 0;
  virtual void setUtcTimeStamp(int field, DateTime value) = 0;
  virtual void setUtcTimeOnly(int field, DateTime value) = 0;
  virtual void setUtcDateOnly(int field, DateTime value) = 0;
  virtual String* getString(int field) = 0;
  virtual bool getBoolean(int field) = 0;
  virtual wchar_t getChar(int field) = 0;
  virtual int getInt(int field) = 0;
  virtual double getDouble(int field) = 0;
  virtual DateTime getUtcTimeStamp(int field) = 0;
  virtual DateTime getUtcTimeOnly(int field) = 0;
  virtual DateTime getUtcDateOnly(int field) = 0;
  virtual void setField(StringField* field) = 0;
  virtual void setField(BooleanField* field) = 0;
  virtual void setField(CharField* field) = 0;
  virtual void setField(IntField* field) = 0;
  virtual void setField(DoubleField* field) = 0;
  virtual void setField(UtcTimeStampField* field) = 0;
  virtual void setField(UtcTimeOnlyField* field) = 0;
  virtual void setField(UtcDateOnlyField* field) = 0;
  virtual StringField* getField(StringField* field) = 0;
  virtual BooleanField* getField(BooleanField* field) = 0;
  virtual CharField* getField(CharField* field) = 0;
  virtual IntField* getField(IntField* field) = 0;
  virtual DoubleField* getField(DoubleField* field) = 0;
  virtual UtcTimeStampField* getField(UtcTimeStampField* field) = 0;
  virtual UtcTimeOnlyField* getField(UtcTimeOnlyField* field) = 0;
  virtual UtcDateOnlyField* getField(UtcDateOnlyField* field) = 0;
  virtual bool isSetField(int field) = 0;
  virtual bool isSetField(Field* field) = 0;
  virtual void removeField(int field) = 0;
  virtual bool hasGroup( int field ) = 0;
  virtual bool hasGroup( unsigned num, int field ) = 0;
  virtual void removeGroup( int field ) = 0;
  virtual void removeGroup( unsigned num, int field ) = 0;
  virtual int groupCount( int field ) = 0;
  virtual void addGroup( int field, FieldMap* group ) = 0;
  virtual void replaceGroup( unsigned num, int field, FieldMap* group ) = 0;
  virtual FieldMap* getGroup( unsigned num, int field, FieldMap* group ) = 0;
  virtual IEnumerator* GetEnumerator() = 0;

  virtual FIX::FieldMap* pUnmanaged() = 0;
};

void mapSetString(int field, String* value, FIX::FieldMap& map);
void mapSetBoolean(int field, bool value, FIX::FieldMap& map);
void mapSetChar(int field, char value, FIX::FieldMap& map);
void mapSetInt(int field, int value, FIX::FieldMap& map);
void mapSetDouble(int field, double value, FIX::FieldMap& map);
void mapSetDouble(int field, double value, int padding, FIX::FieldMap& map);
void mapSetUtcTimeStamp(int field, DateTime value, bool showMilliseconds, FIX::FieldMap& map);
void mapSetUtcTimeOnly(int field, DateTime value, bool showMilliseconds, FIX::FieldMap& map);
void mapSetUtcDateOnly(int field, DateTime value, FIX::FieldMap& map);

String* mapGetString(int field, FIX::FieldMap& map);
bool mapGetBoolean(int field, FIX::FieldMap& map);
char mapGetChar(int field, FIX::FieldMap& map);
int mapGetInt(int field, FIX::FieldMap& map);
double mapGetDouble(int field, FIX::FieldMap& map);
DateTime mapGetUtcTimeStamp(int field, FIX::FieldMap& map);
DateTime mapGetUtcDateOnly(int field, FIX::FieldMap& map);
DateTime mapGetUtcTimeOnly(int field, FIX::FieldMap& map);

void mapSetField( StringField* field, FIX::FieldMap& map );
void mapSetField( BooleanField* field, FIX::FieldMap& map );
void mapSetField( CharField* field, FIX::FieldMap& map );
void mapSetField( IntField* field, FIX::FieldMap& map );
void mapSetField( DoubleField* field, FIX::FieldMap& map );
void mapSetField( UtcTimeStampField* field, FIX::FieldMap& map );
void mapSetField( UtcDateOnlyField* field, FIX::FieldMap& map );
void mapSetField( UtcTimeOnlyField* field, FIX::FieldMap& map );

StringField* mapGetField( StringField* field, FIX::FieldMap& map );
BooleanField* mapGetField( BooleanField* field, FIX::FieldMap& map );
CharField* mapGetField( CharField* field, FIX::FieldMap& map );
IntField* mapGetField( IntField* field, FIX::FieldMap& map );
DoubleField* mapGetField( DoubleField* field, FIX::FieldMap& map );
UtcTimeStampField* mapGetField( UtcTimeStampField* field, FIX::FieldMap& map );
UtcDateOnlyField* mapGetField( UtcDateOnlyField* field, FIX::FieldMap& map );
UtcTimeOnlyField* mapGetField( UtcTimeOnlyField* field, FIX::FieldMap& map );

void mapSetField( int field, String*, FIX::FieldMap& map );
String* mapGetField( int field, FIX::FieldMap& map );
void mapRemoveField( int field, FIX::FieldMap& map );
bool mapHasGroup( unsigned num, int field, FIX::FieldMap& map );
bool mapHasGroup( int field, FIX::FieldMap& map );
void mapRemoveGroup( unsigned num, int field, FIX::FieldMap& map );
void mapRemoveGroup( int field, FIX::FieldMap& map );
int mapGroupCount( int field, FIX::FieldMap& map );
}