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

import quickfix.field.*;

public class MessageCracker extends quickfix.fix44.MessageCracker {

    public void crack( quickfix.Message message, SessionID sessionID )
    throws UnsupportedMessageType, FieldNotFound, IncorrectTagValue {

        BeginString beginString = new BeginString();
        message.getHeader().getField(beginString);
        String value = beginString.getValue();

        if(value.equals("FIX.4.0"))
            crack40((quickfix.fix40.Message)message, sessionID);
        else if(value.equals("FIX.4.1"))
            crack41((quickfix.fix41.Message)message, sessionID);
        else if(value.equals("FIX.4.2"))
            crack42((quickfix.fix42.Message)message, sessionID);
        else if(value.equals("FIX.4.3"))
            crack43((quickfix.fix43.Message)message, sessionID);
        else if(value.equals("FIX.4.4"))
            crack44((quickfix.fix44.Message)message, sessionID);
        else
            onMessage(message, sessionID);
    }

}
