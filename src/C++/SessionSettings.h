/* -*- C++ -*- */
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
static const std::string CONNECTION_TYPE = "ConnectionType";
static const std::string USE_DATA_DICTIONARY = "UseDataDictionary";
static const std::string DATA_DICTIONARY = "DataDictionary";
static const std::string START_TIME = "StartTime";
static const std::string END_TIME = "EndTime";
static const std::string CHECK_LATENCY = "CheckLatency";
static const std::string MAX_LATENCY = "MaxLatency";
static const std::string HEARTBTINT = "HeartBtInt";
static const std::string SOCKET_ACCEPT_PORT = "SocketAcceptPort";
static const std::string SOCKET_REUSE_ADDRESS = "SocketReuseAddress";
static const std::string SOCKET_CONNECT_HOST = "SocketConnectHost";
static const std::string SOCKET_CONNECT_PORT = "SocketConnectPort";
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

/*! \addtogroup user
 *  @{
 */ 
/// Container for setting dictionaries mapped to sessions.
class SessionSettings
{
public:
  SessionSettings() {}
  SessionSettings( std::istream& stream ) throw( ConfigError& );
  SessionSettings( const std::string& file ) throw( ConfigError& );

  /// Get a dictionary for a session.
  Dictionary get( const SessionID& ) const throw( ConfigError& );
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
throw( ConfigError& );
}

#endif //FIX_SESSIONSETTINGS_H
