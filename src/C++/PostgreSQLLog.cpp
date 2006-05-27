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
#include "stdafx.h"
#else
#include "config.h"
#endif
#include "CallStack.h"

#ifdef HAVE_POSTGRESQL

#include "PostgreSQLLog.h"
#include "SessionID.h"
#include "SessionSettings.h"
#include "Utility.h"
#include "strptime.h"
#include <fstream>

namespace FIX
{

const std::string PostgreSQLLogFactory::DEFAULT_DATABASE = "quickfix";
const std::string PostgreSQLLogFactory::DEFAULT_USER = "postgres";
const std::string PostgreSQLLogFactory::DEFAULT_PASSWORD = "";
const std::string PostgreSQLLogFactory::DEFAULT_HOST = "localhost";
const short PostgreSQLLogFactory::DEFAULT_PORT = 0;

PostgreSQLLog::PostgreSQLLog
( const SessionID& s, const DatabaseConnectionID& d, PostgreSQLConnectionPool* p )
: m_sessionID( s ), m_pConnectionPool( p )
{
  m_pConnection = m_pConnectionPool->create( d );
}

PostgreSQLLog::PostgreSQLLog
( const SessionID& s, const std::string& database, const std::string& user,
  const std::string& password, const std::string& host, short port )
  : m_sessionID( s ), m_pConnectionPool( 0 )
{
  m_pConnection = new PostgreSQLConnection( database, user, password, host, port );
}

PostgreSQLLog::~PostgreSQLLog()
{
  if( m_pConnectionPool )
    m_pConnectionPool->destroy( m_pConnection );
  else
    delete m_pConnection;
}

Log* PostgreSQLLogFactory::create( const SessionID& s )
{ QF_STACK_PUSH(PostgreSQLLogFactory::create)

  std::string database = DEFAULT_DATABASE;
  std::string user = DEFAULT_USER;
  std::string password = DEFAULT_PASSWORD;
  std::string host = DEFAULT_HOST;
  short port = DEFAULT_PORT;

  if( m_useSettings )
  {
    Dictionary settings = m_settings.get( s );

    try { database = settings.getString( POSTGRESQL_LOG_DATABASE ); }
    catch( ConfigError& ) {}

    try { user = settings.getString( POSTGRESQL_LOG_USER ); }
    catch( ConfigError& ) {}

    try { password = settings.getString( POSTGRESQL_LOG_PASSWORD ); }
    catch( ConfigError& ) {}

    try { host = settings.getString( POSTGRESQL_LOG_HOST ); }
    catch( ConfigError& ) {}

    try { port = ( short ) settings.getLong( POSTGRESQL_LOG_PORT ); }
    catch( ConfigError& ) {}
  }
  else
  {
    database = m_database;
    user = m_user;
    password = m_password;
    host = m_host;
    port = m_port;
  }

  DatabaseConnectionID id( database, user, password, host, port );
  return new PostgreSQLLog( s, id, m_connectionPoolPtr.get() );

  QF_STACK_POP
}

void PostgreSQLLogFactory::destroy( Log* pLog )
{ QF_STACK_PUSH(PostgreSQLLogFactory::destroy)
  delete pLog;
  QF_STACK_POP
}

void PostgreSQLLog::clear()
{ QF_STACK_PUSH(PostgreSQLLog::clear)

  std::stringstream whereClause;
  std::stringstream messagesQuery;
  std::stringstream eventQuery;

  whereClause << "WHERE "
    << "BeginString = '" << m_sessionID.getBeginString().getValue() << "' "
    << "AND SenderCompID = '" << m_sessionID.getSenderCompID().getValue() << "' "
    << "AND TargetCompID = '" << m_sessionID.getTargetCompID().getValue() << "'";

  messagesQuery << "DELETE FROM messages_log " << whereClause.str();
  eventQuery << "DELETE FROM event_log " << whereClause.str();

  PostgreSQLQuery messages( messagesQuery.str() );
  PostgreSQLQuery event( eventQuery.str() );
  m_pConnection->execute( messages );
  m_pConnection->execute( event );

  QF_STACK_POP
}

void PostgreSQLLog::insert( const std::string& table, const std::string value )
{ QF_STACK_PUSH(PostgreSQLLog::insert)

  UtcTimeStamp time;
  int year, month, day, hour, minute, second, millis;
  time.getYMD( year, month, day );
  time.getHMS( hour, minute, second, millis );

  char sqlTime[ 20 ];
  STRING_SPRINTF( sqlTime, "%d-%02d-%02d %02d:%02d:%02d",
           year, month, day, hour, minute, second );

  std::string valueCopy = value;
  string_replace( "\"", "\\\"", valueCopy );

  if( !m_pConnection->connected() )
    m_pConnection->reconnect();

  std::stringstream queryString;
  queryString << "INSERT INTO " << table << " "
  << "(time, beginstring, sendercompid, targetcompid, session_qualifier, text) "
  << "VALUES ("
  << "'" << sqlTime << "',"
  << "'" << m_sessionID.getBeginString().getValue() << "',"
  << "'" << m_sessionID.getSenderCompID().getValue() << "',"
  << "'" << m_sessionID.getTargetCompID().getValue() << "',";
  if( m_sessionID.getSessionQualifier() == "" )
    queryString << "NULL" << ",";
  else
    queryString << "'" << m_sessionID.getSessionQualifier() << "',";
  queryString << "'" << valueCopy << "')";

  PostgreSQLQuery query( queryString.str() );
  m_pConnection->execute( query );

  QF_STACK_POP
}

}

#endif
