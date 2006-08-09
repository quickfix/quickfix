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
#include "stdafx.h"
#else
#include "config.h"
#endif
#include "CallStack.h"

#include "HttpConnection.h"
#include "HttpMessage.h"
#include "Session.h"
#include "Utility.h"

namespace FIX
{
HttpConnection::HttpConnection( int s )
: m_socket( s )
{
  FD_ZERO( &m_fds );
  FD_SET( m_socket, &m_fds );
}

bool HttpConnection::send( const std::string& msg )
{ QF_STACK_PUSH(HttpConnection::send)
  return socket_send( m_socket, msg.c_str(), msg.length() ) >= 0;
  QF_STACK_POP
}

void HttpConnection::disconnect( int error )
{ QF_STACK_PUSH(HttpConnection::disconnect)
  
  if( error > 0 )
    send( HttpMessage::createResponse(error) );

  socket_close( m_socket );

  QF_STACK_POP
}

bool HttpConnection::read()
{ QF_STACK_PUSH(HttpConnection::read)

  struct timeval timeout = { 2, 0 };
  fd_set readset = m_fds;

  try
  {
    // Wait for input (1 second timeout)
    int result = select( 1 + m_socket, &readset, 0, 0, &timeout );

    if( result > 0 ) // Something to read
    {
      // We can read without blocking
      int size = recv( m_socket, m_buffer, sizeof(m_buffer), 0 );
      if ( size <= 0 ) { throw SocketRecvFailed( result ); }
      m_parser.addToStream( m_buffer, size );
    }
    else if( result == 0 ) // Timeout
    {
      disconnect( 408 );
      return false;
    }
    else if( result < 0 ) // Error
    {
      throw SocketRecvFailed( result );
    }

    processStream();
    return true;
  }
  catch ( SocketRecvFailed& e )
  {
    disconnect();
    return false;
  }

  QF_STACK_POP
}

bool HttpConnection::readMessage( std::string& msg )
throw( SocketRecvFailed )
{ QF_STACK_PUSH(HttpConnection::readMessage)

  try
  {
    return m_parser.readHttpMessage( msg );
  }
  catch ( MessageParseError& ) 
  { 
    disconnect( 400 );
  }
  return true;

  QF_STACK_POP
}

void HttpConnection::processStream()
{ QF_STACK_PUSH(HttpConnection::processStream)

  std::string msg;
  try
  {
    readMessage(msg);
    HttpMessage request( msg );
    processRequest( request );
  }
  catch( InvalidMessage& ) 
  {
    disconnect( 400 );
    return;
  }

  return;

  QF_STACK_POP
}

void HttpConnection::processRequest( const HttpMessage& message )
{ QF_STACK_PUSH(HttpConnection::processRequest)

  std::stringstream stream;
  stream << "<HTML><HEAD><H1>QuickFIX</H1></HEAD><BODY>";
  stream << "<TABLE>";

  stream << "<TR>"
         << "<TD>Session</TD>"
         << "<TD>Logged On</TD>"
         << "</TR>";

  std::set<SessionID> sessions = Session::getSessions();
  std::set<SessionID>::iterator i;
  for( i = sessions.begin(); i != sessions.end(); ++i )
  {
    try
    {
      Session* pSession = Session::lookupSession( *i );
      stream << "<TR>";
      stream << "<TD>" << *i << "</TD>";
      stream << "<TD>" << (pSession->isLoggedOn() ? "yes" : "no") << "</TD>";
      stream << "</TR>";
    }
    catch( SessionNotFound& ) {}
  }

  stream << "</TABLE>";
  stream << "</BODY></HTML>";

  send( HttpMessage::createResponse(200, stream.str()) );
  disconnect();

  QF_STACK_POP
}

} // namespace FIX
