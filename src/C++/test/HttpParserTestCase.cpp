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

#include "HttpParserTestCase.h"
#include <string>
#include <sstream>

namespace FIX
{

bool HttpParserTestCase::readHttpMessage::onSetup( HttpParser*& pObject )
{
  m_httpMsg1 = "GET / HTTP/1.0\r\nContent Type: text/html\r\n\r\n";
  m_httpMsg2 = "GET /a HTTP/1.0\r\nContent Type: text/html\r\n\r\n";
  m_httpMsg3 = "GET /a HTTP/1.0\r\nContent Type: text/html\r\n\r\n";

  pObject = new HttpParser();
  pObject->addToStream( m_httpMsg1 + m_httpMsg2 + m_httpMsg3 );
  return true;
}

void HttpParserTestCase::readHttpMessage::onRun( HttpParser& object )
{
  std::string httpMsg1;
  assert( object.readHttpMessage( httpMsg1 ) );
  assert( httpMsg1 == m_httpMsg1 );

  std::string httpMsg2;
  assert( object.readHttpMessage( httpMsg2 ) );
  assert( httpMsg2 == m_httpMsg2 );

  std::string httpMsg3;
  assert( object.readHttpMessage( httpMsg3 ) );
  assert( httpMsg3 == m_httpMsg3 );
}

bool HttpParserTestCase::readPartialHttpMessage::onSetup( HttpParser*& pObject )
{
  m_partHttpMsg1 = "GET / HTTP/1.0\r\nContent ";
  m_partHttpMsg2 = "Type: text/html\r\n\r\n";

  pObject = new HttpParser();
  pObject->addToStream( m_partHttpMsg1 );
  return true;
}

void HttpParserTestCase::readPartialHttpMessage::onRun( HttpParser& object )
{
  std::string partHttpMsg;
  assert( !object.readHttpMessage( partHttpMsg ) );
  object.addToStream( m_partHttpMsg2 );
  assert( object.readHttpMessage( partHttpMsg ) );
  assert( partHttpMsg == ( m_partHttpMsg1 + m_partHttpMsg2 ) );
}

}
