package quickfix.test;

import quickfix.Dictionary;
import quickfix.ConfigError;
import quickfix.FieldConvertError;
import junit.framework.TestCase;

public class DictionaryTest extends TestCase {
    private Dictionary testObject = null;
    
    static {
        System.loadLibrary("quickfix_jni");
    }

    public DictionaryTest(String name) {
        super(name);
    }

    public void setUp() throws Exception {
        testObject = new Dictionary();
    }

    public void tearDown() throws Exception {
    }

    public void testSetGetString() throws ConfigError, FieldConvertError {
        testObject.setString( "key1", "value1" );
        testObject.setString( "key2", "value2" );
        testObject.setString( "key3", "value3" );
        assertEquals( "value1", testObject.getString("key1") );
        assertEquals( "value2", testObject.getString("key2") );
        assertEquals( "value3", testObject.getString("key3") );
    }

    public void testSetGetLong() throws ConfigError, FieldConvertError {
        testObject.setLong( "key1", 1 );
        testObject.setLong( "key2", 2 );
        testObject.setLong( "key3", 3 );
        assertEquals( 1, testObject.getLong("key1") );
        assertEquals( 2, testObject.getLong("key2") );
        assertEquals( 3, testObject.getLong("key3") );
    }

    public void testSetGetDouble() throws ConfigError, FieldConvertError 
    {
        testObject.setDouble( "key1", 1.1 );
        testObject.setDouble( "key2", 2.2 );
        testObject.setDouble( "key3", 3.3 );
        assertTrue( 1.1 == testObject.getDouble("key1") );
        assertTrue( 2.2 == testObject.getDouble("key2") );
        assertTrue( 3.3 == testObject.getDouble("key3") );
    }

    public void testSetGetBool() throws ConfigError, FieldConvertError 
    {
        testObject.setBool( "key1", true );
        testObject.setBool( "key2", false );
        testObject.setBool( "key3", true );
        assertTrue( testObject.getBool("key1") );
        assertTrue( !testObject.getBool("key2") );
        assertTrue( testObject.getBool("key3") );
    }

    public void testInvalidFormat() throws FieldConvertError
    {
        testObject.setString( "key1", "hello" );

        try {
            testObject.getLong( "key1" );
            fail();
        } 
        catch( ConfigError ce ) {}

        try 
        {
            testObject.getDouble( "key1" );
            fail();
        } 
        catch( ConfigError ce ) {}

        try 
        {
            testObject.getBool( "key1" );
            fail();
        } 
        catch( ConfigError ce ) {}
    }
}