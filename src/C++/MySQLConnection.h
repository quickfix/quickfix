/* -*- C++ -*- */

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

#ifndef HAVE_MYSQL
#error MySQLConnection.h included, but HAVE_MYSQL not defined
#endif

#ifdef HAVE_MYSQL
#ifndef FIX_MYSQLCONNECTION_H
#define FIX_MYSQLCONNECTION_H

#ifdef _MSC_VER
#pragma warning( disable : 4503 4355 4786 4290 )
#pragma comment( lib, "libMySQL" )
#endif

#include <mysql.h>
#include <errmsg.h>
#include "DatabaseConnectionID.h"
#include "DatabaseConnectionPool.h"
#include "Mutex.h"

#undef MYSQL_PORT

namespace FIX
{
class MySQLQuery
{
public:
  MySQLQuery( const std::string& query ) 
  : m_result( 0 ), m_query( query ) 
  {}

  ~MySQLQuery()
  {
    if( m_result )
      mysql_free_result( m_result );
  }

  bool execute( MYSQL* pConnection )
  {
    int retry = 0;
    
    do
    {
      if( m_result ) mysql_free_result( m_result );
      int errcode = mysql_query( pConnection, m_query.c_str() );
      m_result = mysql_store_result( pConnection );
      if( errcode == 0 )
        return true;
      m_status = mysql_errno( pConnection );
      m_reason = mysql_error( pConnection );
      mysql_ping( pConnection );
      retry++;
    } while( retry <= 1 );
    return success();
  }

  bool success()
  {
    return m_status == 0;
  }

  int rows()
  {
    return (int)mysql_num_rows( m_result );
  }

  const std::string& reason()
  {
    return m_reason;
  }

  char* getValue( int row, int column )
  {
    if( m_rows.empty() )
    {
      MYSQL_ROW row = 0;
      while( (row = mysql_fetch_row( m_result )) )
        m_rows.push_back(row);
    }
    return m_rows[row][column];
  }

  void throwException() throw( IOException )
  {
    if( !success() )
      throw IOException( "Query failed [" + m_query + "] " + reason() );
  }

private:
  MYSQL_RES* m_result;
  int m_status;
  std::string m_query; 
  std::string m_reason;
  std::vector<MYSQL_ROW> m_rows;
};

class MySQLConnection
{
public:
  MySQLConnection
  ( const DatabaseConnectionID& id )
  : m_connectionID( id )
  {
    connect();
  }

  MySQLConnection
  ( const std::string& database, const std::string& user,
    const std::string& password, const std::string& host, short port )
  : m_connectionID( database, user, password, host, port )
  {
    connect();
  }

  ~MySQLConnection()
  {
    if( m_pConnection )
      mysql_close( m_pConnection );
  }

  const DatabaseConnectionID& connectionID()
  {
    return m_connectionID;
  }

  bool connected()
  {
    Locker locker( m_mutex );
    return mysql_ping( m_pConnection ) == 0;
  }

  bool reconnect()
  {
    Locker locker( m_mutex );
    return mysql_ping( m_pConnection ) == 0;
  }

  bool execute( MySQLQuery& pQuery )
  {
    Locker locker( m_mutex );
    return pQuery.execute( m_pConnection );
  }

private:
  void connect()
  {
    short port = m_connectionID.getPort();
    m_pConnection = mysql_init( NULL );
    if( !mysql_real_connect
      ( m_pConnection, m_connectionID.getHost().c_str(), m_connectionID.getUser().c_str(), 
        m_connectionID.getPassword().c_str(), m_connectionID.getDatabase().c_str(), port, 0, 0 ) )
    {
        if( !connected() )
          throw ConfigError( std::string("Unable to connect to database [") + mysql_error(m_pConnection) + "]" );
    }
    #if( MYSQL_VERSION_ID > 50000 )
    my_bool reconnect = 1;
    mysql_options( m_pConnection, MYSQL_OPT_RECONNECT, static_cast<char*>(&reconnect) );
    #endif
  }

  MYSQL* m_pConnection;
  DatabaseConnectionID m_connectionID;
  Mutex m_mutex;
};

typedef DatabaseConnectionPool<MySQLConnection>
  MySQLConnectionPool;
typedef std::auto_ptr< MySQLConnectionPool >
  MySQLConnectionPoolPtr;
}

#endif //FIX_MYSQLCONNECTION_H
#endif //HAVE_MYSQL
