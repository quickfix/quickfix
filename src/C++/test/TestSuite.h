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
#include <AcceptorTestCase.h>
//#include <MessageSortersTestCase.h>
#include <MessagesTestCase.h>
#include <SessionTestCase.h>
#include <SessionSettingsTestCase.h>
#include <ParserTestCase.h>
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
#include <FileUtilitiesTestCase.h>
#include <StringUtilitiesTestCase.h>
#include <SessionIDTestCase.h>
#include <TimeRangeTestCase.h>
#include <SocketConnectorTestCase.h>
#include <SocketServerTestCase.h>
#include <FieldBaseTestCase.h>
#include <HttpParserTestCase.h>
#include <HttpMessageTestCase.h>

class TestSuite : public CPPTest::TestSuite
{
public:
  TestSuite( CPPTest::TestDisplay& display, short port,
             const FIX::SessionSettings& sessionSettings )
: CPPTest::TestSuite( display ),
  m_parser( port ),
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
    add( &m_acceptor );
//    add( &m_messageSorters );
    add( &m_message );
    add( &m_logonParse );
    add( &m_testRequestParse );
    add( &m_resendRequestParse );
    add( &m_rejectParse );
    add( &m_sequenceResetParse );
    add( &m_logoutParse );
    add( &m_newOrderSingleParse );
    add( &m_executionReportParse );
    add( &m_dontKnowTradeParse );
    add( &m_orderCancelReplaceRequestParse );
    add( &m_orderCancelRequestParse );
    add( &m_orderCancelRejectParse );
    add( &m_orderStatusRequestParse );
    add( &m_newOrderListParse );
    add( &m_massQuoteParse );
    add( &m_newOrderCrossParse );
    add( &m_session );
    add( &m_parser );
    add( &m_settings );
    add( &m_sessionSettings );
    add( &m_fileLog );
    add( &m_memoryStore );
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
    add( &m_fileUtilities );
    add( &m_stringUtilities );
#if !defined(__SUNPRO_CC)
    // it was reported this test won't compile under SUNPRO
    // someone please take a look
    add( &m_sessionID );
#endif
    add( &m_timeRange );
    add( &m_socketConnector );
    add( &m_socketServer );
    add( &m_fieldBase );
    add( &m_httpParser );
    add( &m_httpMessage );
  }

  ~TestSuite() { FIX::socket_term(); }

private:

  FIX::AcceptorTestCase m_acceptor;
//  FIX::MessageSortersTestCase m_messageSorters;
  FIX::MessageTestCase m_message;
  FIX::LogonParseTestCase m_logonParse;
  FIX::TestRequestParseTestCase m_testRequestParse;
  FIX::ResendRequestParseTestCase m_resendRequestParse;
  FIX::RejectParseTestCase m_rejectParse;
  FIX::SequenceResetParseTestCase m_sequenceResetParse;
  FIX::LogoutParseTestCase m_logoutParse;
  FIX::NewOrderSingleParseTestCase m_newOrderSingleParse;
  FIX::ExecutionReportParseTestCase m_executionReportParse;
  FIX::DontKnowTradeParseTestCase m_dontKnowTradeParse;
  FIX::OrderCancelReplaceRequestParseTestCase m_orderCancelReplaceRequestParse;
  FIX::OrderCancelRequestParseTestCase m_orderCancelRequestParse;
  FIX::OrderCancelRejectParseTestCase m_orderCancelRejectParse;
  FIX::OrderStatusRequestParseTestCase m_orderStatusRequestParse;
  FIX::NewOrderListParseTestCase m_newOrderListParse;
  FIX::MassQuoteParseTestCase m_massQuoteParse;
  FIX::NewOrderCrossParseTestCase m_newOrderCrossParse;
  FIX::SessionTestCase m_session;
  FIX::ParserTestCase m_parser;
  FIX::SettingsTestCase m_settings;
  FIX::SessionSettingsTestCase m_sessionSettings;
  FIX::FileLogTestCase m_fileLog;
  FIX::MemoryStoreTestCase m_memoryStore;
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
  FIX::FileUtilitiesTestCase m_fileUtilities;
  FIX::StringUtilitiesTestCase m_stringUtilities;
  FIX::SocketConnectorTestCase m_socketConnector;
  FIX::SocketServerTestCase m_socketServer;
#if !defined(__SUNPRO_CC)
  FIX::SessionIDTestCase m_sessionID;
#endif
  FIX::TimeRangeTestCase m_timeRange;
  FIX::FieldBaseTestCase m_fieldBase;
  FIX::HttpParserTestCase m_httpParser;
  FIX::HttpMessageTestCase m_httpMessage;
};
