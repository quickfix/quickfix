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

public class DataDictionary {
    private int cppPointer;
    
    public DataDictionary() {
        create();
    }
    
    public DataDictionary( DataDictionary dd ) {
	create( dd );
    }
    
    public DataDictionary( String url ) {
	create( url );
    }
    
    protected void finalize() {
        destroy();
    }

    private native void create();
    private native void create( DataDictionary dd );
    private native void create( String url );
    private native void destroy();

    public native String getVersion();
    public native String getFieldName( int field );
    public native String getValueName( int field, String value );
    public native boolean isField( int field );
    public native boolean isMsgType( String msgType );
    public native boolean isMsgField( String msgType, int field );
    public native boolean isHeaderField( int field );
    public native boolean isTrailerField( int field );
    public native boolean isRequiredField( String msgType, int field );
    public native boolean hasFieldValue( int field );
    public native boolean isFieldValue( int field, String value );
    public native boolean isGroup( String msg, int field );
    public native int getFieldType( int field );
}
