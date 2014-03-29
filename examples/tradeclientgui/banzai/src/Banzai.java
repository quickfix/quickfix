/****************************************************************************
** Copyright (c) 2001-2014
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

import quickfix.banzai.ui.BanzaiFrame;
import org.apache.log4j.PropertyConfigurator;
import org.apache.log4j.Category;

import quickfix.*;
import quickfix.banzai.*;
import javax.swing.*;
import java.awt.event.*;
import java.io.FileInputStream;

/**
 *  Entry point for the Banzai application.
 */
public class Banzai {

    /** enable logging for this class */
    private static Category log = Category.getInstance(Banzai.class.getName());
    private Initiator initiator = null;
    private JFrame frame = null;
    private static boolean stop = false;

    static {
        try {
            UIManager.setLookAndFeel
            ("com.sun.java.swing.plaf.windows.WindowsLookAndFeel");
        } catch (Exception e) {
            log.info(e);
        }
    }

    public Banzai() throws Exception {
        OrderTableModel orderTableModel = new OrderTableModel();
        ExecutionTableModel executionTableModel = new ExecutionTableModel();

        BanzaiApplication application =
            new BanzaiApplication(orderTableModel, executionTableModel);
        SessionSettings settings =
            new SessionSettings(new FileInputStream("cfg/banzai.cfg"));
        MessageStoreFactory messageStoreFactory =
            new FileStoreFactory(settings);
        LogFactory logFactory =
            new ScreenLogFactory(settings);
        MessageFactory messageFactory =
            new DefaultMessageFactory();

        initiator = new SocketInitiator
                    (application, messageStoreFactory, settings, logFactory, messageFactory);

        frame = new BanzaiFrame(orderTableModel, executionTableModel,
                                application);
        frame.setDefaultCloseOperation(JFrame.EXIT_ON_CLOSE);
    }

    public void start() throws Exception {
        initiator.start();
    }

    public void stop() {
		stop = true;
		initiator.stop();
	}

    public JFrame getFrame() {
        return frame;
    }

    public static void main(String args[]) throws Exception {
        Banzai banzai = new Banzai();
        banzai.start();
        while( !stop ) {
			Thread.sleep(1000);
		}
		banzai.stop();
    }
}
