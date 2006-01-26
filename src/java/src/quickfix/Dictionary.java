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

package quickfix;

public class Dictionary {
    private long cppPointer;

    public Dictionary( String name ) {
        create( name );
    }

    public Dictionary() {
        create();
    }

    public Dictionary( Dictionary dictionary ) {
        create( dictionary );
    }

    protected void finalize() {
        destroy();
    }

    private native void create( String name );
    private native void create();
    private native void create( Dictionary dictionary );
    private native void destroy();

    public native String getName();
    public native int size();

    public native String getString( String key ) throws ConfigError, FieldConvertError;
    public native String getString( String key, boolean capitalize ) throws ConfigError, FieldConvertError;
    public native long getLong( String key ) throws ConfigError, FieldConvertError;
    public native double getDouble( String key ) throws ConfigError, FieldConvertError;
    public native boolean getBool( String key ) throws ConfigError, FieldConvertError;
    public native int getDay( String key ) throws ConfigError, FieldConvertError;

    public native void setString( String key, String value );
    public native void setLong( String key, long value );
    public native void setDouble( String key, double value );
    public native void setBool( String key, boolean value );

    public native boolean has( String key );
    public native void merge( Dictionary toMerge );
}
