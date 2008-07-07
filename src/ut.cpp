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

#ifdef _MSC_VER
#pragma warning( disable : 4503 4355 4786 )
#include "stdafx.h"
#else
#include "config.h"
#endif

#include "C++/Utility.h"
#include "C++/SessionSettings.h"
#include <CPPTest/TestStandardOutputDisplay.h>
#include <CPPTest/TestXMLFileOutputDisplay.h>
#ifndef _MSC_VER
#include <DataDictionaryTestCase.cpp>
#include <DictionaryTestCase.cpp>
#include <FieldBaseTestCase.cpp>
#include <FieldConvertorsTestCase.cpp>
#include <MessageSortersTestCase.cpp>
#include <ParserTestCase.cpp>
#endif
#include <UnitTest++.h>
#include <TestReporterStdout.h>
#include "getopt-repl.h"

void print_usage( char** argv )
{
  std::cout << "usage: "
            << argv[ 0 ]
            << " -p port -f file" << std::endl;
}

int main( int argc, char** argv )
{
  CPPTest::TestDisplay * display;

  short port = 0;
  std::auto_ptr<FIX::SessionSettings> sessionSettingsPtr;

  if( argc != 5 )
  {
    print_usage( argv );
    return 1;
  }

  int opt;
  while ( (opt = getopt( argc, argv, "+p:+f:" )) != -1 )
  {
    switch( opt )
    {
    case 'p':
      port = (short)atol( optarg );
      break;
    case 'f':
      sessionSettingsPtr = std::auto_ptr<FIX::SessionSettings>
        ( new FIX::SessionSettings(optarg) );
      break;
    default:
      print_usage( argv );
      return 1;
    }
  }

  display = new CPPTest::TestXMLFileOutputDisplay();

  TestSuite suite( *display, port, *sessionSettingsPtr );
  //suite.run();

  return UnitTest::RunAllTests();

  delete display;
  return suite.getExceptions().size() > 0;
}
