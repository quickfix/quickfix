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
