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

#ifdef _MSC_VER
#include "stdafx.h"
#else
#include "config.h"
#endif
#include "CallStack.h"

#include "FileStore.h"
#include "SessionID.h"
#include "Parser.h"
#include "Utility.h"
#include <fstream>

namespace FIX
{
FileStore::FileStore( std::string path, const SessionID& s )
: m_msgFile( 0 ), m_headerFile( 0 ), m_seqNumsFile( 0 ), m_sessionFile( 0 )
{
  file_mkdir( path.c_str(), 0700 );

  if ( path.empty() ) path = ".";
  const std::string& begin =
    s.getBeginString().getString();
  const std::string& sender =
    s.getSenderCompID().getString();
  const std::string& target =
    s.getTargetCompID().getString();

  std::string prefix 
    = file_appendpath(path, begin + "-" + sender + "-" + target + ".");

  m_msgFileName = prefix + "body";
  m_headerFileName = prefix + "header";
  m_seqNumFileName = prefix + "seqnums";
  m_sessionFileName = prefix + "session";

  try
  {
    open( false );
  }
  catch ( IOException & e )
  {
    throw ConfigError( e.what() );
  }
}

FileStore::~FileStore()
{
  fclose( m_msgFile );
  fclose( m_headerFile );
  fclose( m_seqNumsFile );
  fclose( m_sessionFile );
}

void FileStore::open( bool deleteFile )
{ QF_STACK_PUSH(FileStore::open)

  if ( m_msgFile ) fclose( m_msgFile );
  if ( m_headerFile ) fclose( m_headerFile );
  if ( m_seqNumsFile ) fclose( m_seqNumsFile );
  if ( m_sessionFile ) fclose( m_sessionFile );

  if ( deleteFile )
  {
    file_unlink( m_msgFileName.c_str() );
    file_unlink( m_headerFileName.c_str() );
    file_unlink( m_seqNumFileName.c_str() );
    file_unlink( m_sessionFileName.c_str() );
  }

  populateCache();

  m_msgFile = fopen( m_msgFileName.c_str(), "r+" );
  if ( !m_msgFile ) m_msgFile = fopen( m_msgFileName.c_str(), "w+" );
  if ( !m_msgFile ) throw ConfigError( "Could not open messages file" );

  m_headerFile = fopen( m_headerFileName.c_str(), "r+" );
  if ( !m_headerFile ) m_headerFile = fopen( m_headerFileName.c_str(), "w+" );
  if ( !m_headerFile ) throw ConfigError( "Could not open header file" );

  m_seqNumsFile = fopen( m_seqNumFileName.c_str(), "r+" );
  if ( !m_seqNumsFile ) m_seqNumsFile = fopen( m_seqNumFileName.c_str(), "w+" );
  if ( !m_seqNumsFile ) throw ConfigError( "Could not open seqnums file" );

  bool setCreationTime = false;
  m_sessionFile = fopen( m_sessionFileName.c_str(), "r" );
  if ( !m_sessionFile ) setCreationTime = true;
  else fclose( m_sessionFile );

  m_sessionFile = fopen( m_sessionFileName.c_str(), "r+" );
  if ( !m_sessionFile ) m_sessionFile = fopen( m_sessionFileName.c_str(), "w+" );
  if ( !m_sessionFile ) throw ConfigError( "Could not open session file" );
  if ( setCreationTime ) setSession();

  setNextSenderMsgSeqNum( getNextSenderMsgSeqNum() );
  setNextTargetMsgSeqNum( getNextTargetMsgSeqNum() );

  QF_STACK_POP
}

void FileStore::populateCache()
{ QF_STACK_PUSH(FileStore::populateCache)

  std::string msg;
  Message message;

  FILE* headerFile;
  headerFile = fopen( m_headerFileName.c_str(), "r+" );
  if ( headerFile )
  {
    int num, offset, size;
    while ( fscanf( headerFile, "%d,%d,%d ", &num, &offset, &size ) == 3 )
      m_offsets[ num ] = std::make_pair( offset, size );
    fclose( headerFile );
  }

  FILE* seqNumFile;
  seqNumFile = fopen( m_seqNumFileName.c_str(), "r+" );
  if ( seqNumFile )
  {
    int sender, target;
    if ( fscanf( seqNumFile, "%d : %d", &sender, &target ) == 2 )
    {
      m_cache.setNextSenderMsgSeqNum( sender );
      m_cache.setNextTargetMsgSeqNum( target );
    }
    fclose( seqNumFile );
  }

  FILE* sessionFile;
  sessionFile = fopen( m_sessionFileName.c_str(), "r+" );
  if ( sessionFile )
  {
    char time[ 20 ];
    if ( fscanf( sessionFile, "%s", time ) == 1 )
    {
      m_cache.setCreationTime( UtcTimeStampConvertor::convert( time ) );
    }
    fclose( sessionFile );
  }

  QF_STACK_POP
}

MessageStore* FileStoreFactory::create( const SessionID& s )
{ QF_STACK_PUSH(FileStoreFactory::create)

  if ( m_path.size() ) return new FileStore( m_path, s );

  std::string path;
  Dictionary settings = m_settings.get( s );
  path = settings.getString( FILE_STORE_PATH );
  return new FileStore( path, s );

  QF_STACK_POP
}

void FileStoreFactory::destroy( MessageStore* pStore )
{ QF_STACK_PUSH(FileStoreFactory::destroy)
  delete pStore;
  QF_STACK_POP 
}

bool FileStore::set( int msgSeqNum, const std::string& msg )
throw ( IOException )
{ QF_STACK_PUSH(FileStore::set)

  if ( fseek( m_msgFile, 0, SEEK_END ) ) throw IOException();
  if ( fseek( m_headerFile, 0, SEEK_END ) ) throw IOException();

  int offset = ftell( m_msgFile );
  if ( offset < 0 ) throw IOException();
  int size = msg.size();

  if ( fprintf( m_headerFile, "%d,%d,%d ", msgSeqNum, offset, size ) < 0 )
    throw IOException();
  m_offsets[ msgSeqNum ] = std::make_pair( offset, size );
  fwrite( msg.c_str(), sizeof( char ), msg.size(), m_msgFile );
  if ( ferror( m_msgFile ) ) throw IOException();
  if ( fflush( m_msgFile ) == EOF ) throw IOException();
  if ( fflush( m_headerFile ) == EOF ) throw IOException();
  return true;

  QF_STACK_POP
}

bool FileStore::get( int msgSeqNum, std::string& msg ) const
throw ( IOException )
{ QF_STACK_PUSH(FileStore::get)

  NumToOffset::const_iterator find = m_offsets.find( msgSeqNum );
  if ( find == m_offsets.end() ) return false;
  const OffsetSize& offset = find->second;
  if ( fseek( m_msgFile, offset.first, SEEK_SET ) ) throw IOException();
  char* buffer = new char[ offset.second + 1 ];
  fread( buffer, sizeof( char ), offset.second, m_msgFile );
  if ( ferror( m_msgFile ) ) throw IOException();
  buffer[ offset.second ] = 0;
  msg = buffer;
  delete [] buffer;
  return true;

  QF_STACK_POP
}

void FileStore::get( int begin, int end,
                     std::vector < std::string > & result ) const
throw ( IOException )
{ QF_STACK_PUSH(FileStore::get)

  result.clear();
  std::string msg;
  for ( int i = begin; i <= end; ++i )
  {
    if ( get( i, msg ) )
      result.push_back( msg );
  }

  QF_STACK_POP
}

int FileStore::getNextSenderMsgSeqNum() const throw ( IOException )
{ QF_STACK_PUSH(FileStore::getNextSenderMsgSeqNum)
  return m_cache.getNextSenderMsgSeqNum();
  QF_STACK_POP
}

int FileStore::getNextTargetMsgSeqNum() const throw ( IOException )
{ QF_STACK_PUSH(FileStore::getNextTargetMsgSeqNum)
  return m_cache.getNextTargetMsgSeqNum();
  QF_STACK_POP
}

void FileStore::setNextSenderMsgSeqNum( int value ) throw ( IOException )
{ QF_STACK_PUSH(FileStore::setNextSenderMsgSeqNum)
  m_cache.setNextSenderMsgSeqNum( value );
  setSeqNum();
  QF_STACK_POP
}

void FileStore::setNextTargetMsgSeqNum( int value ) throw ( IOException )
{ QF_STACK_PUSH(FileStore::setNextTargetMsgSeqNum)
  m_cache.setNextTargetMsgSeqNum( value );
  setSeqNum();
  QF_STACK_POP
}

void FileStore::incrNextSenderMsgSeqNum() throw ( IOException )
{ QF_STACK_PUSH(FileStore::incrNextSenderMsgSeqNum)
  m_cache.incrNextSenderMsgSeqNum();
  setSeqNum();
  QF_STACK_POP
}

void FileStore::incrNextTargetMsgSeqNum() throw ( IOException )
{ QF_STACK_PUSH(FileStore::incrNextTargetMsgSeqNum)
  m_cache.incrNextTargetMsgSeqNum();
  setSeqNum();
  QF_STACK_POP
}

UtcTimeStamp FileStore::getCreationTime() const throw ( IOException )
{ QF_STACK_PUSH(FileStore::getCreationTime)
  return m_cache.getCreationTime();
  QF_STACK_POP
}

void FileStore::reset() throw ( IOException )
{ QF_STACK_PUSH(FileStore::reset)

  m_cache.reset();
  open( true );
  setSession();

  QF_STACK_POP
}

void FileStore::setSeqNum()
{ QF_STACK_PUSH(FileStore::setSeqNum)

  rewind( m_seqNumsFile );
  fprintf( m_seqNumsFile, "%d : %d",
           getNextSenderMsgSeqNum(), getNextTargetMsgSeqNum() );
  if ( ferror( m_seqNumsFile ) ) throw IOException();
  if ( fflush( m_seqNumsFile ) ) throw IOException();

  QF_STACK_POP
}

void FileStore::setSession()
{ QF_STACK_PUSH(FileStore::setSession)

  rewind( m_sessionFile );
  fprintf( m_sessionFile, "%s",
           UtcTimeStampConvertor::convert( m_cache.getCreationTime() ).c_str() );
  if ( ferror( m_sessionFile ) ) throw IOException();
  if ( fflush( m_sessionFile ) ) throw IOException();

  QF_STACK_POP
}
} //namespace FIX
