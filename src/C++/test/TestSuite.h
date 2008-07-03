/* -*- C++ -*- */

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

#include <CPPTest/TestSuite.h>
#include <CPPTest/TestDisplay.h>
#include <SessionTestCase.h>
#include <SessionSettingsTestCase.h>
#include <SettingsTestCase.h>
#include <MemoryStoreTestCase.h>
#include <FileLogTestCase.h>
#include <FileStoreTestCase.h>
#include <MySQLStoreTestCase.h>
#include <PostgreSQLStoreTestCase.h>
#include <OdbcStoreTestCase.h>
#include <FileStoreFactoryTestCase.h>
#include <UtcTimeStampTestCase.h>
#include <UtcTimeOnlyTestCase.h>
#include <StringUtilitiesTestCase.h>
#include <TimeRangeTestCase.h>
#include <SocketConnectorTestCase.h>
#include <SocketServerTestCase.h>

class TestSuite : public CPPTest::TestSuite
{
public:
  TestSuite( CPPTest::TestDisplay& display, short port,
             const FIX::SessionSettings& sessionSettings )
: CPPTest::TestSuite( display ),
#ifdef HAVE_MYSQL
  m_mySQLStore( sessionSettings ),
#endif
#ifdef HAVE_POSTGRESQL
  m_postgreSQLStore( sessionSettings ),
#endif
#ifdef HAVE_ODBC
  m_odbcStore( sessionSettings ),
#endif
  m_socketConnector( port ),
  m_socketServer( port )
  {
    FIX::socket_init();
//    add( &m_messageSorters );
    add( &m_session );
    add( &m_settings );
    add( &m_sessionSettings );
    add( &m_fileLog );
     add( &m_fileStore );
#ifdef HAVE_MYSQL
    add( &m_mySQLStore );
#endif
#ifdef HAVE_POSTGRESQL
    add( &m_postgreSQLStore );
#endif
#ifdef HAVE_ODBC
    add( &m_odbcStore );
#endif
    add( &m_fileStoreFactory );
    add( &m_utcTimeStamp );
    add( &m_utcTimeOnly );
    add( &m_stringUtilities );
    add( &m_timeRange );
    add( &m_socketConnector );
    add( &m_socketServer );
  }

  ~TestSuite() { FIX::socket_term(); }

private:

  FIX::SessionTestCase m_session;
  FIX::SettingsTestCase m_settings;
  FIX::SessionSettingsTestCase m_sessionSettings;
  FIX::FileLogTestCase m_fileLog;
  FIX::FileStoreTestCase m_fileStore;
#ifdef HAVE_MYSQL
  FIX::MySQLStoreTestCase m_mySQLStore;
#endif
#ifdef HAVE_POSTGRESQL
  FIX::PostgreSQLStoreTestCase m_postgreSQLStore;
#endif
#ifdef HAVE_ODBC
  FIX::OdbcStoreTestCase m_odbcStore;
#endif
  FIX::FileStoreFactoryTestCase m_fileStoreFactory;
  FIX::UtcTimeStampTestCase m_utcTimeStamp;
  FIX::UtcTimeOnlyTestCase m_utcTimeOnly;
  FIX::StringUtilitiesTestCase m_stringUtilities;
  FIX::SocketConnectorTestCase m_socketConnector;
  FIX::SocketServerTestCase m_socketServer;
  FIX::TimeRangeTestCase m_timeRange;
};
