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

#ifndef FIX_HTTPCONNECTION_H
#define FIX_HTTPCONNECTION_H

#ifdef _MSC_VER
#pragma warning( disable : 4503 4355 4786 4290 )
#endif

#include "HttpParser.h"

namespace FIX
{
class HttpMessage;

/// Encapsulates a HTTP socket file descriptor
class HttpConnection
{
public:
  HttpConnection( int s );

  int getSocket() const { return m_socket; }
  bool read();

private:
  bool readMessage( std::string& msg ) throw( SocketRecvFailed );
  void processStream();
  void processRequest( const HttpMessage& );
  void processRoot( const HttpMessage&, std::stringstream& header, std::stringstream& body );
  void processSession( const HttpMessage&, std::stringstream& header, std::stringstream& body );
  void processResetSession( const HttpMessage&, std::stringstream& header, std::stringstream& body );
  void processRefreshSession( const HttpMessage&, std::stringstream& header, std::stringstream& body );
  bool send( const std::string& );
  void disconnect( int error = 0 );

  int m_socket;
  char m_buffer[BUFSIZ];

  HttpParser m_parser;
  fd_set m_fds;
};
}

#endif //FIX_HTTPCONNECTION_H
