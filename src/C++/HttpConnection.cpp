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

void HttpConnection::processRequest( const HttpMessage& request )
{ QF_STACK_PUSH(HttpConnection::processRequest)

  int error = 200;
  std::stringstream stream;
  stream << "<HTML><HEAD><CENTER><H1>QuickFIX Engine Web Interface</H1></CENTER></HEAD><BODY>";

  if( request.getUrl() == "/" )
    processRoot( request, stream );
  else if( request.getUrl() == "/session" )
    processSession( request, stream );
  else
    error = 404;
  stream << "</BODY></HTML>";

  send( HttpMessage::createResponse(error, error == 200 ? stream.str() : "") );
  disconnect();

  QF_STACK_POP
}

void HttpConnection::processRoot( const HttpMessage& request, std::stringstream& stream )
{ QF_STACK_PUSH(HttpConnection::processRequest)

  stream << "<TABLE border='1' cellspacing='2' width='100%'>"
         << "<CAPTION><EM>" << Session::numSessions() << " Sessions managed by QuickFIX</EM></CAPTION>"
         << "<TR>"
         << "<TD align='center'>Session</TD>"
         << "<TD align='center'>Enabled</TD>"
         << "<TD align='center'>Session Time</TD>"
         << "<TD align='center'>Logged On</TD>"
         << "<TD align='center'>Next Incoming</TD>"
         << "<TD align='center'>Next Outgoing</TD>"
         << "</TR>";

  std::set<SessionID> sessions = Session::getSessions();
  std::set<SessionID>::iterator i;
  for( i = sessions.begin(); i != sessions.end(); ++i )
  {
    try
    {
      Session* pSession = Session::lookupSession( *i );
      stream << "<TR>";
      stream << "<TD><A href=/session?beginstring=" << i->getBeginString()
                                 << "&sendercompid=" << i->getSenderCompID()
                                 << "&targetcompid=" << i->getTargetCompID()
                                 << "&sessionqualifier=" << i->getSessionQualifier()
             << ">" << *i << "</A></TD>"
             << "<TD>" << (pSession->isEnabled() ? "yes" : "no") << "</TD>"
             << "<TD>" << (pSession->isSessionTime() ? "yes" : "no") << "</TD>"
             << "<TD>" << (pSession->isLoggedOn() ? "yes" : "no") << "</TD>"
             << "<TD>" << pSession->getExpectedSenderNum() << "</TD>"
             << "<TD>" << pSession->getExpectedTargetNum() << "</TD>"
             << "</TR>";
    }
    catch( SessionNotFound& ) {}
  }

  stream << "</TABLE>";

  QF_STACK_POP
}

void HttpConnection::processSession( const HttpMessage& request, std::stringstream& stream )
{ QF_STACK_PUSH(HttpConnection::processSession)

  try
  {
    std::string beginString = request.getParameter( "beginstring" );
    std::string senderCompID = request.getParameter( "sendercompid" );
    std::string targetCompID = request.getParameter( "targetcompid" );
    std::string sessionQualifier = request.getParameter( "sessionqualifier" );

    SessionID sessionID( beginString, senderCompID, targetCompID, sessionQualifier );

    Session* pSession = Session::lookupSession( sessionID );
    stream << "<TABLE border='1' cellspacing='2' width='100%'>"
           << "<CAPTION><EM>" << sessionID << "</EM></CAPTION>"
           << "<TR><TD>Enabled</TD><TD>" << (pSession->isEnabled() ? "yes" : "no") << "</TD></TR>"
           << "<TR><TD>Session Time</TD><TD>" << (pSession->isSessionTime() ? "yes" : "no") << "</TD></TR>"
           << "<TR><TD>Logged On</TD><TD>" << (pSession->isLoggedOn() ? "yes" : "no") << "</TD></TR>"
           << "<TR><TD>Next Incoming</TD><TD>" << pSession->getExpectedSenderNum() << "</TD></TR>"
           << "<TR><TD>Next Outgoing</TD><TD>" << pSession->getExpectedTargetNum() << "</TD></TR>"
           << "<TR><TD>" << SEND_REDUNDANT_RESENDREQUESTS << "</TD>"
           << "<TD>" << (pSession->getSendRedundantResendRequests() ? "yes" : "no") << "</TD></TR>"
           << "<TR><TD>" << CHECK_COMPID << "</TD>"
           << "<TD>" << (pSession->getCheckCompId() ? "yes" : "no") << "</TD></TR>"
           << "<TR><TD>" << CHECK_LATENCY << "</TD>"
           << "<TD>" << (pSession->getCheckLatency() ? "yes" : "no") << "</TD></TR>"
           << "<TR><TD>" << MAX_LATENCY << "</TD>"
           << "<TD>" << pSession->getMaxLatency() << "</TD></TR>"
           << "<TR><TD>" << LOGON_TIMEOUT << "</TD>"
           << "<TD>" << pSession->getLogonTimeout() << "</TD></TR>"
           << "<TR><TD>" << LOGOUT_TIMEOUT << "</TD>"
           << "<TD>" << pSession->getLogoutTimeout() << "</TD></TR>"
           << "<TR><TD>" << RESET_ON_LOGON << "</TD>"
           << "<TD>" << (pSession->getResetOnLogon() ? "yes" : "no") << "</TD></TR>"
           << "<TR><TD>" << RESET_ON_LOGOUT << "</TD>"
           << "<TD>" << (pSession->getResetOnLogout() ? "yes" : "no") << "</TD></TR>"
           << "<TR><TD>" << RESET_ON_DISCONNECT << "</TD>"
           << "<TD>" << (pSession->getResetOnDisconnect() ? "yes" : "no") << "</TD></TR>"
           << "<TR><TD>" << REFRESH_ON_LOGON << "</TD>"
           << "<TD>" << (pSession->getRefreshOnLogon() ? "yes" : "no") << "</TD></TR>"
           << "<TR><TD>" << MILLISECONDS_IN_TIMESTAMP << "</TD>"
           << "<TD>" << (pSession->getMillisecondsInTimeStamp() ? "yes" : "no") << "</TD></TR>"
           << "</TABLE>";
  }
  catch( SessionNotFound& )
  {
    stream << "Session not found";
  }
  catch( std::exception& e )
  {
    stream << e.what();
  }

  QF_STACK_POP
}

} // namespace FIX
