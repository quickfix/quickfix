using System;
using System.Collections;
using System.Text;
using System.Threading;
using QuickFix;

class at
{
  static void Main(string[] args)
  {
    string file = "";

    if( args.Length >= 2 && args[0].Equals("-f") && args[1] != null ) 
    {
      file = args[1];
	  }
    else 
    {
      Console.WriteLine( "usage: at" + " -f FILE [-t]" );
      return;
	  }

    SessionSettings settings = new SessionSettings(file);
    at_application application = new at_application();
    FileStoreFactory factory = new FileStoreFactory(settings);
    Acceptor acceptor = new SocketAcceptor
        ( application, factory, settings, new DefaultMessageFactory() );
    acceptor.start();
    while( true ) Thread.Sleep( 1000 );
  }
}