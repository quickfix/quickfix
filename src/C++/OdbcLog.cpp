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

#ifdef HAVE_ODBC

#include "OdbcLog.h"
#include "SessionID.h"
#include "SessionSettings.h"
#include "Utility.h"
#include "strptime.h"
#include <fstream>

namespace FIX
{

const std::string OdbcLogFactory::DEFAULT_USER = "sa";
const std::string OdbcLogFactory::DEFAULT_PASSWORD = "";
const std::string OdbcLogFactory::DEFAULT_CONNECTION_STRING
  = "DATABASE=quickfix;DRIVER={SQL Server};SERVER=(local);";

OdbcLog::OdbcLog
( const SessionID& s, const std::string& user, const std::string& password, 
  const std::string& connectionString )
  : m_sessionID( s )
{
  m_pConnection = new OdbcConnection( user, password, connectionString );
}

OdbcLog::~OdbcLog()
{
  delete m_pConnection;
}

OdbcLogFactory::OdbcLogFactory( const std::string& user, const std::string& password, 
                                const std::string& connectionString )
: m_user( user ), m_password( password ), m_connectionString( connectionString ),
  m_useSettings( false )
{
}

OdbcLogFactory::OdbcLogFactory()
: m_user( DEFAULT_USER ), m_password( DEFAULT_PASSWORD ),
  m_connectionString( DEFAULT_CONNECTION_STRING ), m_useSettings( false )
{
}

OdbcLogFactory::~OdbcLogFactory()
{
}

Log* OdbcLogFactory::create( const SessionID& s )
{ QF_STACK_PUSH(OdbcLogFactory::create)

  std::string user = DEFAULT_USER;
  std::string password = DEFAULT_PASSWORD;
  std::string connectionString = DEFAULT_CONNECTION_STRING;

  if( m_useSettings )
  {
    Dictionary settings = m_settings.get( s );

    try { user = settings.getString( ODBC_LOG_USER ); }
    catch( ConfigError& ) {}

    try { password = settings.getString( ODBC_LOG_PASSWORD ); }
    catch( ConfigError& ) {}

    try { connectionString = settings.getString( ODBC_LOG_CONNECTION_STRING ); }
    catch( ConfigError& ) {}
  }
  else
  {
    user = m_user;
    password = m_password;
    connectionString = m_connectionString;
  }

  return new OdbcLog( s, user, password, connectionString );

  QF_STACK_POP
}

void OdbcLogFactory::destroy( Log* pLog )
{ QF_STACK_PUSH(OdbcLogFactory::destroy)

  delete pLog;

  QF_STACK_POP
}

void OdbcLog::clear()
{ QF_STACK_PUSH(OdbcLog::clear)

  std::stringstream whereClause;
  std::stringstream messagesQuery;
  std::stringstream eventQuery;

  whereClause << "WHERE "
    << "BeginString = '" << m_sessionID.getBeginString().getValue() << "',"
    << "AND SenderCompID = '" << m_sessionID.getSenderCompID().getValue() << "',"
    << "AND TargetCompID = '" << m_sessionID.getTargetCompID().getValue() << "'";

  messagesQuery << "DELETE FROM messages_log " << whereClause.str();
  eventQuery << "DELETE FROM event_log " << whereClause.str();

  OdbcQuery messages( messagesQuery.str() );
  OdbcQuery event( eventQuery.str() );
  m_pConnection->execute( messages );
  m_pConnection->execute( event );
  
  QF_STACK_POP
}

void OdbcLog::insert( const std::string& table, const std::string value )
{ QF_STACK_PUSH(OdbcLog::insert)

  UtcTimeStamp time;
  int year, month, day, hour, minute, second, millis;
  time.getYMD( year, month, day );
  time.getHMS( hour, minute, second, millis );

  char sqlTime[ 20 ];
  STRING_SPRINTF( sqlTime, "%d-%02d-%02d %02d:%02d:%02d",
                  year, month, day, hour, minute, second );

  std::string valueCopy = value;
  string_replace( "\"", "\\\"", valueCopy );

  std::stringstream queryString;
  queryString << "INSERT INTO " << table << " "
  << "(time, beginstring, sendercompid, targetcompid, session_qualifier, text) "
  << "VALUES ("
  << "'" << sqlTime << "',"
  << "'" << m_sessionID.getBeginString().getValue() << "',"
  << "'" << m_sessionID.getSenderCompID().getValue() << "',"
  << "'" << m_sessionID.getTargetCompID().getValue() << "',"
  << "'" << m_sessionID.getSessionQualifier() << "',"
  << "'" << valueCopy << "')";

  OdbcQuery query( queryString.str() );
  m_pConnection->execute( query );

  QF_STACK_POP
}

}

#endif