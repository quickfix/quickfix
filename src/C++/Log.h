/* -*- C++ -*- */
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
    std::cout << "<" << UtcTimeStampConvertor::convert(m_time) << ", " << m_sessionID 
              << ", " << "incoming>" << std::endl << "  (" << value << ")" << std::endl;
  }
  void onOutgoing( const std::string& value )
  {
    if ( !m_outgoing ) return ;
    Locker l( s_mutex );
    std::cout << "<" << UtcTimeStampConvertor::convert(m_time) << ", " << m_sessionID 
              << ", " << "outgoing>" << std::endl << "  (" << value << ")" << std::endl;
  }
  void onEvent( const std::string& value )
  {
    if ( !m_event ) return ;
    Locker l( s_mutex );
    std::cout << "<" << UtcTimeStampConvertor::convert(m_time) << ", " << m_sessionID 
              << ", " << "event>" << std::endl << "  (" << value << ")" << std::endl;
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
