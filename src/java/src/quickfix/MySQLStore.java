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

import java.util.Collection;
import java.util.Calendar;
import java.util.Date;
import java.io.IOException;

public class MySQLStore implements MessageStore {
    private int cppPointer;
    private Date creationTime;

    public MySQLStore() {
        create();
    }

    private MySQLStore(int cppPointer) {
        this.cppPointer = cppPointer;
    }

    protected void finalize() {
        destroy();
    }

    public boolean set(int sequence, String message )
    throws IOException {
        return set0(sequence, message);
    }

    public boolean get(int sequence, String message )
    throws IOException {
        return get0(sequence, message);
    }

    public void get(int startSequence, int endSequence,
                    Collection messages ) throws IOException {
        get0(startSequence, endSequence, messages);
    }

    public int getNextSenderMsgSeqNum() throws IOException {
        return getNextSenderMsgSeqNum0();
    }

    public int getNextTargetMsgSeqNum() throws IOException {
        return getNextTargetMsgSeqNum0();
    }

    public void setNextSenderMsgSeqNum(int next) throws IOException {
        setNextSenderMsgSeqNum0(next);
    }

    public void setNextTargetMsgSeqNum(int next) throws IOException {
        setNextTargetMsgSeqNum0(next);
    }

    public void incrNextSenderMsgSeqNum() throws IOException {
        incrNextSenderMsgSeqNum0();
    }

    public void incrNextTargetMsgSeqNum() throws IOException {
        incrNextTargetMsgSeqNum0();
    }

    public Date getCreationTime() throws IOException {
    	if( creationTime == null )
			creationTime = getCreationTime0();
		return creationTime;
    }

    public void reset() throws IOException {
        reset0();
    }

    private native void create();
    private native void destroy();
    private native boolean set0(int sequence, String message)
    throws IOException;

    private native boolean get0(int sequence, String message)
    throws IOException;

    private native void get0(int startSequence, int endSequence,
                             Collection messages) throws IOException;

    private native int getNextSenderMsgSeqNum0() throws IOException;
    public native int getNextTargetMsgSeqNum0() throws IOException;
    private native void setNextSenderMsgSeqNum0(int next) throws IOException;
    private native void setNextTargetMsgSeqNum0(int next) throws IOException;
    private native void incrNextSenderMsgSeqNum0() throws IOException;
    private native void incrNextTargetMsgSeqNum0() throws IOException;
    private native Date getCreationTime0() throws IOException;
    private native void reset0() throws IOException;
}
