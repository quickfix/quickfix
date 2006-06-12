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

public class ScreenLogFactory implements LogFactory {
    private long cppPointer;

    public ScreenLogFactory(SessionSettings settings) {
        _create(settings);
    }

    public ScreenLogFactory(boolean incoming, boolean outgoing, boolean event) {
        _create(incoming, outgoing, event);
    }

    protected void finalize() {
        _destroy();
    }

    private native void _create(SessionSettings settings);
    private native void _create(boolean incoming, boolean outgoing, boolean event);
    private native void _destroy();

    public native Log create();
    public native Log create(SessionID sessionID);
}
