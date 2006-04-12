/****************************************************************************
** Copyright (c) quickfixengine.org  All rights reserved.
**
** This file is part of the QuickFIX FIX Engine
**
** This file may be distributed under the terms of the quickfixengine.org
** license as defined by quickfixengine.org and appearing in the file
** LICENSE included in the packaging of this file.
**
** This file is provided AS IS with NO WARRANTY OF ANY KIND, INCLUDING THE
** WARRANTY OF DESIGN, MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE.
**
** See http://www.quickfixengine.org/LICENSE for licensing information.
**
** Contact ask@quickfixengine.org if any conditions of this licensing are
** not clear to you.
**
****************************************************************************/

using System;
using QuickFix;

namespace executor_csharp
{
class Executor
{
  [ STAThread ]
  static void Main( string[] args )
  {
    if ( args.Length != 1 )
    {
      Console.WriteLine( "usage: executor_csharp FILE." );
      return ;
    }

    try
    {
      SessionSettings settings = new SessionSettings( args[ 0 ] );
      Application application = new Application();
      FileStoreFactory storeFactory = new FileStoreFactory( settings );
      ScreenLogFactory logFactory = new ScreenLogFactory( settings );
      MessageFactory messageFactory = new DefaultMessageFactory();
      SocketAcceptor acceptor
        = new SocketAcceptor( application, storeFactory, settings, logFactory, messageFactory );

      acceptor.start();
      Console.WriteLine("press <enter> to quit");
      Console.Read();
      acceptor.stop();
    }
    catch ( Exception e )
    {
      Console.WriteLine( e );
    }
  }
}
}
