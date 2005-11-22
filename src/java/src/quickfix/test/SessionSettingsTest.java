package quickfix.test;

import quickfix.SessionSettings;
import quickfix.Dictionary;
import quickfix.SessionID;
import quickfix.ConfigError;
import quickfix.FieldConvertError;
import junit.framework.TestCase;

public class SessionSettingsTest extends TestCase {
    private SessionSettings testObject = null;
    
    static {
        System.loadLibrary("quickfix_jni");
    }

    public SessionSettingsTest(String name) {
        super(name);
    }

    public void setUp() throws Exception {
        testObject = new SessionSettings();
    }

    public void tearDown() throws Exception {
    }

    public void testSetGetDefault() throws ConfigError, FieldConvertError {
        Dictionary dictionary = new Dictionary();
        dictionary.setString( "ConnectionType", "initiator" );
        
        testObject.set( dictionary );
        dictionary = testObject.get();

        assertEquals( "initiator", dictionary.getString("ConnectionType") );
    }

    public void testSetGetSessionID() throws ConfigError, FieldConvertError {
        Dictionary dictionary1 = new Dictionary();
        dictionary1.setString( "ConnectionType", "initiator" );
        Dictionary dictionary2 = new Dictionary();
        dictionary2.setString( "ConnectionType", "acceptor" );

        SessionID sessionID1 = new SessionID( "FIX.4.0", "SENDER1", "TARGET1" );
        SessionID sessionID2 = new SessionID( "FIX.4.0", "SENDER2", "TARGET2" );
        SessionID sessionID3 = new SessionID( "FIX.4.0", "SENDER3", "TARGET3" );

        testObject.set( sessionID1, dictionary1 );
        testObject.set( sessionID2, dictionary2 );
        dictionary1 = testObject.get( sessionID1 );
        dictionary2 = testObject.get( sessionID2 );

        assertEquals( "initiator", dictionary1.getString("ConnectionType") );
        assertEquals( "acceptor", dictionary2.getString("ConnectionType") );

        try {
            testObject.get( sessionID3 );
            fail();
        } catch( ConfigError ce ) {
        }
    }
}