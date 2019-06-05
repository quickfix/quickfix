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
#pragma warning( disable : 4503 4355 4786 )
#include "stdafx.h"
#else
#include "config.h"
#endif

#include <UnitTest++.h>
#include <TestHelper.h>
#include <FileStore.h>
#include "MessageStoreTestCase.h"

using namespace FIX;

SUITE(FileStoreTests)
{

class TestFileManager : public FileStore::FileManager {
public:
  virtual ~TestFileManager(){};

  virtual void makeDirectory( const std::string& path ) {
    return FileStore::FileManager::makeDirectory(path);
  }

  virtual void unlink( const std::string& path ) {
    return FileStore::FileManager::unlink(path);
  }

  virtual FILE* open( const std::string& path, const std::string& mode ) {
    if(openThrowIOException) {
      throw IOException();
    }
    return FileStore::FileManager::open(path, mode);
  }

  virtual int printHeaderFile(FILE *headerFile, int msgSeqNum, long offset, std::size_t size) {
    if(printHeadersReturnsNegativeValue) {
      return -1;
    }
    return FileStore::FileManager::printHeaderFile(headerFile, msgSeqNum, offset, size);
  }

  virtual int printSeqNumsFile(FILE *seqnumFile, int nextSenderSeqNum, int nextTargetSeqNum) {
    if(printSeqNumsReturnsNegativeValue) {
      return -1;
    }
    return FileStore::FileManager::printSeqNumsFile(seqnumFile, nextSenderSeqNum, nextTargetSeqNum);
  }

  virtual int printSessionFile(FILE *sessionFile, UtcTimeStamp timestamp) {
    if(printSessionReturnsNegativeValue) {
      return -1;
    }
    return FileStore::FileManager::printSessionFile(sessionFile, timestamp);
  }

  virtual int scanHeaderFile(FILE *headerFile, int* num, long* offset, std::size_t* size) {
    if(headersRemaining > 0){
      *num = 1, *offset = 0, *size = 83;
      headersRemaining--;
      return 3;
    }
    return FileStore::FileManager::scanHeaderFile(headerFile, num, offset, size);
  }

  virtual int scanSeqNumsFile(FILE *seqnumFile, int* sender, int* target) {
    return FileStore::FileManager::scanSeqNumsFile(seqnumFile, sender, target);
  }

  virtual int scanSessionFile(FILE *sessionFile, char time[]) {
    return FileStore::FileManager::scanSessionFile(sessionFile, time);
  }

  virtual int close(FILE *stream) {
    return FileStore::FileManager::close(stream);
  }

  virtual int seek(FILE *stream, long int offset, int whence) const {
    if(seekError) {
      return 1;
    }
    return FileStore::FileManager::seek(stream, offset, whence);
  }

  virtual long int tell(FILE *stream) {
    if(negativeTellValue) {
      return -1;
    }
    return FileStore::FileManager::tell(stream);
  }

  virtual size_t write (const void *data, size_t size, size_t count, FILE *stream) {
    return FileStore::FileManager::write(data, size, count, stream);
  }

  virtual int error (FILE *stream) const {
    if(errorInFile) {
      return 1;
    }
    return FileStore::FileManager::error(stream);
  }

  virtual int flush (FILE *stream) {
    if(flushError) {
      return EOF;
    }
    return FileStore::FileManager::flush(stream);
  }

  virtual void rewind (FILE *stream) {
    return FileStore::FileManager::rewindStream(stream);
  }

  virtual size_t read (void *data, size_t size, size_t count, FILE *stream) const {
    return FileStore::FileManager::read(data, size, count, stream);
  }

  int headersRemaining = 3;
  bool seekError = false;
  bool flushError = false;
  bool openThrowIOException = false;
  bool negativeTellValue = false;
  bool printHeadersReturnsNegativeValue = false;
  bool printSeqNumsReturnsNegativeValue = false;
  bool printSessionReturnsNegativeValue = false;
  bool errorInFile = false;

};

struct fileStoreFixture
{
  fileStoreFixture( bool resetBefore, bool resetAfter )
  : factory( "store" )
  {
    if( resetBefore )
      deleteSession( "SETGET", "TEST" );

    SessionID sessionID( BeginString( "FIX.4.2" ),
                         SenderCompID( "SETGET" ), TargetCompID( "TEST" ) );

    object = factory.create( sessionID );

    this->resetAfter = resetAfter;
  }

  ~fileStoreFixture()
  {
    factory.destroy( object );

    if( resetAfter )
      deleteSession( "SETGET", "TEST" );
  }

  FileStoreFactory factory;
  TestFileManager fileManager;
  MessageStore* object;
  bool resetAfter;
};

struct resetBeforeFileStoreFixture : fileStoreFixture
{
  resetBeforeFileStoreFixture() : fileStoreFixture( true, false ) {}
};

struct resetAfterFileStoreFixture : fileStoreFixture
{
  resetAfterFileStoreFixture() : fileStoreFixture( false, true ) {}
};

struct resetBeforeAndAfterFileStoreFixture : fileStoreFixture
{
  resetBeforeAndAfterFileStoreFixture() : fileStoreFixture( true, true ) {}
};

struct noResetFileStoreFixture : fileStoreFixture
{
  noResetFileStoreFixture() : fileStoreFixture( false, false ) {}
};

struct resetBeforeAndAfterWithTestFileManager : resetBeforeAndAfterFileStoreFixture
{
  resetBeforeAndAfterWithTestFileManager() : resetBeforeAndAfterFileStoreFixture() {
    factory.destroy( object );

    SessionID sessionID( BeginString( "FIX.4.2" ),
        SenderCompID( "SETGET" ), TargetCompID( "TEST" ), "Test" );

    object = new FileStore( "store", sessionID, true, &fileManager );
  }
};

TEST_FIXTURE(resetBeforeAndAfterFileStoreFixture, setGet)
{
  CHECK_MESSAGE_STORE_SET_GET;
}

TEST_FIXTURE(resetBeforeAndAfterFileStoreFixture, setGetWithQuote)
{
  CHECK_MESSAGE_STORE_SET_GET_WITH_QUOTE;
}

TEST_FIXTURE(resetBeforeFileStoreFixture, other)
{
  CHECK_MESSAGE_STORE_OTHER
}

TEST_FIXTURE(noResetFileStoreFixture, reload)
{
  CHECK_MESSAGE_STORE_REFRESH
}

TEST_FIXTURE(resetAfterFileStoreFixture, refresh)
{
  CHECK_MESSAGE_STORE_RELOAD
}

TEST_FIXTURE(resetBeforeAndAfterWithTestFileManager, Refresh_DeleteFileStartup_NoException) {
  try {
    object->refresh();
  } catch (Exception& e) {
    CHECK(false);
    throw e;
  }
}

TEST_FIXTURE(resetBeforeAndAfterWithTestFileManager, Reset_DeleteFileStartup_NoException) {
  try {
    object->reset();
  } catch (Exception& e) {
    CHECK(false);
    throw e;
  }
}

TEST_FIXTURE(resetBeforeAndAfterWithTestFileManager, SetSeqNum_CannotFindEndOfMsgFile_Exception) {
  fileManager.seekError = true;
  CHECK_THROW(object->set(1, "test"), IOException);
}

TEST_FIXTURE(resetBeforeAndAfterWithTestFileManager, SetSeqNum_CannotFindEndOfHeaderFile_Exception) {
  fileManager.seekError = true;
  CHECK_THROW(object->set(1, "test"), IOException);
}
TEST_FIXTURE(resetBeforeAndAfterWithTestFileManager, SetSeqNum_CannotFlushMsgFile_Exception) {
  fileManager.flushError = true;
  CHECK_THROW(object->set(1, "test"), IOException);
}

TEST_FIXTURE(resetBeforeAndAfterWithTestFileManager, SetSeqNum_CannotFlushHeaderFile_Exception) {
  fileManager.flushError = true;
  CHECK_THROW(object->set(1, "test"), IOException);
}

TEST_FIXTURE(resetBeforeAndAfterWithTestFileManager, SetSeqNum_FileHasANegativeOffSet_Exception) {
  fileManager.negativeTellValue = true;
  CHECK_THROW(object->set(1, "test"), IOException);
}

TEST_FIXTURE(resetBeforeAndAfterWithTestFileManager, SetSeqNum_FailedToPrintToHeaderFile_Exception) {
  fileManager.printHeadersReturnsNegativeValue = true;
  CHECK_THROW(object->set(1, "test"), IOException);
}

TEST_FIXTURE(resetBeforeAndAfterWithTestFileManager, SetSeqNum_FileHasError_Exception) {
  fileManager.errorInFile = true;
  CHECK_THROW(object->set(1, "test"), IOException);
}
TEST_FIXTURE(resetBeforeAndAfterWithTestFileManager, IncrementNextSenderSeqNumber_CannotFlushSeqNumsFile_Exception) {
  fileManager.flushError = true;
  CHECK_THROW(object->incrNextSenderMsgSeqNum(), IOException);
}

TEST_FIXTURE(resetBeforeAndAfterWithTestFileManager, IncrementNextTargetSeqNumber_CannotFlushSeqNumsFile_Exception) {
  fileManager.flushError = true;
  CHECK_THROW(object->incrNextTargetMsgSeqNum(), IOException);
}

TEST_FIXTURE(resetBeforeAndAfterWithTestFileManager, IncrementNextSenderSeqNumber_SeqNumsFileHasError_Exception) {
  fileManager.errorInFile = true;
  CHECK_THROW(object->incrNextSenderMsgSeqNum(), IOException);
}

TEST_FIXTURE(resetBeforeAndAfterWithTestFileManager, IncrementNextTargetSeqNumber_SeqNumsFileHasError_Exception) {
  fileManager.errorInFile = true;
  CHECK_THROW(object->incrNextTargetMsgSeqNum(), IOException);
}

TEST_FIXTURE(resetBeforeAndAfterWithTestFileManager, Reset_SessionFileHasError_Exception) {
  fileManager.errorInFile = true;
  CHECK_THROW(object->reset(), IOException);
}

TEST_FIXTURE(resetBeforeAndAfterWithTestFileManager, Reset_CannotFlushSessionFile_Exception) {
  fileManager.flushError = true;
  CHECK_THROW(object->reset(), IOException);
}

TEST_FIXTURE(resetBeforeAndAfterWithTestFileManager, Refresh_CannotOpenFiles_Exception) {
  fileManager.openThrowIOException = true;
  CHECK_THROW(object->refresh(), IOException);
}

TEST_FIXTURE(resetBeforeAndAfterWithTestFileManager, CannotOpenFilesOnCreation_Exception) {
  fileManager.openThrowIOException = true;

  SessionID sessionID( BeginString( "FIX.4.2" ),
      SenderCompID( "SETGET" ), TargetCompID( "TEST" ), "Test" );
  CHECK_THROW(new FileStore( "store", sessionID, true, &fileManager ), ConfigError);
}

TEST_FIXTURE(resetBeforeAndAfterWithTestFileManager, GetMessages_CannotFindBeginningOfSeqNumFile_Exception) {
  object->set(1, "test");
  fileManager.seekError = true;
  std::vector<std::string> msgs;
  CHECK_THROW(object->get(1,1, msgs), IOException);
}

TEST_FIXTURE(resetBeforeAndAfterWithTestFileManager, GetMessages_SeqNumFileHasError_Exception) {
  object->set(1, "test");
  fileManager.errorInFile = true;
  std::vector<std::string> msgs;
  CHECK_THROW(object->get(1,1, msgs), IOException);
}

TEST_FIXTURE(resetBeforeAndAfterWithTestFileManager, FileStoreCreationTime) {
  UtcTimeStamp timeStamp = object->getCreationTime();
  UtcTimeStamp currentTimeStamp;
  CHECK_EQUAL(currentTimeStamp.getYear(), timeStamp.getYear());
}

TEST_FIXTURE(resetBeforeAndAfterWithTestFileManager, FileStoreFactory_FileStoreFromDictionary) {
  SessionID sessionID( BeginString( "FIX.4.2" ),
      SenderCompID( "SETGET" ), TargetCompID( "TEST" ), "Test" );
  Dictionary dictionary;
  dictionary.setString("ConnectionType", "acceptor");
  dictionary.setString("FileStorePath", "store");

  SessionSettings settings;
  settings.set(sessionID, dictionary);
  FileStoreFactory fileStoreFactory(settings);

  MessageStore* fileStore = fileStoreFactory.create(sessionID);
  CHECK(fileStore != nullptr);
}

}
