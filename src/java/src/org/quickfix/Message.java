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

public class Message extends FieldMap {
    private int cppPointer;

    protected Header header;
    protected Trailer trailer;

    public Message() {
        create();
        header = new Header();
        trailer = new Trailer();
    }

    public Message(String string) throws InvalidMessage {
        initFromString(string, true);
    }

    public Message(String string, boolean validate) throws InvalidMessage {
        initFromString(string, validate);
    }

    private void initFromString(String string, boolean validate) throws InvalidMessage {
        create();
        header = new Header();
        trailer = new Trailer();
        fromString(string, validate);
    }

    protected Message(Header header, Trailer trailer) {
        create();
        this.header = header;
        this.trailer = trailer;
    }

    public native static boolean InitializeXML(String url);

    protected void finalize() {
        destroy();
    }

    private native void create();
    private native void destroy();

    public native Object clone();

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

    public boolean isSetField(int field) {
		return isSetField0(field);
	}
	public boolean isSetField(Field field) {
		return isSetField0(field.getField());
	}

    public native String toString();
    public native String toXML();
    private native void fromString(String string, boolean validate) throws InvalidMessage;

    public final Header getHeader() {
        return header;
    }
    public final Trailer getTrailer() {
        return trailer;
    }

    public class Header extends FieldMap {
        public void setString(int field, String value) {
            setHeaderString0(field, value);
        }
        public void setBoolean(int field, boolean value) {
            setHeaderBoolean0(field, value);
        }
        public void setChar(int field, char value) {
            setHeaderChar0(field, value);
        }
        public void setInt(int field, int value) {
            setHeaderInt0(field, value);
        }
        public void setDouble(int field, double value) {
            setHeaderDouble0(field, value);
        }
        public void setUtcTimeStamp(int field, Date value) {
            setHeaderUtcTimeStamp0(field, value);
        }
        public void setUtcTimeOnly(int field, Date value) {
            setHeaderUtcTimeOnly0(field, value);
        }
        public void setUtcDate(int field, Date value) {
            setHeaderUtcDate0(field, value);
        }

        public String getString(int field) throws FieldNotFound {
            return getHeaderString0(field);
        }
        public boolean getBoolean(int field) throws FieldNotFound {
            return getHeaderBoolean0(field);
        }
        public char getChar(int field) throws FieldNotFound {
            return getHeaderChar0(field);
        }
        public int getInt(int field) throws FieldNotFound {
            return getHeaderInt0(field);
        }
        public double getDouble(int field) throws FieldNotFound {
            return getHeaderDouble0(field);
        }
        public Date getUtcTimeStamp(int field) throws FieldNotFound {
            return getHeaderUtcTimeStamp0(field);
        }
        public Date getUtcTimeOnly(int field) throws FieldNotFound {
            return getHeaderUtcTimeOnly0(field);
        }
        public Date getUtcDate(int field) throws FieldNotFound {
            return getHeaderUtcDate0(field);
        }

        public void setField(StringField field) {
            setHeaderString0(field.getField(), field.getValue());
        }
        public void setField(BooleanField field) {
            setHeaderBoolean0(field.getField(), field.getValue());
        }
        public void setField(CharField field) {
            setHeaderChar0(field.getField(), field.getValue());
        }
        public void setField(IntField field) {
            setHeaderInt0(field.getField(), field.getValue());
        }
        public void setField(DoubleField field) {
            setHeaderDouble0(field.getField(), field.getValue());
        }
        public void setField(UtcTimeStampField field) {
            setHeaderUtcTimeStamp0(field.getField(), field.getValue());
        }
        public void setField(UtcTimeOnlyField field) {
            setHeaderUtcTimeOnly0(field.getField(), field.getValue());
        }
        public void setField(UtcDateField field) {
            setHeaderUtcDate0(field.getField(), field.getValue());
        }

