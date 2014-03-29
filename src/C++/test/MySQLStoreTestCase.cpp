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

#ifdef HAVE_MYSQL

#include <UnitTest++.h>
#include <TestHelper.h>
#include <MySQLStore.h>
#include "MessageStoreTestCase.h"

using namespace FIX;

SUITE(MySQLStoreTests)
{

struct mySQLStoreFixture
{
  mySQLStoreFixture( bool reset )
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

  ~mySQLStoreFixture()
  {
    factory.destroy( object );
  }

  MySQLStoreFactory factory;
  MessageStore* object;
  bool resetAfter;
};

struct noResetMySQLStoreFixture : mySQLStoreFixture
{
  noResetMySQLStoreFixture() : mySQLStoreFixture( false ) {}
};

struct resetMySQLStoreFixture : mySQLStoreFixture
{
  resetMySQLStoreFixture() : mySQLStoreFixture( true ) {}
};

TEST_FIXTURE(resetMySQLStoreFixture, setGet)
{
  CHECK_MESSAGE_STORE_SET_GET;
}

TEST_FIXTURE(resetMySQLStoreFixture, setGetWithQuote)
{
  CHECK_MESSAGE_STORE_SET_GET_WITH_QUOTE;
}

TEST_FIXTURE(resetMySQLStoreFixture, other)
{
  CHECK_MESSAGE_STORE_OTHER
}

TEST_FIXTURE(noResetMySQLStoreFixture, reload)
{
  CHECK_MESSAGE_STORE_RELOAD
}

TEST_FIXTURE(noResetMySQLStoreFixture, refresh)
{
  CHECK_MESSAGE_STORE_REFRESH
}

}

#endif
