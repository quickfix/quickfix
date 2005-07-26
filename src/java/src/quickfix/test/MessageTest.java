package quickfix.test;

import quickfix.Message;
import quickfix.FieldNotFound;
import quickfix.NoTagValue;
import quickfix.InvalidMessage;
import quickfix.StringField;
import quickfix.field.*;
import quickfix.fix42.*;
import junit.framework.TestCase;
import java.util.Date;
import java.util.Calendar;
import java.util.TimeZone;

public class MessageTest extends TestCase {

    static {
        System.loadLibrary("quickfix_jni");
    }

    public MessageTest(String name) {
        super(name);
    }

    public void setUp() throws Exception {
    }

    public void tearDown() throws Exception {
    }

    public void testMessageFromString() {
        Message message = null;

        boolean badMessage = false;
        try {
            message = new Message("8=FIX.4.2\0019=12\00135=A\001108=30\00110=036\001");
        } catch(InvalidMessage e) { badMessage = true; }
        assertTrue("Message should be invalid", true);

        try {
            message = new Message("8=FIX.4.2\0019=12\00135=A\001108=30\00110=026\001");
        } catch(InvalidMessage e) { assertTrue("Message should be valid", false); }
        assertEquals("8=FIX.4.2\0019=12\00135=A\001108=30\00110=026\001", message.toString());
    }

    public void testMessageGroups() {
        Message message = new Message();
        NewOrderSingle.NoAllocs numAllocs = new NewOrderSingle.NoAllocs();
        numAllocs.set( new AllocAccount("AllocACC1") );
        numAllocs.set( new AllocShares(1010.10) );
        message.addGroup(numAllocs);
        numAllocs.set( new AllocAccount("AllocACC2") );
        numAllocs.set( new AllocShares(2020.20) );
        message.addGroup(numAllocs);

	StringField field = null;
	java.util.Iterator i = numAllocs.iterator();
	assertTrue( i.hasNext() );
	field = (StringField)i.next();
	assertEquals( "AllocACC2", field.getValue() );
	assertTrue( i.hasNext() );
	field = (StringField)i.next();
	assertEquals( "2020.2", field.getValue() );
	assertTrue( !i.hasNext() );

        try {
            message.getGroup( 1, numAllocs );
            assertEquals( "AllocACC1", 
                          numAllocs.getField( new AllocAccount() ).getValue() );
            assertTrue( 1010.10 ==
                    numAllocs.getField( new AllocShares() ).getValue() );
            message.getGroup( 2, numAllocs );
            assertEquals( "AllocACC2", 
                          numAllocs.getField( new AllocAccount() ).getValue() );
            assertTrue( 2020.20 ==
                    numAllocs.getField( new AllocShares() ).getValue() );
        } catch( FieldNotFound e ) {
            fail( "no exception should be thrown" );
        }

        try {
            message.getGroup( 3, numAllocs );
            fail( "exception should be thrown" );
        } catch( FieldNotFound e ) {
        }
    }

    public void testMessageSetGetString() {
        Message message = new Message();

        try {
            message.getString(5);
            assertTrue("exception not thrown", false);
        } catch(FieldNotFound e) {}

        try {
          message.setString(5, "string5");
        } catch(NoTagValue e) { assertTrue("exception thrown", false); }

        try {
            assertEquals("string5", message.getString(5));
        } catch(FieldNotFound e) { assertTrue("exception thrown", false); }

        try {
            message.setString(100, null);
            assertTrue("exception not thrown", false);
        } catch(NullPointerException e) {            
        } catch(NoTagValue e) {
        }
    }

    public void testMessagesetGetBoolean() {
        Message message = new Message();

        try {
            message.getBoolean(7);
            assertTrue("exception not thrown", false);
        } catch(FieldNotFound e) {}

        try {
            message.setBoolean(7, true);
        } catch(NoTagValue e) { assertTrue("exception thrown", false); }

        try {
            assertEquals(true, message.getBoolean(7));
        } catch(FieldNotFound e) { assertTrue("exception thrown", false); }
    }

