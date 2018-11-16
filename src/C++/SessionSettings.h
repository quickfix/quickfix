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
const char BEGINSTRING[] = "BeginString";
const char SENDERCOMPID[] = "SenderCompID";
const char TARGETCOMPID[] = "TargetCompID";
const char SESSION_QUALIFIER[] = "SessionQualifier";
const char DEFAULT_APPLVERID[] = "DefaultApplVerID";
const char CONNECTION_TYPE[] = "ConnectionType";
const char USE_DATA_DICTIONARY[] = "UseDataDictionary";
const char SEND_RESETSEQNUMFLAG[] = "SendResetSeqNumFlag";
const char SEND_REDUNDANT_RESENDREQUESTS[] = "SendRedundantResendRequests";
const char DATA_DICTIONARY[] = "DataDictionary";
const char TRANSPORT_DATA_DICTIONARY[] = "TransportDataDictionary";
const char APP_DATA_DICTIONARY[] = "AppDataDictionary";
const char USE_LOCAL_TIME[] = "UseLocalTime";
const char START_TIME[] = "StartTime";
const char END_TIME[] = "EndTime";
const char START_DAY[] = "StartDay";
const char END_DAY[] = "EndDay";
const char LOGON_TIME[] = "LogonTime";
const char LOGOUT_TIME[] = "LogoutTime";
const char LOGON_DAY[] = "LogonDay";
const char LOGOUT_DAY[] = "LogoutDay";
const char CHECK_COMPID[] = "CheckCompID";
const char CHECK_LATENCY[] = "CheckLatency";
const char MAX_LATENCY[] = "MaxLatency";
const char HEARTBTINT[] = "HeartBtInt";
const char SOCKET_ACCEPT_PORT[] = "SocketAcceptPort";
const char SOCKET_REUSE_ADDRESS[] = "SocketReuseAddress";
const char SOCKET_CONNECT_HOST[] = "SocketConnectHost";
const char SOCKET_CONNECT_PORT[] = "SocketConnectPort";
const char SOCKET_CONNECT_SOURCE_HOST[] = "SocketConnectSourceHost";
const char SOCKET_CONNECT_SOURCE_PORT[] = "SocketConnectSourcePort";
const char SOCKET_NODELAY[] = "SocketNodelay";
const char SOCKET_SEND_BUFFER_SIZE[] = "SocketSendBufferSize";
const char SOCKET_RECEIVE_BUFFER_SIZE[] = "SocketReceiveBufferSize";
const char RECONNECT_INTERVAL[] = "ReconnectInterval";
const char VALIDATE_LENGTH_AND_CHECKSUM[] = "ValidateLengthAndChecksum";
const char VALIDATE_FIELDS_OUT_OF_ORDER[] = "ValidateFieldsOutOfOrder";
const char VALIDATE_FIELDS_HAVE_VALUES[] = "ValidateFieldsHaveValues";
const char VALIDATE_USER_DEFINED_FIELDS[] = "ValidateUserDefinedFields";
const char ALLOW_UNKNOWN_MSG_FIELDS[] = "AllowUnknownMsgFields";
const char PRESERVE_MESSAGE_FIELDS_ORDER[] = "PreserveMessageFieldsOrder";
const char LOGON_TIMEOUT[] = "LogonTimeout";
const char LOGOUT_TIMEOUT[] = "LogoutTimeout";
const char FILE_STORE_PATH[] = "FileStorePath";
const char MYSQL_STORE_USECONNECTIONPOOL[] = "MySQLStoreUseConnectionPool";
const char MYSQL_STORE_DATABASE[] = "MySQLStoreDatabase";
const char MYSQL_STORE_USER[] = "MySQLStoreUser";
const char MYSQL_STORE_PASSWORD[] = "MySQLStorePassword";
const char MYSQL_STORE_HOST[] = "MySQLStoreHost";
const char MYSQL_STORE_PORT[] = "MySQLStorePort";
const char POSTGRESQL_STORE_USECONNECTIONPOOL[] = "PostgreSQLStoreUseConnectionPool";
const char POSTGRESQL_STORE_DATABASE[] = "PostgreSQLStoreDatabase";
const char POSTGRESQL_STORE_USER[] = "PostgreSQLStoreUser";
const char POSTGRESQL_STORE_PASSWORD[] = "PostgreSQLStorePassword";
const char POSTGRESQL_STORE_HOST[] = "PostgreSQLStoreHost";
const char POSTGRESQL_STORE_PORT[] = "PostgreSQLStorePort";
const char ODBC_STORE_USER[] = "OdbcStoreUser";
const char ODBC_STORE_PASSWORD[] = "OdbcStorePassword";
const char ODBC_STORE_CONNECTION_STRING[] = "OdbcStoreConnectionString";
const char FILE_LOG_PATH[] = "FileLogPath";
const char FILE_LOG_BACKUP_PATH[] = "FileLogBackupPath";
const char SCREEN_LOG_SHOW_INCOMING[] = "ScreenLogShowIncoming";
const char SCREEN_LOG_SHOW_OUTGOING[] = "ScreenLogShowOutgoing";
const char SCREEN_LOG_SHOW_EVENTS[] = "ScreenLogShowEvents";
const char MYSQL_LOG_USECONNECTIONPOOL[] = "MySQLLogUseConnectionPool";
const char MYSQL_LOG_DATABASE[] = "MySQLLogDatabase";
const char MYSQL_LOG_USER[] = "MySQLLogUser";
const char MYSQL_LOG_PASSWORD[] = "MySQLLogPassword";
const char MYSQL_LOG_HOST[] = "MySQLLogHost";
const char MYSQL_LOG_PORT[] = "MySQLLogPort";
const char MYSQL_LOG_INCOMING_TABLE[] = "MySQLLogIncomingTable";
const char MYSQL_LOG_OUTGOING_TABLE[] = "MySQLLogOutgoingTable";
const char MYSQL_LOG_EVENT_TABLE[] = "MySQLLogEventTable";
const char POSTGRESQL_LOG_USECONNECTIONPOOL[] = "PostgreSQLLogUseConnectionPool";
const char POSTGRESQL_LOG_DATABASE[] = "PostgreSQLLogDatabase";
const char POSTGRESQL_LOG_USER[] = "PostgreSQLLogUser";
const char POSTGRESQL_LOG_PASSWORD[] = "PostgreSQLLogPassword";
const char POSTGRESQL_LOG_HOST[] = "PostgreSQLLogHost";
const char POSTGRESQL_LOG_PORT[] = "PostgreSQLLogPort";
const char POSTGRESQL_LOG_INCOMING_TABLE[] = "PostgreSQLLogIncomingTable";
const char POSTGRESQL_LOG_OUTGOING_TABLE[] = "PostgreSQLLogOutgoingTable";
const char POSTGRESQL_LOG_EVENT_TABLE[] = "PostgreSQLLogEventTable";
const char ODBC_LOG_USER[] = "OdbcLogUser";
const char ODBC_LOG_PASSWORD[] = "OdbcLogPassword";
const char ODBC_LOG_CONNECTION_STRING[] = "OdbcLogConnectionString";
const char ODBC_LOG_INCOMING_TABLE[] = "OdbcLogIncomingTable";
const char ODBC_LOG_OUTGOING_TABLE[] = "OdbcLogOutgoingTable";
const char ODBC_LOG_EVENT_TABLE[] = "OdbcLogEventTable";
const char RESET_ON_LOGON[] = "ResetOnLogon";
const char RESET_ON_LOGOUT[] = "ResetOnLogout";
const char RESET_ON_DISCONNECT[] = "ResetOnDisconnect";
const char REFRESH_ON_LOGON[] = "RefreshOnLogon";
const char MILLISECONDS_IN_TIMESTAMP[] = "MillisecondsInTimeStamp";
const char TIMESTAMP_PRECISION[] = "TimestampPrecision";
const char HTTP_ACCEPT_PORT[] = "HttpAcceptPort";
const char PERSIST_MESSAGES[] = "PersistMessages";
const char SERVER_CERT_FILE[] = "ServerCertificateFile";
const char SERVER_CERT_KEY_FILE[] = "ServerCertificateKeyFile";
const char CLIENT_CERT_FILE[] = "ClientCertificateFile";
const char CLIENT_CERT_KEY_FILE[] = "ClientCertificateKeyFile";
const char CERT_AUTH_FILE[] = "CertificationAuthoritiesFile";
const char CERT_AUTH_DIR[] = "CertificationAuthoritiesDirectory";
const char CRL_FILE[] = "CertificateRevocationListFile";
const char CRL_DIR[] = "CertificateRevocationListDirectory";
const char VERIFY_LEVEL[] = "CertificateVerifyLevel";
/*
# This directive can be used to control the SSL protocol flavors the application
# should use when establishing its environment.
#
# The available (case-insensitive) protocols are:
#
# SSLv2
#
#  This is the Secure Sockets Layer (SSL) protocol, version 2.0. It is the
#  original SSL protocol as designed by Netscape Corporation.
#
# SSLv3
#
#  This is the Secure Sockets Layer (SSL) protocol, version 3.0. It is the
#  successor to SSLv2 and the currently (as of February 1999) de-facto
#  standardized SSL protocol from Netscape Corporation. It's supported by
#  almost all popular browsers.
#
# TLSv1
#
#  This is the Transport Layer Security (TLS) protocol, version 1.0.
#
# TLSv1_1
#
#  This is the Transport Layer Security (TLS) protocol, version 1.1.
#
# TLSv1_2
#
#  This is the Transport Layer Security (TLS) protocol, version 1.2.
#
# all
#
#  This is a shortcut for `+SSLv2 +SSLv3 +TLSv1 +TLSv1_1 +TLSv1_2' and a convenient way for
#  enabling all protocols except one when used in combination with the minus
#  sign on a protocol as the example above shows.
#
# Example:
#
#  enable all but not SSLv2
#  SSL_PROTOCOL = all -SSLv2
#
# `all -SSLv2` is the default value when the parameter is not specified.

*/
const char SSL_PROTOCOL[] = "SSLProtocol";
/*
# This complex directive uses a colon-separated cipher-spec string consisting
# of OpenSSL cipher specifications to configure the Cipher Suite the client is
# permitted to negotiate in the SSL handshake phase. Notice that this directive
# can be used both in per-server and per-directory context. In per-server
# context it applies to the standard SSL handshake when a connection is
# established. In per-directory context it forces a SSL renegotation with the
# reconfigured Cipher Suite after the HTTP request was read but before the HTTP
# response is sent.
#
# An SSL cipher specification in cipher-spec is composed of 4 major attributes
# plus a few extra minor ones:
#
# Key Exchange Algorithm:
#  RSA or Diffie-Hellman variants.
#
# Authentication Algorithm:
#  RSA, Diffie-Hellman, DSS or none.
#
# Cipher/Encryption Algorithm:
#  DES, Triple-DES, RC4, RC2, IDEA or none.
#
# MAC Digest Algorithm:
#  MD5, SHA or SHA1.
#
# For more details refer to mod_ssl documentation.
#
# Example: RC4+RSA:+HIGH:
*/
const char SSL_CIPHER_SUITE[] = "SSLCipherSuite";


