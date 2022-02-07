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

#ifndef SQLLEN
#define SQLLEN SQLINTEGER
#endif

#include "OdbcStore.h"
#include "SessionID.h"
#include "SessionSettings.h"
#include "FieldConvertors.h"
#include "Parser.h"
#include "Utility.h"
#include "strptime.h"
#include <fstream>

namespace FIX
{

const std::string OdbcStoreFactory::DEFAULT_USER = "sa";
const std::string OdbcStoreFactory::DEFAULT_PASSWORD = "";
const std::string OdbcStoreFactory::DEFAULT_CONNECTION_STRING 
  = "DATABASE=quickfix;DRIVER={SQL Server};SERVER=(local);";

OdbcStore::OdbcStore
( const SessionID& s, const std::string& user, const std::string& password, 
  const std::string& connectionString )
  : m_sessionID( s )
{
  m_pConnection = new OdbcConnection( user, password, connectionString );
  populateCache();
}

OdbcStore::~OdbcStore()
{
  delete m_pConnection;
}

void OdbcStore::populateCache()
{
  std::stringstream queryString;

  queryString << "SELECT creation_time, incoming_seqnum, outgoing_seqnum FROM sessions WHERE "
  << "beginstring=" << "'" << m_sessionID.getBeginString().getValue() << "' and "
  << "sendercompid=" << "'" << m_sessionID.getSenderCompID().getValue() << "' and "
  << "targetcompid=" << "'" << m_sessionID.getTargetCompID().getValue() << "' and "
  << "session_qualifier=" << "'" << m_sessionID.getSessionQualifier() << "'";

  OdbcQuery query( queryString.str() );

  if( !m_pConnection->execute(query) )
    throw ConfigError( "Unable to connect to database" );
  
  int rows = 0;
  while( query.fetch() )
  {
    rows++;
    if( rows > 1 )
      throw ConfigError( "Multiple entries found for session in database" );

    SQL_TIMESTAMP_STRUCT creationTime;  
    SQLLEN creationTimeLength;
    SQLGetData( query.statement(), 1, SQL_C_TYPE_TIMESTAMP, &creationTime, 0, &creationTimeLength );
    SQLLEN incomingSeqNum;
    SQLLEN incomingSeqNumLength;
    SQLGetData( query.statement(), 2, SQL_C_SLONG, &incomingSeqNum, 0, &incomingSeqNumLength );

    SQLLEN outgoingSeqNum;
    SQLLEN outgoingSeqNumLength;
    SQLGetData( query.statement(), 3, SQL_C_SLONG, &outgoingSeqNum, 0, &outgoingSeqNumLength );

    UtcTimeStamp time;
    time.setYMD( creationTime.year, creationTime.month, creationTime.day );
    time.setHMS( creationTime.hour, creationTime.minute, creationTime.second, creationTime.fraction );
    m_cache.setCreationTime( time );
    m_cache.setNextTargetMsgSeqNum( incomingSeqNum );
    m_cache.setNextSenderMsgSeqNum( outgoingSeqNum );
  }
  query.close();

  if( rows == 0 )
  {
    UtcTimeStamp time = m_cache.getCreationTime();
    char sqlTime[ 20 ];
    int year, month, day, hour, minute, second, millis;
    time.getYMD (year, month, day);
    time.getHMS (hour, minute, second, millis);
    STRING_SPRINTF (sqlTime, "%d-%02d-%02d %02d:%02d:%02d",
             year, month, day, hour, minute, second);
    std::stringstream queryString2;
    queryString2 << "INSERT INTO sessions (beginstring, sendercompid, targetcompid, session_qualifier,"
    << "creation_time, incoming_seqnum, outgoing_seqnum) VALUES("
    << "'" << m_sessionID.getBeginString().getValue() << "',"
    << "'" << m_sessionID.getSenderCompID().getValue() << "',"
    << "'" << m_sessionID.getTargetCompID().getValue() << "',"
    << "'" << m_sessionID.getSessionQualifier() << "',"
    << "{ts '" << sqlTime << "'},"
    << m_cache.getNextTargetMsgSeqNum() << ","
    << m_cache.getNextSenderMsgSeqNum() << ")";

    OdbcQuery query2( queryString2.str() );
    if( !m_pConnection->execute(query2) )
      throw ConfigError( "Unable to create session in database" );
  }
}

MessageStore* OdbcStoreFactory::create( const SessionID& s )
{
  if( m_useSettings )
    return create( s, m_settings.get(s) );
  else if( m_useDictionary )
    return create( s, m_dictionary );
  else
    return new OdbcStore( s, m_user, m_password, m_connectionString );
}

void OdbcStoreFactory::destroy( MessageStore* pStore )
{
  delete pStore;
}

MessageStore* OdbcStoreFactory::create( const SessionID& s, const Dictionary& settings )
{
  std::string user = DEFAULT_USER;
  std::string password = DEFAULT_PASSWORD;
  std::string connectionString = DEFAULT_CONNECTION_STRING;

  try { user = settings.getString( ODBC_STORE_USER ); }
  catch( ConfigError& ) {}

  try { password = settings.getString( ODBC_STORE_PASSWORD ); }
  catch( ConfigError& ) {}

  try { connectionString = settings.getString( ODBC_STORE_CONNECTION_STRING ); }
  catch( ConfigError& ) {}

  return new OdbcStore( s, user, password, connectionString );
}

bool OdbcStore::set( int msgSeqNum, const std::string& msg )
EXCEPT ( IOException )
{
  std::string msgCopy = msg;
  string_replace( "'", "''", msgCopy );

  std::stringstream queryString;
  queryString << "INSERT INTO messages "
  << "(beginstring, sendercompid, targetcompid, session_qualifier, msgseqnum, message) "
  << "VALUES ("
  << "'" << m_sessionID.getBeginString().getValue() << "',"
  << "'" << m_sessionID.getSenderCompID().getValue() << "',"
  << "'" << m_sessionID.getTargetCompID().getValue() << "',"
  << "'" << m_sessionID.getSessionQualifier() << "',"
  << msgSeqNum << ","
  << "'" << msgCopy << "')";

  OdbcQuery query( queryString.str() );
  if( !m_pConnection->execute(query) )
  {
    query.close();
    std::stringstream queryString2;
    queryString2 << "UPDATE messages SET message='" << msgCopy << "' WHERE "
    << "beginstring=" << "'" << m_sessionID.getBeginString().getValue() << "' and "
    << "sendercompid=" << "'" << m_sessionID.getSenderCompID().getValue() << "' and "
    << "targetcompid=" << "'" << m_sessionID.getTargetCompID().getValue() << "' and "
    << "session_qualifier=" << "'" << m_sessionID.getSessionQualifier() << "' and "
    << "msgseqnum=" << msgSeqNum;
    OdbcQuery query2( queryString2.str() );
    if( !m_pConnection->execute(query2) )
      query2.throwException();
  }
  return true;
}

void OdbcStore::get( int begin, int end,
                    std::vector < std::string > & result ) const
EXCEPT ( IOException )
{
  result.clear();
  std::stringstream queryString;
  queryString << "SELECT message FROM messages WHERE "
  << "beginstring=" << "'" << m_sessionID.getBeginString().getValue() << "' and "
  << "sendercompid=" << "'" << m_sessionID.getSenderCompID().getValue() << "' and "
  << "targetcompid=" << "'" << m_sessionID.getTargetCompID().getValue() << "' and "
  << "session_qualifier=" << "'" << m_sessionID.getSessionQualifier() << "' and "
  << "msgseqnum>=" << begin << " and " << "msgseqnum<=" << end << " "
  << "ORDER BY msgseqnum";

  OdbcQuery query( queryString.str() );

  if( !m_pConnection->execute(query) )
    query.throwException();

  while( query.fetch() )
  {
    std::string message;
    SQLVARCHAR messageBuffer[4096];
    SQLLEN messageLength;

    while( odbcSuccess(SQLGetData( query.statement(), 1, SQL_C_CHAR, &messageBuffer, 4095, &messageLength)) )
    {  
      messageBuffer[messageLength] = 0;
      message += (char*)messageBuffer;
    }

    result.push_back( message );
  }
}

int OdbcStore::getNextSenderMsgSeqNum() const EXCEPT ( IOException )
{
  return m_cache.getNextSenderMsgSeqNum();
}

int OdbcStore::getNextTargetMsgSeqNum() const EXCEPT ( IOException )
{
  return m_cache.getNextTargetMsgSeqNum();
}

void OdbcStore::setNextSenderMsgSeqNum( int value ) EXCEPT ( IOException )
{
  std::stringstream queryString;
  queryString << "UPDATE sessions SET outgoing_seqnum=" << value << " WHERE "
  << "beginstring=" << "'" << m_sessionID.getBeginString().getValue() << "' and "
  << "sendercompid=" << "'" << m_sessionID.getSenderCompID().getValue() << "' and "
  << "targetcompid=" << "'" << m_sessionID.getTargetCompID().getValue() << "' and "
  << "session_qualifier=" << "'" << m_sessionID.getSessionQualifier() << "'";
  OdbcQuery query( queryString.str() );
  if( !m_pConnection->execute(query) )
    query.throwException();
  m_cache.setNextSenderMsgSeqNum( value );
}

void OdbcStore::setNextTargetMsgSeqNum( int value ) EXCEPT ( IOException )
{
  std::stringstream queryString;
  queryString << "UPDATE sessions SET incoming_seqnum=" << value << " WHERE "
  << "beginstring=" << "'" << m_sessionID.getBeginString().getValue() << "' and "
  << "sendercompid=" << "'" << m_sessionID.getSenderCompID().getValue() << "' and "
  << "targetcompid=" << "'" << m_sessionID.getTargetCompID().getValue() << "' and "
  << "session_qualifier=" << "'" << m_sessionID.getSessionQualifier() << "'";

  OdbcQuery query( queryString.str() );
  if( !m_pConnection->execute(query) )
    query.throwException();

  m_cache.setNextTargetMsgSeqNum( value );
}

void OdbcStore::incrNextSenderMsgSeqNum() EXCEPT ( IOException )
{
  m_cache.incrNextSenderMsgSeqNum();
  setNextSenderMsgSeqNum( m_cache.getNextSenderMsgSeqNum() );
}

void OdbcStore::incrNextTargetMsgSeqNum() EXCEPT ( IOException )
{
  m_cache.incrNextTargetMsgSeqNum();
  setNextTargetMsgSeqNum( m_cache.getNextTargetMsgSeqNum() );
}

UtcTimeStamp OdbcStore::getCreationTime() const EXCEPT ( IOException )
{
  return m_cache.getCreationTime();
}

void OdbcStore::reset() EXCEPT ( IOException )
{
  std::stringstream queryString;
  queryString << "DELETE FROM messages WHERE "
  << "beginstring=" << "'" << m_sessionID.getBeginString().getValue() << "' and "
  << "sendercompid=" << "'" << m_sessionID.getSenderCompID().getValue() << "' and "
  << "targetcompid=" << "'" << m_sessionID.getTargetCompID().getValue() << "' and "
  << "session_qualifier=" << "'" << m_sessionID.getSessionQualifier() << "'";

  OdbcQuery query( queryString.str() );
  if( !m_pConnection->execute(query) )
    query.throwException();
  query.close();

  m_cache.reset();
  UtcTimeStamp time = m_cache.getCreationTime();

  int year, month, day, hour, minute, second, millis;
  time.getYMD( year, month, day );
  time.getHMS( hour, minute, second, millis );

  char sqlTime[ 20 ];
  STRING_SPRINTF( sqlTime, "%d-%02d-%02d %02d:%02d:%02d",
           year, month, day, hour, minute, second );

  std::stringstream queryString2;
  queryString2 << "UPDATE sessions SET creation_time={ts '" << sqlTime << "'}, "
  << "incoming_seqnum=" << m_cache.getNextTargetMsgSeqNum() << ", "
  << "outgoing_seqnum=" << m_cache.getNextSenderMsgSeqNum() << " WHERE "
  << "beginstring=" << "'" << m_sessionID.getBeginString().getValue() << "' and "
  << "sendercompid=" << "'" << m_sessionID.getSenderCompID().getValue() << "' and "
  << "targetcompid=" << "'" << m_sessionID.getTargetCompID().getValue() << "' and "
  << "session_qualifier=" << "'" << m_sessionID.getSessionQualifier() << "'";

  OdbcQuery query2( queryString2.str() );
  if( !m_pConnection->execute(query2) )
    query2.throwException();
}

void OdbcStore::refresh() EXCEPT ( IOException )
{
  m_cache.reset();
  populateCache(); 
}

}

#endif
