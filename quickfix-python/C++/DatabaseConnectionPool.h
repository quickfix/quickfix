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

#ifndef FIX_DATABASECONNECTIONPOOL_H
#define FIX_DATABASECONNECTIONPOOL_H

#ifdef _MSC_VER
#pragma warning( disable : 4503 4355 4786 4290 )
#endif

#include "DatabaseConnectionID.h"
#include <string>
#include <map>

namespace FIX
{
template< typename T > class DatabaseConnectionPool
{
public:
  DatabaseConnectionPool( bool poolConnections )
  : m_poolConnections( poolConnections ) {}

  T* create( const DatabaseConnectionID& id )
  {
    if( !m_poolConnections )
      return new T( id );

    if( m_connections.find( id ) == m_connections.end() )
    {
      m_connections[id] = Connection
        ( new T(id), 0 );
    }
    m_connections[id].second++;
    return m_connections[id].first;
  }

  bool destroy( T* pConnection )
  {
    if( !m_poolConnections )
    {
      delete pConnection;
      return true;
    }

    const DatabaseConnectionID& id = pConnection->connectionID();
    if( m_connections.find( id ) == m_connections.end() )
      return false;

    Connection& connection = m_connections[id];
    if( connection.first != pConnection )
      return false;

    connection.second--;
    if( connection.second == 0 )
    {
      m_connections.erase( id );
      delete pConnection;
    }
    return true;
  }

private:
  typedef std::pair<T*, int>
    Connection;
  typedef std::map<DatabaseConnectionID, Connection>
    Connections;

  Connections m_connections;
  bool m_poolConnections;
};
}

#endif
