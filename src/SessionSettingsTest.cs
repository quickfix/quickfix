using NUnit.Framework;

using System;
using QuickFix;

[TestFixture]
public class SessionSettingsTestCase
{
  private SessionSettings testObject = null;

  [SetUp]
  public void setup()
  {
    testObject = new SessionSettings();
  }

  [Test]
  public void testSetGetDefault()
  {
    Dictionary dictionary = new Dictionary();
    dictionary.setString( "ConnectionType", "initiator" );

    testObject.set( dictionary );
    dictionary = testObject.get();

    Assert.AreEqual( "initiator", dictionary.getString( "ConnectionType" ) );
  }

  [Test]
  public void testSetGetSessionID()
  {
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

    Assert.AreEqual( "initiator", dictionary1.getString("ConnectionType") );
    Assert.AreEqual( "acceptor", dictionary2.getString("ConnectionType") );

    try
    {
      testObject.get( sessionID3 );
      Assert.Fail();
    } 
    catch( ConfigError ) {}
  }
}