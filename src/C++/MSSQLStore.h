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
#error MSSQLStore.h included, but HAVE_MSSQL not defined
#endif

#ifdef HAVE_MSSQL
#ifndef FIX_MSSQLSTORE_H
#define FIX_MSSQLSTORE_H

#ifdef _MSC_VER
#pragma warning( disable : 4503 4355 4786 4290 )
#pragma comment( lib, "Ntwdblib" )
#endif

#include "MessageStore.h"
#include "SessionSettings.h"
#include <fstream>
#include <string>

namespace FIX
{
/// Creates a MSSQL based implementation of MessageStore.
class MSSQLStoreFactory : public MessageStoreFactory
{
public:
  static const std::string DEFAULT_DATABASE;
  static const std::string DEFAULT_USER;
  static const std::string DEFAULT_PASSWORD;
  static const std::string DEFAULT_HOST;

  MSSQLStoreFactory( const SessionSettings& settings )
: m_settings( settings ), m_useSettings( true ), m_useDictionary( false ) {}

  MSSQLStoreFactory( const Dictionary& dictionary )
: m_dictionary( dictionary ), m_useSettings( false ), m_useDictionary( true ) {}

  MSSQLStoreFactory( const std::string& database, const std::string& user,
                     const std::string& password, const std::string& host )
: m_database( database ), m_user( user ), m_password( password ), m_host( host ),
  m_useSettings( false ), m_useDictionary( false ) {}

  MSSQLStoreFactory()
: m_database( DEFAULT_DATABASE ), m_user( DEFAULT_USER ), m_password( DEFAULT_PASSWORD ),
  m_host( DEFAULT_HOST ), m_useSettings( false ), m_useDictionary( false ) {}

  MessageStore* create( const SessionID& );
  void destroy( MessageStore* );
private:
  MessageStore* create( const SessionID& s, const Dictionary& );

  Dictionary m_dictionary;
  SessionSettings m_settings;
  std::string m_database;
  std::string m_user;
  std::string m_password;
  std::string m_host;
  bool m_useSettings;
  bool m_useDictionary;
};
/*! @} */

/// MSSQL based implementation of MessageStore.
class MSSQLStore : public MessageStore
{
public:
  MSSQLStore( const SessionID& s, const std::string& database, const std::string& user,
              const std::string& password, const std::string& host );
  ~MSSQLStore();

  bool set( int, const std::string& ) throw ( IOException );
  void get( int, int, std::vector < std::string > & ) const throw ( IOException );

  int getNextSenderMsgSeqNum() const throw ( IOException );
  int getNextTargetMsgSeqNum() const throw ( IOException );
  void setNextSenderMsgSeqNum( int value ) throw ( IOException );
  void setNextTargetMsgSeqNum( int value ) throw ( IOException );
  void incrNextSenderMsgSeqNum() throw ( IOException );
  void incrNextTargetMsgSeqNum() throw ( IOException );

  UtcTimeStamp getCreationTime() const throw ( IOException );

  void reset() throw ( IOException );
  void refresh() throw ( IOException );

private:
  void populateCache();

  MemoryStore m_cache;
  void* m_pConnection;
  SessionID m_sessionID;
};
}

#endif
#endif
