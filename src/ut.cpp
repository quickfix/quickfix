/****************************************************************************
** Copyright (c) 2001-2004 quickfixengine.org  All rights reserved.
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

#ifdef _MSC_VER
#pragma warning( disable : 4503 4355 4786 )
#include "stdafx.h"
#else
#include "config.h"
#endif

#include "C++/test/TestSuite.h"
#include "C++/Utility.h"
#include <CPPTest/TestStandardOutputDisplay.h>
#include <CPPTest/TestXMLFileOutputDisplay.h>
#include "getopt-repl.h"

int main( int argc, char** argv )
{
  CPPTest::TestDisplay * display;

  if ( getopt( argc, argv, "+p:" ) != 'p' )
  {
    std::cout << "usage: "
    << argv[ 0 ]
    << " -p port" << std::endl;
    return 1;
  }
  std::string port = optarg;

  display = new CPPTest::TestXMLFileOutputDisplay();

  TestSuite suite( *display, ( short ) atol( port.c_str() ) );
  suite.run();

  delete display;
  return suite.getExceptions().size() > 0;
}