        public StringField getField(StringField field) throws FieldNotFound {
            field.setValue(getHeaderString0(field.getField()));
            return field;
        }
        public BooleanField getField(BooleanField field) throws FieldNotFound {
            field.setValue(getHeaderBoolean0(field.getField()));
            return field;
        }
        public CharField getField(CharField field) throws FieldNotFound {
            field.setValue(getHeaderChar0(field.getField()));
            return field;
        }
        public IntField getField(IntField field) throws FieldNotFound {
            field.setValue(getHeaderInt0(field.getField()));
            return field;
        }
        public DoubleField getField(DoubleField field) throws FieldNotFound {
            field.setValue(getHeaderDouble0(field.getField()));
            return field;
        }
        public UtcTimeStampField getField(UtcTimeStampField field) throws FieldNotFound {
            field.setValue(getHeaderUtcTimeStamp0(field.getField()));
            return field;
        }
        public UtcTimeOnlyField getField(UtcTimeOnlyField field) throws FieldNotFound {
            field.setValue(getHeaderUtcTimeOnly0(field.getField()));
            return field;
        }
        public UtcDateField getField(UtcDateField field) throws FieldNotFound {
            field.setValue(getHeaderUtcDate0(field.getField()));
            return field;
        }

        public boolean isSetField(int field) {
			return isSetHeaderField0(field);
		}
		public boolean isSetField(Field field) {
			return isSetHeaderField0(field.getField());
		}
    }

    public class Trailer extends FieldMap {
        public void setString(int field, String value) {
            setTrailerString0(field, value);
        }
        public void setBoolean(int field, boolean value) {
            setTrailerBoolean0(field, value);
        }
        public void setChar(int field, char value) {
            setTrailerChar0(field, value);
        }
        public void setInt(int field, int value) {
            setTrailerInt0(field, value);
        }
        public void setDouble(int field, double value) {
            setTrailerDouble0(field, value);
        }
        public void setUtcTimeStamp(int field, Date value) {
            setTrailerUtcTimeStamp0(field, value);
        }
        public void setUtcTimeOnly(int field, Date value) {
            setTrailerUtcTimeOnly0(field, value);
        }
        public void setUtcDate(int field, Date value) {
            setTrailerUtcDate0(field, value);
        }

        public String getString(int field) throws FieldNotFound {
            return getTrailerString0(field);
        }
        public boolean getBoolean(int field) throws FieldNotFound {
            return getTrailerBoolean0(field);
        }
        public char getChar(int field) throws FieldNotFound {
            return getTrailerChar0(field);
        }
        public int getInt(int field) throws FieldNotFound {
            return getTrailerInt0(field);
        }
        public double getDouble(int field) throws FieldNotFound {
            return getTrailerDouble0(field);
        }
        public Date getUtcTimeStamp(int field) throws FieldNotFound {
            return getTrailerUtcTimeStamp0(field);
        }
        public Date getUtcTimeOnly(int field) throws FieldNotFound {
            return getTrailerUtcTimeOnly0(field);
        }
        public Date getUtcDate(int field) throws FieldNotFound {
            return getTrailerUtcDate0(field);
        }

        public void setField(StringField field) {
            setTrailerString0(field.getField(), field.getValue());
        }
        public void setField(BooleanField field) {
            setTrailerBoolean0(field.getField(), field.getValue());
        }
        public void setField(CharField field) {
            setTrailerChar0(field.getField(), field.getValue());
        }
        public void setField(IntField field) {
            setTrailerInt0(field.getField(), field.getValue());
        }
        public void setField(DoubleField field) {
            setTrailerDouble0(field.getField(), field.getValue());
        }
        public void setField(UtcTimeStampField field) {
            setTrailerUtcTimeStamp0(field.getField(), field.getValue());
        }
        public void setField(UtcTimeOnlyField field) {
            setTrailerUtcTimeOnly0(field.getField(), field.getValue());
        }
        public void setField(UtcDateField field) {
            setTrailerUtcDate0(field.getField(), field.getValue());
        }

