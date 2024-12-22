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
#pragma warning(disable : 4503 4355 4786)
#include "stdafx.h"
#else
#include "config.h"
#endif

#include <HttpParser.h>
#include <sstream>
#include <string>

#include "catch_amalgamated.hpp"

using namespace FIX;

TEST_CASE("HttpParserTests") {
  HttpParser object;

  SECTION("readHttpMessage") {
    std::string httpMsg1 = "GET / HTTP/1.0\r\nContent Type: text/html\r\n\r\n";
    std::string httpMsg2 = "GET /a HTTP/1.0\r\nContent Type: text/html\r\n\r\n";
    std::string httpMsg3 = "GET /a HTTP/1.0\r\nContent Type: text/html\r\n\r\n";
    object.addToStream(httpMsg1 + httpMsg2 + httpMsg3);

    std::string readHttpMsg;
    CHECK(object.readHttpMessage(readHttpMsg));
    CHECK(httpMsg1 == readHttpMsg);

    CHECK(object.readHttpMessage(readHttpMsg));
    CHECK(httpMsg2 == readHttpMsg);

    CHECK(object.readHttpMessage(readHttpMsg));
    CHECK(httpMsg3 == readHttpMsg);
  }

  SECTION("readPartialHttpMessage") {
    std::string partHttpMsg1 = "GET / HTTP/1.0\r\nContent ";
    std::string partHttpMsg2 = "Type: text/html\r\n\r\n";
    object.addToStream(partHttpMsg1);

    std::string readPartHttpMsg;
    CHECK(!object.readHttpMessage(readPartHttpMsg));
    object.addToStream(partHttpMsg2);
    CHECK(object.readHttpMessage(readPartHttpMsg));
    CHECK((partHttpMsg1 + partHttpMsg2) == readPartHttpMsg);
  }
}
