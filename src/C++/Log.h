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

#ifndef FIX_LOG_H
#define FIX_LOG_H

#ifdef _MSC_VER
#pragma warning( disable : 4503 4355 4786 4290 )
#endif

#include "Message.h"
#include "Mutex.h"
#include <map>
#include <vector>

namespace FIX
{
class Log;

/*! \addtogroup user
 *  @{
 */ 
/**
 * This interface must be implemented to create a Log.
 */
class LogFactory
{
public:
  virtual ~LogFactory() {}
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
  ScreenLogFactory( bool incoming, bool outgoing, bool event )
: m_incoming( incoming ), m_outgoing( outgoing ), m_event( event ) {}

  Log* create( const SessionID& );
  void destroy( Log* log );

private:
  bool m_incoming;
  bool m_outgoing;
  bool m_event;
};

/**
 * This interface must be implemented to log messages and events
 */
class Log
{
public:
  virtual ~Log() {}

  virtual void onIncoming( const std::string& ) = 0;
  virtual void onOutgoing( const std::string& ) = 0;
  virtual void onEvent( const std::string& ) = 0;
};
/*! @} */

/**
 * Screen based implementation of Log.
 *
 * This will display all log information onto the standard output
 */
class ScreenLog : public Log
{
public:
  ScreenLog( const SessionID& sessionID,
             bool incoming, bool outgoing, bool event )
: m_sessionID( sessionID ),
  m_incoming( incoming ), m_outgoing( outgoing ), m_event( event ) {}

  void onIncoming( const std::string& value )
  {
    if ( !m_incoming ) return ;
    Locker l( s_mutex );
    m_time.setCurrent();
    std::cout << "<" << UtcTimeStampConvertor::convert(m_time) 
              << ", " << m_sessionID 
              << ", " << "incoming>" << std::endl 
              << "  (" << value << ")" << std::endl;
  }
  void onOutgoing( const std::string& value )
  {
    if ( !m_outgoing ) return ;
    Locker l( s_mutex );
    m_time.setCurrent();
    std::cout << "<" << UtcTimeStampConvertor::convert(m_time) 
              << ", " << m_sessionID 
              << ", " << "outgoing>" << std::endl 
              << "  (" << value << ")" << std::endl;
  }
  void onEvent( const std::string& value )
  {
    if ( !m_event ) return ;
    Locker l( s_mutex );
    m_time.setCurrent();
    std::cout << "<" << UtcTimeStampConvertor::convert(m_time) 
              << ", " << m_sessionID 
              << ", " << "event>" << std::endl 
              << "  (" << value << ")" << std::endl;
  }

private:
  SessionID m_sessionID;
  UtcTimeStamp m_time;
  bool m_incoming;
  bool m_outgoing;
  bool m_event;
  static Mutex s_mutex;
};
}

#endif //FIX_LOG_H
