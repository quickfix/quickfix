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

#ifndef FIX_FILELOG_H
#define FIX_FILELOG_H

#ifdef _MSC_VER
#pragma warning( disable : 4503 4355 4786 4290 )
#endif

#include "Log.h"
#include "SessionSettings.h"
#include <fstream>

namespace FIX
{
/**
 * Creates a file based implementation of Log
 *
 * This stores all log events into flat files
 */
class FileLogFactory : public LogFactory
{
public:
  FileLogFactory( const SessionSettings& settings )
: m_settings( settings ) {};
  FileLogFactory( const std::string& path )
: m_path( path ) {};

public:
  Log* create( const SessionID& );
  void destroy( Log* log );

private:
  std::string m_path;
  SessionSettings m_settings;
};

/**
 * File based implementation of Log
 *
 * Three files are created by this implementation.  One for outgoing
 * messages, one for incoming message, and one for events.
 *
 * The formats of the files are:<br>
 * &nbsp;&nbsp;
 *   [path]+[BeginString]-[SenderCompID]-[TargetCompID].incoming<br>
 * &nbsp;&nbsp;
 *   [path]+[BeginString]-[SenderCompID]-[TargetCompID].outgoing<br>
 * &nbsp;&nbsp;
 *   [path]+[BeginString]-[SenderCompID]-[TargetCompID].event<br>
 *
 */
class FileLog : public Log
{
public:
  FileLog( std::string path, const SessionID& sessionID );
  virtual ~FileLog();

  void clear()
  {
    m_messages.clear();
    m_event.clear();
  }
  void onIncoming( const std::string& value )
  { m_messages << value << std::endl << std::flush; }
  void onOutgoing( const std::string& value )
  { m_messages << value << std::endl << std::flush; }
  void onEvent( const std::string& value )
  {
    UtcTimeStamp now;
    m_event << UtcTimeStampConvertor::convert( now )
    << " : " << value << std::endl << std::flush;
  }

private:
  SessionID m_sessionID;
  std::ofstream m_messages;
  std::ofstream m_event;
};
}

#endif //FIX_LOG_H
