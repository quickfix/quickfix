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

#ifndef HAVE_POSTGRESQL
#error PostgreSQLConnection.h included, but HAVE_POSTGRESQL not defined
#endif

#ifdef HAVE_POSTGRESQL
#ifndef FIX_POSTGRESQLCONNECTION_H
#define FIX_POSTGRESQLCONNECTION_H

#ifdef _MSC_VER
#pragma warning( disable : 4503 4355 4786 4290 )
#pragma comment( lib, "libpq" )
#endif

#include <libpq-fe.h>
#include "DatabaseConnectionID.h"
#include "DatabaseConnectionPool.h"
#include "Mutex.h"

namespace FIX
{
class PostgreSQLQuery
{
public:
  PostgreSQLQuery( const std::string& query ) 
  : m_result( 0 ), m_query( query ) 
  {}

  ~PostgreSQLQuery()
  {
    if( m_result )
      PQclear( m_result );
  }

  bool execute( PGconn* pConnection )
  {
    int retry = 0;
    
    do
    {
      if( m_result ) PQclear( m_result );
      m_result = PQexec( pConnection, m_query.c_str() );
      m_status = PQresultStatus( m_result );
      if( success() ) return true;
      PQreset( pConnection );
      retry++;
    } while( retry <= 1 );
    return success();
  }

  bool success()
  {
    return m_status == PGRES_TUPLES_OK
      || m_status == PGRES_COMMAND_OK;
  }

  int rows()
  {
    return PQntuples( m_result );
  }

  char* reason()
  {
    return PQresultErrorMessage( m_result );
  }

  char* getValue( int row, int column )
  {
    return PQgetvalue( m_result, row, column );
  }

  void throwException()
  {
    if( !success() )
      throw IOException( "Query failed [" + m_query + "] " );
  }

private:
  PGresult* m_result;
  ExecStatusType m_status;
  std::string m_query; 
};

class PostgreSQLConnection
{
public:
  PostgreSQLConnection
  ( const DatabaseConnectionID& id )
  : m_connectionID( id )
  {
    connect();
  }

  PostgreSQLConnection
  ( const std::string& database, const std::string& user,
    const std::string& password, const std::string& host, short port )
  : m_connectionID( database, user, password, host, port )
  {
    connect();
  }

  ~PostgreSQLConnection()
  {
    if( m_pConnection )
      PQfinish( m_pConnection );
  }

  const DatabaseConnectionID& connectionID()
  {
    return m_connectionID;
  }

  bool connected()
  {
    Locker locker( m_mutex );
    return PQstatus( m_pConnection ) == CONNECTION_OK;
  }

  bool reconnect()
  {
    Locker locker( m_mutex );
    PQreset( m_pConnection );
    return connected();
  }

  bool execute( PostgreSQLQuery& pQuery )
  {
    Locker locker( m_mutex );
    return pQuery.execute( m_pConnection );
  }

private:
  void connect()
  {
    short port = m_connectionID.getPort();
    m_pConnection = PQsetdbLogin
      ( m_connectionID.getHost().c_str(), port == 0 ? "" : IntConvertor::convert( port ).c_str(),
        "", "", m_connectionID.getDatabase().c_str(), m_connectionID.getUser().c_str(), m_connectionID.getPassword().c_str() );

    if( !connected() )
      throw ConfigError( "Unable to connect to database" );
  }

  PGconn* m_pConnection;
  DatabaseConnectionID m_connectionID;
  Mutex m_mutex;
};

typedef DatabaseConnectionPool<PostgreSQLConnection>
  PostgreSQLConnectionPool;
typedef std::auto_ptr< PostgreSQLConnectionPool >
  PostgreSQLConnectionPoolPtr;
}

#endif //FIX_POSTGRESQLCONNECTION_H
#endif //HAVE_POSTGRESQL
