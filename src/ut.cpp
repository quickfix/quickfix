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

#ifdef _MSC_VER
#pragma warning( disable : 4503 4355 4786 )
#include "stdafx.h"
#else
#include "config.h"
#endif

#include "C++/Utility.h"
#include "C++/SessionSettings.h"
#ifndef _MSC_VER
#include <DataDictionaryTestCase.cpp>
#include <DictionaryTestCase.cpp>
#include <FieldBaseTestCase.cpp>
#include <FieldConvertorsTestCase.cpp>
#include <FileLogTestCase.cpp>
#include <FileStoreFactoryTestCase.cpp>
#include <FileStoreTestCase.cpp>
#include <FileUtilitiesTestCase.cpp>
#include <HttpMessageTestCase.cpp>
#include <HttpParserTestCase.cpp>
#include <MemoryStoreTestCase.cpp>
#include <MessageSortersTestCase.cpp>
#include <MessagesTestCase.cpp>
#include <MySQLStoreTestCase.cpp>
#include <NullStoreTestCase.cpp>
#include <OdbcStoreTestCase.cpp>
#include <ParserTestCase.cpp>
#include <PostgreSQLStoreTestCase.cpp>
#include <SessionIDTestCase.cpp>
#include <SessionSettingsTestCase.cpp>
#include <SessionTestCase.cpp>
#include <SessionFactoryTestCase.cpp>
#include <SettingsTestCase.cpp>
#include <SocketAcceptorTestCase.cpp>
#include <SocketConnectorTestCase.cpp>
#include <SocketServerTestCase.cpp>
#include <TestHelper.cpp>
#include <TimeRangeTestCase.cpp>
#include <UtcTimeOnlyTestCase.cpp>
#include <UtcTimeStampTestCase.cpp>
#endif
#include <UnitTest++.h>
#include <TestReporterStdout.h>
#include "getopt-repl.h"
#include "TestHelper.h"

void print_usage( char** argv )
{
  std::cout << "usage: "
            << argv[ 0 ]
            << " -p port -f file" << std::endl;
}

int main( int argc, char** argv )
{
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
      FIX::TestSettings::port = (short)atol( optarg );
      break;
    case 'f':
      FIX::TestSettings::sessionSettings = FIX::SessionSettings(optarg);
      break;
    default:
      print_usage( argv );
      return 1;
    }
  }

  std::cout << "<ut>" << std::endl << "  <output>" << std::endl;
  int result = UnitTest::RunAllTests();
  std::cout << "  </output>" << std::endl << "</ut>" << std::endl;

  return result;
}
