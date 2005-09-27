/****************************************************************************
** Copyright (c) 2001-2005 quickfixengine.org  All rights reserved.
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
#include <libpq-fe.h>

namespace FIX
{

const std::string PostgreSQLLogFactory::DEFAULT_DATABASE = "quickfix";
const std::string PostgreSQLLogFactory::DEFAULT_USER = "postgres";
const std::string PostgreSQLLogFactory::DEFAULT_PASSWORD = "";
const std::string PostgreSQLLogFactory::DEFAULT_HOST = "localhost";
const short PostgreSQLLogFactory::DEFAULT_PORT = 0;

PostgreSQLLog::PostgreSQLLog
( const SessionID& s, const std::string& database, const std::string& user,
  const std::string& password, const std::string& host, short port )
  : m_sessionID( s )
{
  m_pConnection = PQsetdbLogin( host.c_str(), port == 0 ? "" : IntConvertor::convert( port ).c_str(),
                                "", "", database.c_str(), user.c_str(), password.c_str() );
  PGconn* pConnection = reinterpret_cast < PGconn* > ( m_pConnection );

   
  if ( PQstatus( pConnection ) != CONNECTION_OK )
  {
    throw ConfigError( "Unable to connect to database" );
  }
}

PostgreSQLLog::~PostgreSQLLog()
{
  PGconn* pConnection = reinterpret_cast <PGconn*>( m_pConnection );
  PQfinish( pConnection );
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

  return new PostgreSQLLog( s, database, user, password, host, port );

  QF_STACK_POP
}

void PostgreSQLLogFactory::destroy( Log* pLog )
{ QF_STACK_PUSH(PostgreSQLLogFactory::destroy)
  delete pLog;
  QF_STACK_POP
}

void PostgreSQLLog::insert( const std::string& table, const std::string value )
{ QF_STACK_PUSH(PostgreSQLLog::insert)

  UtcTimeStamp time;
  int year, month, day, hour, minute, second, millis;
  time.getYMD( year, month, day );
  time.getHMS( hour, minute, second, millis );

  char sqlTime[ 20 ];
  sprintf( sqlTime, "%d-%02d-%02d %02d:%02d:%02d",
           year, month, day, hour, minute, second );

  std::string valueCopy = value;
  string_replace( "\"", "\\\"", valueCopy );

  PGconn* pConnection = reinterpret_cast<PGconn*>( m_pConnection );
  std::stringstream query;
  query << "INSERT INTO " << table << " "
  << "(time, beginstring, sendercompid, targetcompid, session_qualifier, text) "
  << "VALUES ("
  << "'" << sqlTime << "',"
  << "'" << m_sessionID.getBeginString().getValue() << "',"
  << "'" << m_sessionID.getSenderCompID().getValue() << "',"
  << "'" << m_sessionID.getTargetCompID().getValue() << "',";
  if( m_sessionID.getSessionQualifier() == "" )
    query << "NULL" << ",";
  else
    query << "'" << m_sessionID.getSessionQualifier() << "',";
  query << "'" << valueCopy << "')";

  PGresult* result = PQexec( pConnection, query.str().c_str() );
  PQclear( result );

  QF_STACK_POP
}

}

#endif
