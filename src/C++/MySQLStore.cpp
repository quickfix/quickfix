/* ====================================================================
* The QuickFIX Software License, Version 1.0
*
* Copyright (c) 2001 ThoughtWorks, Inc.  All rights
* reserved.
*
* Redistribution and use in source and binary forms, with or without
* modification, are permitted provided that the following conditions
* are met:
*
* 1. Redistributions of source code must retain the above copyright
*    notice, this list of conditions and the following disclaimer.
*
* 2. Redistributions in binary form must reproduce the above copyright
*    notice, this list of conditions and the following disclaimer in
*    the documentation and/or other materials provided with the
*    distribution.
*
* 3. The end-user documentation included with the redistribution,
*    if any, must include the following acknowledgment:
*       "This product includes software developed by
*        ThoughtWorks, Inc. (http://www.thoughtworks.com/)."
*    Alternately, this acknowledgment may appear in the software itself,
*    if and wherever such third-party acknowledgments normally appear.
*
* 4. The names "QuickFIX" and "ThoughtWorks, Inc." must
*    not be used to endorse or promote products derived from this
*    software without prior written permission. For written
*    permission, please contact quickfix-users@lists.sourceforge.net.
*
* 5. Products derived from this software may not be called "QuickFIX",
*    nor may "QuickFIX" appear in their name, without prior written
*    permission of ThoughtWorks, Inc.
*
* THIS SOFTWARE IS PROVIDED ``AS IS'' AND ANY EXPRESSED OR IMPLIED
* WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE IMPLIED WARRANTIES
* OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE ARE
* DISCLAIMED.  IN NO EVENT SHALL THOUGHTWORKS INC OR
* ITS CONTRIBUTORS BE LIABLE FOR ANY DIRECT, INDIRECT, INCIDENTAL,
* SPECIAL, EXEMPLARY, OR CONSEQUENTIAL DAMAGES (INCLUDING, BUT NOT
* LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS OR SERVICES; LOSS OF
* USE, DATA, OR PROFITS; OR BUSINESS INTERRUPTION) HOWEVER CAUSED AND
* ON ANY THEORY OF LIABILITY, WHETHER IN CONTRACT, STRICT LIABILITY,
* OR TORT (INCLUDING NEGLIGENCE OR OTHERWISE) ARISING IN ANY WAY OUT
* OF THE USE OF THIS SOFTWARE, EVEN IF ADVISED OF THE POSSIBILITY OF
* SUCH DAMAGE.
* ====================================================================
*/

#ifdef _MSC_VER
#include "stdafx.h"
#else
#include "config.h"
#endif
#include "CallStack.h"

#ifdef HAVE_MYSQL

#include "MySQLStore.h"
#include "Session.h"
#include "SessionSettings.h"
#include "Parser.h"
#include "Utility.h"
#include <fstream>
#include <mysql.h>
#undef MYSQL_PORT

namespace FIX
{

const std::string MySQLStoreFactory::DEFAULT_DATABASE = "quickfix";
const std::string MySQLStoreFactory::DEFAULT_USER = "";
const std::string MySQLStoreFactory::DEFAULT_PASSWORD = "";
const std::string MySQLStoreFactory::DEFAULT_HOST = "localhost";
const short MySQLStoreFactory::DEFAULT_PORT = 0;

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
  query << "SELECT * FROM sessions WHERE "
  << "beginstring=" << "\"" << m_sessionID.getBeginString().getValue() << "\" and "
  << "sendercompid=" << "\"" << m_sessionID.getSenderCompID().getValue() << "\" and "
  << "targetcompid=" << "\"" << m_sessionID.getTargetCompID().getValue() << "\"";

