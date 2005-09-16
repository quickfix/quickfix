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

package quickfix;
import java.util.Date;

public class Message extends FieldMap {
    private int cppPointer;

    protected Header header;
    protected Trailer trailer;

    public Message() {
        create();
        header = new Header( this );
        trailer = new Trailer( this );
    }

    public Message(String string) throws InvalidMessage {
        initFromString(string, true);
    }

    public Message(String string, boolean validate) throws InvalidMessage {
        initFromString(string, validate);
    }

    public Message(String string, DataDictionary dd) throws InvalidMessage {
        initFromString(string, dd);
    }

    public Message(String string, DataDictionary dd, boolean validate) throws InvalidMessage {
        initFromString(string, dd, validate);
    }

    private void initFromString(String string, boolean validate)
        throws InvalidMessage {

        create();
        header = new Header( this );
        trailer = new Trailer( this );
        fromString(string, validate);
    }

    private void initFromString(String string, DataDictionary dd)
        throws InvalidMessage {

        create();
        header = new Header( this );
        trailer = new Trailer( this );
        fromString(string, dd);
    }

    private void initFromString(String string, DataDictionary dd, boolean validate)
        throws InvalidMessage {

        create();
        header = new Header( this );
        trailer = new Trailer( this );
        fromString(string, dd, validate);
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

    public native void addGroup(Group group);
    public native Group getGroup(int num, Group group) throws FieldNotFound;

    public native void setString(int field, String value);
    public native void setBoolean(int field, boolean value);
    public native void setChar(int field, char value);
    public native void setInt(int field, int value);
    public native void setDouble(int field, double value);
    public native void setUtcTimeStamp(int field, Date value);
    public native void setUtcTimeStamp(int field, Date value, boolean showMilliseconds);
    public native void setUtcTimeOnly(int field, Date value);
    public native void setUtcTimeOnly(int field, Date value, boolean showMilliseconds);
	public native void setUtcDateOnly(int field, Date value);

    public native String getString(int field) throws FieldNotFound;
    public native boolean getBoolean(int field) throws FieldNotFound;
    public native char getChar(int field) throws FieldNotFound;
    public native int getInt(int field) throws FieldNotFound;
    public native double getDouble(int field) throws FieldNotFound;
    public native Date getUtcTimeStamp(int field) throws FieldNotFound;
    public native Date getUtcTimeOnly(int field) throws FieldNotFound;
    public native Date getUtcDateOnly(int field) throws FieldNotFound;

    public void setField(StringField field) {
        setString( field.getField(), field.getValue() );
    }
    public void setField(BooleanField field) {
        setBoolean( field.getField(), field.getValue() );
    }
    public void setField(CharField field) {
        setChar( field.getField(), field.getValue() );
    }
    public void setField(IntField field) {
        setInt( field.getField(), field.getValue() );
    }
    public void setField(DoubleField field) {
        setDouble( field.getField(), field.getValue() );
    }
    public void setField(UtcTimeStampField field) {
        setUtcTimeStamp( field.getField(), field.getValue(), field.showMilliseconds() );
    }
    public void setField(UtcTimeOnlyField field) {
        setUtcTimeOnly( field.getField(), field.getValue(), field.showMilliseconds() );
    }
    public void setField(UtcDateOnlyField field) {
        setUtcDateOnly( field.getField(), field.getValue() );
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
    public UtcDateOnlyField getField(UtcDateOnlyField field) throws FieldNotFound {
        field.setValue(getUtcDateOnly(field.getField()));
        return field;
    }

    public native boolean isSetField(int field);
    public boolean isSetField(Field field) {
        return isSetField( field.getField() );
    }
    public native void removeField(int field);

    public java.util.Iterator iterator() {
        return new Iterator( this );
    }

    public native String toString();
    public native String toXML();
    private native void fromString(String string, boolean validate) throws InvalidMessage;
    private native void fromString(String string, DataDictionary dd) throws InvalidMessage;
    private native void fromString(String string, DataDictionary dd, boolean validate) throws InvalidMessage;

    public final Header getHeader() {
        return header;
    }
    public final Trailer getTrailer() {
        return trailer;
    }

    public native boolean isAdmin();
    public native boolean isApp();

    public class Iterator implements java.util.Iterator {
        private Message message;
        private int cppPointer;

        public Iterator( Message aMessage ) {
            message = aMessage;
            messageIteratorCreate( this );
        }

        public boolean hasNext() {
            return messageIteratorHasNext( this );
        }

        public Object next() {
            return messageIteratorNext( this );
        }

        public void remove() {
            throw new java.lang.UnsupportedOperationException();
        }
    }

    public class Header extends FieldMap {
        private Message message = null;

        public Header( Message aMessage ) {
            message = aMessage;
        }

        public class Iterator implements java.util.Iterator {
            private Message message;
            private int cppPointer;

            public Iterator( Message aMessage ) {
                message = aMessage;
                headerIteratorCreate( this );
            }

            public boolean hasNext() {
                return headerIteratorHasNext( this );
            }

            public Object next() {
                return headerIteratorNext( this );
            }

            public void remove() {}
        }

        public void setString(int field, String value) {
            headerSetString( field, value );
        }
        public void setBoolean(int field, boolean value) {
            headerSetBoolean( field, value );
        }
        public void setChar(int field, char value) {
            headerSetChar( field, value );
        }
        public void setInt(int field, int value) {
            headerSetInt( field, value );
        }
        public void setDouble(int field, double value) {
            headerSetDouble( field, value );
        }
        public void setUtcTimeStamp(int field, Date value) {
            headerSetUtcTimeStamp( field, value );
        }
		public void setUtcTimeStamp(int field, Date value, boolean showMilliseconds) {
            headerSetUtcTimeStamp( field, value, showMilliseconds );
        }
        public void setUtcTimeOnly(int field, Date value) {
            headerSetUtcTimeOnly( field, value );
        }
		public void setUtcTimeOnly(int field, Date value, boolean showMilliseconds) {
            headerSetUtcTimeOnly( field, value, showMilliseconds );
        }
        public void setUtcDateOnly(int field, Date value) {
            headerSetUtcDateOnly( field, value );
        }

        public String getString(int field) throws FieldNotFound {
            return headerGetString( field );
        }
        public boolean getBoolean(int field) throws FieldNotFound {
            return headerGetBoolean( field );
        }
        public char getChar(int field) throws FieldNotFound {
            return headerGetChar( field );
        }
        public int getInt(int field) throws FieldNotFound {
            return headerGetInt( field );
        }
        public double getDouble(int field) throws FieldNotFound {
            return headerGetDouble( field );
        }
        public Date getUtcTimeStamp(int field) throws FieldNotFound {
            return headerGetUtcTimeStamp( field );
        }
        public Date getUtcTimeOnly(int field) throws FieldNotFound {
            return headerGetUtcTimeOnly( field );
        }
        public Date getUtcDateOnly(int field) throws FieldNotFound {
            return headerGetUtcDateOnly( field );
        }

        public void setField(StringField field) {
            headerSetString( field.getField(), field.getValue() );
        }
        public void setField(BooleanField field) {
            headerSetBoolean( field.getField(), field.getValue() );
        }
        public void setField(CharField field) {
            headerSetChar( field.getField(), field.getValue() );
        }
        public void setField(IntField field) {
            headerSetInt( field.getField(), field.getValue() );
        }
        public void setField(DoubleField field) {
            headerSetDouble( field.getField(), field.getValue() );
        }
        public void setField(UtcTimeStampField field) {
            headerSetUtcTimeStamp( field.getField(), field.getValue(), field.showMilliseconds() );
        }
        public void setField(UtcTimeOnlyField field) {
            headerSetUtcTimeOnly( field.getField(), field.getValue(), field.showMilliseconds() );
        }
        public void setField(UtcDateOnlyField field) {
            headerSetUtcDateOnly( field.getField(), field.getValue() );
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
        public UtcDateOnlyField getField(UtcDateOnlyField field) throws FieldNotFound {
            field.setValue(getUtcDateOnly(field.getField()));
            return field;
        }

        public boolean isSetField(int field) {
            return headerIsSetField( field );
        }
        public boolean isSetField(Field field) {
            return headerIsSetField( field.getField() );
        }
        public void removeField(int field) {
            headerRemoveField( field );
        }

        public java.util.Iterator iterator() {
            return new Iterator( message );
        }
    }

    public class Trailer extends FieldMap {
        private Message message = null;

        public Trailer( Message aMessage ) {
            message = aMessage;
        }
        public class Iterator implements java.util.Iterator {
            private Message message;
            private int cppPointer;

            public Iterator( Message aMessage ) {
                message = aMessage;
                trailerIteratorCreate( this );
            }

            public boolean hasNext() {
                return trailerIteratorHasNext( this );
            }

            public Object next() {
                return trailerIteratorNext( this );
            }

            public void remove() {}
        }

        public void setString(int field, String value) {
            trailerSetString( field, value );
        }
        public void setBoolean(int field, boolean value) {
            trailerSetBoolean( field, value );
        }
        public void setChar(int field, char value) {
            trailerSetChar( field, value );
        }
        public void setInt(int field, int value) {
            trailerSetInt( field, value );
        }
        public void setDouble(int field, double value) {
            trailerSetDouble( field, value );
        }
        public void setUtcTimeStamp(int field, Date value) {
            trailerSetUtcTimeStamp( field, value );
        }
		public void setUtcTimeStamp(int field, Date value, boolean showMilliseconds) {
			trailerSetUtcTimeStamp( field, value, showMilliseconds );
		}
		public void setUtcTimeOnly(int field, Date value) {
            trailerSetUtcTimeOnly( field, value );
        }
		public void setUtcTimeOnly(int field, Date value, boolean showMilliseconds) {
			trailerSetUtcTimeOnly( field, value, showMilliseconds );
		}
        public void setUtcDateOnly(int field, Date value) {
            trailerSetUtcDateOnly( field, value );
        }

        public String getString(int field) throws FieldNotFound {
            return trailerGetString( field );
        }
        public boolean getBoolean(int field) throws FieldNotFound {
            return trailerGetBoolean( field );
        }
        public char getChar(int field) throws FieldNotFound {
            return trailerGetChar( field );
        }
        public int getInt(int field) throws FieldNotFound {
            return trailerGetInt( field );
        }
        public double getDouble(int field) throws FieldNotFound {
            return trailerGetDouble( field );
        }
        public Date getUtcTimeStamp(int field) throws FieldNotFound {
            return trailerGetUtcTimeStamp( field );
        }
        public Date getUtcTimeOnly(int field) throws FieldNotFound {
            return trailerGetUtcTimeOnly( field );
        }
        public Date getUtcDateOnly(int field) throws FieldNotFound {
            return trailerGetUtcDateOnly( field );
        }

        public void setField(StringField field) {
            trailerSetString( field.getField(), field.getValue() );
        }
        public void setField(BooleanField field) {
            trailerSetBoolean( field.getField(), field.getValue() );
        }
        public void setField(CharField field) {
            trailerSetChar( field.getField(), field.getValue() );
        }
        public void setField(IntField field) {
            trailerSetInt( field.getField(), field.getValue() );
        }
        public void setField(DoubleField field) {
            trailerSetDouble( field.getField(), field.getValue() );
        }
        public void setField(UtcTimeStampField field) {
            trailerSetUtcTimeStamp( field.getField(), field.getValue(), field.showMilliseconds() );
        }
        public void setField(UtcTimeOnlyField field) {
            trailerSetUtcTimeOnly( field.getField(), field.getValue(), field.showMilliseconds() );
        }
        public void setField(UtcDateOnlyField field) {
            trailerSetUtcDateOnly( field.getField(), field.getValue() );
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
        public UtcDateOnlyField getField(UtcDateOnlyField field) throws FieldNotFound {
            field.setValue(getUtcDateOnly(field.getField()));
            return field;
        }

        public boolean isSetField(int field) {
            return trailerIsSetField( field );
        }
        public boolean isSetField(Field field) {
            return trailerIsSetField( field.getField() );
        }
        public void removeField(int field) {
            trailerRemoveField( field );
        }

        public java.util.Iterator iterator() {
            return new Iterator( message );
        }
    }

    private native Iterator messageIteratorCreate( Iterator i );
    private native boolean messageIteratorHasNext( Iterator i );
    private native Object messageIteratorNext( Iterator i );

    private native void headerSetString(int field, String value);
    private native void headerSetBoolean(int field, boolean value);
    private native void headerSetChar(int field, char value);
    private native void headerSetInt(int field, int value);
    private native void headerSetDouble(int field, double value);
    private native void headerSetUtcTimeStamp(int field, Date value);
    private native void headerSetUtcTimeStamp(int field, Date value, boolean showMilliseconds);
    private native void headerSetUtcTimeOnly(int field, Date value);
    private native void headerSetUtcTimeOnly(int field, Date value, boolean showMilliseconds);
    private native void headerSetUtcDateOnly(int field, Date value);

    private native String headerGetString(int field) throws FieldNotFound;
    private native boolean headerGetBoolean(int field) throws FieldNotFound;
    private native char headerGetChar(int field) throws FieldNotFound;
    private native int headerGetInt(int field) throws FieldNotFound;
    private native double headerGetDouble(int field) throws FieldNotFound;
    private native Date headerGetUtcTimeStamp(int field) throws FieldNotFound;
    private native Date headerGetUtcTimeOnly(int field) throws FieldNotFound;
    private native Date headerGetUtcDateOnly(int field) throws FieldNotFound;

    private native boolean headerIsSetField(int field);
    private native void headerRemoveField(int field);

    private native Iterator headerIteratorCreate( Header.Iterator i );
    private native boolean headerIteratorHasNext( Header.Iterator i );
    private native Object headerIteratorNext( Header.Iterator i );

    private native void trailerSetString(int field, String value);
    private native void trailerSetBoolean(int field, boolean value);
    private native void trailerSetChar(int field, char value);
    private native void trailerSetInt(int field, int value);
    private native void trailerSetDouble(int field, double value);
    private native void trailerSetUtcTimeStamp(int field, Date value);
    private native void trailerSetUtcTimeStamp(int field, Date value, boolean showMilliseconds);
    private native void trailerSetUtcTimeOnly(int field, Date value);
    private native void trailerSetUtcTimeOnly(int field, Date value, boolean showMilliseconds);
    private native void trailerSetUtcDateOnly(int field, Date value);

    private native String trailerGetString(int field) throws FieldNotFound;
    private native boolean trailerGetBoolean(int field) throws FieldNotFound;
    private native char trailerGetChar(int field) throws FieldNotFound;
    private native int trailerGetInt(int field) throws FieldNotFound;
    private native double trailerGetDouble(int field) throws FieldNotFound;
    private native Date trailerGetUtcTimeStamp(int field) throws FieldNotFound;
    private native Date trailerGetUtcTimeOnly(int field) throws FieldNotFound;
    private native Date trailerGetUtcDateOnly(int field) throws FieldNotFound;

    private native boolean trailerIsSetField(int field);
    private native void trailerRemoveField(int field);

    private native Iterator trailerIteratorCreate( Trailer.Iterator i );
    private native boolean trailerIteratorHasNext( Trailer.Iterator i );
    private native Object trailerIteratorNext( Trailer.Iterator i );
}
