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

#include "MySQLStore.h"
#include "SessionID.h"
#include "SessionSettings.h"
#include "Parser.h"
#include "Utility.h"
#include <fstream>
#include <mysql.h>
#undef MYSQL_PORT

namespace FIX
{

const std::string MySQLStoreFactory::DEFAULT_DATABASE = "quickfix";
const std::string MySQLStoreFactory::DEFAULT_USER = "root";
const std::string MySQLStoreFactory::DEFAULT_PASSWORD = "";
const std::string MySQLStoreFactory::DEFAULT_HOST = "localhost";
const short MySQLStoreFactory::DEFAULT_PORT = 0;

int safe_query( MYSQL* dbms, const std::string& sql )
{
  int retry = 0;
  int errcode = 0;
  int mysqlerrno = 0;
  std::string errmsg;

  do
  {
    errcode = mysql_query( dbms, sql.c_str() );
    if( errcode == 0 )
      return 0;
    mysqlerrno = mysql_errno( dbms );
    if( errcode != 0 )
    {
      if( !(mysqlerrno == CR_SERVER_GONE_ERROR || mysqlerrno == CR_SERVER_LOST) )
        return errcode;
    }
    ++retry;
  } while( retry <= 1 );
  return errcode;
}

MySQLStore::MySQLStore
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

  populateCache();
}

MySQLStore::~MySQLStore()
{
  MYSQL * pConnection = reinterpret_cast < MYSQL* > ( m_pConnection );
  mysql_close( pConnection );
}

void MySQLStore::populateCache()
{ QF_STACK_PUSH(MySQLStore::populateCache)

  MYSQL * pConnection = reinterpret_cast < MYSQL* > ( m_pConnection );
  std::stringstream query;

  query << "SELECT creation_time, incoming_seqnum, outgoing_seqnum FROM sessions WHERE "
  << "beginstring=" << "\"" << m_sessionID.getBeginString().getValue() << "\" and "
  << "sendercompid=" << "\"" << m_sessionID.getSenderCompID().getValue() << "\" and "
  << "targetcompid=" << "\"" << m_sessionID.getTargetCompID().getValue() << "\" and "
  << "session_qualifier=" << "\"" << m_sessionID.getSessionQualifier() << "\"";

  if ( safe_query( pConnection, query.str() ) )
    throw ConfigError( "Unable to connect to database" );
  MYSQL_RES* result = mysql_store_result( pConnection );
  if ( result )
  {
    my_ulonglong num_rows = mysql_num_rows( result );
    if ( num_rows > 1 )
      throw ConfigError( "Multiple entries found for session in database" );
    if ( num_rows == 1 )
    {
      MYSQL_ROW row = mysql_fetch_row( result );
      UtcTimeStamp time;
      std::string sqlTime = row[ 0 ];
      strptime( sqlTime.c_str(), "%Y-%m-%d %H:%M:%S", time );
      static_cast<tm*>(time)->tm_isdst = -1;
      m_cache.setCreationTime( time );
      m_cache.setNextTargetMsgSeqNum( atol( row[ 1 ] ) );
      m_cache.setNextSenderMsgSeqNum( atol( row[ 2 ] ) );
    }
    else
    {
      UtcTimeStamp time = m_cache.getCreationTime();
      char sqlTime[ 20 ];
      strftime( sqlTime, 20, "%Y-%m-%d %H:%M:%S", ( tm* ) time );
      std::stringstream query2;
      query2 << "INSERT INTO sessions (beginstring, sendercompid, targetcompid, session_qualifier,"
      << "creation_time, incoming_seqnum, outgoing_seqnum) VALUES("
      << "\"" << m_sessionID.getBeginString().getValue() << "\","
      << "\"" << m_sessionID.getSenderCompID().getValue() << "\","
      << "\"" << m_sessionID.getTargetCompID().getValue() << "\","
      << "\"" << m_sessionID.getSessionQualifier() << "\","
      << "'" << sqlTime << "',"
      << m_cache.getNextTargetMsgSeqNum() << ","
      << m_cache.getNextSenderMsgSeqNum() << ")";
      if ( safe_query( pConnection, query2.str() ) )
        throw ConfigError( "Unable to create session in database" );
    }
    mysql_free_result( result );
  }

  QF_STACK_POP
}

MessageStore* MySQLStoreFactory::create( const SessionID& s )
{ QF_STACK_PUSH(MySQLStoreFactory::create)

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

  return new MySQLStore( s, database, user, password, host, port );

  QF_STACK_POP
}

void MySQLStoreFactory::destroy( MessageStore* pStore )
{ QF_STACK_PUSH(MySQLStoreFactory::destroy)
  delete pStore;
  QF_STACK_POP
}