  if ( mysql_query( pConnection, query.str().c_str() ) )
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
      std::string sqlTime = row[ 3 ];
      strptime( sqlTime.c_str(), "%Y-%m-%d %H:%M:%S", time );
      m_cache.setCreationTime( time );
      m_cache.setNextSenderMsgSeqNum( atol( row[ 4 ] ) );
      m_cache.setNextTargetMsgSeqNum( atol( row[ 5 ] ) );
    }
    else
    {
      UtcTimeStamp time = m_cache.getCreationTime();
      char sqlTime[ 20 ];
      strftime( sqlTime, 20, "%Y-%m-%d %H:%M:%S", ( tm* ) time );
      std::stringstream query2;
      query2 << "INSERT INTO sessions (beginstring, sendercompid, targetcompid, "
      << "creationtime, incoming_seqnum, outgoing_seqnum) VALUES("
      << "\"" << m_sessionID.getBeginString().getValue() << "\","
      << "\"" << m_sessionID.getSenderCompID().getValue() << "\","
      << "\"" << m_sessionID.getTargetCompID().getValue() << "\","
      << "'" << sqlTime << "',"
      << m_cache.getNextTargetMsgSeqNum() << ","
      << m_cache.getNextSenderMsgSeqNum() << ")";
      if ( mysql_query( pConnection, query2.str().c_str() ) )
        throw ConfigError( "Unable to create session in database" );
    }
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
throw ( IOException& )
{ QF_STACK_PUSH(MySQLStore::set)

  MYSQL * pConnection = reinterpret_cast < MYSQL* > ( m_pConnection );
  std::stringstream query;
  query << "INSERT INTO messages "
  << "(beginstring, sendercompid, targetcompid, msgseqnum, message) "
  << "VALUES ("
  << "\"" << m_sessionID.getBeginString().getValue() << "\","
  << "\"" << m_sessionID.getSenderCompID().getValue() << "\","
  << "\"" << m_sessionID.getTargetCompID().getValue() << "\","
  << msgSeqNum << ","
  << "\"" << msg << "\")";

  if ( mysql_query( pConnection, query.str().c_str() ) )
  {
    std::stringstream query2;
    query2 << "UPDATE messages SET message=\"" << msg << "\" WHERE "
    << "beginstring=" << "\"" << m_sessionID.getBeginString().getValue() << "\" and "
    << "sendercompid=" << "\"" << m_sessionID.getSenderCompID().getValue() << "\" and "
    << "targetcompid=" << "\"" << m_sessionID.getTargetCompID().getValue() << "\" and "
    << "msgseqnum=" << msgSeqNum;
    if ( mysql_query( pConnection, query2.str().c_str() ) )
      throw IOException();
  }
  return true;

  QF_STACK_POP
}

bool MySQLStore::get( int msgSeqNum, std::string& msg ) const
throw ( IOException& )
{ QF_STACK_PUSH(MySQLStore::get)

  MYSQL * pConnection = reinterpret_cast < MYSQL* > ( m_pConnection );
  std::stringstream query;
  query << "SELECT message FROM messages WHERE "
  << "beginstring=" << "\"" << m_sessionID.getBeginString().getValue() << "\" and "
  << "sendercompid=" << "\"" << m_sessionID.getSenderCompID().getValue() << "\" and "
  << "targetcompid=" << "\"" << m_sessionID.getTargetCompID().getValue() << "\" and "
  << "msgseqnum=" << msgSeqNum;

  if ( mysql_query( pConnection, query.str().c_str() ) )
    throw IOException();
  MYSQL_RES* result = mysql_store_result( pConnection );
  if ( mysql_num_rows( result ) != 1 ) return false;
  MYSQL_ROW row = mysql_fetch_row( result );
  msg = row[ 0 ];
  return true;

  QF_STACK_POP
}

void MySQLStore::get( int begin, int end,
                      std::vector < std::string > & result ) const
throw ( IOException& )
{ QF_STACK_PUSH(MySQLStore::get)

  result.clear();
  MYSQL* pConnection = reinterpret_cast < MYSQL* > ( m_pConnection );
  std::stringstream query;
  query << "SELECT message FROM messages WHERE "
  << "beginstring=" << "\"" << m_sessionID.getBeginString().getValue() << "\" and "
  << "sendercompid=" << "\"" << m_sessionID.getSenderCompID().getValue() << "\" and "
  << "targetcompid=" << "\"" << m_sessionID.getTargetCompID().getValue() << "\" and "
  << "msgseqnum>=" << begin << " and " << "msgseqnum<=" << end << " "
  << "ORDER BY msgseqnum";

  if ( mysql_query( pConnection, query.str().c_str() ) )
    throw IOException();

  MYSQL_RES* sqlResult = mysql_store_result( pConnection );

  while ( MYSQL_ROW row = mysql_fetch_row( sqlResult ) )
    result.push_back( row[ 0 ] );

  QF_STACK_POP
}

int MySQLStore::getNextSenderMsgSeqNum() const throw ( IOException& )
{ QF_STACK_PUSH(MySQLStore::getNextSenderMsgSeqNum)
  return m_cache.getNextSenderMsgSeqNum();
  QF_STACK_POP
}

int MySQLStore::getNextTargetMsgSeqNum() const throw ( IOException& )
{ QF_STACK_PUSH(MySQLStore::getNextTargetMsgSeqNum)
  return m_cache.getNextTargetMsgSeqNum();
  QF_STACK_POP
}

