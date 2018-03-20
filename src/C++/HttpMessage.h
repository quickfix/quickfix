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
    m_root = copy.m_root;
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
#if defined(_MSC_VER) && _MSC_VER < 1300
    m_root = "";
#else
    m_root.clear();
#endif
    m_parameters.clear();
  }

  const std::string& getRootString() const
  { return m_root; }

  const std::string getParameterString() const
  {
    std::string result;
    Parameters::const_iterator i;
    for( i = m_parameters.begin(); i != m_parameters.end(); ++i )
    {
      result += (i == m_parameters.begin()) ? "?" : "&";
      result += i->first + "=" + i->second;
    }
    return result;
  }

  const Parameters& getParameters() const
  { return m_parameters; }

  bool hasParameter( const std::string& key ) const
  {
    Parameters::const_iterator find = m_parameters.find( key );
    return find != m_parameters.end();
  }

  const std::string& getParameter( const std::string& key ) const
  throw( std::logic_error )
  {
    Parameters::const_iterator find = m_parameters.find( key );
    if( find == m_parameters.end() )
      throw std::logic_error( "Parameter " + key + " not found" );
    return find->second;
  }

  void addParameter( const std::string& key, const std::string& value )
  {
    m_parameters[key] = value;
  }

  void removeParameter( const std::string& key )
  {
    m_parameters.erase( key );
  }  

  static std::string createResponse( int error = 0, const std::string& text = "" );
 
private:
  std::string m_root;
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
