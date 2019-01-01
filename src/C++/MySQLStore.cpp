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

#ifdef HAVE_MYSQL

#include "MySQLStore.h"
#include "SessionID.h"
#include "SessionSettings.h"
#include "FieldConvertors.h"
#include "Parser.h"
#include "Utility.h"
#include "strptime.h"
#include <fstream>

namespace FIX
{

const std::string MySQLStoreFactory::DEFAULT_DATABASE = "quickfix";
const std::string MySQLStoreFactory::DEFAULT_USER = "";
const std::string MySQLStoreFactory::DEFAULT_PASSWORD = "";
const std::string MySQLStoreFactory::DEFAULT_HOST = "localhost";
const short MySQLStoreFactory::DEFAULT_PORT = 3306;

MySQLStore::MySQLStore
( const SessionID& s, const DatabaseConnectionID& d, MySQLConnectionPool* p )
  : m_pConnectionPool( p ), m_sessionID( s )
{
  m_pConnection = m_pConnectionPool->create( d );
  populateCache();
}

MySQLStore::MySQLStore
( const SessionID& s, const std::string& database, const std::string& user,
  const std::string& password, const std::string& host, short port )
  : m_pConnectionPool( 0 ), m_sessionID( s )
{
  m_pConnection = new MySQLConnection( database, user, password, host, port );
  populateCache();
}

MySQLStore::~MySQLStore()
{
  if( m_pConnectionPool )
    m_pConnectionPool->destroy( m_pConnection );
  else
    delete m_pConnection;
}

void MySQLStore::populateCache()
{
  std::stringstream queryString;

  queryString << "SELECT creation_time, incoming_seqnum, outgoing_seqnum FROM sessions WHERE "
  << "beginstring=" << "\"" << m_sessionID.getBeginString().getValue() << "\" and "
  << "sendercompid=" << "\"" << m_sessionID.getSenderCompID().getValue() << "\" and "
  << "targetcompid=" << "\"" << m_sessionID.getTargetCompID().getValue() << "\" and "
  << "session_qualifier=" << "\"" << m_sessionID.getSessionQualifier() << "\"";

  MySQLQuery query( queryString.str() );
  if( !m_pConnection->execute(query) )
    throw ConfigError( "No entries found for session in database" );

  int rows = query.rows();
  if( rows > 1 )
    throw ConfigError( "Multiple entries found for session in database" );

  if( rows == 1 )
  {
    struct tm time;
    std::string sqlTime = query.getValue( 0, 0 );
    strptime( sqlTime.c_str(), "%Y-%m-%d %H:%M:%S", &time );
    m_cache.setCreationTime (UtcTimeStamp (&time));
    m_cache.setNextTargetMsgSeqNum( atol( query.getValue( 0, 1 ) ) );
    m_cache.setNextSenderMsgSeqNum( atol( query.getValue( 0, 2 ) ) );
  }
  else
  {
    UtcTimeStamp time = m_cache.getCreationTime();
    char sqlTime[ 20 ];
    int year, month, day, hour, minute, second, millis;
    time.getYMD (year, month, day);
    time.getHMS (hour, minute, second, millis);
    STRING_SPRINTF( sqlTime, "%d-%02d-%02d %02d:%02d:%02d",
             year, month, day, hour, minute, second );
    std::stringstream queryString2;
    queryString2 << "INSERT INTO sessions (beginstring, sendercompid, targetcompid, session_qualifier,"
    << "creation_time, incoming_seqnum, outgoing_seqnum) VALUES("
    << "\"" << m_sessionID.getBeginString().getValue() << "\","
    << "\"" << m_sessionID.getSenderCompID().getValue() << "\","
    << "\"" << m_sessionID.getTargetCompID().getValue() << "\","
    << "\"" << m_sessionID.getSessionQualifier() << "\","
    << "'" << sqlTime << "',"
    << m_cache.getNextTargetMsgSeqNum() << ","
    << m_cache.getNextSenderMsgSeqNum() << ")";

    MySQLQuery query2( queryString2.str() );
    if( !m_pConnection->execute(query2) )
      throw ConfigError( "Unable to create session in database" );
  }
}

MessageStore* MySQLStoreFactory::create( const SessionID& s )
{
  if( m_useSettings )
    return create( s, m_settings.get(s) );
  else if( m_useDictionary )
    return create( s, m_dictionary );
  else
  {
    DatabaseConnectionID id( m_database, m_user, m_password, m_host, m_port );
    return new MySQLStore( s, id, m_connectionPoolPtr.get() );
  }
}

MessageStore* MySQLStoreFactory::create( const SessionID& s, const Dictionary& settings )
{
  std::string database = DEFAULT_DATABASE;
  std::string user = DEFAULT_USER;
  std::string password = DEFAULT_PASSWORD;
  std::string host = DEFAULT_HOST;
  short port = DEFAULT_PORT;

  try { database = settings.getString( MYSQL_STORE_DATABASE ); }
  catch( ConfigError& ) {}

  try { user = settings.getString( MYSQL_STORE_USER ); }
  catch( ConfigError& ) {}

  try { password = settings.getString( MYSQL_STORE_PASSWORD ); }
  catch( ConfigError& ) {}

  try { host = settings.getString( MYSQL_STORE_HOST ); }
  catch( ConfigError& ) {}

  try { port = ( short ) settings.getInt( MYSQL_STORE_PORT ); }
  catch( ConfigError& ) {}

  DatabaseConnectionID id( database, user, password, host, port );
  return new MySQLStore( s, id, m_connectionPoolPtr.get() );
}

void MySQLStoreFactory::destroy( MessageStore* pStore )
{
  delete pStore;
}

bool MySQLStore::set( int msgSeqNum, const std::string& msg )
{
  char* msgCopy = new char[ (msg.size() * 2) + 1 ];
  mysql_escape_string( msgCopy, msg.c_str(), msg.size() );

  std::stringstream queryString;
  queryString << "INSERT INTO messages "
  << "(beginstring, sendercompid, targetcompid, session_qualifier, msgseqnum, message) "
  << "VALUES ("
  << "\"" << m_sessionID.getBeginString().getValue() << "\","
  << "\"" << m_sessionID.getSenderCompID().getValue() << "\","
  << "\"" << m_sessionID.getTargetCompID().getValue() << "\","
  << "\"" << m_sessionID.getSessionQualifier() << "\","
  << msgSeqNum << ","
  << "\"" << msgCopy << "\")";

  delete [] msgCopy;

  MySQLQuery query( queryString.str() );
  if( !m_pConnection->execute(query) )
  {
    std::stringstream queryString2;
    queryString2 << "UPDATE messages SET message=\"" << msg << "\" WHERE "
    << "beginstring=" << "\"" << m_sessionID.getBeginString().getValue() << "\" and "
    << "sendercompid=" << "\"" << m_sessionID.getSenderCompID().getValue() << "\" and "
    << "targetcompid=" << "\"" << m_sessionID.getTargetCompID().getValue() << "\" and "
    << "session_qualifier=" << "\"" << m_sessionID.getSessionQualifier() << "\" and "
    << "msgseqnum=" << msgSeqNum;
    MySQLQuery query2( queryString2.str() );
    if( !m_pConnection->execute(query2) )
      query2.throwException();
  }
  return true;
}

void MySQLStore::get( int begin, int end,
                      std::vector < std::string > & result ) const
{
  result.clear();
  std::stringstream queryString;
  queryString << "SELECT message FROM messages WHERE "
  << "beginstring=" << "\"" << m_sessionID.getBeginString().getValue() << "\" and "
  << "sendercompid=" << "\"" << m_sessionID.getSenderCompID().getValue() << "\" and "
  << "targetcompid=" << "\"" << m_sessionID.getTargetCompID().getValue() << "\" and "
  << "session_qualifier=" << "\"" << m_sessionID.getSessionQualifier() << "\" and "
  << "msgseqnum>=" << begin << " and " << "msgseqnum<=" << end << " "
  << "ORDER BY msgseqnum";

  MySQLQuery query( queryString.str() );
  if( !m_pConnection->execute(query) )
    query.throwException();

  int rows = query.rows();
  for( int row = 0; row < rows; row++ )
    result.push_back( query.getValue( row, 0 ) );
}

int MySQLStore::getNextSenderMsgSeqNum() const
{
  return m_cache.getNextSenderMsgSeqNum();
}

int MySQLStore::getNextTargetMsgSeqNum() const
{
  return m_cache.getNextTargetMsgSeqNum();
}

void MySQLStore::setNextSenderMsgSeqNum( int value )
{
  std::stringstream queryString;
  queryString << "UPDATE sessions SET outgoing_seqnum=" << value << " WHERE "
  << "beginstring=" << "\"" << m_sessionID.getBeginString().getValue() << "\" and "
  << "sendercompid=" << "\"" << m_sessionID.getSenderCompID().getValue() << "\" and "
  << "targetcompid=" << "\"" << m_sessionID.getTargetCompID().getValue() << "\" and "
  << "session_qualifier=" << "\"" << m_sessionID.getSessionQualifier() << "\"";
  MySQLQuery query( queryString.str() );
  if( !m_pConnection->execute(query) )
    query.throwException();
  m_cache.setNextSenderMsgSeqNum( value );
}

void MySQLStore::setNextTargetMsgSeqNum( int value )
{
  std::stringstream queryString;
  queryString << "UPDATE sessions SET incoming_seqnum=" << value << " WHERE "
  << "beginstring=" << "\"" << m_sessionID.getBeginString().getValue() << "\" and "
  << "sendercompid=" << "\"" << m_sessionID.getSenderCompID().getValue() << "\" and "
  << "targetcompid=" << "\"" << m_sessionID.getTargetCompID().getValue() << "\" and "
  << "session_qualifier=" << "\"" << m_sessionID.getSessionQualifier() << "\"";

  MySQLQuery query( queryString.str() );
  if( !m_pConnection->execute(query) )
    query.throwException();

  m_cache.setNextTargetMsgSeqNum( value );
}

void MySQLStore::incrNextSenderMsgSeqNum()
{
  m_cache.incrNextSenderMsgSeqNum();
  setNextSenderMsgSeqNum( m_cache.getNextSenderMsgSeqNum() );
}

void MySQLStore::incrNextTargetMsgSeqNum()
{
  m_cache.incrNextTargetMsgSeqNum();
  setNextTargetMsgSeqNum( m_cache.getNextTargetMsgSeqNum() );
}

UtcTimeStamp MySQLStore::getCreationTime() const
{
  return m_cache.getCreationTime();
}

void MySQLStore::reset()
{
  std::stringstream queryString;
  queryString << "DELETE FROM messages WHERE "
  << "beginstring=" << "\"" << m_sessionID.getBeginString().getValue() << "\" and "
  << "sendercompid=" << "\"" << m_sessionID.getSenderCompID().getValue() << "\" and "
  << "targetcompid=" << "\"" << m_sessionID.getTargetCompID().getValue() << "\" and "
  << "session_qualifier=" << "\"" << m_sessionID.getSessionQualifier() << "\"";

  MySQLQuery query( queryString.str() );
  if( !m_pConnection->execute(query) )
    query.throwException();

  m_cache.reset();
  UtcTimeStamp time = m_cache.getCreationTime();

  int year, month, day, hour, minute, second, millis;
  time.getYMD( year, month, day );
  time.getHMS( hour, minute, second, millis );

  char sqlTime[ 20 ];
  STRING_SPRINTF( sqlTime, "%d-%02d-%02d %02d:%02d:%02d",
           year, month, day, hour, minute, second );

  std::stringstream queryString2;
  queryString2 << "UPDATE sessions SET creation_time='" << sqlTime << "', "
  << "incoming_seqnum=" << m_cache.getNextTargetMsgSeqNum() << ", "
  << "outgoing_seqnum=" << m_cache.getNextSenderMsgSeqNum() << " WHERE "
  << "beginstring=" << "\"" << m_sessionID.getBeginString().getValue() << "\" and "
  << "sendercompid=" << "\"" << m_sessionID.getSenderCompID().getValue() << "\" and "
  << "targetcompid=" << "\"" << m_sessionID.getTargetCompID().getValue() << "\" and "
  << "session_qualifier=" << "\"" << m_sessionID.getSessionQualifier() << "\"";

  MySQLQuery query2( queryString2.str() );
  if( !m_pConnection->execute(query2) )
    query2.throwException();
}

void MySQLStore::refresh()
{
  m_cache.reset();
  populateCache(); 
}

}

#endif