bool MySQLStore::set( int msgSeqNum, const std::string& msg )
throw ( IOException )
{ QF_STACK_PUSH(MySQLStore::set)

  std::string msgCopy = msg;
  string_replace( "\"", "\\\"", msgCopy );

  MYSQL * pConnection = reinterpret_cast < MYSQL* > ( m_pConnection );
  std::stringstream query;
  query << "INSERT INTO messages "
  << "(beginstring, sendercompid, targetcompid, session_qualifier, msgseqnum, message) "
  << "VALUES ("
  << "\"" << m_sessionID.getBeginString().getValue() << "\","
  << "\"" << m_sessionID.getSenderCompID().getValue() << "\","
  << "\"" << m_sessionID.getTargetCompID().getValue() << "\","
  << "\"" << m_sessionID.getSessionQualifier() << "\","
  << msgSeqNum << ","
  << "\"" << msgCopy << "\")";

  if ( safe_query( pConnection, query.str() ) )
  {
    std::stringstream query2;
    query2 << "UPDATE messages SET message=\"" << msg << "\" WHERE "
    << "beginstring=" << "\"" << m_sessionID.getBeginString().getValue() << "\" and "
    << "sendercompid=" << "\"" << m_sessionID.getSenderCompID().getValue() << "\" and "
    << "targetcompid=" << "\"" << m_sessionID.getTargetCompID().getValue() << "\" and "
    << "session_qualifier=" << "\"" << m_sessionID.getSessionQualifier() << "\" and "
    << "msgseqnum=" << msgSeqNum;
    if ( safe_query( pConnection, query2.str() ) )
      throw IOException();
  }
  return true;

  QF_STACK_POP
}

bool MySQLStore::get( int msgSeqNum, std::string& msg ) const
throw ( IOException )
{ QF_STACK_PUSH(MySQLStore::get)

  MYSQL * pConnection = reinterpret_cast < MYSQL* > ( m_pConnection );
  std::stringstream query;
  query << "SELECT message FROM messages WHERE "
  << "beginstring=" << "\"" << m_sessionID.getBeginString().getValue() << "\" and "
  << "sendercompid=" << "\"" << m_sessionID.getSenderCompID().getValue() << "\" and "
  << "targetcompid=" << "\"" << m_sessionID.getTargetCompID().getValue() << "\" and "
  << "session_qualifier=" << "\"" << m_sessionID.getSessionQualifier() << "\" and "
  << "msgseqnum=" << msgSeqNum;

  if ( safe_query( pConnection, query.str() ) )
    throw IOException();
  MYSQL_RES* result = mysql_store_result( pConnection );
  if ( mysql_num_rows( result ) != 1 ) return false;
  MYSQL_ROW row = mysql_fetch_row( result );
  msg = row[ 0 ];
  mysql_free_result( result );
  return true;

  QF_STACK_POP
}

void MySQLStore::get( int begin, int end,
                      std::vector < std::string > & result ) const
throw ( IOException )
{ QF_STACK_PUSH(MySQLStore::get)

  result.clear();
  MYSQL* pConnection = reinterpret_cast < MYSQL* > ( m_pConnection );
  std::stringstream query;
  query << "SELECT message FROM messages WHERE "
  << "beginstring=" << "\"" << m_sessionID.getBeginString().getValue() << "\" and "
  << "sendercompid=" << "\"" << m_sessionID.getSenderCompID().getValue() << "\" and "
  << "targetcompid=" << "\"" << m_sessionID.getTargetCompID().getValue() << "\" and "
  << "session_qualifier=" << "\"" << m_sessionID.getSessionQualifier() << "\" and "
  << "msgseqnum>=" << begin << " and " << "msgseqnum<=" << end << " "
  << "ORDER BY msgseqnum";

  if ( safe_query( pConnection, query.str() ) )
    throw IOException();

  MYSQL_RES* sqlResult = mysql_store_result( pConnection );

  while ( MYSQL_ROW row = mysql_fetch_row( sqlResult ) )
    result.push_back( row[ 0 ] );
  mysql_free_result( sqlResult );
  QF_STACK_POP
}

int MySQLStore::getNextSenderMsgSeqNum() const throw ( IOException )
{ QF_STACK_PUSH(MySQLStore::getNextSenderMsgSeqNum)
  return m_cache.getNextSenderMsgSeqNum();
  QF_STACK_POP
}

int MySQLStore::getNextTargetMsgSeqNum() const throw ( IOException )
{ QF_STACK_PUSH(MySQLStore::getNextTargetMsgSeqNum)
  return m_cache.getNextTargetMsgSeqNum();
  QF_STACK_POP
}

