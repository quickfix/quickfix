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
  : m_sessionID( s )
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

Log* MSSQLLogFactory::create( const SessionID& s )
{ QF_STACK_PUSH(MSSQLLogFactory::create)

  dbinit();

  std::string database = DEFAULT_DATABASE;
  std::string user = DEFAULT_USER;
  std::string password = DEFAULT_PASSWORD;
  std::string host = DEFAULT_HOST;

  if( m_useSettings )
  {
    Dictionary settings = m_settings.get( s );

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

  return new MSSQLLog( s, database, user, password, host );

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

  dbcmd( pConnection, "DELETE FROM incoming_log" );
  dbsqlexec( pConnection );
  dbcmd( pConnection, "DELETE FROM outgoing_log" );
  dbsqlexec( pConnection );
  dbcmd( pConnection, "DELETE FROM event_log" );
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
  sprintf( sqlTime, "%d-%02d-%02d %02d:%02d:%02d",
           year, month, day, hour, minute, second );

  std::string valueCopy = value;
  string_replace( "\"", "\\\"", valueCopy );

  PDBPROCESS* pConnection = reinterpret_cast < PDBPROCESS* > ( m_pConnection );
  std::stringstream query;
  query << "INSERT INTO " << table << " "
  << "(time, beginstring, sendercompid, targetcompid, session_qualifier, text) "
  << "VALUES ("
  << "'" << sqlTime << "',"
  << "'" << m_sessionID.getBeginString().getValue() << "',"
  << "'" << m_sessionID.getSenderCompID().getValue() << "',"
  << "'" << m_sessionID.getTargetCompID().getValue() << "',"
  << "'" << m_sessionID.getSessionQualifier() << "',"
  << "'" << valueCopy << "')";

  dbcmd( pConnection, query.str().c_str() );
  dbsqlexec( pConnection );
  dbresults( pConnection );

  QF_STACK_POP
}

}

#endif
