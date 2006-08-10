/****************************************************************************
** Copyright (c) quickfixengine.org  All rights reserved.
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

#include "HttpMessageTestCase.h"
#include "Utility.h"

namespace FIX
{
void HttpMessageTestCase::setString::onRun( HttpMessage& object )
{
  static const char* strGood1 =
    "GET / HTTP/1.0\r\nContent Type: text/html\r\n\r\n";
  static const char* strGood2 =
    "GET /another/url HTTP/1.0\r\nContent Type: text/html\r\n\r\n";
  static const char* strGoodWithParameters =
     "GET /some/url?p1=one&p2=two&p3=three HTTP/1.0\r\nContent Type: text/html\r\n\r\n";
  static const char* strGoodWithEmptyParameters =
     "GET /some/url?p1=&p2=&p3= HTTP/1.0\r\nContent Type: text/html\r\n\r\n";
  static const char* strBad1 =
     "MOOB /some/url HTTP/1.0\r\nContent Type: text/html\r\n\r\n";
  static const char* strBad2 =
     "GET /some/url HTTB/1.0\r\nContent Type: text/html\r\n\r\n";

  try
  {
    object.setString( strGood1 );
    assertEquals( "/", object.getRootString() );
    assertEquals( 0, object.getParameters().size() );
  } catch( InvalidMessage& ) { assert(false); }

  try
  {
    object.setString( strGood2 );
    assertEquals( "/another/url", object.getRootString() );
    assertEquals( 0, object.getParameters().size() );
  } catch( InvalidMessage& ) { assert(false); }

  try
  {
    object.setString( strGoodWithParameters );
    assertEquals( "/some/url", object.getRootString() );
    assertEquals( 3, object.getParameters().size() );
    assertEquals( "one", object.getParameters().find("p1")->second );
    assertEquals( "two", object.getParameters().find("p2")->second );
    assertEquals( "three", object.getParameters().find("p3")->second );
  } catch( InvalidMessage& ) { assert(false); }

  try
  {
    object.setString( strGoodWithEmptyParameters );
    assertEquals( "/some/url", object.getRootString() );
    assertEquals( 3, object.getParameters().size() );
    assertEquals( "", object.getParameters().find("p1")->second );
    assertEquals( "", object.getParameters().find("p2")->second );
    assertEquals( "", object.getParameters().find("p3")->second );
  } catch( InvalidMessage& ) { assert(false); }

  try
  {
    object.setString( strBad1 );
    assert( false );
  } catch( InvalidMessage& ) {}

}
}
