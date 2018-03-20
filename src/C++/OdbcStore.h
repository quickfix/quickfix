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
#error OdbcStore.h included, but HAVE_ODBC not defined
#endif

#ifdef HAVE_ODBC
#ifndef FIX_ODBCSTORE_H
#define FIX_ODBCSTORE_H

#ifdef _MSC_VER
#pragma warning( disable : 4503 4355 4786 4290 )
#endif

#include "OdbcConnection.h"
#include "MessageStore.h"
#include "SessionSettings.h"
#include <fstream>
#include <string>

namespace FIX
{
/// Creates a Odbc based implementation of MessageStore.
class OdbcStoreFactory : public MessageStoreFactory
{
public:
  static const std::string DEFAULT_USER;
  static const std::string DEFAULT_PASSWORD;
  static const std::string DEFAULT_CONNECTION_STRING;

  OdbcStoreFactory( const SessionSettings& settings )
: m_settings( settings ), m_useSettings( true ), m_useDictionary( false ) {}

  OdbcStoreFactory( const Dictionary& dictionary )
: m_dictionary( dictionary ), m_useSettings( false ), m_useDictionary( true ) {}

  OdbcStoreFactory( const std::string& user, const std::string& password, 
                    const std::string& connectionString )
: m_user( user ), m_password( password ), m_connectionString( connectionString ),
  m_useSettings( false ), m_useDictionary( false ) {}

  OdbcStoreFactory()
: m_user( DEFAULT_USER ), m_password( DEFAULT_PASSWORD ),
  m_connectionString( DEFAULT_CONNECTION_STRING ), m_useSettings( false ), m_useDictionary( false ) {}

  MessageStore* create( const SessionID& );
  void destroy( MessageStore* );
private:
  MessageStore* create( const SessionID& s, const Dictionary& );

  Dictionary m_dictionary;
  SessionSettings m_settings;
  std::string m_user;
  std::string m_password;
  std::string m_connectionString;
  bool m_useSettings;
  bool m_useDictionary;
};
/*! @} */

/// Odbc based implementation of MessageStore.
class OdbcStore : public MessageStore
{
public:
  OdbcStore( const SessionID& s, const std::string& user, const std::string& password, 
             const std::string& connectionString );
  ~OdbcStore();

  bool set( int, const std::string& );
  void get( int, int, std::vector < std::string > & ) const;

  int getNextSenderMsgSeqNum() const;
  int getNextTargetMsgSeqNum() const;
  void setNextSenderMsgSeqNum( int value );
  void setNextTargetMsgSeqNum( int value );
  void incrNextSenderMsgSeqNum();
  void incrNextTargetMsgSeqNum();

  UtcTimeStamp getCreationTime() const;

  void reset();
  void refresh();

private:
  void populateCache();

  OdbcConnection* m_pConnection;
  MemoryStore m_cache;
  SessionID m_sessionID;
};
}

#endif
#endif