void MySQLStore::setNextSenderMsgSeqNum( int value ) throw ( IOException& )
{ QF_STACK_PUSH(MySQLStore::setNextSenderMsgSeqNum)

  MYSQL * pConnection = reinterpret_cast < MYSQL* > ( m_pConnection );
  std::stringstream query;
  query << "UPDATE sessions SET incoming_seqnum=" << value << " WHERE "
  << "beginstring=" << "\"" << m_sessionID.getBeginString().getValue() << "\" and "
  << "sendercompid=" << "\"" << m_sessionID.getSenderCompID().getValue() << "\" and "
  << "targetcompid=" << "\"" << m_sessionID.getTargetCompID().getValue() << "\"";
  if ( mysql_query( pConnection, query.str().c_str() ) )
    throw IOException();
  m_cache.setNextSenderMsgSeqNum( value );

  QF_STACK_POP
}

void MySQLStore::setNextTargetMsgSeqNum( int value ) throw ( IOException& )
{ QF_STACK_PUSH(MySQLStore::setNextTargetMsgSeqNum)

  MYSQL * pConnection = reinterpret_cast < MYSQL* > ( m_pConnection );
  std::stringstream query;
  query << "UPDATE sessions SET outgoing_seqnum=" << value << " WHERE "
  << "beginstring=" << "\"" << m_sessionID.getBeginString().getValue() << "\" and "
  << "sendercompid=" << "\"" << m_sessionID.getSenderCompID().getValue() << "\" and "
  << "targetcompid=" << "\"" << m_sessionID.getTargetCompID().getValue() << "\"";
  if ( mysql_query( pConnection, query.str().c_str() ) )
    throw IOException();
  m_cache.setNextTargetMsgSeqNum( value );

  QF_STACK_POP
}

void MySQLStore::incrNextSenderMsgSeqNum() throw ( IOException& )
{ QF_STACK_PUSH(MySQLStore::incrNextSenderMsgSeqNum)
  m_cache.incrNextSenderMsgSeqNum();
  setNextSenderMsgSeqNum( m_cache.getNextSenderMsgSeqNum() );
  QF_STACK_POP
}

void MySQLStore::incrNextTargetMsgSeqNum() throw ( IOException& )
{ QF_STACK_PUSH(MySQLStore::incrNextTargetMsgSeqNum)
  m_cache.incrNextTargetMsgSeqNum();
  setNextTargetMsgSeqNum( m_cache.getNextTargetMsgSeqNum() );
  QF_STACK_POP
}

UtcTimeStamp MySQLStore::getCreationTime() const throw ( IOException& )
{ QF_STACK_PUSH(MySQLStore::getCreationTime)
  return m_cache.getCreationTime();
  QF_STACK_POP
}

void MySQLStore::reset() throw ( IOException& )
{ QF_STACK_PUSH(MySQLStore::reset)

  MYSQL * pConnection = reinterpret_cast < MYSQL* > ( m_pConnection );
  std::stringstream query;
  query << "DELETE FROM messages WHERE "
  << "beginstring=" << "\"" << m_sessionID.getBeginString().getValue() << "\" and "
  << "sendercompid=" << "\"" << m_sessionID.getSenderCompID().getValue() << "\" and "
  << "targetcompid=" << "\"" << m_sessionID.getTargetCompID().getValue() << "\"";
  if ( mysql_query( pConnection, query.str().c_str() ) )
    throw IOException();

  m_cache.reset();
  UtcTimeStamp time = m_cache.getCreationTime();
  char sqlTime[ 20 ];
  strftime( sqlTime, 20, "%Y-%m-%d %H:%M:%S", ( tm* ) time );

  std::stringstream query2;
  query2 << "UPDATE sessions SET creationtime='" << sqlTime << "', "
  << "incoming_seqnum=" << m_cache.getNextTargetMsgSeqNum() << ", "
  << "outgoing_seqnum=" << m_cache.getNextSenderMsgSeqNum() << " WHERE "
  << "beginstring=" << "\"" << m_sessionID.getBeginString().getValue() << "\" and "
  << "sendercompid=" << "\"" << m_sessionID.getSenderCompID().getValue() << "\" and "
  << "targetcompid=" << "\"" << m_sessionID.getTargetCompID().getValue() << "\"";
  if ( mysql_query( pConnection, query2.str().c_str() ) )
    throw IOException();

  QF_STACK_POP
}
} //namespace FIX

#endif //HAVE_MYSQL
