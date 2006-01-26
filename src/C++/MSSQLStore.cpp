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

#include "MSSQLStore.h"
#include "SessionID.h"
#include "SessionSettings.h"
#include "FieldConvertors.h"
#include "Parser.h"
#include "Utility.h"
#include "strptime.h"
#include <fstream>
#define DBNTWIN32
#include <sqlfront.h>
#include <sqldb.h>

namespace FIX
{

const std::string MSSQLStoreFactory::DEFAULT_DATABASE = "quickfix";
const std::string MSSQLStoreFactory::DEFAULT_USER = "sa";
const std::string MSSQLStoreFactory::DEFAULT_PASSWORD = "";
const std::string MSSQLStoreFactory::DEFAULT_HOST = "localhost";

int safe_query( PDBPROCESS dbms, const std::string& sql )
{
  int retry = 0;
  int errcode = 0;
  int mysqlerrno = 0;
  std::string errmsg;

  do
  {
    dbcmd( dbms, sql.c_str() );
    dbsqlexec( dbms );
    errcode = dbresults( dbms );
    if( errcode == SUCCEED )
      return 0;
    ++retry;
  } while( retry <= 1 );
  return errcode;
}

MSSQLStore::MSSQLStore
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

  populateCache();
}

MSSQLStore::~MSSQLStore()
{
  PDBPROCESS* pConnection = reinterpret_cast < PDBPROCESS* > ( m_pConnection );
  dbclose( pConnection );
}

void MSSQLStore::populateCache()
{ QF_STACK_PUSH(MSSQLStore::populateCache)

  PDBPROCESS* pConnection = reinterpret_cast<PDBPROCESS*>( m_pConnection );
  std::stringstream query;

  query << "SELECT creation_time, incoming_seqnum, outgoing_seqnum FROM sessions WHERE "
  << "beginstring=" << "'" << m_sessionID.getBeginString().getValue() << "' and "
  << "sendercompid=" << "'" << m_sessionID.getSenderCompID().getValue() << "' and "
  << "targetcompid=" << "'" << m_sessionID.getTargetCompID().getValue() << "' and "
  << "session_qualifier=" << "'" << m_sessionID.getSessionQualifier() << "'";

  if ( safe_query( pConnection, query.str() ) )
    throw ConfigError( "Unable to connect to database" );

  int rows = 0;
  while( dbnextrow(pConnection) != NO_MORE_ROWS )
  {
    rows++;
    if( rows > 1 )
      throw ConfigError( "Multiple entries found for session in database" );

    DBDATETIME sqlTime = *(DBDATETIME*)dbdata( pConnection, 1 );
    DBDATEREC sqlTimeRec;
    dbdatecrack( pConnection, &sqlTimeRec, &sqlTime );
    UtcTimeStamp time;
    time.setYMD( sqlTimeRec.year, sqlTimeRec.month, sqlTimeRec.day );
    time.setHMS( sqlTimeRec.hour, sqlTimeRec.minute, sqlTimeRec.second, sqlTimeRec.millisecond );
    m_cache.setCreationTime( time );
    m_cache.setNextTargetMsgSeqNum( *(DBINT*)dbdata( pConnection, 2 ) );
    m_cache.setNextSenderMsgSeqNum( *(DBINT*)dbdata( pConnection, 3 ) );
  }
  if( rows == 0 )
  {
    UtcTimeStamp time = m_cache.getCreationTime();
    char sqlTime[ 20 ];
    int year, month, day, hour, minute, second, millis;
    time.getYMD (year, month, day);
    time.getHMS (hour, minute, second, millis);
    STRING_SPRINTF (sqlTime, "%d-%02d-%02d %02d:%02d:%02d",
             year, month, day, hour, minute, second);
    std::stringstream query2;
    query2 << "INSERT INTO sessions (beginstring, sendercompid, targetcompid, session_qualifier,"
    << "creation_time, incoming_seqnum, outgoing_seqnum) VALUES("
    << "'" << m_sessionID.getBeginString().getValue() << "',"
    << "'" << m_sessionID.getSenderCompID().getValue() << "',"
    << "'" << m_sessionID.getTargetCompID().getValue() << "',"
    << "'" << m_sessionID.getSessionQualifier() << "',"
    << "'" << sqlTime << "',"
    << m_cache.getNextTargetMsgSeqNum() << ","
    << m_cache.getNextSenderMsgSeqNum() << ")";
    if ( safe_query( pConnection, query2.str() ) )
      throw ConfigError( "Unable to create session in database" );
  }

  QF_STACK_POP
}

MessageStore* MSSQLStoreFactory::create( const SessionID& s )
{ QF_STACK_PUSH(MSSQLStoreFactory::create)

  if( m_useSettings )
    return create( s, m_settings.get(s) );
  else if( m_useDictionary )
    return create( s, m_dictionary );
  else
    return new MSSQLStore( s, m_database, m_user, m_password, m_host );

  QF_STACK_POP
}

