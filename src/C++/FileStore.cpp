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

#ifdef _MSC_VER
#include "stdafx.h"
#else
#include "config.h"
#endif

#include "FileStore.h"
#include "Session.h"
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

  std::string prefix = path + "/" + begin + "-" + sender + "-" + target + ".";

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
{
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
}

void FileStore::populateCache()
{
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
}

MessageStore* FileStoreFactory::create( const SessionID& s )
{
  if ( m_path.size() ) return new FileStore( m_path, s );

  std::string path;
  Dictionary settings = m_settings.get( s );
  path = settings.getString( FILE_STORE_PATH );
  return new FileStore( path, s );
}

void FileStoreFactory::destroy( MessageStore* pStore )
{
  delete pStore;
}

bool FileStore::set( int msgSeqNum, const std::string& msg )
throw ( IOException& )
{
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
}

bool FileStore::get( int msgSeqNum, std::string& msg ) const
throw ( IOException& )
{
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
}

void FileStore::get( int begin, int end,
                     std::vector < std::string > & result ) const
throw ( IOException& )
{
  result.clear();
  std::string msg;
  for ( int i = begin; i <= end; ++i )
  {
    if ( get( i, msg ) )
      result.push_back( msg );
  }
}

int FileStore::getNextSenderMsgSeqNum() const throw ( IOException& )
{
  return m_cache.getNextSenderMsgSeqNum();
}

int FileStore::getNextTargetMsgSeqNum() const throw ( IOException& )
{
  return m_cache.getNextTargetMsgSeqNum();
}

void FileStore::setNextSenderMsgSeqNum( int value ) throw ( IOException& )
{
  m_cache.setNextSenderMsgSeqNum( value );
  setSeqNum();
}

void FileStore::setNextTargetMsgSeqNum( int value ) throw ( IOException& )
{
  m_cache.setNextTargetMsgSeqNum( value );
  setSeqNum();
}

void FileStore::incrNextSenderMsgSeqNum() throw ( IOException& )
{
  m_cache.incrNextSenderMsgSeqNum();
  setSeqNum();
}

void FileStore::incrNextTargetMsgSeqNum() throw ( IOException& )
{
  m_cache.incrNextTargetMsgSeqNum();
  setSeqNum();
}

UtcTimeStamp FileStore::getCreationTime() const throw ( IOException& )
{
  return m_cache.getCreationTime();
}

void FileStore::reset() throw ( IOException& )
{
  m_cache.reset();
  open( true );
  setSession();
}

void FileStore::setSeqNum()
{
  rewind( m_seqNumsFile );
  fprintf( m_seqNumsFile, "%d : %d",
           getNextSenderMsgSeqNum(), getNextTargetMsgSeqNum() );
  if ( ferror( m_seqNumsFile ) ) throw IOException();
  if ( fflush( m_seqNumsFile ) ) throw IOException();
}

void FileStore::setSession()
{
  rewind( m_sessionFile );
  fprintf( m_sessionFile, "%s",
           UtcTimeStampConvertor::convert( m_cache.getCreationTime() ).c_str() );
  if ( ferror( m_sessionFile ) ) throw IOException();
  if ( fflush( m_sessionFile ) ) throw IOException();
}
} //namespace FIX
