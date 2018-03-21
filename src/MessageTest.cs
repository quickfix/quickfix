using NUnit.Framework;

using System;
using System.Collections;
using QuickFix;

[TestFixture]
public class MessageTestCase
{
  [Test]
  public void testIdentifyType() 
  {
    try 
    {
      Assert.AreEqual( "A", Message.identifyType( "8=FIX.4.219=1235=A108=3010=031" ).getValue() );
    } 
    catch( MessageParseError ) { Assert.IsTrue(false, "Message could not be parsed"); }

    try 
    {
      Assert.AreEqual( "AB", Message.identifyType("8=FIX.4.29=1235=AB108=3010=031").getValue() );
    } catch( MessageParseError ) { Assert.IsTrue(false, "Message could not be parsed"); }

    try 
    {
      Message.identifyType("8=FIX.4.29=12108=3010=031");
      Assert.IsTrue(false, "Message should not have a type");
    } catch( MessageParseError ) {}

    try
    {
      Message.identifyType(null);
      Assert.Fail("exception should be thrown");
    }
    catch( MessageParseError ) {}
  }

  [Test]
  public void testMessageFromString() 
  {
    Message message = null;

    try 
    {
      message = new Message("8=FIX.4.29=1235=A108=3010=036");
    } catch(InvalidMessage) { }
    Assert.IsTrue(true, "Message should be invalid");

    try 
    {
      message = new Message("8=FIX.4.29=1235=A108=3010=026");
    } catch(InvalidMessage) { Assert.IsTrue(false, "Message should be valid"); }
    Assert.AreEqual("8=FIX.4.29=1235=A108=3010=026", message.ToString());
  }

  [Test]
  public void testMessageGroups() 
  {
    Message message = new Message();
    QuickFix42.NewOrderSingle.NoAllocs numAllocs = new QuickFix42.NewOrderSingle.NoAllocs();
    numAllocs.set( new AllocAccount("AllocACC1") );
    numAllocs.set( new AllocShares(1010.10) );
    message.addGroup(numAllocs);
    numAllocs.set( new AllocAccount("AllocACC2") );
    numAllocs.set( new AllocShares(2020.20) );
    message.addGroup(numAllocs);

    StringField field = null;
    IEnumerator i = numAllocs.GetEnumerator();
    Assert.IsTrue( i.MoveNext() );
    field = (StringField)i.Current;
    Assert.AreEqual( "AllocACC2", field.getValue() );
    Assert.IsTrue( i.MoveNext() );
    field = (StringField)i.Current;
    Assert.AreEqual( "2020.2", field.getValue() );
    Assert.IsTrue( !i.MoveNext() );

    try 
    {
      message.getGroup( 1, numAllocs );
      Assert.AreEqual( "AllocACC1", 
                       numAllocs.getField( new AllocAccount() ).getValue() );
      Assert.IsTrue( 1010.10 ==
                     numAllocs.getField( new AllocShares() ).getValue() );
      message.getGroup( 2, numAllocs );
      Assert.AreEqual( "AllocACC2", 
                       numAllocs.getField( new AllocAccount() ).getValue() );
      Assert.IsTrue( 2020.20 ==
                     numAllocs.getField( new AllocShares() ).getValue() );
    } 
    catch( FieldNotFound ) 
    {
      Assert.Fail( "no exception should be thrown" );
    }

    try 
    {
      message.getGroup( 3, numAllocs );
      Assert.Fail( "exception should be thrown" );
    } 
    catch( FieldNotFound ) {}
  }

  [Test]
  public void testMessageSetGetString() 
  {
    Message message = new Message();

    try 
    {
      message.getString(5);
      Assert.IsTrue(false, "exception not thrown");
    } catch(FieldNotFound ) {}

    message.setString(5, "string5");

    try 
    {
      Assert.AreEqual("string5", message.getString(5));
    } catch(FieldNotFound ) { Assert.IsTrue(false, "exception thrown"); }

    try 
    {
      message.setString(100, null);
      Assert.IsTrue(false, "exception not thrown");
    } catch(NullReferenceException) {}
  }

