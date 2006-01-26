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

import quickfix.*;
import java.io.FileInputStream;

public class Executor {

    private static Acceptor acceptor = null;

    static {
        System.loadLibrary("quickfix_jni");
    }

    public static void main(String args[]) throws Exception {
        if(args.length != 1) {
            System.out.println("usage: run_executor_java FILE.");
            return;
        }

        try {

            Application application = new Application();
            SessionSettings settings =
                new SessionSettings(new FileInputStream(args[0]));
            MessageStoreFactory storeFactory =
                new FileStoreFactory(settings);
            MessageFactory messageFactory = new DefaultMessageFactory();

            acceptor = new SocketAcceptor
                       (application, storeFactory, settings, messageFactory);

            acceptor.start();
            System.out.println("press <enter> to quit");
            System.in.read();
            acceptor.stop();
        }
        catch(Exception e) {
            System.out.println(e);
        }
    }
}
