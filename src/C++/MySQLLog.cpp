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

#ifdef _MSC_VER
#include "stdafx.h"
#else
#include "config.h"
#endif

#ifdef HAVE_MYSQL

#include "MySQLLog.h"
#include "Session.h"
#include "SessionSettings.h"
#include "Utility.h"
#include <fstream>
#include <mysql.h>
#undef MYSQL_PORT

namespace FIX
{

const std::string MySQLLogFactory::DEFAULT_DATABASE = "quickfix";
const std::string MySQLLogFactory::DEFAULT_USER = "";
const std::string MySQLLogFactory::DEFAULT_PASSWORD = "";
const std::string MySQLLogFactory::DEFAULT_HOST = "localhost";
const short MySQLLogFactory::DEFAULT_PORT = 0;

MySQLLog::MySQLLog
( const SessionID& s, const std::string& database, const std::string& user,
  const std::string& password, const std::string& host, short port )
    : m_sessionID( s )
{
  if ( !( m_pConnection = mysql_init( NULL ) ) )
    throw ConfigError( "Unable to initialize MySQL" );
  MYSQL* pConnection = reinterpret_cast < MYSQL* > ( m_pConnection );
  if ( !mysql_real_connect( pConnection, host.c_str(), user.c_str(), password.c_str(),
                            database.c_str(), port, NULL, 0 ) )
  {
    throw ConfigError( "Unable to connect to database" );
  }
}

MySQLLog::~MySQLLog()
{
  MYSQL * pConnection = reinterpret_cast < MYSQL* > ( m_pConnection );
  mysql_close( pConnection );
}

Log* MySQLLogFactory::create( const SessionID& s )
{
  std::string database = DEFAULT_DATABASE;
  std::string user = DEFAULT_USER;
  std::string password = DEFAULT_PASSWORD;
  std::string host = DEFAULT_HOST;
  short port = DEFAULT_PORT;

  if ( m_useSettings )
  {
    Dictionary settings = m_settings.get( s );

    try { database = settings.getString( MYSQL_STORE_DATABASE ); }
    catch ( ConfigError& ) {}

    try { user = settings.getString( MYSQL_STORE_USER ); }
    catch ( ConfigError& ) {}

    try { password = settings.getString( MYSQL_STORE_PASSWORD ); }
    catch ( ConfigError& ) {}

    try { host = settings.getString( MYSQL_STORE_HOST ); }
    catch ( ConfigError& ) {}

    try { port = ( short ) settings.getLong( MYSQL_STORE_PORT ); }
    catch ( ConfigError& ) {}}
  else
  {
    database = m_database;
    user = m_user;
    password = m_password;
    host = m_host;
    port = m_port;
  }

  return new MySQLLog( s, database, user, password, host, port );
}

void MySQLLogFactory::destroy( Log* pLog )
{
  delete pLog;
}

void MySQLLog::insert( const std::string& table, const std::string value )
{
  UtcTimeStamp time;
  char sqlTime[ 20 ];
  strftime( sqlTime, 20, "%Y-%m-%d %H:%M:%S", ( tm* ) time );

  MYSQL * pConnection = reinterpret_cast < MYSQL* > ( m_pConnection );
  std::stringstream query;
  query << "INSERT INTO " << table << " "
  << "(time, beginstring, sendercompid, targetcompid, text) "
  << "VALUES ("
  << "'" << sqlTime << "',"
  << "\"" << m_sessionID.getBeginString().getValue() << "\","
  << "\"" << m_sessionID.getSenderCompID().getValue() << "\","
  << "\"" << m_sessionID.getTargetCompID().getValue() << "\","
  << "\"" << value << "\")";

  mysql_query( pConnection, query.str().c_str() );
}

} //namespace FIX

#endif //HAVE_MYSQL
