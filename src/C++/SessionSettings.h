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

#ifndef FIX_SESSIONSETTINGS_H
#define FIX_SESSIONSETTINGS_H

#ifdef _MSC_VER
#pragma warning( disable : 4503 4355 4786 4290 )
#endif

#include "Dictionary.h"
#include "SessionID.h"
#include "Exceptions.h"
#include <map>
#include <set>

namespace FIX
{
static const std::string BEGINSTRING = "BeginString";
static const std::string SENDERCOMPID = "SenderCompID";
static const std::string TARGETCOMPID = "TargetCompID";
static const std::string SESSION_QUALIFIER = "SessionQualifier";
static const std::string CONNECTION_TYPE = "ConnectionType";
static const std::string USE_DATA_DICTIONARY = "UseDataDictionary";
static const std::string DATA_DICTIONARY = "DataDictionary";
static const std::string START_TIME = "StartTime";
static const std::string END_TIME = "EndTime";
static const std::string START_DAY = "StartDay";
static const std::string END_DAY = "EndDay";
static const std::string CHECK_LATENCY = "CheckLatency";
static const std::string MAX_LATENCY = "MaxLatency";
static const std::string HEARTBTINT = "HeartBtInt";
static const std::string SOCKET_ACCEPT_PORT = "SocketAcceptPort";
static const std::string SOCKET_REUSE_ADDRESS = "SocketReuseAddress";
static const std::string SOCKET_CONNECT_HOST = "SocketConnectHost";
static const std::string SOCKET_CONNECT_PORT = "SocketConnectPort";
static const std::string SOCKET_NODELAY = "SocketNodelay";
static const std::string RECONNECT_INTERVAL = "ReconnectInterval";
static const std::string VALIDATE_FIELDS_OUT_OF_ORDER = "ValidateFieldsOutOfOrder";
static const std::string VALIDATE_FIELDS_HAVE_VALUES = "ValidateFieldsHaveValues";
static const std::string LOGON_TIMEOUT = "LogonTimeout";
static const std::string FILE_STORE_PATH = "FileStorePath";
static const std::string MYSQL_STORE_DATABASE = "MySQLStoreDatabase";
static const std::string MYSQL_STORE_USER = "MySQLStoreUser";
static const std::string MYSQL_STORE_PASSWORD = "MySQLStorePassword";
static const std::string MYSQL_STORE_HOST = "MySQLStoreHost";
static const std::string MYSQL_STORE_PORT = "MySQLStorePort";
static const std::string FILE_LOG_PATH = "FileLogPath";
static const std::string RESET_ON_LOGOUT = "ResetOnLogout";
static const std::string RESET_ON_DISCONNECT = "ResetOnDisconnect";
static const std::string MILLISECONDS_IN_TIMESTAMP = "MillisecondsInTimeStamp";

/*! \addtogroup user
 *  @{
 */ 
/// Container for setting dictionaries mapped to sessions.
class SessionSettings
{
public:
  SessionSettings() {}
  SessionSettings( std::istream& stream ) throw( ConfigError );
  SessionSettings( const std::string& file ) throw( ConfigError );

  /// Get a dictionary for a session.
  Dictionary get( const SessionID& ) const throw( ConfigError );
  /// Set a dictionary for a session
  void set( const SessionID&, const Dictionary& );

  /// Get global default settings
  Dictionary get() const { return m_defaults; }
  /// Set global default settings
  void set( const Dictionary& defaults ) { m_defaults = defaults; }

  /// Number of session settings
  int size() { return m_settings.size(); }

  typedef std::map < SessionID, Dictionary > Dictionaries;
  std::set < SessionID > getSessions() const;

private:
  Dictionaries m_settings;
  Dictionary m_defaults;
};
/*! @} */

std::istream& operator>>( std::istream&, SessionSettings& )
throw( ConfigError );
}

#endif //FIX_SESSIONSETTINGS_H
