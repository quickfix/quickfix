package org.quickfix.test;

import junit.framework.TestCase;
import org.apache.log4j.Category;
import java.io.File;
import java.io.FileInputStream;
import java.util.Date;
import java.util.HashMap;
import java.util.Map;
import org.quickfix.*;
import org.quickfix.field.*;
import org.quickfix.fix42.NewOrderSingle;

public class OrderTest extends TestCase {
    private static Category category
        = Category.getInstance(OrderTest.class.getName());
    private Initiator initiator;
    private QuickFixThread quickFixThread;
    private ApplicationImpl application;
    private Process server;

    class QuickFixThread extends Thread {

        public void run() {
			try {
	            initiator.start();
			} catch( RuntimeError e ) {
			}
        }
    }

    static {
        try {
            System.loadLibrary("quickfix_jni");
        }
        catch(UnsatisfiedLinkError e) { System.out.println("Exception"); }
    }

    public OrderTest(String name) {
        super(name);
    }

    public void setUp() throws Exception {
        application = new ApplicationImpl();
        FileInputStream configuration =
            new FileInputStream("cfg/at_client.cfg");
        SessionSettings settings = new SessionSettings(configuration);
        MessageStoreFactory messageStoreFactory =
            new MemoryStoreFactory();
        MessageFactory messageFactory = new DefaultMessageFactory();

        initiator = new SocketInitiator
            (application, messageStoreFactory, settings, messageFactory);

        quickFixThread = new QuickFixThread();
        server = Runtime.getRuntime().exec
            ("..\\..\\bin\\at_server_debug -f cfg\\at_server.cfg", null);
        quickFixThread.start();

        for(int i = 0;i < 50;++i) {
            if(application.isLoggedOn()) {
                break;
            }
            Thread.sleep(1000);
        }
        if(!application.isLoggedOn()) {
            throw new Exception();
        }
    }

    public void tearDown() throws Exception {
        application.stop();
        server.destroy();
        Thread.sleep(2000);
    }

    public void testOrderSend() throws Exception {
        SessionNotFound exception = null;
        NewOrderSingle order = new NewOrderSingle();
        try {
            Session.sendToTarget(order);
        }
        catch(SessionNotFound e) {
            exception = e;
        }
        assertNotNull("no exception thrown", exception);

        exception = null;
        SessionID sessionID = new SessionID
            ("FIX.4.2", "TW", "ISLD");
        order.set(new ClOrdID("12345"));
        order.set(new Symbol("LNUX"));
        order.set(new HandlInst('1'));
        order.set(new Side(Side.BUY));
        order.set(new OrdType(OrdType.MARKET));
        order.set(new TransactTime());
        try {
            assertTrue(Session.sendToTarget(order, sessionID));
            Message message = application.getMessage();
            assertNotNull("Message not received", message);
            assertTrue("Message not a NewOrderSingle",
                       message instanceof NewOrderSingle);
            assertTrue(Session.sendToTarget(order, sessionID));
        }
        catch(SessionNotFound e) {
            exception = e;
        }
        assertNull("exception thrown", exception);
    }
}
