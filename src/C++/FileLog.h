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
 *   <path>+<BeginString>-<SenderCompID>-<TargetCompID>.incoming<br>
 * &nbsp;&nbsp;
 *   <path>+<BeginString>-<SenderCompID>-<TargetCompID>.outgoing<br>
 * &nbsp;&nbsp;
 *   <path>+<BeginString>-<SenderCompID>-<TargetCompID>.event<br>
 *
 */
class FileLog : public Log
{
public:
  FileLog( std::string path, const SessionID& sessionID );
  virtual ~FileLog();

  void onIncoming( const std::string& value )
  { m_incoming << value << std::endl; }
  void onOutgoing( const std::string& value )
  { m_outgoing << value << std::endl; }
  void onEvent( const std::string& value )
  {
    UtcTimeStamp now;
    m_event << UtcTimeStampConvertor::convert( now )
    << " : " << value << std::endl;
  }

private:
  SessionID m_sessionID;
  std::ofstream m_incoming;
  std::ofstream m_outgoing;
  std::ofstream m_event;
};
}

#endif //FIX_LOG_H
