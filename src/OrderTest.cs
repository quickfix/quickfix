using NUnit.Framework;

using System;
using System.Threading;
using System.Diagnostics;
using QuickFix;
using QuickFix42;

[TestFixture]
public class OrderTestCase
{
  private Initiator initiator;
  private ApplicationImpl application;
  private Process server;

  void RunThread()
  {
    try
    {
      initiator.start();
    }
    catch( Exception) { }
  }

  [SetUp]
  public void SetUp() 
  {
    application = new ApplicationImpl();
    SessionSettings settings = new SessionSettings( "c:\\development\\quickfix\\test\\cfg\\at_client.cfg" );
    MessageStoreFactory messageStoreFactory =
      new MemoryStoreFactory();
    QuickFix42.MessageFactory messageFactory = new QuickFix42.MessageFactory();

    initiator = new SocketInitiator
      (application, messageStoreFactory, settings, messageFactory);

    server = new Process();
    server.StartInfo.FileName = "c:\\development\\quickfix\\test\\debug\\at\\at";
    server.StartInfo.Arguments = "-f c:\\development\\quickfix\\test\\cfg\\at.cfg";
    server.Start();

    Thread quickFixThread = new Thread(RunThread);
    quickFixThread.Start();

    for(int i = 0;i < 50;++i) 
    {
      if(application.isLoggedOn()) 
      {
        break;
      }
      Thread.Sleep(1000);
    }
    if(!application.isLoggedOn()) 
    {
      throw new Exception();
    }
  }

  public void tearDown()
  {
    application.stop();
    server.Kill();
    Thread.Sleep(2000);
  }

  [Test]
  public void testOrderSend()
  {
    SessionNotFound exception = null;
    NewOrderSingle order = new NewOrderSingle();
    try 
    {
      Session.sendToTarget(order);
    }
    catch(SessionNotFound e) 
    {
      exception = e;
    }
    Assert.IsNotNull( exception, "no exception thrown" );

    exception = null;
    SessionID sessionID = new SessionID
      ("FIX.4.2", "TW", "ISLD");
    order.set(new ClOrdID("12345"));
    order.set(new Symbol("LNUX"));
    order.set(new HandlInst('1'));
    order.set(new Side(Side.BUY));
    order.set(new OrdType(OrdType.MARKET));
    order.set(new TransactTime());

    try 
    {
      Assert.IsTrue(Session.sendToTarget(order, sessionID));
      QuickFix.Message message = application.getMessage();
      Assert.IsNotNull(message, "Message not received");
      //Assert.IsTrue("Message not a NewOrderSingle",
      //               message instanceof NewOrderSingle);
      Assert.IsTrue(Session.sendToTarget(order, sessionID));
    }
    catch(SessionNotFound e) 
    {
      exception = e;
    }
    Assert.IsNull(exception, "exception thrown");
  }
}