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
#include "stdafx.h"
#else
#include "config.h"
#endif

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
{
  init();
  m_pSessionID = new SessionID( s );
  m_pConnection = new OdbcConnection( user, password, connectionString );
}

OdbcLog::OdbcLog
( const std::string& user, const std::string& password, 
  const std::string& connectionString )
: m_pSessionID( 0 )
{
  init();
  m_pConnection = new OdbcConnection( user, password, connectionString );
}

void OdbcLog::init()
{
  setIncomingTable( "messages_log" );
  setOutgoingTable( "messages_log" );
  setEventTable( "event_log" );
}

OdbcLog::~OdbcLog()
{
  delete m_pSessionID;
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

Log* OdbcLogFactory::create()
{
  std::string database;
  std::string user;
  std::string connectionString;

  init( m_settings.get(), database, user, connectionString );
  OdbcLog* result = new OdbcLog( database, user, connectionString );
  initLog( m_settings.get(), *result );
  return result;
}

Log* OdbcLogFactory::create( const SessionID& s )
{
  std::string database;
  std::string user;
  std::string connectionString;

  Dictionary settings;
  if( m_settings.has(s) ) 
    settings = m_settings.get( s );

  init( settings, database, user, connectionString );
  OdbcLog* result = new OdbcLog( s, database, user, connectionString );
  initLog( settings, *result );
  return result;
}

void OdbcLogFactory::init( const Dictionary& settings, 
                           std::string& user,
                           std::string& password, 
                           std::string& connectionString )
{
  user = DEFAULT_USER;
  password = DEFAULT_PASSWORD;
  connectionString = DEFAULT_CONNECTION_STRING;

  if( m_useSettings )
  {
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
}

void OdbcLogFactory::initLog( const Dictionary& settings, OdbcLog& log )
{
  try { log.setIncomingTable( settings.getString( ODBC_LOG_INCOMING_TABLE ) ); }
  catch( ConfigError& ) {}

  try { log.setOutgoingTable( settings.getString( ODBC_LOG_OUTGOING_TABLE ) ); }
  catch( ConfigError& ) {}

  try { log.setEventTable( settings.getString( ODBC_LOG_EVENT_TABLE ) ); }
  catch( ConfigError& ) {}
}

void OdbcLogFactory::destroy( Log* pLog )
{
  delete pLog;
}

void OdbcLog::clear()
{
  std::stringstream whereClause;

  whereClause << "WHERE ";

  if( m_pSessionID )
  {
    whereClause
    << "BeginString = '" << m_pSessionID->getBeginString().getValue() << "' "
    << "AND SenderCompID = '" << m_pSessionID->getSenderCompID().getValue() << "' "
    << "AND TargetCompID = '" << m_pSessionID->getTargetCompID().getValue() << "' ";

    if( m_pSessionID->getSessionQualifier().size() )
      whereClause << "AND SessionQualifier = '" << m_pSessionID->getSessionQualifier() << "'";
  }
  else
  {
    whereClause << "BeginString = NULL AND SenderCompID = NULL && TargetCompID = NULL";
  }

  std::stringstream incomingQuery;
  std::stringstream outgoingQuery;
  std::stringstream eventQuery;

  incomingQuery 
    << "DELETE FROM " << m_incomingTable << " " << whereClause.str();
  outgoingQuery 
    << "DELETE FROM " << m_outgoingTable << " " << whereClause.str();
  eventQuery 
    << "DELETE FROM " << m_eventTable << " " << whereClause.str();

  OdbcQuery incoming( incomingQuery.str() );
  OdbcQuery outgoing( outgoingQuery.str() );
  OdbcQuery event( eventQuery.str() );
  m_pConnection->execute( incoming );
  m_pConnection->execute( outgoing );
  m_pConnection->execute( event );
}

void OdbcLog::backup()
{
}

void OdbcLog::insert( const std::string& table, const std::string value )
{
  UtcTimeStamp time;
  int year, month, day, hour, minute, second, millis;
  time.getYMD( year, month, day );
  time.getHMS( hour, minute, second, millis );

  char sqlTime[ 24 ];
  STRING_SPRINTF( sqlTime, "%d-%02d-%02d %02d:%02d:%02d.%003d",
                  year, month, day, hour, minute, second, millis );

  std::string valueCopy = value;
  string_replace( "'", "''", valueCopy );

  std::stringstream queryString;
  queryString << "INSERT INTO " << table << " "
  << "(time, beginstring, sendercompid, targetcompid, session_qualifier, text) "
  << "VALUES ("
  << "{ts '" << sqlTime << "'},";

  if( m_pSessionID )
  {
    queryString
    << "'" << m_pSessionID->getBeginString().getValue() << "',"
    << "'" << m_pSessionID->getSenderCompID().getValue() << "',"
    << "'" << m_pSessionID->getTargetCompID().getValue() << "',";
    if( m_pSessionID->getSessionQualifier() == "" )
      queryString << "NULL" << ",";
    else
      queryString << "'" << m_pSessionID->getSessionQualifier() << "',";
  }
  else
  {
    queryString << "NULL, NULL, NULL, NULL, ";
  }

  queryString << "'" << valueCopy << "')";

  OdbcQuery query( queryString.str() );
  m_pConnection->execute( query );
}

}

#endif