    public void testMessageSetGetChar() {
        Message message = new Message();

        try {
            message.getChar(12);
            assertTrue("exception not thrown", false);
        } catch(FieldNotFound e) {}

        try {
            message.setChar(12, 'a');
        } catch(NoTagValue e) { assertTrue("exception thrown", false); }

        try {
            assertEquals('a', message.getChar(12));
        } catch(FieldNotFound e) { assertTrue("exception thrown", false); }
    }

    public void testMessageSetGetInt() {
        Message message = new Message();

        try {
            message.getInt(56);
            assertTrue("exception not thrown", false);
        } catch(FieldNotFound e) {}

        try {
          message.setInt(56, 23);
        } catch(NoTagValue e) { assertTrue("exception thrown", false); }

        try {
            assertEquals(23, message.getInt(56));
        } catch(FieldNotFound e) { assertTrue("exception thrown", false); }
    }

    public void testMessageSetGetDouble() {
        Message message = new Message();

        try {
            message.getDouble(9812);
            assertTrue("exception not thrown", false);
        } catch(FieldNotFound e) {}

        try {
            message.setDouble(9812, 12.3443);
        } catch(NoTagValue e) { assertTrue("exception thrown", false); }

        try {
            assertEquals(new Double(12.3443),
                         new Double(message.getDouble(9812)));
        } catch(FieldNotFound e) { assertTrue("exception thrown", false); }
    }

    public void testMessageSetGetUtcTimeStamp() {
        Message message = new Message();

        try {
            message.getUtcTimeStamp(8);
            assertTrue("exception not thrown", false);
        } catch(FieldNotFound e) {}

        TimeZone timezone = TimeZone.getTimeZone("GMT+0");
        Calendar calendar = Calendar.getInstance(timezone);
        calendar.set(2002, 8, 6, 12, 34, 56);
        calendar.set(Calendar.MILLISECOND, 0);

        Date time = calendar.getTime();
        try {
            message.setUtcTimeStamp(8, time);
        } catch(NoTagValue e) { assertTrue("exception thrown", false); }

        try {
            assertEquals(message.getUtcTimeStamp(8).getTime(), time.getTime());
        } catch(FieldNotFound e) { assertTrue("exception thrown", false); }
    }

    public void testSetNoValue() {
        Message message = new Message();
        try {
            message.setField( new StringField(12, "") );
            assertTrue("exception not thrown", false); 
        } catch(NoTagValue e) {}
    }

    public void testRemoveField() {
        Message message = new Message();
        try {
            message.setField( new StringField(12, "value") );
        } catch(NoTagValue e) { assertTrue("exception thrown", false); }
        
        assertTrue( message.isSetField(12) );
        message.removeField( 12 );
        assertTrue( !message.isSetField(12) );
    }

    public void testMessageIterator() {
        Message message = new Message();
        java.util.Iterator i = message.iterator();
        assertEquals(false, i.hasNext());
        try {
            assertNull(i.next());
            fail("exception not thrown");
        } catch(java.util.NoSuchElementException e) {}

        try {
            message = new Message("8=FIX.4.2\0019=12\00135=A\001108=30\00110=026\001");
            i = message.iterator();
            assertTrue(i.hasNext());
            StringField field = (StringField)i.next();
            assertEquals(108, field.getField());
            assertEquals("30", field.getValue());
            
            assertEquals(false, i.hasNext());
            try {
                assertNull(i.next());
                fail("exception not thrown");
            } catch(java.util.NoSuchElementException e) {}

            java.util.Iterator j = message.getHeader().iterator();
            assertTrue(j.hasNext());
            field = (StringField)j.next();
            assertEquals(8, field.getField());
            assertEquals("FIX.4.2", field.getValue());
            field = (StringField)j.next();
            assertEquals(9, field.getField());
            assertEquals("12", field.getValue());
            field = (StringField)j.next();
            assertEquals(35, field.getField());
            assertEquals("A", field.getValue());

            assertEquals(false, j.hasNext());
            try {
                assertNull(j.next());
                fail("exception not thrown");
            } catch(java.util.NoSuchElementException e) {}

        } catch( InvalidMessage e ) {
            fail("exception thrown");
        }
    }
}
