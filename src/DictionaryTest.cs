using NUnit.Framework;

using System;
using QuickFix;

[TestFixture]
public class DictionaryTestCase
{
  private Dictionary testObject = new Dictionary();

  [Test]
  public void testSetGetString() 
  {
    testObject.setString( "key1", "value1" );
    testObject.setString( "key2", "value2" );
    testObject.setString( "key3", "value3" );
    Assert.AreEqual( "value1", testObject.getString("key1") );
    Assert.AreEqual( "value2", testObject.getString( "key2" ) );
    Assert.AreEqual( "value3", testObject.getString( "key3" ) );
  }

  [Test]
  public void testSetGetLong()
  {
    testObject.setLong( "key1", 1 );
    testObject.setLong( "key2", 2 );
    testObject.setLong( "key3", 3 );
    Assert.AreEqual( 1, testObject.getLong( "key1" ) );
    Assert.AreEqual( 2, testObject.getLong( "key2" ) );
    Assert.AreEqual( 3, testObject.getLong( "key3" ) );
  }

    [Test]
    public void testSetGetDouble()
    {
      testObject.setDouble( "key1", 1.1 );
      testObject.setDouble( "key2", 2.2 );
      testObject.setDouble( "key3", 3.3 );
      Assert.IsTrue( 1.1 == testObject.getDouble("key1") );
      Assert.IsTrue( 2.2 == testObject.getDouble("key2") );
      Assert.IsTrue( 3.3 == testObject.getDouble("key3") );
    }

    [Test]
    public void testSetGetBool()
    {
      testObject.setBool( "key1", true );
      testObject.setBool( "key2", false );
      testObject.setBool( "key3", true );
      Assert.IsTrue( testObject.getBool("key1") );
      Assert.IsTrue( !testObject.getBool("key2") );
      Assert.IsTrue( testObject.getBool("key3") );
    }

    [Test]
    public void testInvalidFormat()
    {
      testObject.setString( "key1", "hello" );

    try 
    {
      testObject.getLong( "key1" );
      Assert.Fail();
    } 
    catch( ConfigError ) {}

    try 
    {
      testObject.getDouble( "key1" );
      Assert.Fail();
    } 
    catch( ConfigError ) {}

    try 
    {
        testObject.getBool( "key1" );
        Assert.Fail();
    } 
    catch( ConfigError ) {}
  }
}