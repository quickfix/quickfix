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

#ifndef FIX_LOG_H
#define FIX_LOG_H

#ifdef _MSC_VER
#pragma warning( disable : 4503 4355 4786 4290 )
#endif

#include "Message.h"
#include "Mutex.h"
#include "SessionSettings.h"
#include <map>
#include <vector>

namespace FIX
{
class Log;

/**
 * This interface must be implemented to create a Log.
 */
class LogFactory
{
public:
  virtual ~LogFactory() {}
  virtual Log* create() = 0;
  virtual Log* create( const SessionID& ) = 0;
  virtual void destroy( Log* ) = 0;
};

/**
 * Creates a screen based implementation of Log.
 *
 * This displays all log events onto the standard output
 */
class ScreenLogFactory : public LogFactory
{
public:
  ScreenLogFactory( const SessionSettings& settings )
: m_useSettings( true ), m_settings( settings ) {};
  ScreenLogFactory( bool incoming, bool outgoing, bool event )
: m_incoming( incoming ), m_outgoing( outgoing ), m_event( event ), m_useSettings( false ) {}

  Log* create();
  Log* create( const SessionID& );
  void destroy( Log* log );

private:
  void init( const Dictionary& settings, bool& incoming, bool& outgoing, bool& event );

  bool m_incoming;
  bool m_outgoing;
  bool m_event;
  bool m_useSettings;
  SessionSettings m_settings;
};

/**
 * This interface must be implemented to log messages and events
 */
class Log
{
public:
  virtual ~Log() {}

  virtual void clear() = 0;
  virtual void backup() = 0;
  virtual void onIncoming( const std::string& ) = 0;
  virtual void onOutgoing( const std::string& ) = 0;
  virtual void onEvent( const std::string& ) = 0;
};
/*! @} */

/**
 * Null implementation of Log
 *
 * This is only for internal use. Used when no log factory is
 * passed to the initiator or acceptor.
 */
class NullLog : public Log
{
public:
  void clear() {}
  void backup() {}
  void onIncoming( const std::string& ) {}
  void onOutgoing( const std::string& ) {}
  void onEvent( const std::string& ) {}
};

/**
 * Screen based implementation of Log.
 *
 * This will display all log information onto the standard output
 */
class ScreenLog : public Log
{
public:
  ScreenLog( bool incoming, bool outgoing, bool event )
: m_prefix( "GLOBAL" ),
  m_incoming( incoming ), m_outgoing( outgoing ), m_event( event ) {}

  ScreenLog( const SessionID& sessionID,
             bool incoming, bool outgoing, bool event )
: m_prefix( sessionID.toString() ),
  m_incoming( incoming ), m_outgoing( outgoing ), m_event( event ) {}

  void clear() {}
  void backup() {}

  void onIncoming( const std::string& value )
  {
    if ( !m_incoming ) return ;
    Locker l( s_mutex );
    m_time.setCurrent();
    std::cout << "<" << UtcTimeStampConvertor::convert(m_time, 9)
              << ", " << m_prefix
              << ", " << "incoming>" << std::endl
              << "  (" << value << ")" << std::endl;
  }

  void onOutgoing( const std::string& value )
  {
    if ( !m_outgoing ) return ;
    Locker l( s_mutex );
    m_time.setCurrent();
    std::cout << "<" << UtcTimeStampConvertor::convert(m_time, 9)
              << ", " << m_prefix
              << ", " << "outgoing>" << std::endl
              << "  (" << value << ")" << std::endl;
  }

  void onEvent( const std::string& value )
  {
    if ( !m_event ) return ;
    Locker l( s_mutex );
    m_time.setCurrent();
    std::cout << "<" << UtcTimeStampConvertor::convert(m_time, 9)
              << ", " << m_prefix
              << ", " << "event>" << std::endl
              << "  (" << value << ")" << std::endl;
  }

private:
  std::string m_prefix;
  UtcTimeStamp m_time;
  bool m_incoming;
  bool m_outgoing;
  bool m_event;
  static Mutex s_mutex;
};
}

#endif //FIX_LOG_H
