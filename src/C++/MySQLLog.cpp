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
#include "stdafx.h"
#else
#include "config.h"
#endif
#include "CallStack.h"

#ifdef HAVE_MYSQL

#include "MySQLLog.h"
#include "SessionID.h"
#include "SessionSettings.h"
#include "Utility.h"
#include <fstream>
#include <mysql.h>
#undef MYSQL_PORT

namespace FIX
{

const std::string MySQLLogFactory::DEFAULT_DATABASE = "quickfix";
const std::string MySQLLogFactory::DEFAULT_USER = "root";
const std::string MySQLLogFactory::DEFAULT_PASSWORD = "";
const std::string MySQLLogFactory::DEFAULT_HOST = "localhost";
const short MySQLLogFactory::DEFAULT_PORT = 0;

MySQLLog::MySQLLog
( const SessionID& s, const std::string& database, const std::string& user,
  const std::string& password, const std::string& host, short port )
    : m_sessionID( s )
{
  if ( !( m_pConnection = mysql_init( NULL ) ) )
    throw ConfigError( "Unable to initialize MySQL" );
  MYSQL* pConnection = reinterpret_cast < MYSQL* > ( m_pConnection );
  if ( !mysql_real_connect( pConnection, host.c_str(), user.c_str(), password.c_str(),
                            database.c_str(), port, NULL, 0 ) )
  {
    throw ConfigError( "Unable to connect to database" );
  }
}

MySQLLog::~MySQLLog()
{
  MYSQL * pConnection = reinterpret_cast < MYSQL* > ( m_pConnection );
  mysql_close( pConnection );
}

Log* MySQLLogFactory::create( const SessionID& s )
{ QF_STACK_PUSH(MySQLLogFactory::create)

  std::string database = DEFAULT_DATABASE;
  std::string user = DEFAULT_USER;
  std::string password = DEFAULT_PASSWORD;
  std::string host = DEFAULT_HOST;
  short port = DEFAULT_PORT;

  if ( m_useSettings )
  {
    Dictionary settings = m_settings.get( s );

    try { database = settings.getString( MYSQL_STORE_DATABASE ); }
    catch ( ConfigError& ) {}

    try { user = settings.getString( MYSQL_STORE_USER ); }
    catch ( ConfigError& ) {}

    try { password = settings.getString( MYSQL_STORE_PASSWORD ); }
    catch ( ConfigError& ) {}

    try { host = settings.getString( MYSQL_STORE_HOST ); }
    catch ( ConfigError& ) {}

    try { port = ( short ) settings.getLong( MYSQL_STORE_PORT ); }
    catch ( ConfigError& ) {}
  }
  else
  {
    database = m_database;
    user = m_user;
    password = m_password;
    host = m_host;
    port = m_port;
  }

  return new MySQLLog( s, database, user, password, host, port );

  QF_STACK_POP
}

void MySQLLogFactory::destroy( Log* pLog )
{ QF_STACK_PUSH(MySQLLogFactory::destroy)
  delete pLog;
  QF_STACK_POP
}

void MySQLLog::insert( const std::string& table, const std::string value )
{ QF_STACK_PUSH(MySQLLog::insert)

  UtcTimeStamp time;
  char sqlTime[ 20 ];
  strftime( sqlTime, 20, "%Y-%m-%d %H:%M:%S", ( tm* ) time );

  std::string valueCopy = value;
  string_replace( "\"", "\\\"", valueCopy );

  MYSQL * pConnection = reinterpret_cast < MYSQL* > ( m_pConnection );
  std::stringstream query;
  query << "INSERT INTO " << table << " "
  << "(time, beginstring, sendercompid, targetcompid, text) "
  << "VALUES ("
  << "'" << sqlTime << "',"
  << "\"" << m_sessionID.getBeginString().getValue() << "\","
  << "\"" << m_sessionID.getSenderCompID().getValue() << "\","
  << "\"" << m_sessionID.getTargetCompID().getValue() << "\","
  << "\"" << valueCopy << "\")";

  mysql_query( pConnection, query.str().c_str() );

  QF_STACK_POP
}

} //namespace FIX

#endif //HAVE_MYSQL