void MSSQLStoreFactory::destroy( MessageStore* pStore )
{ QF_STACK_PUSH(MSSQLStoreFactory::destroy)
  delete pStore;
  QF_STACK_POP
}

MessageStore* MSSQLStoreFactory::create( const SessionID& s, const Dictionary& settings )
{ QF_STACK_PUSH(MSSQLStoreFactory::create)

  std::string database = DEFAULT_DATABASE;
  std::string user = DEFAULT_USER;
  std::string password = DEFAULT_PASSWORD;
  std::string host = DEFAULT_HOST;

  try { database = settings.getString( MSSQL_STORE_DATABASE ); }
  catch( ConfigError& ) {}

  try { user = settings.getString( MSSQL_STORE_USER ); }
  catch( ConfigError& ) {}

  try { password = settings.getString( MSSQL_STORE_PASSWORD ); }
  catch( ConfigError& ) {}

  try { host = settings.getString( MSSQL_STORE_HOST ); }
  catch( ConfigError& ) {}

  return new MSSQLStore( s, database, user, password, host );

  QF_STACK_POP
}

bool MSSQLStore::set( int msgSeqNum, const std::string& msg )
throw ( IOException )
{ QF_STACK_PUSH(MSSQLStore::set)

  std::string msgCopy = msg;
  string_replace( "\"", "\\\"", msgCopy );

  PDBPROCESS* pConnection = reinterpret_cast<PDBPROCESS*>( m_pConnection );
  std::stringstream query;
  query << "INSERT INTO messages "
  << "(beginstring, sendercompid, targetcompid, session_qualifier, msgseqnum, message) "
  << "VALUES ("
  << "'" << m_sessionID.getBeginString().getValue() << "',"
  << "'" << m_sessionID.getSenderCompID().getValue() << "',"
  << "'" << m_sessionID.getTargetCompID().getValue() << "',"
  << "'" << m_sessionID.getSessionQualifier() << "',"
  << msgSeqNum << ","
  << "'" << msgCopy << "')";

  if ( safe_query( pConnection, query.str() ) )
  {
    std::stringstream query2;
    query2 << "UPDATE messages SET message=\"" << msg << "\" WHERE "
    << "beginstring=" << "'" << m_sessionID.getBeginString().getValue() << "' and "
    << "sendercompid=" << "'" << m_sessionID.getSenderCompID().getValue() << "' and "
    << "targetcompid=" << "'" << m_sessionID.getTargetCompID().getValue() << "' and "
    << "session_qualifier=" << "'" << m_sessionID.getSessionQualifier() << "' and "
    << "msgseqnum=" << msgSeqNum;
    if ( safe_query( pConnection, query2.str() ) )
      throw IOException();
  }
  return true;

  QF_STACK_POP
}

void MSSQLStore::get( int begin, int end,
                      std::vector < std::string > & result ) const
throw ( IOException )
{ QF_STACK_PUSH(MSSQLStore::get)

  result.clear();
  PDBPROCESS* pConnection = reinterpret_cast<PDBPROCESS*>( m_pConnection );
  std::stringstream query;
  query << "SELECT message FROM messages WHERE "
  << "beginstring=" << "'" << m_sessionID.getBeginString().getValue() << "' and "
  << "sendercompid=" << "'" << m_sessionID.getSenderCompID().getValue() << "' and "
  << "targetcompid=" << "'" << m_sessionID.getTargetCompID().getValue() << "' and "
  << "session_qualifier=" << "'" << m_sessionID.getSessionQualifier() << "' and "
  << "msgseqnum>=" << begin << " and " << "msgseqnum<=" << end << " "
  << "ORDER BY msgseqnum";

  if( safe_query( pConnection, query.str() ) )
    throw IOException();

  int messageLength;
  DBVARYCHAR message;
  while( dbnextrow(pConnection) != NO_MORE_ROWS )
  {
    message = *(DBVARYCHAR*)dbdata( pConnection, 1 );
    messageLength = dbdatlen( pConnection, 1 );
    result.push_back( std::string((char*)message.str-2, messageLength) );
  }

  QF_STACK_POP
}

int MSSQLStore::getNextSenderMsgSeqNum() const throw ( IOException )
{ QF_STACK_PUSH(MSSQLStore::getNextSenderMsgSeqNum)
  return m_cache.getNextSenderMsgSeqNum();
  QF_STACK_POP
}

int MSSQLStore::getNextTargetMsgSeqNum() const throw ( IOException )
{ QF_STACK_PUSH(MSSQLStore::getNextTargetMsgSeqNum)
  return m_cache.getNextTargetMsgSeqNum();
  QF_STACK_POP
}

