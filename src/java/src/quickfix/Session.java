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

import java.io.IOException;

public class Session {
    private long cppPointer;
    private Session(long cppPointer) {
	this.cppPointer = cppPointer;
    }

    public static native boolean sendToTarget(Message message)
	throws SessionNotFound;

    public static native boolean sendToTarget(Message message, String qualifier)
	throws SessionNotFound;

    public static native boolean sendToTarget
	(Message message, SessionID sessionID)
	throws SessionNotFound;

    public static native boolean sendToTarget
	(Message message, String senderCompID, String targetCompID)
	throws SessionNotFound;

    public static native boolean sendToTarget
	(Message message, String senderCompID, String targetCompID,
         String qualifier)
	throws SessionNotFound;

    public static native Session lookupSession(SessionID sessionID);

    public native void logon();
    public native void logout();
    public native boolean isEnabled();

    public native boolean sentLogon();
    public native boolean sentLogout();
    public native boolean receivedLogon();
    public native boolean isLoggedOn();
    public native void reset() throws IOException;
    public native void setNextSenderMsgSeqNum( int num ) throws IOException;
    public native void setNextTargetMsgSeqNum( int num ) throws IOException;

    public native int getExpectedSenderNum();
    public native int getExpectedTargetNum();

    public native Log getLog();
    public native MessageStore getStore();
}
