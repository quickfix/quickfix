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

#ifndef FIX_DATABASECONNECTIONID_H
#define FIX_DATABASECONNECTIONID_H

#ifdef _MSC_VER
#pragma warning( disable : 4503 4355 4786 4290 )
#endif

#include <string>
#include <map>

namespace FIX
{
class DatabaseConnectionID
{
public:
  DatabaseConnectionID
  ( const std::string& database, const std::string& user,
    const std::string& password, const std::string& host, short port )
  : m_database( database ), m_user( user ), m_password( password ),
    m_host( host ), m_port( port ) {}

  friend bool operator<( const DatabaseConnectionID&, const DatabaseConnectionID& );
  friend bool operator==( const DatabaseConnectionID&, const DatabaseConnectionID& );
  friend bool operator!=( const DatabaseConnectionID&, const DatabaseConnectionID& );

  const std::string& getDatabase() const
    { return m_database; }
  const std::string& getUser() const
    { return m_user; }
  const std::string& getPassword() const
    { return m_password; }
  const std::string& getHost() const
    { return m_host; }
  short getPort() const
    { return m_port; }

private:
  std::string m_database;
  std::string m_user;
  std::string m_password;
  std::string m_host;
  short m_port;
};

inline bool operator<( const DatabaseConnectionID& lhs, const DatabaseConnectionID& rhs )
{
  if ( lhs.m_database < rhs.m_database )
    return true;
  else if ( rhs.m_database < lhs.m_database )
    return false;
  else if ( lhs.m_user < rhs.m_user )
    return true;
  else if ( rhs.m_user < lhs.m_user )
    return false;
  else if ( lhs.m_password < rhs.m_password )
    return true;
  else if ( rhs.m_password < lhs.m_password )
    return false;
  else if ( lhs.m_host < rhs.m_host )
    return true;
  else if ( rhs.m_host < lhs.m_host )
    return false;
  else if ( lhs.m_port < rhs.m_port )
    return true;
  else if ( rhs.m_port < lhs.m_port )
    return false;
  else
    return false;
}
inline bool operator==( const DatabaseConnectionID& lhs, const DatabaseConnectionID& rhs )
{
  return ( ( lhs.m_database == rhs.m_database ) &&
           ( lhs.m_user == rhs.m_user ) &&
           ( lhs.m_password == rhs.m_password ) &&
           ( lhs.m_host == rhs.m_host ) &&
           ( lhs.m_port == rhs.m_port ));
}
inline bool operator!=( const DatabaseConnectionID& lhs, const DatabaseConnectionID& rhs )
{
  return !( lhs == rhs );
}
}

#endif
