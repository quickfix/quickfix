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
#error MySQLStore.h included, but HAVE_MYSQL not defined
#endif

#ifdef HAVE_MYSQL
#ifndef FIX_MYSQLSTORE_H
#define FIX_MYSQLSTORE_H

#ifdef _MSC_VER
#pragma warning( disable : 4503 4355 4786 4290 )
#pragma comment( lib, "libMySQL" )
#endif

#include "MessageStore.h"
#include "SessionSettings.h"
#include <fstream>
#include <string>

namespace FIX
{
/*! \addtogroup user
 *  @{
 */ 
/// Creates a MySQL based implementation of MessageStore.
class MySQLStoreFactory : public MessageStoreFactory
{

  static const std::string DEFAULT_DATABASE;
  static const std::string DEFAULT_USER;
  static const std::string DEFAULT_PASSWORD;
  static const std::string DEFAULT_HOST;
  static const short DEFAULT_PORT;

public:
  MySQLStoreFactory( const SessionSettings& settings )
: m_settings( settings ), m_useSettings( true ) {}

  MySQLStoreFactory( const std::string& database, const std::string& user,
                     const std::string& password, const std::string& host,
                     short port )
: m_database( database ), m_user( user ), m_password( password ), m_host( host ), m_port( port ),
  m_useSettings( false ) {}

  MySQLStoreFactory()
: m_database( DEFAULT_DATABASE ), m_user( DEFAULT_USER ), m_password( DEFAULT_PASSWORD ),
  m_host( DEFAULT_HOST ), m_port( DEFAULT_PORT ), m_useSettings( false ) {}

  MessageStore* create( const SessionID& );
  void destroy( MessageStore* );
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

/// MySQL based implementation of MessageStore.
class MySQLStore : public MessageStore
{
public:
  MySQLStore( const SessionID& s, const std::string& database, const std::string& user,
              const std::string& password, const std::string& host, short port );
  ~MySQLStore();

  bool set( int, const std::string& ) throw ( IOException& );
  bool get( int, std::string& ) const throw ( IOException& );
  void get( int, int, std::vector < std::string > & ) const throw ( IOException& );

  int getNextSenderMsgSeqNum() const throw ( IOException& );
  int getNextTargetMsgSeqNum() const throw ( IOException& );
  void setNextSenderMsgSeqNum( int value ) throw ( IOException& );
  void setNextTargetMsgSeqNum( int value ) throw ( IOException& );
  void incrNextSenderMsgSeqNum() throw ( IOException& );
  void incrNextTargetMsgSeqNum() throw ( IOException& );

  UtcTimeStamp getCreationTime() const throw ( IOException& );

  void reset() throw ( IOException& );

private:
  void populateCache();

  MemoryStore m_cache;
  void* m_pConnection;
  SessionID m_sessionID;
};
}

#endif //FIX_MYSQLSTORE_H
#endif //HAVE_MYSQL
