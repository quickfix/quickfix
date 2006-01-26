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

import java.io.InputStream;

public class SessionSettings {
    private long cppPointer;

    public SessionSettings() {
        create();
    }

    public SessionSettings( InputStream stream ) throws ConfigError {
        create( stream );
    }

    public SessionSettings( String file ) throws ConfigError {
        create( file );
    }
 
    protected void finalize() {
        destroy();
    }

    private native void create();
    private native void create( InputStream stream ) throws ConfigError;
    private native void create( String file ) throws ConfigError;
    private native void destroy();

    public native Dictionary get( SessionID sessionID ) throws ConfigError;
    public native void set( SessionID sessionID, Dictionary dictionary ) throws ConfigError;
    
    public native Dictionary get();
    public native void set( Dictionary dictionary ) throws ConfigError;

    public native int size();
}
