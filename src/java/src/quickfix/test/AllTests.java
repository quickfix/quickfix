package quickfix.test;

import junit.framework.Test;
import junit.framework.TestSuite;

public class AllTests {

    public static Test suite() {
        TestSuite suite = new TestSuite();

        suite.addTest(new TestSuite(MessageTest.class));
        suite.addTest(new TestSuite(FieldTest.class));
	suite.addTest(new TestSuite(DataDictionaryTest.class));

        return suite;
    }

    public static void main(String[] args) {
        junit.swingui.TestRunner.main(new String[] { AllTests.class.getName()});
    }
}
