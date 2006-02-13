package quickfix.test;
import junit.framework.TestCase;
import quickfix.field.*;
public class FieldTest extends TestCase {
    static {
        System.loadLibrary("quickfix_jni");
    }
    public FieldTest(String name) {
    	super(name);
    }
    public void setUp() throws Exception {
    }
    public void tearDown() throws Exception {
    }
    public void testMessageSetGetString() {
        Side side1 = new Side(Side.BUY);
        Side side2 = new Side(Side.BUY);
        assertEquals(side1, side2);
        side2 = new Side();
        side2.setValue(Side.BUY);
        assertEquals(side1, side2);
    }
}