  [Test]
  public void testMessagesetGetBoolean() 
  {
    Message message = new Message();

    try 
    {
      message.getBoolean(7);
      Assert.IsTrue(false, "exception not thrown");
    } catch(FieldNotFound ) {}

    message.setBoolean(7, true);

    try 
    {
      Assert.AreEqual(true, message.getBoolean(7));
    } catch(FieldNotFound ) { Assert.IsTrue(false, "exception thrown"); }
  }

  [Test]
  public void testMessageSetGetChar() 
  {
    Message message = new Message();

    try 
    {
      message.getChar(12);
      Assert.IsTrue(false, "exception not thrown");
    } catch(FieldNotFound) {}

    message.setChar(12, 'a');

    try 
    {
      Assert.AreEqual('a', message.getChar(12));
    } catch(FieldNotFound) { Assert.IsTrue(false, "exception thrown"); }
  }

  [Test]
  public void testMessageSetGetInt() 
  {
    Message message = new Message();

    try 
    {
      message.getInt(56);
      Assert.IsTrue(false, "exception not thrown");
    } catch(FieldNotFound) {}

    message.setInt(56, 23);

    try 
    {
      Assert.AreEqual(23, message.getInt(56));
    } catch(FieldNotFound) { Assert.IsTrue(false, "exception thrown"); }
  }

  [Test]
  public void testMessageSetGetDouble() 
  {
    Message message = new Message();

    try 
    {
      message.getDouble(9812);
      Assert.IsTrue(false, "exception not thrown");
    } catch(FieldNotFound) {}

    message.setDouble(9812, 12.3443);

    try 
    {
      Assert.AreEqual(12.3443, message.getDouble(9812));
    } catch(FieldNotFound) { Assert.IsTrue(false, "exception thrown"); }

    message.setDouble(9813, 5.0, 3);
    message.setDouble(9814, -2.1004, 3);

    try 
    {
      Assert.AreEqual("5.000", message.getString(9813));
      Assert.AreEqual("-2.1004", message.getString(9814));
    } catch(FieldNotFound) { Assert.IsTrue(false, "exception thrown"); }
  }

  [Test]
  public void testMessageSetGetUtcTimeStamp() 
  {
    Message message = new Message();

    try 
    {
      message.getUtcTimeStamp(8);
      Assert.IsTrue(false, "exception not thrown");
    } catch(FieldNotFound) {}

    DateTime time = new DateTime(2002, 8, 6, 12, 34, 56, 0);
    message.setUtcTimeStamp(8, time);

    try 
    {
      Assert.AreEqual(message.getUtcTimeStamp(8).Ticks, time.Ticks);
    } catch(FieldNotFound) { Assert.IsTrue(false, "exception thrown"); }
  }

  [Test]
  public void testRemoveField() 
  {
    Message message = new Message();
    message.setField( new StringField(12, "value") );
        
    Assert.IsTrue( message.isSetField(12) );
    message.removeField( 12 );
    Assert.IsTrue( !message.isSetField(12) );
  }

  [Test]
  public void testMessageIterator() 
  {
    Message message = new Message();
    IEnumerator i = message.GetEnumerator();
    Assert.IsFalse(i.MoveNext());

    try 
    {
      message = new Message("8=FIX.4.29=1235=A108=3010=026");
      i = message.GetEnumerator();
      Assert.IsTrue(i.MoveNext());
      StringField field = (StringField)i.Current;
      Assert.AreEqual(108, field.getField());
      Assert.AreEqual("30", field.getValue());

      Assert.IsFalse(i.MoveNext());

      IEnumerator j = message.getHeader().GetEnumerator();
      Assert.IsTrue(j.MoveNext());
      field = (StringField)j.Current;
      Assert.AreEqual(8, field.getField());
      Assert.AreEqual("FIX.4.2", field.getValue());
      Assert.IsTrue(j.MoveNext());
      field = (StringField)j.Current;
      Assert.AreEqual(9, field.getField());
      Assert.AreEqual("12", field.getValue());
      Assert.IsTrue(j.MoveNext());
      field = (StringField)j.Current;
      Assert.AreEqual(35, field.getField());
      Assert.AreEqual("A", field.getValue());

      Assert.IsFalse(j.MoveNext());
    } 
    catch( InvalidMessage) 
    {
      Assert.Fail("exception thrown");
    }
  }
}