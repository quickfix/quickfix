/* -*- C++ -*- */

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

#ifndef FIX_HTTPPARSER_H
#define FIX_HTTPPARSER_H

#ifdef _MSC_VER
#pragma warning( disable : 4503 4355 4786 4290 )
#endif

#include "Exceptions.h"
#include <iostream>
#include <string>

namespace FIX
{
/// Parses HTTP messages off an input stream.
class HttpParser
{
public:
  HttpParser() {}
  ~HttpParser() {}

  bool readHttpMessage( std::string& str )
  EXCEPT ( MessageParseError );

  void addToStream( const char* str, size_t len )
  { m_buffer.append( str, len ); }
  void addToStream( const std::string& str )
  { m_buffer.append( str ); }

private:
  std::string m_buffer;
};
}
#endif //FIX_HTTPPARSER_H