void MSSQLStore::setNextSenderMsgSeqNum( int value ) throw ( IOException )
{ QF_STACK_PUSH(MSSQLStore::setNextSenderMsgSeqNum)

  PDBPROCESS* pConnection = reinterpret_cast<PDBPROCESS*>( m_pConnection );
  std::stringstream query;
  query << "UPDATE sessions SET outgoing_seqnum=" << value << " WHERE "
  << "beginstring=" << "'" << m_sessionID.getBeginString().getValue() << "' and "
  << "sendercompid=" << "'" << m_sessionID.getSenderCompID().getValue() << "' and "
  << "targetcompid=" << "'" << m_sessionID.getTargetCompID().getValue() << "' and "
  << "session_qualifier=" << "'" << m_sessionID.getSessionQualifier() << "'";
  if( safe_query( pConnection, query.str() ) )
    throw IOException();
  m_cache.setNextSenderMsgSeqNum( value );

  QF_STACK_POP
}

void MSSQLStore::setNextTargetMsgSeqNum( int value ) throw ( IOException )
{ QF_STACK_PUSH(MSSQLStore::setNextTargetMsgSeqNum)

  PDBPROCESS* pConnection = reinterpret_cast<PDBPROCESS*>( m_pConnection );
  std::stringstream query;
  query << "UPDATE sessions SET incoming_seqnum=" << value << " WHERE "
  << "beginstring=" << "'" << m_sessionID.getBeginString().getValue() << "' and "
  << "sendercompid=" << "'" << m_sessionID.getSenderCompID().getValue() << "' and "
  << "targetcompid=" << "'" << m_sessionID.getTargetCompID().getValue() << "' and "
  << "session_qualifier=" << "'" << m_sessionID.getSessionQualifier() << "'";
  if( safe_query( pConnection, query.str() ) )
    throw IOException();
  m_cache.setNextTargetMsgSeqNum( value );

  QF_STACK_POP
}

void MSSQLStore::incrNextSenderMsgSeqNum() throw ( IOException )
{ QF_STACK_PUSH(MSSQLStore::incrNextSenderMsgSeqNum)
  m_cache.incrNextSenderMsgSeqNum();
  setNextSenderMsgSeqNum( m_cache.getNextSenderMsgSeqNum() );
  QF_STACK_POP
}

void MSSQLStore::incrNextTargetMsgSeqNum() throw ( IOException )
{ QF_STACK_PUSH(MSSQLStore::incrNextTargetMsgSeqNum)
  m_cache.incrNextTargetMsgSeqNum();
  setNextTargetMsgSeqNum( m_cache.getNextTargetMsgSeqNum() );
  QF_STACK_POP
}

UtcTimeStamp MSSQLStore::getCreationTime() const throw ( IOException )
{ QF_STACK_PUSH(MSSQLStore::getCreationTime)
  return m_cache.getCreationTime();
  QF_STACK_POP
}

void MSSQLStore::reset() throw ( IOException )
{ QF_STACK_PUSH(MSSQLStore::reset)

  PDBPROCESS* pConnection = reinterpret_cast<PDBPROCESS*>( m_pConnection );
  std::stringstream query;
  query << "DELETE FROM messages WHERE "
  << "beginstring=" << "'" << m_sessionID.getBeginString().getValue() << "' and "
  << "sendercompid=" << "'" << m_sessionID.getSenderCompID().getValue() << "' and "
  << "targetcompid=" << "'" << m_sessionID.getTargetCompID().getValue() << "' and "
  << "session_qualifier=" << "'" << m_sessionID.getSessionQualifier() << "'";
  if( safe_query( pConnection, query.str() ) )
    throw IOException();

  m_cache.reset();
  UtcTimeStamp time = m_cache.getCreationTime();

  int year, month, day, hour, minute, second, millis;
  time.getYMD( year, month, day );
  time.getHMS( hour, minute, second, millis );

  char sqlTime[ 20 ];
  STRING_SPRINTF( sqlTime, "%d-%02d-%02d %02d:%02d:%02d",
           year, month, day, hour, minute, second );

  std::stringstream query2;
  query2 << "UPDATE sessions SET creation_time='" << sqlTime << "', "
  << "incoming_seqnum=" << m_cache.getNextTargetMsgSeqNum() << ", "
  << "outgoing_seqnum=" << m_cache.getNextSenderMsgSeqNum() << " WHERE "
  << "beginstring=" << "'" << m_sessionID.getBeginString().getValue() << "' and "
  << "sendercompid=" << "'" << m_sessionID.getSenderCompID().getValue() << "' and "
  << "targetcompid=" << "'" << m_sessionID.getTargetCompID().getValue() << "' and "
  << "session_qualifier=" << "'" << m_sessionID.getSessionQualifier() << "'";
  if( safe_query( pConnection, query2.str() ) )
    throw IOException();

  QF_STACK_POP
}
}

#endif
