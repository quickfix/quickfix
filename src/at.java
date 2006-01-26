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

public class at {

    static {
        System.loadLibrary("quickfix_jni");
    }

    public static void main( String[] args ) throws Exception {
	String file = new String();
	boolean threaded = false;

	if( args.length >= 2 && args[0].equals("-f") && args[1] != null ) {
	    file = args[1];
	}
	else {
	    System.out.println( "usage: at" + " -f FILE [-t]" );
	    return;
	}


	SessionSettings settings = new SessionSettings
	    ( new FileInputStream(file) );
	at_application application = new at_application();
	FileStoreFactory factory = new FileStoreFactory(settings);
	Acceptor acceptor = new SocketAcceptor
	    ( application, factory, settings, new DefaultMessageFactory() );
	acceptor.start();
	while( true ) Thread.sleep( 1000 );
    }
}
