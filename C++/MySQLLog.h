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
#error MySQLLog.h included, but HAVE_MYSQL not defined
#endif

#ifdef HAVE_MYSQL
#ifndef FIX_MYSQLLOG_H
#define FIX_MYSQLLOG_H

#ifdef _MSC_VER
#pragma warning( disable : 4503 4355 4786 4290 )
#pragma comment( lib, "libMySQL" )
#endif

#include "Log.h"
#include "SessionSettings.h"
#include "MySQLConnection.h"
#include <fstream>
#include <string>

namespace FIX
{
/// MySQL based implementation of Log.
class MySQLLog : public Log
{
public:
  MySQLLog( const SessionID& s, const DatabaseConnectionID& d, MySQLConnectionPool* p );
  MySQLLog( const DatabaseConnectionID& d, MySQLConnectionPool* p );
  MySQLLog( const SessionID& s, const std::string& database, const std::string& user,
            const std::string& password, const std::string& host, short port );
  MySQLLog( const std::string& database, const std::string& user,
            const std::string& password, const std::string& host, short port );

  ~MySQLLog();

  void clear();
  void backup();
  void setIncomingTable( const std::string& incomingTable )
  { m_incomingTable = incomingTable; }
  void setOutgoingTable( const std::string& outgoingTable )
  { m_outgoingTable = outgoingTable; }
  void setEventTable( const std::string& eventTable )
  { m_eventTable = eventTable; }

  void onIncoming( const std::string& value )
  { insert( m_incomingTable, value ); }
  void onOutgoing( const std::string& value )
  { insert( m_outgoingTable, value ); }
  void onEvent( const std::string& value )
  { insert( m_eventTable, value ); }

private:
  void init();
  void insert( const std::string& table, const std::string value );

  std::string m_incomingTable;
  std::string m_outgoingTable;
  std::string m_eventTable;
  MySQLConnection* m_pConnection;
  MySQLConnectionPool* m_pConnectionPool;
  SessionID* m_pSessionID;
};

/// Creates a MySQL based implementation of Log.
class MySQLLogFactory : public LogFactory
{
public:
  static const std::string DEFAULT_DATABASE;
  static const std::string DEFAULT_USER;
  static const std::string DEFAULT_PASSWORD;
  static const std::string DEFAULT_HOST;
  static const short DEFAULT_PORT;

  MySQLLogFactory( const SessionSettings& settings )
: m_settings( settings ), m_useSettings( true ) 
  {
    bool poolConnections = false;
    try { poolConnections = settings.get().getBool(MYSQL_LOG_USECONNECTIONPOOL); }
    catch( ConfigError& ) {}

    m_connectionPoolPtr = MySQLConnectionPoolPtr
      ( new MySQLConnectionPool(poolConnections) );
  }

  MySQLLogFactory( const std::string& database, const std::string& user,
                   const std::string& password, const std::string& host,
                   short port )
: m_database( database ), m_user( user ), m_password( password ), m_host( host ), m_port( port ),
  m_useSettings( false ) 
  {
    m_connectionPoolPtr = MySQLConnectionPoolPtr
      ( new MySQLConnectionPool(false) );
  }

  MySQLLogFactory()
: m_database( DEFAULT_DATABASE ), m_user( DEFAULT_USER ), m_password( DEFAULT_PASSWORD ),
  m_host( DEFAULT_HOST ), m_port( DEFAULT_PORT ), m_useSettings( false ) 
  {
    m_connectionPoolPtr = MySQLConnectionPoolPtr
      ( new MySQLConnectionPool(false) );
  }

  Log* create();
  Log* create( const SessionID& );
  void destroy( Log* );
private:
  void init( const Dictionary& settings, std::string& database,
             std::string& user, std::string& password,
             std::string& host, short& port );

  void initLog( const Dictionary& settings, MySQLLog& log );

  MySQLConnectionPoolPtr m_connectionPoolPtr;
  SessionSettings m_settings;
  std::string m_database;
  std::string m_user;
  std::string m_password;
  std::string m_host;
  short m_port;
  bool m_useSettings;
};
}

#endif //FIX_MYSQLLOG_H
#endif //HAVE_MYSQL
