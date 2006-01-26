/* -*- C++ -*- */

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

#ifndef HAVE_MSSQL
#error MSSQLLog.h included, but HAVE_MSSQL not defined
#endif

#ifdef HAVE_MSSQL
#ifndef FIX_MSSQLLOG_H
#define FIX_MSSQLLOG_H

#ifdef _MSC_VER
#pragma warning( disable : 4503 4355 4786 4290 )
#pragma comment( lib, "Ntwdblib" )
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
/// Creates a MSSQL based implementation of Log.
class MSSQLLogFactory : public LogFactory
{
public:
  static const std::string DEFAULT_DATABASE;
  static const std::string DEFAULT_USER;
  static const std::string DEFAULT_PASSWORD;
  static const std::string DEFAULT_HOST;

  MSSQLLogFactory( const SessionSettings& settings )
: m_settings( settings ), m_useSettings( true ) {}

  MSSQLLogFactory( const std::string& database, const std::string& user,
                   const std::string& password, const std::string& host );

  MSSQLLogFactory();

  ~MSSQLLogFactory();

  Log* create( const SessionID& );
  void destroy( Log* );
private:
  SessionSettings m_settings;
  std::string m_database;
  std::string m_user;
  std::string m_password;
  std::string m_host;
  bool m_useSettings;
};
/*! @} */

/// MSSQL based implementation of Log.
class MSSQLLog : public Log
{
public:
  MSSQLLog( const SessionID& s, const std::string& database, const std::string& user,
            const std::string& password, const std::string& host );
  ~MSSQLLog();

  void clear();
  void onIncoming( const std::string& value )
  { insert( "messages_log", value ); }
  void onOutgoing( const std::string& value )
  { insert( "messages_log", value ); }
  void onEvent( const std::string& value )
  { insert( "event_log", value ); }

private:
  void insert( const std::string& table, const std::string value );
  void* m_pConnection;
  SessionID m_sessionID;
};
}

#endif
#endif
