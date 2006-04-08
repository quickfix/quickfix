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

public class SessionID {
    private long cppPointer;

    public SessionID() {
        create("", "", "", "");
    }

    public SessionID(String beginString,
                     String senderCompID,
                     String targetCompID) {
        create(beginString, senderCompID, targetCompID, "");
    }

    public SessionID(String beginString,
                     String senderCompID,
                     String targetCompID,
                     String sessionQualifier) {
        create(beginString, senderCompID, targetCompID, sessionQualifier);
    }

    protected void finalize() {
        destroy();
    }

    public native String getBeginString();
    public native String getSenderCompID();
    public native String getTargetCompID();
    public native String getSessionQualifier();

    public native boolean equals(Object object);

    public native String toString();
    public native String fromString( String str );

    public int hashCode() {
        return toString().hashCode();
    }

    private native void create(String beginString,
                               String senderCompID,
                               String targetCompID,
                               String sessionQualifier);
    private native void destroy();
}