/// Container for setting dictionaries mapped to sessions.
class SessionSettings
{
public:
  SessionSettings() { m_resolveEnvVars = false; }
  SessionSettings( std::istream& stream, bool resolveEnvVars = false ) EXCEPT ( ConfigError );
  SessionSettings( const std::string& file, bool resolveEnvVars = false ) EXCEPT ( ConfigError );

  /// Check if session setings are present
  const bool has( const SessionID& ) const;

  /// Get a dictionary for a session.
  const Dictionary& get( const SessionID& ) const EXCEPT ( ConfigError );
  /// Set a dictionary for a session
  void set( const SessionID&, Dictionary ) EXCEPT ( ConfigError );

  /// Get global default settings
  const Dictionary& get() const { return m_defaults; }
  /// Set global default settings
  void set( const Dictionary& defaults ) EXCEPT ( ConfigError );

  /// Number of session settings
  size_t size() const { return m_settings.size(); }

  typedef std::map < SessionID, Dictionary > Dictionaries;
  std::set < SessionID > getSessions() const;

private:
  void validate( const Dictionary& ) const EXCEPT ( ConfigError );

  Dictionaries m_settings;
  Dictionary m_defaults;
  bool m_resolveEnvVars;  // while reading, replace $var, $(var) and ${var} by environment variable var

  friend std::istream& operator>>( std::istream&, SessionSettings& ) EXCEPT ( ConfigError );
  friend std::ostream& operator<<( std::ostream&, const SessionSettings& );
};
/*! @} */

std::istream& operator>>( std::istream&, SessionSettings& )
EXCEPT ( ConfigError );
std::ostream& operator<<( std::ostream&, const SessionSettings& );
}

#endif //FIX_SESSIONSETTINGS_H
