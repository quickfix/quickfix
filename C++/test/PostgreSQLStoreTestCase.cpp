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

#ifdef HAVE_POSTGRESQL

#include <UnitTest++.h>
#include <TestHelper.h>
#include <PostgreSQLStore.h>
#include "MessageStoreTestCase.h"

using namespace FIX;

SUITE(PostgreSQLStoreTests)
{

struct postgreSQLStoreFixture
{
  postgreSQLStoreFixture( bool reset )
  : factory( TestSettings::sessionSettings.get() )
  {
    SessionID sessionID( BeginString( "FIX.4.2" ),
                         SenderCompID( "SETGET" ), TargetCompID( "TEST" ) );

    try
    {
      object = factory.create( sessionID );
    }
    catch( std::exception& e )
    {
      std::cerr << e.what() << std::endl;
      throw;
    }

    if( reset )
      object->reset();

    this->resetAfter = resetAfter;
  }

  ~postgreSQLStoreFixture()
  {
    factory.destroy( object );
  }

  PostgreSQLStoreFactory factory;
  MessageStore* object;
  bool resetAfter;
};

struct noResetPostgreSQLStoreFixture : postgreSQLStoreFixture
{
  noResetPostgreSQLStoreFixture() : postgreSQLStoreFixture( false ) {}
};

struct resetPostgreSQLStoreFixture : postgreSQLStoreFixture
{
  resetPostgreSQLStoreFixture() : postgreSQLStoreFixture( true ) {}
};

TEST_FIXTURE(resetPostgreSQLStoreFixture, setGet)
{
  CHECK_MESSAGE_STORE_SET_GET;
}

TEST_FIXTURE(resetPostgreSQLStoreFixture, setGetWithQuote)
{
  //CHECK_MESSAGE_STORE_SET_GET_WITH_QUOTE;
}

TEST_FIXTURE(resetPostgreSQLStoreFixture, other)
{
  CHECK_MESSAGE_STORE_OTHER
}

TEST_FIXTURE(noResetPostgreSQLStoreFixture, reload)
{
  CHECK_MESSAGE_STORE_RELOAD
}

TEST_FIXTURE(noResetPostgreSQLStoreFixture, refresh)
{
  CHECK_MESSAGE_STORE_RELOAD
}

}

#endif
