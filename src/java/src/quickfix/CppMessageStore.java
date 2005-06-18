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

import java.util.Collection;
import java.util.Date;
import java.io.IOException;

public class CppMessageStore implements MessageStore {
    private int cppPointer;
    private Date creationTime;

    public CppMessageStore() {
    }

    public CppMessageStore( int cppPointer ) {
	this.cppPointer = cppPointer;
    }

    public native boolean set(int sequence, String message ) throws IOException;
    public native boolean get(int sequence, String message ) throws IOException;
    public native void get(int startSequence, int endSequence,
                           Collection messages ) throws IOException;

    public native int getNextSenderMsgSeqNum() throws IOException;
    public native int getNextTargetMsgSeqNum() throws IOException;
    public native void setNextSenderMsgSeqNum(int next) throws IOException;
    public native void setNextTargetMsgSeqNum(int next) throws IOException;
    public native void incrNextSenderMsgSeqNum() throws IOException;
    public native void incrNextTargetMsgSeqNum() throws IOException;

    public Date getCreationTime() throws IOException {
        if( creationTime == null )
	    creationTime = getCreationTime0();
        return creationTime;
    }

    public void reset() throws IOException {
	reset0();
	creationTime = getCreationTime0();
    }

    private native void create();
    private native void destroy();

    private native Date getCreationTime0() throws IOException;
    private native void reset0() throws IOException;
}
