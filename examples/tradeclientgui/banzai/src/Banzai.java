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

import org.quickfix.banzai.ui.BanzaiFrame;
import org.apache.log4j.PropertyConfigurator;
import org.apache.log4j.Category;

import org.quickfix.*;
import org.quickfix.banzai.*;
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

    static {
        System.loadLibrary("quickfix_jni");

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
            new ScreenLogFactory(true, true, true);
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

    public JFrame getFrame() {
        return frame;
    }

    public static void main(String args[]) throws Exception {
        Banzai banzai = new Banzai();
        banzai.start();
    }
}
