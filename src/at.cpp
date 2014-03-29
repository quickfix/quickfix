/****************************************************************************
** Copyright (c) 2001-2014
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

#include "ThreadedSocketAcceptor.h"
#include "SocketAcceptor.h"
#include "SessionSettings.h"
#include "FileStore.h"
#include "Utility.h"
#include <iostream>
#include <fstream>
#include <memory>
#include "getopt-repl.h"
#include "at_application.h"

#ifdef _MSC_VER
#pragma warning( disable : 4503 )
#endif

typedef std::auto_ptr < FIX::Acceptor > AcceptorPtr;

int main( int argc, char** argv )
{
  std::string file;
  bool threaded = false;

  if ( getopt( argc, argv, "+f:" ) == 'f' )
    file = optarg;
  else
  {
    std::cout << "usage: " << argv[ 0 ]
    << " -f FILE [-t]" << std::endl;
    return 1;
  }

  if ( getopt( argc, argv, "+t" ) == 't' )
    threaded = true;

  try
  {
    FIX::SessionSettings settings( file );
    Application application;
    FIX::FileStoreFactory factory( "store" );

    AcceptorPtr pAcceptor;
    if ( threaded )
    {
      AcceptorPtr p = std::auto_ptr < FIX::Acceptor >
                      ( new FIX::ThreadedSocketAcceptor
                        ( application, factory, settings ) );
      pAcceptor = p;
    }
    else
    {
      AcceptorPtr p = std::auto_ptr < FIX::Acceptor >
                      ( new FIX::SocketAcceptor
                        ( application, factory, settings ) );
      pAcceptor = p;
    }

    pAcceptor->start();
    while ( true ) FIX::process_sleep( 1 );
    pAcceptor->stop();
  }
  catch ( std::exception & e )
  {
    std::cout << e.what();
    return 2;
  }

  return 0;
}
