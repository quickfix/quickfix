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

package org.quickfix;
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

    public void addGroup(Group group) {
        addGroup0(group);
    }

    public Group getGroup(int num, Group group) throws FieldNotFound {
        return getGroup0(num, group);
    }

    public void setString(int field, String value) {
        setString0(field, value);
    }
    public void setBoolean(int field, boolean value) {
        setBoolean0(field, value);
    }
    public void setChar(int field, char value) {
        setChar0(field, value);
    }
    public void setInt(int field, int value) {
        setInt0(field, value);
    }
    public void setDouble(int field, double value) {
        setDouble0(field, value);
    }
    public void setUtcTimeStamp(int field, Date value) {
        setUtcTimeStamp0(field, value);
    }
    public void setUtcTimeOnly(int field, Date value) {
        setUtcTimeOnly0(field, value);
    }
    public void setUtcDate(int field, Date value) {
        setUtcDate0(field, value);
    }

    public String getString(int field) throws FieldNotFound {
        return getString0(field);
    }
    public boolean getBoolean(int field) throws FieldNotFound {
        return getBoolean0(field);
    }
    public char getChar(int field) throws FieldNotFound {
        return getChar0(field);
    }
    public int getInt(int field) throws FieldNotFound {
        return getInt0(field);
    }
    public double getDouble(int field) throws FieldNotFound {
        return getDouble0(field);
    }
    public Date getUtcTimeStamp(int field) throws FieldNotFound {
        return getUtcTimeStamp0(field);
    }
    public Date getUtcTimeOnly(int field) throws FieldNotFound {
        return getUtcTimeOnly0(field);
    }
    public Date getUtcDate(int field) throws FieldNotFound {
        return getUtcDate0(field);
    }

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

    private native void addGroup0(Group group);
    private native Group getGroup0(int num, Group group) throws FieldNotFound;

    private native void setString0(int field, String value);
    private native void setBoolean0(int field, boolean value);
    private native void setChar0(int field, char value);
    private native void setInt0(int field, int value);
    private native void setDouble0(int field, double value);
    private native void setUtcTimeStamp0(int field, Date value);
    private native void setUtcTimeOnly0(int field, Date value);
    private native void setUtcDate0(int field, Date value);

    private native String getString0(int field)     throws FieldNotFound;
    private native boolean getBoolean0(int field)   throws FieldNotFound;
    private native char getChar0(int field)         throws FieldNotFound;
    private native int getInt0(int field)           throws FieldNotFound;
    private native double getDouble0(int field)     throws FieldNotFound;
    private native Date getUtcTimeStamp0(int field) throws FieldNotFound;
    private native Date getUtcTimeOnly0(int field)  throws FieldNotFound;
    private native Date getUtcDate0(int field)      throws FieldNotFound;

    private native String toString0();
    private native void fromString0(String string, boolean validate) throws InvalidMessage;
}
