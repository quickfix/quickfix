/* -*- C++ -*- */

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
#include <fstream>
#include <string>

namespace FIX
{
/*! \addtogroup user
 *  @{
 */ 
/// Creates a MySQL based implementation of Log.
class MySQLLogFactory : public LogFactory
{
  static const std::string DEFAULT_DATABASE;
  static const std::string DEFAULT_USER;
  static const std::string DEFAULT_PASSWORD;
  static const std::string DEFAULT_HOST;
  static const short DEFAULT_PORT;

public:
  MySQLLogFactory( const SessionSettings& settings )
: m_settings( settings ), m_useSettings( true ) {}

  MySQLLogFactory( const std::string& database, const std::string& user,
                     const std::string& password, const std::string& host,
                     short port )
: m_database( database ), m_user( user ), m_password( password ), m_host( host ), m_port( port ),
  m_useSettings( false ) {}

  MySQLLogFactory()
: m_database( DEFAULT_DATABASE ), m_user( DEFAULT_USER ), m_password( DEFAULT_PASSWORD ),
  m_host( DEFAULT_HOST ), m_port( DEFAULT_PORT ), m_useSettings( false ) {}

  Log* create( const SessionID& );
  void destroy( Log* );
private:
  SessionSettings m_settings;
  std::string m_database;
  std::string m_user;
  std::string m_password;
  std::string m_host;
  short m_port;
  bool m_useSettings;
};
/*! @} */

/// MySQL based implementation of Log.
class MySQLLog : public Log
{
public:
  MySQLLog( const SessionID& s, const std::string& database, const std::string& user,
              const std::string& password, const std::string& host, short port );
  ~MySQLLog();

  void onIncoming( const std::string& value )
  { insert( "incoming_log", value ); }
  void onOutgoing( const std::string& value )
  { insert( "outgoing_log", value ); }
  void onEvent( const std::string& value )
  { insert( "event_log", value ); }

private:
  void insert( const std::string& table, const std::string value );
  void* m_pConnection;
  SessionID m_sessionID;
};
}

#endif //FIX_MYSQLLOG_H
#endif //HAVE_MYSQL
