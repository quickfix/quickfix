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

}
