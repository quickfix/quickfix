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
#include "stdafx.h"
#else
#include "config.h"
#endif

#include "HttpMessage.h"
#include "Utility.h"
#include <sstream>
#include <iomanip>

namespace FIX
{

HttpMessage::HttpMessage() {}

HttpMessage::HttpMessage( const std::string& string )
EXCEPT ( InvalidMessage )
{
  setString( string );
}

std::string HttpMessage::toString() const
{
  std::string str;
  return toString( str );
}

std::string& HttpMessage::toString( std::string& str ) const
{
  str = m_root + getParameterString();
  return str;
}

void HttpMessage::setString( const std::string& string )
EXCEPT ( InvalidMessage )
{
  clear();

  std::string::size_type eolPos = string.find( "\r\n" );
  if( eolPos == std::string::npos ) throw InvalidMessage();
  std::string line = string.substr( 0, eolPos );
  std::string::size_type getPos = line.find( "GET " );
  if( getPos != 0 ) throw InvalidMessage();
  std::string::size_type httpPos = line.rfind( "HTTP", std::string::npos );
  if( httpPos == std::string::npos ) throw InvalidMessage();

  m_root = line.substr( getPos + 4, httpPos - 5 );
  std::string::size_type paramPos = m_root.find_first_of( '?' );
  if( paramPos == std::string::npos ) return;
  std::string parameters = m_root.substr( paramPos, m_root.size() - paramPos );
  m_root = m_root.substr( 0, paramPos );
  paramPos = 0;

  while( paramPos != std::string::npos )
  {
    std::string::size_type sepPos = parameters.find_first_of( "=", paramPos );
    if( sepPos == std::string::npos ) break;
    std::string::size_type tempPos = paramPos;
    paramPos = parameters.find_first_of( "&", paramPos + 1 );
    std::string key = parameters.substr(tempPos + 1, sepPos - tempPos - 1);
    std::string value = parameters.substr(sepPos + 1, paramPos - sepPos - 1);
    m_parameters[key] = value;
  }
}

std::string HttpMessage::createResponse( int error, const std::string& text )
{
  std::string errorString;
  switch( error )
  {
  case 100: errorString = "Continue"; break;
  case 101: errorString = "Switching Protocols"; break;
  case 200: errorString = "OK"; break;
  case 201: errorString = "Created"; break;
  case 202: errorString = "Accepted"; break;
  case 203: errorString = "Non-Authoritative Information"; break;
  case 204: errorString = "No Content"; break;
  case 205: errorString = "Reset Content"; break;
  case 206: errorString = "Partial Content"; break;
  case 300: errorString = "Multiple Choices"; break;
  case 301: errorString = "Moved Permanently"; break;
  case 302: errorString = "Found"; break;
  case 303: errorString = "See Other"; break;
  case 304: errorString = "Not Modified"; break;
  case 305: errorString = "Use Proxy"; break;
  case 307: errorString = "Temporary Redirect"; break;
  case 400: errorString = "Bad Request"; break;
  case 401: errorString = "Unauthorized"; break;
  case 402: errorString = "Payment Required"; break;
  case 403: errorString = "Forbidden"; break;
  case 404: errorString = "Not Found"; break;
  case 405: errorString = "Method Not Allowed"; break;
  case 406: errorString = "Not Acceptable"; break;
  case 407: errorString = "Proxy Authentication Required"; break;
  case 408: errorString = "Request Timeout"; break;
  case 409: errorString = "Conflict"; break;
  case 410: errorString = "Gone"; break;
  case 411: errorString = "Length Required"; break;
  case 412: errorString = "Precondition Failed"; break;
  case 413: errorString = "Request Entity Too Large"; break;
  case 414: errorString = "Request-URI Too Large"; break;
  case 415: errorString = "Unsupported Media Type"; break;
  case 416: errorString = "Requested Range Not Satisfiable"; break;
  case 417: errorString = "Expectation Failed"; break;
  case 500: errorString = "Internal Server Error"; break;
  case 501: errorString = "Not Implemented"; break;
  case 502: errorString = "Bad Gateway"; break;
  case 503: errorString = "Service Unavailable"; break;
  case 504: errorString = "Gateway Timeout"; break;
  case 505: errorString = "HTTP Version not supported"; break;
  default: errorString = "Unknown";
  }

  std::stringstream response;
  response << "HTTP/1.1 " << error << " " << errorString << "\r\n"
           << "Server: QuickFIX" << "\r\n"
           << "Content-Type: text/html; charset=iso-8859-1" << "\r\n\r\n"
           << "<!DOCTYPE HTML PUBLIC \"-//IETF//DTD HTML 2.0//EN\">";

  if( error < 200 || error >= 300 )
    response << "<HTML><HEAD><TITLE>" << error << " " << errorString << "</TITLE></HEAD><BODY>"
             << "<H1>" << error << " " << errorString << "</H1>" << text << "</BODY></HTML>";
  else
    response << text;

  return response.str();
}

}
