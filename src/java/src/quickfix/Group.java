/****************************************************************************
** Copyright (c) 2001-2004 quickfixengine.org  All rights reserved.
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

package quickfix;
import java.util.Date;

public class Group extends FieldMap {
    private int cppPointer;

    public Group(int field, int delim) {
        create(field, delim);
    }

    public Group(int field, int delim, int[] order) {
        create(field, delim, order);
    }
    
    protected void finalize() {
        destroy();
    }

    private native void create(int field, int delim);
    private native void create(int field, int delim, int[] order);
    private native void destroy();

    public native void addGroup(Group group);
    public native Group getGroup(int num, Group group) throws FieldNotFound;

    public native void setString(int field, String value);
    public native void setBoolean(int field, boolean value);
    public native void setChar(int field, char value);
    public native void setInt(int field, int value);
    public native void setDouble(int field, double value);
    public native void setUtcTimeStamp(int field, Date value);
    public native void setUtcTimeOnly(int field, Date value);
    public native void setUtcDate(int field, Date value);

    public native String getString(int field) throws FieldNotFound;
    public native boolean getBoolean(int field) throws FieldNotFound;
    public native char getChar(int field) throws FieldNotFound;
    public native int getInt(int field) throws FieldNotFound;
    public native double getDouble(int field) throws FieldNotFound;
    public native Date getUtcTimeStamp(int field) throws FieldNotFound;
    public native Date getUtcTimeOnly(int field) throws FieldNotFound;
    public native Date getUtcDate(int field) throws FieldNotFound;

    public void setField(StringField field) {
        setString(field.getField(), field.getValue());
    }
    public void setField(BooleanField field) {
        setBoolean(field.getField(), field.getValue());
    }
    public void setField(CharField field) {
        setChar(field.getField(), field.getValue());
    }
    public void setField(IntField field) {
        setInt(field.getField(), field.getValue());
    }
    public void setField(DoubleField field) {
        setDouble(field.getField(), field.getValue());
    }
    public void setField(UtcTimeStampField field) {
        setUtcTimeStamp(field.getField(), field.getValue());
    }
    public void setField(UtcTimeOnlyField field) {
        setUtcTimeOnly(field.getField(), field.getValue());
    }
    public void setField(UtcDateField field) {
        setUtcDate(field.getField(), field.getValue());
    }

    public StringField getField(StringField field) throws FieldNotFound {
        field.setValue(getString(field.getField()));
        return field;
    }
    public BooleanField getField(BooleanField field) throws FieldNotFound {
        field.setValue(getBoolean(field.getField()));
        return field;
    }
    public CharField getField(CharField field) throws FieldNotFound {
        field.setValue(getChar(field.getField()));
        return field;
    }
    public IntField getField(IntField field) throws FieldNotFound {
        field.setValue(getInt(field.getField()));
        return field;
    }
    public DoubleField getField(DoubleField field) throws FieldNotFound {
        field.setValue(getDouble(field.getField()));
        return field;
    }
    public UtcTimeStampField getField(UtcTimeStampField field) throws FieldNotFound {
        field.setValue(getUtcTimeStamp(field.getField()));
        return field;
    }
    public UtcTimeOnlyField getField(UtcTimeOnlyField field) throws FieldNotFound {
        field.setValue(getUtcTimeOnly(field.getField()));
        return field;
    }
    public UtcDateField getField(UtcDateField field) throws FieldNotFound {
        field.setValue(getUtcDate(field.getField()));
        return field;
    }

    public native boolean isSetField(int field);
    public native boolean isSetField(Field field);
    public native void removeField(int field);

    public java.util.Iterator iterator() {
        return new Iterator( this );
    }

    public class Iterator implements java.util.Iterator {
        private Group group;
        private int cppPointer;

        public Iterator( Group aGroup ) {
            group = aGroup;
            groupIteratorCreate( this );
        }

        public boolean hasNext() {
            return groupIteratorHasNext( this );
        }

        public Object next() {
            return groupIteratorNext( this );
        }

        public void remove() {
            throw new java.lang.UnsupportedOperationException();
        }
    }

    private native Iterator groupIteratorCreate( Iterator i );
    private native boolean groupIteratorHasNext( Iterator i );
    private native Object groupIteratorNext( Iterator i );
}
