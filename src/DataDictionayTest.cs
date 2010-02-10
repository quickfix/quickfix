using NUnit.Framework;

using System;
using QuickFix;

[TestFixture]
public class DataDictionaryTestCase
{
  private DataDictionary testObject = new DataDictionary( "../../spec/FIX42.xml" );

  [Test]
  public void testSetGetDefault()
  {
    Assert.AreEqual( "FIX.4.2", testObject.getVersion() );
  }

  [Test]
  public void testGetFieldName()
  {
    Assert.AreEqual( "BeginString", testObject.getFieldName( 8 ) );
    Assert.IsNull( testObject.getFieldName( 2000 ) );
  }

  [Test]
  public void testGetFieldTag()
  {
    Assert.AreEqual( 8, testObject.getFieldTag( "BeginString" ) );
    Assert.AreEqual( 0, testObject.getFieldTag( "Nonsense" ) );
  }

  [Test]
  public void testGetValueName()
  {
    Assert.IsNull( testObject.getValueName( 40, "0" ) );
    Assert.AreEqual( "MARKET", testObject.getValueName( 40, "1" ) );
    Assert.AreEqual( "LIMIT", testObject.getValueName( 40, "2" ) );
  }

  [Test]
  public void testIsField()
  {
    Assert.IsTrue( testObject.isField( 8 ) );
    Assert.IsTrue( !testObject.isField( 800 ) );
  }

  [Test]
  public void testIsMsgType()
  {
    Assert.IsTrue( testObject.isMsgType( "D" ) );
    Assert.IsTrue( !testObject.isMsgType( "$" ) );
  }

  [Test]
  public void testIsMsgField()
  {
    Assert.IsTrue( testObject.isMsgField( "D", 55 ) );
    Assert.IsTrue( !testObject.isMsgField( "D", 62 ) );
    Assert.IsTrue( !testObject.isMsgField( "A", 55 ) );
    Assert.IsTrue( !testObject.isMsgField( "$", 55 ) );
  }

  [Test]
  public void testIsHeaderField()
  {
    Assert.IsTrue( testObject.isHeaderField( 8 ) );
    Assert.IsTrue( !testObject.isHeaderField( 55 ) );
    Assert.IsTrue( !testObject.isHeaderField( 10 ) );
  }

  [Test]
  public void testIsTrailerField()
  {
    Assert.IsTrue( testObject.isTrailerField( 10 ) );
    Assert.IsTrue( !testObject.isTrailerField( 55 ) );
    Assert.IsTrue( !testObject.isTrailerField( 8 ) );
  }

  [Test]
  public void testIsRequiredField()
  {
    Assert.IsTrue( testObject.isRequiredField( "D", 55 ) );
    Assert.IsTrue( !testObject.isRequiredField( "D", 109 ) );
  }

  [Test]
  public void testHasFieldValue()
  {
    Assert.IsTrue( testObject.hasFieldValue( 40 ) );
    Assert.IsTrue( !testObject.hasFieldValue( 55 ) );
  }

  [Test]
  public void testSsFieldValue()
  {
    Assert.IsTrue( !testObject.isFieldValue( 40, "0" ) );
    Assert.IsTrue( testObject.isFieldValue( 40, "1" ) );
    Assert.IsTrue( testObject.isFieldValue( 40, "2" ) );
  }

  [Test]
  public void testIsGroup()
  {
    Assert.IsTrue( testObject.isGroup( "A", 384 ) );
    Assert.IsTrue( !testObject.isGroup( "A", 199 ) );
  }
}