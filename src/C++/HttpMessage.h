/* -*- C++ -*- */

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

#ifndef FIX_HTTPMESSAGE
#define FIX_HTTPMESSAGE

#ifdef _MSC_VER
#pragma warning( disable: 4786 )
#endif

#include "Exceptions.h"
#include <map>

namespace FIX
{
/**
 * HTTP Message that implemented GET functionality
 */
class HttpMessage
{
public:
  typedef std::map<std::string, std::string> Parameters;

  HttpMessage();

  /// Construct a message from a string
  HttpMessage( const std::string& string )
  throw( InvalidMessage );

  HttpMessage( const HttpMessage& copy )
  {
    m_url = copy.m_url;
    m_parameters = copy.m_parameters;
  }

public:
  /// Get a string representation of the message
  std::string toString() const;
  /// Get a string representation without making a copy
  std::string& toString( std::string& ) const;

  void setString( const std::string& string )
  throw( InvalidMessage );

  void clear()
  {
    m_url.clear();
    m_parameters.clear();
  }

  const std::string& getUrl() const
  { return m_url; }

  const Parameters& getParameters() const
  { return m_parameters; }

  static std::string createResponse( int error = 0, const std::string& text = "" );
 
private:
  std::string m_url;
  Parameters m_parameters;
};
/*! @} */

inline std::ostream& operator <<
( std::ostream& stream, const HttpMessage& message )
{
  std::string str;
  stream << message.toString( str );
  return stream;
}
}

#endif //FIX_HTTPMESSAGE
