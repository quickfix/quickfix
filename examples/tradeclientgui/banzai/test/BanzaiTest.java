import junit.framework.TestCase;

import org.apache.log4j.Category;

import java.io.File;

import java.util.Date;

import quickfix.banzai.Order;

import java.awt.*;

import javax.swing.*;



public class BanzaiTest extends TestCase {

    private static Category category 

        = Category.getInstance(BanzaiTest.class.getName());

    private Process server;

    private Banzai banzai;



    public BanzaiTest(String name) {

        super(name);

    }



    public class BanzaiThread extends Thread {

        public void run() {

            try {

                banzai.start();

            } catch(Exception e) {

            }

        }

    }



    public void setUp() throws Exception {

        server = Runtime.getRuntime().exec

            ("..\\..\\..\\bin\\ordermatch_debug -f cfg\\ordermatch.cfg", null);

        banzai = new Banzai();

    }



    public void tearDown() throws Exception {

        server.destroy();

    }



    public void testOrderSend() throws Exception {

        BanzaiThread banzaiThread = new BanzaiThread();

        banzaiThread.start();



        JFrame frame = banzai.getFrame();

        frame.setSize(frame.getMaximumSize());

        Container orderEntryPanel = 

            (Container)getChild(frame, "OrderEntryPanel");

        assertNotNull(orderEntryPanel);



        JComboBox sessionComboBox =

            (JComboBox)getChild(orderEntryPanel, "SessionComboBox");

        assertNotNull(sessionComboBox);

        for(int i = 0; i < 50; ++ i) {

            if(sessionComboBox.getItemCount() == 1) break;

            Thread.sleep(100);

        }

        assertEquals(new Integer(1), 

                    new Integer(sessionComboBox.getItemCount()));



        JTextField symbolTextField = 

            (JTextField)getChild(orderEntryPanel, "SymbolTextField");

        assertNotNull(symbolTextField);

        symbolTextField.setText("LNUX");



        JTextField quantityTextField = 

            (JTextField)getChild(orderEntryPanel, "QuantityTextField");

        assertNotNull(quantityTextField);

        quantityTextField.setText("100");



        JComboBox typeComboBox =

            (JComboBox)getChild(orderEntryPanel, "TypeComboBox");

        assertNotNull(typeComboBox);

        typeComboBox.setSelectedIndex(1);



        JTextField limitPriceTextField =

            (JTextField)getChild(orderEntryPanel, "LimitPriceTextField");

        assertNotNull(limitPriceTextField);

        limitPriceTextField.setText("12.23");



        JButton submitButton =

            (JButton)getChild(orderEntryPanel, "SubmitButton");

        assertNotNull(submitButton);

        submitButton.setEnabled(true);



        JComboBox sideComboBox =

            (JComboBox)getChild(orderEntryPanel, "SideComboBox");

        assertNotNull(sideComboBox);



        for(int i = 0; i < 100; ++ i) {

            submitButton.doClick();

        }



        sideComboBox.setSelectedIndex(1);



        for(int i = 0; i < 100; ++ i) {

            submitButton.doClick();

        }



        Thread.sleep(1000);

    }



    Component getChild(Container container, String name) {

        Component components[] = container.getComponents();

        for(int i = 0; i < components.length; ++i) {

            if(name != null && name.equals(components[i].getName()))

                return components[i];

            else if(components[i] instanceof Container) {

                Component result = getChild((Container)components[i], name);

                if(result != null) return result;

            }

        }

        return null;

    }

}

