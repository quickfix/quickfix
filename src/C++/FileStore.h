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

#ifndef FIX_FILESTORE_H
#define FIX_FILESTORE_H

#ifdef _MSC_VER
#pragma warning( disable : 4503 4355 4786 4290 )
#endif

#include "MessageStore.h"
#include "SessionSettings.h"
#include "Utility.h"
#include <fstream>
#include <string>
#include <iostream>

namespace FIX
{
class Session;

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
 *   [path]+[BeginString]-[SenderCompID]-[TargetCompID].body<br>
 * &nbsp;&nbsp;
 *   [path]+[BeginString]-[SenderCompID]-[TargetCompID].header<br>
 * &nbsp;&nbsp;
 *   [path]+[BeginString]-[SenderCompID]-[TargetCompID].seqnums<br>
 * &nbsp;&nbsp;
 *   [path]+[BeginString]-[SenderCompID]-[TargetCompID].session<br>
 *
 *
 * The messages file is a pure stream of %FIX messages.<br><br>
 * The sequence number file is in the format of<br>
 * &nbsp;&nbsp;
 *   [SenderMsgSeqNum] : [TargetMsgSeqNum]<br><br>
 * The session file is a UTC timestamp in the format of<br>
 * &nbsp;&nbsp;
 *   YYYYMMDD-HH:MM:SS
 */


class FileStore : public MessageStore
{
public:

  class FileManager {
  public:
    virtual ~FileManager(){};

    virtual void makeDirectory( const std::string& path );
    virtual void unlink( const std::string& path );
    virtual FILE* open( const std::string& path, const std::string& mode );

    virtual int printHeaderFile(FILE *headerFile, int msgSeqNum, long offset, std::size_t size);
    virtual int printSeqNumsFile(FILE *seqnumFile, int nextSenderSeqNum, int nextTargetSeqNum);
    virtual int printSessionFile(FILE *sessionFile, UtcTimeStamp timestamp);

    virtual int scanHeaderFile(FILE *headerFile, int* num, long* offset, std::size_t* size);
    virtual int scanSeqNumsFile(FILE *seqnumFile, int* sender, int* target);
    virtual int scanSessionFile(FILE *sessionFile, char time[]);

    virtual int close(FILE *stream);
    virtual int seek(FILE *stream, long int offset, int whence) const;
    virtual long int tell(FILE *stream);
    virtual size_t write (const void *data, size_t size, size_t count, FILE *stream);
    virtual int error (FILE *stream) const;
    virtual int flush (FILE *stream);
    virtual void rewindStream(FILE *stream);
    virtual size_t read (void *data, size_t size, size_t count, FILE *stream) const;
  };

  FileStore( std::string, const SessionID& s, bool deleteFile = false, FileManager* manager = nullptr);

  virtual ~FileStore();

  bool set( int, const std::string& ) EXCEPT ( IOException );
  void get( int, int, std::vector < std::string > & ) const EXCEPT ( IOException );

  int getNextSenderMsgSeqNum() const EXCEPT ( IOException );
  int getNextTargetMsgSeqNum() const EXCEPT ( IOException );
  void setNextSenderMsgSeqNum( int value ) EXCEPT ( IOException );
  void setNextTargetMsgSeqNum( int value ) EXCEPT ( IOException );
  void incrNextSenderMsgSeqNum() EXCEPT ( IOException );
  void incrNextTargetMsgSeqNum() EXCEPT ( IOException );

  UtcTimeStamp getCreationTime() const EXCEPT ( IOException );

  void reset() EXCEPT ( IOException );
  void refresh() EXCEPT ( IOException );

private:
#ifdef _MSC_VER
  typedef std::pair < int, int > OffsetSize;
#else
  typedef std::pair < long, std::size_t > OffsetSize;
#endif
  typedef std::map < int, OffsetSize > NumToOffset;

  void open( bool deleteFile );
  void populateCache();
  bool readFromFile( int offset, int size, std::string& msg );
  void seekEND(FILE *stream, long int offset, const std::string& filename);
  void seekSET(FILE *stream, long int offset, const std::string& filename) const;
  void insertOffSet(NumToOffset::value_type value, const long& offset, const std::size_t& size );


  void flush(FILE *stream, const std::string& filename);
  void checkForWriteError(FILE *stream, const std::string& filename);
  void setSeqNum();
  void setSession();

  bool get( int, std::string& ) const EXCEPT ( IOException );

  MemoryStore m_cache;
  NumToOffset m_offsets;

  std::string m_msgFileName;
  std::string m_headerFileName;
  std::string m_seqNumsFileName;
  std::string m_sessionFileName;

  FILE* m_msgFile;
  FILE* m_headerFile;
  FILE* m_seqNumsFile;
  FILE* m_sessionFile;

  FileManager* fileManager;
  bool defaultFileManagerUsed = false;
};
}

#endif //FIX_FILESTORE_H
