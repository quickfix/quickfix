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

#ifdef _MSC_VER
#include "stdafx.h"
#else
#include "config.h"
#endif

#include "FileStore.h"
#include "SessionID.h"
#include "Parser.h"
#include "Utility.h"
#include <fstream>

namespace FIX
{
FileStore::FileStore( std::string path, const SessionID& s, bool deleteFile, FileManager* manager)
: m_msgFile( 0 ), m_headerFile( 0 ), m_seqNumsFile( 0 ), m_sessionFile( 0 ), fileManager(manager)
{

  if(!manager) {
    fileManager = new FileManager();
    defaultFileManagerUsed = true;
  }

  fileManager->makeDirectory( path.c_str() );

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
  if( qualifier.size() ) {
    sessionid += "-" + qualifier;
  }

  std::string prefix
    = file_appendpath(path, sessionid + ".");

  m_msgFileName = prefix + "body";
  m_headerFileName = prefix + "header";
  m_seqNumsFileName = prefix + "seqnums";
  m_sessionFileName = prefix + "session";

  try
  {
    open( deleteFile );
  }
  catch ( IOException & e )
  {
    throw ConfigError( e.what() );
  }
}

FileStore::~FileStore()
{
  if( m_msgFile ) fileManager->close( m_msgFile );
  if( m_headerFile ) fileManager->close( m_headerFile );
  if( m_seqNumsFile ) fileManager->close( m_seqNumsFile );
  if( m_sessionFile ) fileManager->close( m_sessionFile );
  if(defaultFileManagerUsed && fileManager){
    delete fileManager;
  }
}

void FileStore::open( bool deleteFile )
{
  if ( m_msgFile ) fileManager->close( m_msgFile );
  if ( m_headerFile ) fileManager->close( m_headerFile );
  if ( m_seqNumsFile ) fileManager->close( m_seqNumsFile );
  if ( m_sessionFile ) fileManager->close( m_sessionFile );

  m_msgFile = 0;
  m_headerFile = 0;
  m_seqNumsFile = 0;
  m_sessionFile = 0;

  if ( deleteFile )
  {
    fileManager->unlink( m_msgFileName.c_str() );
    fileManager->unlink( m_headerFileName.c_str() );
    fileManager->unlink( m_seqNumsFileName.c_str() );
    fileManager->unlink( m_sessionFileName.c_str() );
  }

  populateCache();
  m_msgFile = fileManager->open( m_msgFileName.c_str(), "r+" );
  if ( !m_msgFile ) m_msgFile = fileManager->open( m_msgFileName.c_str(), "w+" );
  if ( !m_msgFile ) throw ConfigError( "Could not open body file: " + m_msgFileName );

  m_headerFile = fileManager->open( m_headerFileName.c_str(), "r+" );
  if ( !m_headerFile ) m_headerFile = fileManager->open( m_headerFileName.c_str(), "w+" );
  if ( !m_headerFile ) throw ConfigError( "Could not open header file: " + m_headerFileName );

  m_seqNumsFile = fileManager->open( m_seqNumsFileName.c_str(), "r+" );
  if ( !m_seqNumsFile ) m_seqNumsFile = fileManager->open( m_seqNumsFileName.c_str(), "w+" );
  if ( !m_seqNumsFile ) throw ConfigError( "Could not open seqnums file: " + m_seqNumsFileName );

  bool setCreationTime = false;
  m_sessionFile = fileManager->open( m_sessionFileName.c_str(), "r" );
  if ( !m_sessionFile ) setCreationTime = true;
  else fclose( m_sessionFile );

  m_sessionFile = fileManager->open( m_sessionFileName.c_str(), "r+" );
  if ( !m_sessionFile ) m_sessionFile = fileManager->open( m_sessionFileName.c_str(), "w+" );
  if ( !m_sessionFile ) throw ConfigError( "Could not open session file" );
  if ( setCreationTime ) setSession();

  setNextSenderMsgSeqNum( getNextSenderMsgSeqNum() );
  setNextTargetMsgSeqNum( getNextTargetMsgSeqNum() );
}

void FileStore::populateCache()
{
  FILE* headerFile = fileManager->open( m_headerFileName.c_str(), "r+" );
  if ( headerFile )
  {
    int num;
    long offset;
    std::size_t size;
    while (fileManager->scanHeaderFile(headerFile, &num, &offset, &size) == 3)
    {
      insertOffSet(NumToOffset::value_type(num, std::make_pair(offset, size)), offset, size);
    }
    fileManager->close( headerFile );
  }

  FILE* seqNumsFile = fileManager->open( m_seqNumsFileName.c_str(), "r+" );
  if ( seqNumsFile )
  {
    int sender, target;
    if ( fileManager->scanSeqNumsFile(seqNumsFile, &sender, &target) == 2 )
    {
      m_cache.setNextSenderMsgSeqNum( sender );
      m_cache.setNextTargetMsgSeqNum( target );
    }
      fileManager->close( seqNumsFile );
  }

  FILE* sessionFile = fileManager->open( m_sessionFileName.c_str(), "r+" );
  if ( sessionFile )
  {
    char time[ 22 ];
#ifdef HAVE_FSCANF_S
    int result = FILE_FSCANF( sessionFile, time, 22 );
#else
    int result = fileManager->scanSessionFile(sessionFile, time);
#endif
    if( result == 1 )
    {
      m_cache.setCreationTime( UtcTimeStampConvertor::convert( time ) );
    }
    fileManager->close( sessionFile );
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
EXCEPT ( IOException )
{
  seekEND(m_msgFile, 0, m_msgFileName);
  seekEND(m_headerFile, 0, m_headerFileName);

  long offset = fileManager->tell( m_msgFile );
  if ( offset < 0 ) 
    throw IOException( "Unable to get file pointer position from " + m_msgFileName );
  std::size_t size = msg.size();

  if ( fileManager->printHeaderFile( m_headerFile, msgSeqNum, offset, size ) < 0 )
    throw IOException( "Unable to write to file " + m_headerFileName );

  insertOffSet(NumToOffset::value_type(msgSeqNum, std::make_pair(offset, size)), offset, size);

  fileManager->write( msg.c_str(), sizeof( char ), msg.size(), m_msgFile );
  checkForWriteError(m_msgFile, m_msgFileName);

  flush(m_msgFile, m_msgFileName);
  flush(m_headerFile, m_headerFileName);
  return true;
}

void FileStore::seekEND(FILE *stream, long int offset, const std::string& filename) {
  if ( fileManager->seek( stream, offset, SEEK_END ) )
    throw IOException( "Cannot seek to end of " + filename );
}

void FileStore::seekSET(FILE *stream, long int offset, const std::string& filename) const {
  if ( fileManager->seek( stream, offset, SEEK_SET ) )
    throw IOException( "Unable to seek in file " + filename );
}


void FileStore::flush(FILE *stream, const std::string& filename) {
  if ( fileManager->flush( stream ) == EOF )
    throw IOException( "Unable to flush file " + filename );
}

void FileStore::checkForWriteError(FILE *stream, const std::string& filename) {
  if ( fileManager->error( stream ) )
    throw IOException( "Unable to write to file " + filename );
}

void FileStore::get( int begin, int end,
                     std::vector < std::string > & result ) const
EXCEPT ( IOException )
{
  result.clear();
  std::string msg;
  for ( int i = begin; i <= end; ++i )
  {
    if ( get( i, msg ) )
      result.push_back( msg );
  }
}

int FileStore::getNextSenderMsgSeqNum() const EXCEPT ( IOException )
{
  return m_cache.getNextSenderMsgSeqNum();
}

int FileStore::getNextTargetMsgSeqNum() const EXCEPT ( IOException )
{
  return m_cache.getNextTargetMsgSeqNum();
}

void FileStore::setNextSenderMsgSeqNum( int value ) EXCEPT ( IOException )
{
  m_cache.setNextSenderMsgSeqNum( value );
  setSeqNum();
}

void FileStore::setNextTargetMsgSeqNum( int value ) EXCEPT ( IOException )
{
  m_cache.setNextTargetMsgSeqNum( value );
  setSeqNum();
}

void FileStore::incrNextSenderMsgSeqNum() EXCEPT ( IOException )
{
  m_cache.incrNextSenderMsgSeqNum();
  setSeqNum();
}

void FileStore::incrNextTargetMsgSeqNum() EXCEPT ( IOException )
{
  m_cache.incrNextTargetMsgSeqNum();
  setSeqNum();
}

UtcTimeStamp FileStore::getCreationTime() const EXCEPT ( IOException )
{
  return m_cache.getCreationTime();
}

void FileStore::reset() EXCEPT ( IOException )
{
  try
  {
    m_cache.reset();
    open( true );
    setSession();
  }
  catch( std::exception& e )
  {
    throw IOException( e.what() );
  }
}

void FileStore::refresh() EXCEPT ( IOException )
{
  try
  {
    m_cache.reset();
    open( false );
  }
  catch( std::exception& e )
  {
    throw IOException( e.what() );
  }
}

void FileStore::setSeqNum()
{
  fileManager->rewindStream( m_seqNumsFile );
  fileManager->printSeqNumsFile( m_seqNumsFile, getNextSenderMsgSeqNum(), getNextTargetMsgSeqNum() );
  if ( fileManager->error( m_seqNumsFile ) )
    throw IOException( "Unable to write to file " + m_seqNumsFileName );
  if ( fileManager->flush( m_seqNumsFile ) )
    throw IOException( "Unable to flush file " + m_seqNumsFileName );
}

void FileStore::setSession()
{
  fileManager->rewindStream( m_sessionFile );
  fileManager->printSessionFile( m_sessionFile, m_cache.getCreationTime());
  if ( fileManager->error( m_sessionFile ) )
    throw IOException( "Unable to write to file " + m_sessionFileName );
  if ( fileManager->flush( m_sessionFile ) )
    throw IOException( "Unable to flush file " + m_sessionFileName );
}

bool FileStore::get( int msgSeqNum, std::string& msg ) const
EXCEPT ( IOException )
{
  NumToOffset::const_iterator find = m_offsets.find( msgSeqNum );
  if ( find == m_offsets.end() ) return false;
  const OffsetSize& offset = find->second;
  seekSET(m_msgFile, offset.first, m_msgFileName);

  char* buffer = new char[ offset.second + 1 ];
  size_t result = fileManager->read( buffer, sizeof( char ), offset.second, m_msgFile );
  if ( fileManager->error( m_msgFile ) || result != (size_t)offset.second )
  {
    delete [] buffer;
    throw IOException( "Unable to read from file " + m_msgFileName );
  }
  buffer[ offset.second ] = 0;
  msg = buffer;
  delete [] buffer;
  return true;
}

void FileStore::insertOffSet(NumToOffset::value_type value, const long& offset, const std::size_t& size ) {
  std::pair<NumToOffset::iterator, bool> it = m_offsets.insert(value);
  if (it.second == false)
  {
    it.first->second = std::make_pair(offset, size);
  }
}

void FileStore::FileManager::makeDirectory( const std::string& path ) {
  FIX::file_mkdir(path.c_str());
}

void FileStore::FileManager::unlink( const std::string& path ) {
  FIX::file_unlink(path.c_str());
}

FILE* FileStore::FileManager::open( const std::string& path, const std::string& mode ) {
  return FIX::file_fopen(path.c_str(), mode.c_str());
}

int FileStore::FileManager::printHeaderFile(FILE *headerFile, int msgSeqNum, long offset, std::size_t size) {
  return fprintf(headerFile, "%d,%ld,%lu ", msgSeqNum, offset, size );
}

int FileStore::FileManager::printSeqNumsFile(FILE *seqnumFile, int nextSenderSeqNum, int nextTargetSeqNum) {
  return fprintf( seqnumFile, "%10.10d : %10.10d", nextSenderSeqNum, nextTargetSeqNum );
}

int FileStore::FileManager::printSessionFile(FILE *sessionFile, UtcTimeStamp timestamp) {
  return fprintf(sessionFile, "%s", UtcTimeStampConvertor::convert( timestamp ).c_str() );
}

int FileStore::FileManager::scanHeaderFile(FILE *headerFile, int* num,
    long* offset, std::size_t* size) {
  return FILE_FSCANF(headerFile, "%d,%ld,%lu ", num, offset, size);
}

int FileStore::FileManager::scanSeqNumsFile(FILE *seqnumFile, int* sender, int* target) {
  return FILE_FSCANF( seqnumFile, "%d : %d", sender, target );
}

int FileStore::FileManager::scanSessionFile(FILE *sessionFile, char time[]) {
  return FILE_FSCANF( sessionFile, "%s", time );
}

int FileStore::FileManager::close(FILE *stream) {
  return fclose(stream);
}

int FileStore::FileManager::seek(FILE *stream, long int offset, int whence) const {
  return fseek(stream, offset, whence);
}

long int FileStore::FileManager::tell(FILE *stream) {
  return ftell(stream);
}

size_t FileStore::FileManager::write(const void *data, size_t size, size_t count, FILE *stream) {
  return fwrite(data, size, count, stream);
}

int FileStore::FileManager::error(FILE *stream) const {
  return ferror(stream);
}

int FileStore::FileManager::flush(FILE *stream) {
  return fflush(stream);
}

void FileStore::FileManager::rewindStream(FILE *stream) {
  rewind(stream);
}

size_t FileStore::FileManager::read(void *data, size_t size, size_t count, FILE *stream) const {
  return fread(data, size, count, stream);
}


} //namespace FIX
