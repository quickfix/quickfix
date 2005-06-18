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

public interface MessageStore {

    boolean set(int sequence, String message )
    throws IOException;

    void get(int startSequence, int endSequence, Collection messages )
    throws IOException;

    int getNextSenderMsgSeqNum() throws IOException;
    int getNextTargetMsgSeqNum() throws IOException;
    void setNextSenderMsgSeqNum(int next) throws IOException;
    void setNextTargetMsgSeqNum(int next) throws IOException;
    void incrNextSenderMsgSeqNum() throws IOException;
    void incrNextTargetMsgSeqNum() throws IOException;
    Date getCreationTime() throws IOException;
    void reset() throws IOException;
}
