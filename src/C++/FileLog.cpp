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
  delete pLog;
  QF_STACK_POP
}

FileLog::FileLog( std::string path, const SessionID& s )
: m_sessionID( s )
{
  file_mkdir( path.c_str() );

  if ( path.empty() ) path = ".";
  const std::string& begin =
    s.getBeginString().getString();
  const std::string& sender =
    s.getSenderCompID().getString();
  const std::string& target =
    s.getTargetCompID().getString();
  const std::string& qualifier =
    s.getSessionQualifier();

  std::string sessionid = begin + "-" + sender + "-" + target;
  if( qualifier.size() )
    sessionid += "-" + qualifier;

  std::string prefix
    = file_appendpath(path, sessionid + ".");

  m_messagesFileName = prefix + "messages.log";
  m_eventFileName = prefix + "event.log";

  m_messages.open( m_messagesFileName.c_str(), std::ios::out | std::ios::app );
  if ( !m_messages.is_open() ) throw ConfigError( "Could not open messages file" );
  m_event.open( m_eventFileName.c_str(), std::ios::out | std::ios::app );
  if ( !m_event.is_open() ) throw ConfigError( "Could not open event file" );
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
