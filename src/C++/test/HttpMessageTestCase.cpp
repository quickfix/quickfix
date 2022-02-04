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
#include <HttpMessage.h>
#include <Utility.h>

using namespace FIX;

SUITE(HttpMessageTests)
{

TEST(setString)
{
  HttpMessage object;

  static const char* strGood1 =
    "GET / HTTP/1.0\r\nContent Type: text/html\r\n\r\n";
  static const char* strGood2 =
    "GET /another/url HTTP/1.0\r\nContent Type: text/html\r\n\r\n";
  static const char* strGoodWithParameters =
    "GET /some/url?p1=one&p2=two&p3=three HTTP/1.0\r\nContent Type: text/html\r\n\r\n";
  static const char* strGoodWithEmptyParameters =
    "GET /some/url?p1=&p2=&p3= HTTP/1.0\r\nContent Type: text/html\r\n\r\n";
  static const char* strBad1 =
    "GEB /some/url HTTP/1.0\r\nContent Type: text/html\r\n\r\n";
  static const char* strBad2 =
    "GET /some/url HTTB/1.0\r\nContent Type: text/html\r\n\r\n";
  static const char* strBad3 =
    "GEB /some/url HTTB/1.0\r\nContent Type: text/html\r\n\r\n";

  object.setString( strGood1 );
  CHECK_EQUAL( "/", object.getRootString() );
  CHECK_EQUAL( 0U, object.getParameters().size() );

  object.setString( strGood2 );
  CHECK_EQUAL( "/another/url", object.getRootString() );
  CHECK_EQUAL( 0U, object.getParameters().size() );

  object.setString( strGoodWithParameters );
  CHECK_EQUAL( "/some/url", object.getRootString() );
  CHECK_EQUAL( 3U, object.getParameters().size() );
  CHECK_EQUAL( "one", object.getParameters().find("p1")->second );
  CHECK_EQUAL( "two", object.getParameters().find("p2")->second );
  CHECK_EQUAL( "three", object.getParameters().find("p3")->second );

  object.setString( strGoodWithEmptyParameters );
  CHECK_EQUAL( "/some/url", object.getRootString() );
  CHECK_EQUAL( 3U, object.getParameters().size() );
  CHECK_EQUAL( "", object.getParameters().find("p1")->second );
  CHECK_EQUAL( "", object.getParameters().find("p2")->second );
  CHECK_EQUAL( "", object.getParameters().find("p3")->second );

  CHECK_THROW( object.setString( strBad1 ), InvalidMessage );
  CHECK_THROW( object.setString( strBad2 ), InvalidMessage );
  CHECK_THROW( object.setString( strBad3 ), InvalidMessage );
}

}
