using NUnit.Framework;

using System;
using QuickFix;

[TestFixture]
public class FieldTestCase
{
  [Test]
  public void testMessageSetGetString()
  {
    Side side1 = new Side( Side.BUY );
    Side side2 = new Side( Side.BUY );
    Assert.AreEqual( side1, side2 );
    side2 = new Side();
    side2.setValue( Side.BUY );
    Assert.AreEqual( side1, side2 );
  }
}