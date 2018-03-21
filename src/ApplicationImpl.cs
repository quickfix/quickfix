using System;
using System.Threading;
using QuickFix;

public class ApplicationImpl : Application 
{
  private bool loggedOn = false;
  private bool created = false;
  private bool stopRunning = false;
  private Message message = null;

  public void onCreate(SessionID sessionId) 
  {
    created = true;
  }

  public void onLogon(SessionID sessionId) 
  {
    loggedOn = true;
  }

  public void onLogout(SessionID sessionId) 
  {
    loggedOn = false;
  }

  public void toAdmin(Message message, SessionID sessionId) {}
  public void toApp(Message message, SessionID sessionId) {}
  public void fromAdmin(Message message, SessionID sessionId) {}

  public void fromApp(Message message, SessionID sessionId) 
  {
    this.message = message;
  }

  public void run() 
  {
    while(true) 
    {
      try 
      {
        if(stopRunning) return;
        Thread.Sleep(1000);
      }
      catch(Exception) {}
    }
  }

    public void stop() { stopRunning = true; }

    public bool isLoggedOn() 
    {
      return loggedOn;
    }

    public bool isCreated() 
    {
      return created;
    }

  public Message getMessage() 
  {
    try 
    {
      for(int i = 0; i < 50; ++i) 
      {
        if(message != null) 
        {
          return message;
        }
        Thread.Sleep(100);
      }
    } 
    catch(Exception) {}

    return message;
  }
}
