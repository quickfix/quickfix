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
#include <HttpParser.h>
#include <string>
#include <sstream>

using namespace FIX;

struct readHttpMessageFixture : public ::testing::Test
{
  readHttpMessageFixture()
  {
    httpMsg1 = "GET / HTTP/1.0\r\nContent Type: text/html\r\n\r\n";
    httpMsg2 = "GET /a HTTP/1.0\r\nContent Type: text/html\r\n\r\n";
    httpMsg3 = "GET /a HTTP/1.0\r\nContent Type: text/html\r\n\r\n";

    object.addToStream( httpMsg1 + httpMsg2 + httpMsg3 );
  }

  std::string httpMsg1;
  std::string httpMsg2;
  std::string httpMsg3;
  HttpParser object;
};

TEST_F(readHttpMessageFixture, readHttpMessage)
{
  std::string readHttpMsg;
  ASSERT_TRUE( object.readHttpMessage( readHttpMsg ) );
  ASSERT_EQ( httpMsg1, readHttpMsg );

  ASSERT_TRUE( object.readHttpMessage( readHttpMsg ) );
  ASSERT_EQ( httpMsg2, readHttpMsg );

  ASSERT_TRUE( object.readHttpMessage( readHttpMsg ) );
  ASSERT_EQ( httpMsg3, readHttpMsg );
}

struct readPartialHttpMessageFixture : public ::testing::Test
{
  readPartialHttpMessageFixture()
  {
    partHttpMsg1 = "GET / HTTP/1.0\r\nContent ";
    partHttpMsg2 = "Type: text/html\r\n\r\n";
    object.addToStream( partHttpMsg1 );
  }

  std::string partHttpMsg1;
  std::string partHttpMsg2;
  HttpParser object;
};

TEST_F(readPartialHttpMessageFixture, readPartialHttpMessage)
{
  std::string readPartHttpMsg;
  ASSERT_TRUE( !object.readHttpMessage( readPartHttpMsg ) );
  object.addToStream( partHttpMsg2 );
  ASSERT_TRUE( object.readHttpMessage( readPartHttpMsg ) );
  ASSERT_EQ( ( partHttpMsg1 + partHttpMsg2 ), readPartHttpMsg );
}
