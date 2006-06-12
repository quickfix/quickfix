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

#ifdef HAVE_MSSQL

#include "MSSQLLog.h"
#include "SessionID.h"
#include "SessionSettings.h"
#include "Utility.h"
#include "strptime.h"
#include <fstream>
#define DBNTWIN32
#include <sqlfront.h>
#include <sqldb.h>

namespace FIX
{

const std::string MSSQLLogFactory::DEFAULT_DATABASE = "quickfix";
const std::string MSSQLLogFactory::DEFAULT_USER = "sa";
const std::string MSSQLLogFactory::DEFAULT_PASSWORD = "";
const std::string MSSQLLogFactory::DEFAULT_HOST = "localhost";

MSSQLLog::MSSQLLog
( const SessionID& s, const std::string& database, const std::string& user,
  const std::string& password, const std::string& host )
{
  m_pSessionID = new SessionID( s );
  init( database, user, password, host );
}

MSSQLLog::MSSQLLog
( const std::string& database, const std::string& user,
  const std::string& password, const std::string& host )
  : m_pSessionID( 0 )
{
  init( database, user, password, host );
}

void MSSQLLog::init( const std::string& database, const std::string& user,
                     const std::string& password, const std::string& host )
{
  PLOGINREC login = dblogin();
  DBSETLUSER( login, user.c_str() );
  DBSETLPWD( login, password.c_str() );
  DBSETLAPP( login, "quickfix" );

  m_pConnection = dbopen( login, host.c_str() );
  if( m_pConnection == 0 )
    throw ConfigError( "Unable to connect to database" );

  PDBPROCESS* pConnection = reinterpret_cast < PDBPROCESS* > ( m_pConnection );

  dbcmd( pConnection, ("USE " + database).c_str() );
  dbsqlexec( pConnection );
  if( dbresults( pConnection ) != SUCCEED )
    throw ConfigError( "Unable to connect to database" );
}

MSSQLLog::~MSSQLLog()
{
  delete m_pSessionID;
  PDBPROCESS* pConnection = reinterpret_cast < PDBPROCESS* > ( m_pConnection );
  dbclose( pConnection );
}

MSSQLLogFactory::MSSQLLogFactory( const std::string& database, const std::string& user,
                                  const std::string& password, const std::string& host )
: m_database( database ), m_user( user ), m_password( password ), m_host( host ),
  m_useSettings( false )
{
  dbinit();
}

MSSQLLogFactory::MSSQLLogFactory()
: m_database( DEFAULT_DATABASE ), m_user( DEFAULT_USER ), m_password( DEFAULT_PASSWORD ),
  m_host( DEFAULT_HOST ), m_useSettings( false )
{
  dbinit();
}

MSSQLLogFactory::~MSSQLLogFactory()
{
  dbexit();
}

Log* MSSQLLogFactory::create()
{ QF_STACK_PUSH(MSSQLLogFactory::create)

  std::string database;
  std::string user;
  std::string password;
  std::string host;

  init( m_settings.get(), database, user, password, host );
  return new MSSQLLog( database, user, password, host );

  QF_STACK_POP
}

Log* MSSQLLogFactory::create( const SessionID& s )
{ QF_STACK_PUSH(MSSQLLogFactory::create)

  std::string database;
  std::string user;
  std::string password;
  std::string host;

  init( m_settings.get(s), database, user, password, host );
  return new MSSQLLog( s, database, user, password, host );

  QF_STACK_POP
}

void MSSQLLogFactory::init( const Dictionary& settings, 
                            std::string& database,
                            std::string& user, 
                            std::string& password,
                            std::string& host )
{ QF_STACK_PUSH(MSSQLLogFactory::init)

  dbinit();

  database = DEFAULT_DATABASE;
  user = DEFAULT_USER;
  password = DEFAULT_PASSWORD;
  host = DEFAULT_HOST;

  if( m_useSettings )
  {
    try { database = settings.getString( MSSQL_LOG_DATABASE ); }
    catch( ConfigError& ) {}

    try { user = settings.getString( MSSQL_LOG_USER ); }
    catch( ConfigError& ) {}

    try { password = settings.getString( MSSQL_LOG_PASSWORD ); }
    catch( ConfigError& ) {}

    try { host = settings.getString( MSSQL_LOG_HOST ); }
    catch( ConfigError& ) {}
  }
  else
  {
    database = m_database;
    user = m_user;
    password = m_password;
    host = m_host;
  }

  QF_STACK_POP
}

void MSSQLLogFactory::destroy( Log* pLog )
{ QF_STACK_PUSH(MSSQLLogFactory::destroy)

  delete pLog;
  dbexit();

  QF_STACK_POP
}

void MSSQLLog::clear()
{ QF_STACK_PUSH(MSSQLLog::clear)

  PDBPROCESS* pConnection = reinterpret_cast < PDBPROCESS* > ( m_pConnection );

  std::stringstream whereClause;
  std::stringstream messagesQuery;
  std::stringstream eventQuery;

  whereClause << "WHERE ";

  if( m_pSessionID )
  {
    whereClause
    << "BeginString = '" << m_pSessionID->getBeginString().getValue() << "' "
    << "AND SenderCompID = '" << m_pSessionID->getSenderCompID().getValue() << "' "
    << "AND TargetCompID = '" << m_pSessionID->getTargetCompID().getValue() << "'";
  }
  else
  {
    whereClause << "BeginString = NULL AND SenderCompID = NULL && TargetCompID = NULL";
  }

  messagesQuery << "DELETE FROM messages_log " << whereClause.str();
  eventQuery << "DELETE FROM event_log " << whereClause.str();

  dbcmd( pConnection, messagesQuery.str().c_str() );
  dbsqlexec( pConnection );
  dbcmd( pConnection, eventQuery.str().c_str() );
  dbsqlexec( pConnection );

  QF_STACK_POP
}

void MSSQLLog::insert( const std::string& table, const std::string value )
{ QF_STACK_PUSH(MSSQLLog::insert)

  UtcTimeStamp time;
  int year, month, day, hour, minute, second, millis;
  time.getYMD( year, month, day );
  time.getHMS( hour, minute, second, millis );

  char sqlTime[ 20 ];
  STRING_SPRINTF( sqlTime, "%d-%02d-%02d %02d:%02d:%02d",
                  year, month, day, hour, minute, second );

  std::string valueCopy = value;
  string_replace( "\"", "\\\"", valueCopy );

  PDBPROCESS* pConnection = reinterpret_cast < PDBPROCESS* > ( m_pConnection );
  
  std::stringstream query;
  query << "INSERT INTO " << table << " "
  << "(time, beginstring, sendercompid, targetcompid, session_qualifier, text) "
  << "VALUES ("
  << "'" << sqlTime << "',";

  if( m_pSessionID )
  {
    query
    << "'" << m_pSessionID->getBeginString().getValue() << "',"
    << "'" << m_pSessionID->getSenderCompID().getValue() << "',"
    << "'" << m_pSessionID->getTargetCompID().getValue() << "',";
    if( m_pSessionID->getSessionQualifier() == "" )
      query << "NULL" << ",";
    else
      query << "'" << m_pSessionID->getSessionQualifier() << "',";
  }
  else
  {
    query << "NULL, NULL, NULL, NULL";
  }

  query << "'" << valueCopy << "')";

  dbcmd( pConnection, query.str().c_str() );
  dbsqlexec( pConnection );
  dbresults( pConnection );

  QF_STACK_POP
}

}

#endif
