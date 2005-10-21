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

import java.io.InputStream;

public class SessionSettings {
    private long cppPointer;

    public SessionSettings(InputStream stream) throws ConfigError {
        create(stream);
    }

    protected void finalize() {
        destroy();
    }

    private native void create(InputStream stream) throws ConfigError;
    private native void destroy();

    public native String getString( SessionID sessionID, String key ) throws ConfigError, FieldConvertError;
    public native long getLong( SessionID sessionID, String key ) throws ConfigError, FieldConvertError;
    public native double getDouble( SessionID sessionID, String key ) throws ConfigError, FieldConvertError;
    public native boolean getBool( SessionID sessionID, String key ) throws ConfigError, FieldConvertError;

    public native void setString( SessionID sessionID, String key, String value );
    public native void setLong( SessionID sessionID, String key, long value );
    public native void setDouble( SessionID sessionID, String key, double value );
    public native void setBool( SessionID sessionID, String key, boolean value );
}
