package quickfix.test;

import quickfix.DataDictionary;
import quickfix.field.*;
import quickfix.fix42.*;
import junit.framework.TestCase;

public class DataDictionaryTest extends TestCase {
    private DataDictionary testObject = new DataDictionary("../../spec/FIX42.xml");

    static {
        System.loadLibrary("quickfix_jni");
    }

    public DataDictionaryTest(String name) {
        super(name);
    }

    public void setUp() throws Exception {
    }

    public void tearDown() throws Exception {
    }

    public void testGetVersion() {
        assertEquals( "FIX.4.2", testObject.getVersion() );
    }

    public void testGetFieldName() {
        assertEquals( "BeginString", testObject.getFieldName(8) );
        assertNull( testObject.getFieldName(2000) );
    }

	public void testGetFieldTag() 
	{
        assertEquals( 8, testObject.getFieldTag("BeginString") );
        assertEquals( 0, testObject.getFieldTag("Nonsense") );
	}

    public void testGetValueName() 
	{
        assertNull( testObject.getValueName( 40, "0" ) );
        assertEquals( "MARKET", testObject.getValueName( 40, "1" ) );
        assertEquals( "LIMIT", testObject.getValueName( 40, "2" ) );
    }

    public void testIsField() {
        assertTrue( testObject.isField( 8 ) );
        assertTrue( !testObject.isField( 800 ) );
    }

    public void testIsMsgType() {
        assertTrue( testObject.isMsgType("D") );
        assertTrue( !testObject.isMsgType("$") );
    }
    
    public void testIsMsgField() {
        assertTrue( testObject.isMsgField("D", 55) );
        assertTrue( !testObject.isMsgField("D", 62) );
        assertTrue( !testObject.isMsgField("A", 55) );
        assertTrue( !testObject.isMsgField("$", 55) );
    }

    public void testIsHeaderField() {
        assertTrue( testObject.isHeaderField(8) );
        assertTrue( !testObject.isHeaderField(55) );
        assertTrue( !testObject.isHeaderField(10) );
    }

    public void testIsTrailerField() {
        assertTrue( testObject.isTrailerField(10) );
        assertTrue( !testObject.isTrailerField(55) );
        assertTrue( !testObject.isTrailerField(8) );
    }

    public void testIsRequiredField() {
        assertTrue( testObject.isRequiredField("D", 55) );
        assertTrue( !testObject.isRequiredField("D", 109) );
    }

    public void testHasFieldValue() {
        assertTrue( testObject.hasFieldValue(40) );
        assertTrue( !testObject.hasFieldValue(55) );
    }

    public void testSsFieldValue() {
        assertTrue( !testObject.isFieldValue(40, "0") );
        assertTrue( testObject.isFieldValue(40, "1") );
        assertTrue( testObject.isFieldValue(40, "2") );
    }

    public void testIsGroup() {
        assertTrue( testObject.isGroup("A", 384) );
        assertTrue( !testObject.isGroup("A", 199) );
    }
}