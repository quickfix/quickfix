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

public class DefaultMessageFactory implements quickfix.MessageFactory {
    private quickfix.fix40.MessageFactory fix40Factory =
        new quickfix.fix40.MessageFactory();
    private quickfix.fix41.MessageFactory fix41Factory =
        new quickfix.fix41.MessageFactory();
    private quickfix.fix42.MessageFactory fix42Factory =
        new quickfix.fix42.MessageFactory();
    private quickfix.fix43.MessageFactory fix43Factory =
        new quickfix.fix43.MessageFactory();
    private quickfix.fix44.MessageFactory fix44Factory =
    	new quickfix.fix44.MessageFactory();

    public Message create(String beginString, String msgType) {
        if("FIX.4.0".equals(beginString)) {
            return fix40Factory.create(beginString, msgType);
        }
        if("FIX.4.1".equals(beginString)) {
            return fix41Factory.create(beginString, msgType);
        }
        if("FIX.4.2".equals(beginString)) {
            return fix42Factory.create(beginString, msgType);
        }
        if("FIX.4.3".equals(beginString)) {
            return fix43Factory.create(beginString, msgType);
        }
        if("FIX.4.4".equals(beginString)) {
		    return fix44Factory.create(beginString, msgType);
        }
        return new Message();
    }
}