void MySQLStore::setNextSenderMsgSeqNum( int value ) throw ( IOException )
{ QF_STACK_PUSH(MySQLStore::setNextSenderMsgSeqNum)

  MYSQL * pConnection = reinterpret_cast < MYSQL* > ( m_pConnection );
  std::stringstream query;
  query << "UPDATE sessions SET outgoing_seqnum=" << value << " WHERE "
  << "beginstring=" << "\"" << m_sessionID.getBeginString().getValue() << "\" and "
  << "sendercompid=" << "\"" << m_sessionID.getSenderCompID().getValue() << "\" and "
  << "targetcompid=" << "\"" << m_sessionID.getTargetCompID().getValue() << "\" and "
  << "session_qualifier=" << "\"" << m_sessionID.getSessionQualifier() << "\"";
  if ( safe_query( pConnection, query.str() ) )
    throw IOException();
  m_cache.setNextSenderMsgSeqNum( value );

  QF_STACK_POP
}

void MySQLStore::setNextTargetMsgSeqNum( int value ) throw ( IOException )
{ QF_STACK_PUSH(MySQLStore::setNextTargetMsgSeqNum)

  MYSQL * pConnection = reinterpret_cast < MYSQL* > ( m_pConnection );
  std::stringstream query;
  query << "UPDATE sessions SET incoming_seqnum=" << value << " WHERE "
  << "beginstring=" << "\"" << m_sessionID.getBeginString().getValue() << "\" and "
  << "sendercompid=" << "\"" << m_sessionID.getSenderCompID().getValue() << "\" and "
  << "targetcompid=" << "\"" << m_sessionID.getTargetCompID().getValue() << "\" and "
  << "session_qualifier=" << "\"" << m_sessionID.getSessionQualifier() << "\"";
  if ( safe_query( pConnection, query.str() ) )
    throw IOException();
  m_cache.setNextTargetMsgSeqNum( value );

  QF_STACK_POP
}

void MySQLStore::incrNextSenderMsgSeqNum() throw ( IOException )
{ QF_STACK_PUSH(MySQLStore::incrNextSenderMsgSeqNum)
  m_cache.incrNextSenderMsgSeqNum();
  setNextSenderMsgSeqNum( m_cache.getNextSenderMsgSeqNum() );
  QF_STACK_POP
}

void MySQLStore::incrNextTargetMsgSeqNum() throw ( IOException )
{ QF_STACK_PUSH(MySQLStore::incrNextTargetMsgSeqNum)
  m_cache.incrNextTargetMsgSeqNum();
  setNextTargetMsgSeqNum( m_cache.getNextTargetMsgSeqNum() );
  QF_STACK_POP
}

UtcTimeStamp MySQLStore::getCreationTime() const throw ( IOException )
{ QF_STACK_PUSH(MySQLStore::getCreationTime)
  return m_cache.getCreationTime();
  QF_STACK_POP
}

void MySQLStore::reset() throw ( IOException )
{ QF_STACK_PUSH(MySQLStore::reset)

  MYSQL * pConnection = reinterpret_cast < MYSQL* > ( m_pConnection );
  std::stringstream query;
  query << "DELETE FROM messages WHERE "
  << "beginstring=" << "\"" << m_sessionID.getBeginString().getValue() << "\" and "
  << "sendercompid=" << "\"" << m_sessionID.getSenderCompID().getValue() << "\" and "
  << "targetcompid=" << "\"" << m_sessionID.getTargetCompID().getValue() << "\" and "
  << "session_qualifier=" << "\"" << m_sessionID.getSessionQualifier() << "\"";
  if ( safe_query( pConnection, query.str() ) )
    throw IOException();

  m_cache.reset();
  UtcTimeStamp time = m_cache.getCreationTime();
  char sqlTime[ 20 ];
  strftime( sqlTime, 20, "%Y-%m-%d %H:%M:%S", ( tm* ) time );

  std::stringstream query2;
  query2 << "UPDATE sessions SET creation_time='" << sqlTime << "', "
  << "incoming_seqnum=" << m_cache.getNextTargetMsgSeqNum() << ", "
  << "outgoing_seqnum=" << m_cache.getNextSenderMsgSeqNum() << " WHERE "
  << "beginstring=" << "\"" << m_sessionID.getBeginString().getValue() << "\" and "
  << "sendercompid=" << "\"" << m_sessionID.getSenderCompID().getValue() << "\" and "
  << "targetcompid=" << "\"" << m_sessionID.getTargetCompID().getValue() << "\" and "
  << "session_qualifier=" << "\"" << m_sessionID.getSessionQualifier() << "\"";
  if ( safe_query( pConnection, query2.str() ) )
    throw IOException();

  QF_STACK_POP
}
} //namespace FIX

#endif //HAVE_MYSQL