        public StringField getField(StringField field) throws FieldNotFound {
            field.setValue(getTrailerString0(field.getField()));
            return field;
        }
        public BooleanField getField(BooleanField field) throws FieldNotFound {
            field.setValue(getTrailerBoolean0(field.getField()));
            return field;
        }
        public CharField getField(CharField field) throws FieldNotFound {
            field.setValue(getTrailerChar0(field.getField()));
            return field;
        }
        public IntField getField(IntField field) throws FieldNotFound {
            field.setValue(getTrailerInt0(field.getField()));
            return field;
        }
        public DoubleField getField(DoubleField field) throws FieldNotFound {
            field.setValue(getTrailerDouble0(field.getField()));
            return field;
        }
        public UtcTimeStampField getField(UtcTimeStampField field) throws FieldNotFound {
            field.setValue(getTrailerUtcTimeStamp0(field.getField()));
            return field;
        }
        public UtcTimeOnlyField getField(UtcTimeOnlyField field) throws FieldNotFound {
            field.setValue(getTrailerUtcTimeOnly0(field.getField()));
            return field;
        }
        public UtcDateField getField(UtcDateField field) throws FieldNotFound {
            field.setValue(getTrailerUtcDate0(field.getField()));
            return field;
        }

        public boolean isSetField(int field) {
			return isSetTrailerField0(field);
		}
		public boolean isSetField(Field field) {
			return isSetTrailerField0(field.getField());
		}
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

    private native boolean isSetField0(int field);

    private native void setHeaderString0(int field, String value);
    private native void setHeaderBoolean0(int field, boolean value);
    private native void setHeaderChar0(int field, char value);
    private native void setHeaderInt0(int field, int value);
    private native void setHeaderDouble0(int field, double value);
    private native void setHeaderUtcTimeStamp0(int field, Date value);
    private native void setHeaderUtcTimeOnly0(int field, Date value);
    private native void setHeaderUtcDate0(int field, Date value);

    private native String getHeaderString0(int field)     throws FieldNotFound;
    private native boolean getHeaderBoolean0(int field)   throws FieldNotFound;
    private native char getHeaderChar0(int field)         throws FieldNotFound;
    private native int getHeaderInt0(int field)           throws FieldNotFound;
    private native double getHeaderDouble0(int field)     throws FieldNotFound;
    private native Date getHeaderUtcTimeStamp0(int field) throws FieldNotFound;
    private native Date getHeaderUtcTimeOnly0(int field)  throws FieldNotFound;
    private native Date getHeaderUtcDate0(int field)      throws FieldNotFound;

    private native boolean isSetHeaderField0(int field);

    private native void setTrailerString0(int field, String value);
    private native void setTrailerBoolean0(int field, boolean value);
    private native void setTrailerChar0(int field, char value);
    private native void setTrailerInt0(int field, int value);
    private native void setTrailerDouble0(int field, double value);
    private native void setTrailerUtcTimeStamp0(int field, Date value);
    private native void setTrailerUtcTimeOnly0(int field, Date value);
    private native void setTrailerUtcDate0(int field, Date value);

    private native String getTrailerString0(int field)     throws FieldNotFound;
    private native boolean getTrailerBoolean0(int field)   throws FieldNotFound;
    private native char getTrailerChar0(int field)         throws FieldNotFound;
    private native int getTrailerInt0(int field)           throws FieldNotFound;
    private native double getTrailerDouble0(int field)     throws FieldNotFound;
    private native Date getTrailerUtcTimeStamp0(int field) throws FieldNotFound;
    private native Date getTrailerUtcTimeOnly0(int field)  throws FieldNotFound;
    private native Date getTrailerUtcDate0(int field)      throws FieldNotFound;

    private native boolean isSetTrailerField0(int field);
}
