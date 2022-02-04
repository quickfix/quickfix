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

#ifndef HAVE_ODBC
#error OdbcLog.h included, but HAVE_ODBC not defined
#endif

#ifdef HAVE_ODBC
#ifndef FIX_ODBCLOG_H
#define FIX_ODBCLOG_H

#ifdef _MSC_VER
#pragma warning( disable : 4503 4355 4786 4290 )
#endif

#include "OdbcConnection.h"
#include "Log.h"
#include "SessionSettings.h"
#include <fstream>
#include <string>

namespace FIX
{
/// ODBC based implementation of Log.
class OdbcLog : public Log
{
public:
  OdbcLog( const SessionID& s, const std::string& user, const std::string& password, 
           const std::string& connectionString );
  OdbcLog( const std::string& user, const std::string& password, 
           const std::string& connectionString );

  ~OdbcLog();

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
  OdbcConnection* m_pConnection;
  SessionID* m_pSessionID;
};

/// Creates a ODBC based implementation of Log.
class OdbcLogFactory : public LogFactory
{
public:
  static const std::string DEFAULT_USER;
  static const std::string DEFAULT_PASSWORD;
  static const std::string DEFAULT_CONNECTION_STRING;

  OdbcLogFactory( const SessionSettings& settings )
  : m_settings( settings ), m_useSettings( true ) {}

  OdbcLogFactory( const std::string& user, const std::string& password, 
                  const std::string& connectionString );

  OdbcLogFactory();

  ~OdbcLogFactory();

  Log* create();
  Log* create( const SessionID& );
  void destroy( Log* );
private:
  void init( const Dictionary& settings, 
             std::string& user, std::string& password, 
             std::string& connectionString );

  void initLog( const Dictionary& settings, OdbcLog& log );

  SessionSettings m_settings;
  std::string m_user;
  std::string m_password;
  std::string m_connectionString;
  bool m_useSettings;
};
}

#endif
#endif
