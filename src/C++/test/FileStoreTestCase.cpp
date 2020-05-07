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

#include <gtest/gtest.h>
#include <TestHelper.h>
#include <FileStore.h>
#include "MessageStoreTestCase.h"

using namespace FIX;

struct fileStoreFixture : public ::testing::Test
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

    object = new FileStore( "store", sessionID);
  }
};

TEST_F(resetBeforeAndAfterFileStoreFixture, setGet)
{
  CHECK_MESSAGE_STORE_SET_GET;
}

TEST_F(resetBeforeAndAfterFileStoreFixture, setGetWithQuote)
{
  CHECK_MESSAGE_STORE_SET_GET_WITH_QUOTE;
}

TEST_F(resetBeforeFileStoreFixture, other)
{
  CHECK_MESSAGE_STORE_OTHER
}

TEST_F(noResetFileStoreFixture, reload)
{
  CHECK_MESSAGE_STORE_REFRESH
}

TEST_F(resetAfterFileStoreFixture, refresh)
{
  CHECK_MESSAGE_STORE_RELOAD
}

TEST_F(resetBeforeAndAfterWithTestFileManager, Refresh_DeleteFileStartup_NoException) {
  try {
    object->refresh();
  } catch (Exception& e) {
    ASSERT_TRUE(false);
    throw e;
  }
}

TEST_F(resetBeforeAndAfterWithTestFileManager, Reset_DeleteFileStartup_NoException) {
  try {
    object->reset();
  } catch (Exception& e) {
    ASSERT_TRUE(false);
    throw e;
  }
}

TEST_F(resetBeforeAndAfterWithTestFileManager, FileStoreCreationTime) {
  UtcTimeStamp timeStamp = object->getCreationTime();
  UtcTimeStamp currentTimeStamp;
  ASSERT_EQ(currentTimeStamp.getYear(), timeStamp.getYear());
}

TEST_F(resetBeforeAndAfterWithTestFileManager, FileStoreFactory_FileStoreFromDictionary) {
  SessionID sessionID( BeginString( "FIX.4.2" ),
      SenderCompID( "SETGET" ), TargetCompID( "TEST" ), "Test" );
  Dictionary dictionary;
  dictionary.setString("ConnectionType", "acceptor");
  dictionary.setString("FileStorePath", "store");

  SessionSettings settings;
  settings.set(sessionID, dictionary);
  FileStoreFactory fileStoreFactory(settings);

  SmartPtr<MessageStore> fileStore;
  ASSERT_NO_THROW(fileStore.reset(fileStoreFactory.create(sessionID)));
  ASSERT_TRUE(fileStore.get() != nullptr);
}
