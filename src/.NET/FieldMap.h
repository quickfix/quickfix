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
using namespace System::Collections;

#include "quickfix_net.h"
#include "Field.h"
#include "Exceptions.h"

namespace QuickFix
{
public __abstract __gc class FieldMap {

public:
  virtual void setString(int field, String* value) = 0;
  virtual void setBoolean(int field, bool value) = 0;
  virtual void setChar(int field, char value) = 0;
  virtual void setInt(int field, int value) = 0;
  virtual void setDouble(int field, double value) = 0;
  virtual void setUtcTimeStamp(int field, DateTime value) = 0;
  virtual void setUtcTimeOnly(int field, DateTime value) = 0;
  virtual void setUtcDateOnly(int field, DateTime value) = 0;
  virtual String* getString(int field) throw ( FieldNotFound* ) = 0;
  virtual bool getBoolean(int field) throw ( FieldNotFound* ) = 0;
  virtual char getChar(int field) throw ( FieldNotFound* ) = 0;
  virtual int getInt(int field) throw ( FieldNotFound* ) = 0;
  virtual double getDouble(int field) throw ( FieldNotFound* ) = 0;
  virtual DateTime getUtcTimeStamp(int field) throw ( FieldNotFound* ) = 0;
  virtual DateTime getUtcTimeOnly(int field) throw ( FieldNotFound* ) = 0;
  virtual DateTime getUtcDateOnly(int field) throw ( FieldNotFound* ) = 0;
  virtual void setField(StringField* field) = 0;
  virtual void setField(BooleanField* field) = 0;
  virtual void setField(CharField* field) = 0;
  virtual void setField(IntField* field) = 0;
  virtual void setField(DoubleField* field) = 0;
  virtual void setField(UtcTimeStampField* field) = 0;
  virtual void setField(UtcTimeOnlyField* field) = 0;
  virtual void setField(UtcDateOnlyField* field) = 0;
  virtual StringField* getField(StringField* field) throw ( FieldNotFound* ) = 0;
  virtual BooleanField* getField(BooleanField* field) throw ( FieldNotFound* ) = 0;
  virtual CharField* getField(CharField* field) throw ( FieldNotFound* ) = 0;
  virtual IntField* getField(IntField* field) throw ( FieldNotFound* ) = 0;
  virtual DoubleField* getField(DoubleField* field) throw ( FieldNotFound* ) = 0;
  virtual UtcTimeStampField* getField(UtcTimeStampField* field) throw ( FieldNotFound* ) = 0;
  virtual UtcTimeOnlyField* getField(UtcTimeOnlyField* field) throw ( FieldNotFound* ) = 0;
  virtual UtcDateOnlyField* getField(UtcDateOnlyField* field) throw ( FieldNotFound* ) = 0;
  virtual bool isSetField(int field) = 0;
  virtual bool isSetField(Field* field) = 0;
  virtual void removeField(int field) = 0;
  virtual IEnumerator* GetEnumerator() = 0;
};
}