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

#ifndef FIX_FILESTORE_H
#define FIX_FILESTORE_H

#ifdef _MSC_VER
#pragma warning( disable : 4503 4355 4786 4290 )
#endif

#include "MessageStore.h"
#include "SessionSettings.h"
#include <fstream>
#include <string>

namespace FIX
{
class Session;

/*! \addtogroup user
 *  @{
 */ 
/// Creates a file based implementation of MessageStore.
class FileStoreFactory : public MessageStoreFactory
{
public:
  FileStoreFactory( const SessionSettings& settings )
: m_settings( settings ) {};
  FileStoreFactory( const std::string& path )
: m_path( path ) {};

  MessageStore* create( const SessionID& );
  void destroy( MessageStore* );
private:
  std::string m_path;
  SessionSettings m_settings;
};
/*! @} */

/**
 * File based implementation of MessageStore.
 *
 * Four files are created by this implementation.  One for storing outgoing
 * messages, one for indexing message locations, one for storing sequence numbers, 
 * and one for storing the session creation time.
 *
 * The formats of the files are:<br>
 * &nbsp;&nbsp;
 *   <path>+<BeginString>-<SenderCompID>-<TargetCompID>.body<br>
 * &nbsp;&nbsp;
 *   <path>+<BeginString>-<SenderCompID>-<TargetCompID>.header<br>
 * &nbsp;&nbsp;
 *   <path>+<BeginString>-<SenderCompID>-<TargetCompID>.seqnums<br>
 * &nbsp;&nbsp;
 *   <path>+<BeginString>-<SenderCompID>-<TargetCompID>.session<br>
 *
 *
 * The messages file is a pure stream of %FIX messages.<br><br>
 * The sequence number file is in the format of<br>
 * &nbsp;&nbsp;
 *   <SenderMsgSeqNum> : <TargetMsgSeqNum><br><br>
 * The session file is a UTC timestamp in the format of<br>
 * &nbsp;&nbsp;
 *   YYYYMMDD-HH:MM:SS
 */
class FileStore : public MessageStore
{
public:
  FileStore( std::string, const SessionID& s );
  virtual ~FileStore();

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
  typedef std::pair < int, int > OffsetSize;
  typedef std::map < int, OffsetSize > NumToOffset;

  void open( bool deleteFile );
  void populateCache();
  bool readFromFile( int offset, int size, std::string& msg );
  void setSeqNum();
  void setSession();

  MemoryStore m_cache;
  NumToOffset m_offsets;

  std::string m_msgFileName;
  std::string m_headerFileName;
  std::string m_seqNumFileName;
  std::string m_sessionFileName;

  FILE* m_msgFile;
  FILE* m_headerFile;
  FILE* m_seqNumsFile;
  FILE* m_sessionFile;
};
}

#endif //FIX_FILESTORE_H
