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

public class SessionID {
    private int cppPointer;

    public SessionID(String beginString,
                     String senderCompID,
                     String targetCompID) {
        create(beginString, senderCompID, targetCompID);
    }

    protected void finalize() {
        destroy();
    }

    public String getBeginString()   {
        return getBeginString0();
    }
    public String getSenderCompID()  {
        return getSenderCompID0();
    }
    public String getTargetCompID()  {
        return getTargetCompID0();
    }

    public boolean equals(Object object) {
        if(object == null)
            return false;
        SessionID sessionID = (SessionID)object;
        return(getBeginString().equals(sessionID.getBeginString()) &&
               getSenderCompID().equals(sessionID.getSenderCompID()) &&
               getTargetCompID().equals(sessionID.getTargetCompID()));
    }

    public String toString() {
        return getBeginString() + ": "
               + getSenderCompID() + "->"
               + getTargetCompID();
    }

    public int hashCode() {
        return toString().hashCode();
    }

    private native void create(String beginString,
                               String senderCompID,
                               String targetCompID);
    private native void destroy();

    private native String getBeginString0();
    private native String getSenderCompID0();
    private native String getTargetCompID0();
}
