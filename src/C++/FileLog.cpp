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

#ifdef _MSC_VER
#include "stdafx.h"
#else
#include "config.h"
#endif
#include "CallStack.h"

#include "FileLog.h"

namespace FIX
{
Log* FileLogFactory::create()
{ QF_STACK_PUSH(FileLogFactory::create)

  m_globalLogCount++;
  if( m_globalLogCount > 1 ) return m_globalLog;

  try
  {
    if ( m_path.size() ) return new FileLog( m_path );
    std::string path;
    Dictionary settings = m_settings.get();
    path = settings.getString( FILE_LOG_PATH );
    return m_globalLog = new FileLog( path );
  }
  catch( ConfigError& )
  {
	m_globalLogCount--;
	throw;	
  }

  QF_STACK_POP
}

Log* FileLogFactory::create( const SessionID& s )
{ QF_STACK_PUSH(FileLogFactory::create)

  if ( m_path.size() ) return new FileLog( m_path, s );
  std::string path;
  Dictionary settings = m_settings.get( s );
  path = settings.getString( FILE_LOG_PATH );
  return new FileLog( path, s );

  QF_STACK_POP
}

void FileLogFactory::destroy( Log* pLog )
{ QF_STACK_PUSH(FileLogFactory::destroy)
 
  if( pLog == m_globalLog )
  {
    m_globalLogCount--;
    if( m_globalLogCount == 0 )
    {
	  delete pLog;
	  m_globalLogCount = 0;
    }	
  }
  else
  {
  	delete pLog;
  }

  QF_STACK_POP
}

FileLog::FileLog( const std::string& path )
{
  init( path, "GLOBAL" );
}

FileLog::FileLog( const std::string& path, const SessionID& s )
{
  const std::string& begin =
    s.getBeginString().getString();
  const std::string& sender =
    s.getSenderCompID().getString();
  const std::string& target =
    s.getTargetCompID().getString();
  const std::string& qualifier =
    s.getSessionQualifier();

  std::string prefix = begin + "-" + sender + "-" + target;
  if( qualifier.size() )
    prefix += "-" + qualifier;

  init( path, prefix );
}

void FileLog::init( std::string path, const std::string& prefix )
{ QF_STACK_PUSH(FileLog::init)
	
  file_mkdir( path.c_str() );

  if ( path.empty() ) path = ".";

  std::string fullPrefix
    = file_appendpath(path, prefix + ".");

  m_messagesFileName = fullPrefix + "messages.log";
  m_eventFileName = fullPrefix + "event.log";

  m_messages.open( m_messagesFileName.c_str(), std::ios::out | std::ios::app );
  if ( !m_messages.is_open() ) throw ConfigError( "Could not open messages file: " + m_messagesFileName );
  m_event.open( m_eventFileName.c_str(), std::ios::out | std::ios::app );
  if ( !m_event.is_open() ) throw ConfigError( "Could not open event file: " + m_eventFileName );

  QF_STACK_POP
}

FileLog::~FileLog()
{
  m_messages.close();
  m_event.close();
}

void FileLog::clear()
{
  m_messages.close();
  m_event.close();

  m_messages.open( m_messagesFileName.c_str(), std::ios::out | std::ios::trunc );
  m_event.open( m_eventFileName.c_str(), std::ios::out | std::ios::trunc );
}

} //namespace FIX
