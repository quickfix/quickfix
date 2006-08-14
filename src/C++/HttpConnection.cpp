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
  catch ( SocketRecvFailed& )
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
    if( !readMessage(msg) )
      return;
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
  std::stringstream header;
  std::stringstream body;
  std::string title = "QuickFIX Engine Web Interface";

  header << "<HEAD><CENTER><TITLE>" << title << "</TITLE><H1>" << title << "</H1></CENTER>"
         << "<CENTER>[<A HREF='/'>HOME</A>]"
         << "&nbsp;[<A HREF='" << request.toString() << "'>REFRESH</A>]"
         << "</CENTER><HR/>";
  body << "<BODY>";

  try
  {
    if( request.getRootString() == "/" )
      processRoot( request, header, body );
    else if( request.getRootString() == "/session" )
      processSession( request, header, body );
    else if( request.getRootString() == "/resetSession" )
      processResetSession( request, header, body );
    else if( request.getRootString() == "/refreshSession" )
      processRefreshSession( request, header, body );
    else
      error = 404;
  }
  catch( std::exception& e )
  {
    error = 400;
    body << e.what();
  }

  header << "</HEADER>";
  body << "</BODY>";

  std::string response = "<HTML>" + header.str() + body.str() + "</HTML>";
  send( HttpMessage::createResponse(error, error == 200 ? response : "") );

  disconnect();

  QF_STACK_POP
}

void HttpConnection::processRoot
( const HttpMessage& request, std::stringstream& header, std::stringstream& body )
{ QF_STACK_PUSH(HttpConnection::processRoot)

  body << "<TABLE border='1' cellspacing='2' width='100%'>"
       << "<CAPTION><EM>" << Session::numSessions() << " Sessions managed by QuickFIX</EM></CAPTION>"
       << "<TR>"
       << "<TD align='center'>Session</TD>"
       << "<TD align='center'>Type</TD>"
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
    Session* pSession = Session::lookupSession( *i );
    if( !pSession ) continue;

    body << "<TR>"
         << "<TD><A href=/session?BeginString=" << i->getBeginString()
                            << "&SenderCompID=" << i->getSenderCompID()
                            << "&TargetCompID=" << i->getTargetCompID();
    if( i->getSessionQualifier().size() )
      body << "&SessionQualifier=" << i->getSessionQualifier();

    body << ">" << *i << "</A></TD>"
         << "<TD>" << (pSession->isInitiator() ? "initiator" : "acceptor") << "</TD>"
         << "<TD>" << (pSession->isEnabled() ? "yes" : "no") << "</TD>"
         << "<TD>" << (pSession->isSessionTime() ? "yes" : "no") << "</TD>"
         << "<TD>" << (pSession->isLoggedOn() ? "yes" : "no") << "</TD>"
         << "<TD>" << pSession->getExpectedSenderNum() << "</TD>"
         << "<TD>" << pSession->getExpectedTargetNum() << "</TD>"
         << "</TR>";
  }

  body << "</TABLE>";

  QF_STACK_POP
}

void HttpConnection::processSession
( const HttpMessage& request, std::stringstream& header, std::stringstream& body )
{ QF_STACK_PUSH(HttpConnection::processSession)

  try
  {
    HttpMessage copy = request;
    std::string url = request.toString();
    std::string beginString = copy.getParameter( "BeginString" );
    std::string senderCompID = copy.getParameter( "SenderCompID" );
    std::string targetCompID = copy.getParameter( "TargetCompID" );
    std::string sessionQualifier;
	if( copy.hasParameter("SessionQualifier") )
		sessionQualifier = copy.getParameter( "SessionQualifier" );

    SessionID sessionID( beginString, senderCompID, targetCompID, sessionQualifier );
    Session* pSession = Session::lookupSession( sessionID );
    if( pSession == 0 ) throw SessionNotFound();

    if( copy.hasParameter("Enabled") )
    {
      IntConvertor::convert(copy.getParameter("Enabled")) ? pSession->logon() : pSession->logout();
      copy.removeParameter("Enabled");
    }
    if( copy.hasParameter(SEND_REDUNDANT_RESENDREQUESTS) )
    {
      pSession->setSendRedundantResendRequests( IntConvertor::convert(copy.getParameter(SEND_REDUNDANT_RESENDREQUESTS)) != 0 );
      copy.removeParameter(SEND_REDUNDANT_RESENDREQUESTS);
    }
    if( copy.hasParameter(CHECK_COMPID) )
    {
      pSession->setCheckCompId( IntConvertor::convert(copy.getParameter(CHECK_COMPID)) != 0 );
      copy.removeParameter(CHECK_COMPID);
    }
    if( copy.hasParameter(CHECK_LATENCY) )
    {
      pSession->setCheckLatency( IntConvertor::convert(copy.getParameter(CHECK_LATENCY)) != 0 );
      copy.removeParameter(CHECK_LATENCY);
    }
    if( copy.hasParameter(RESET_ON_LOGON) )
    {
      pSession->setResetOnLogon( IntConvertor::convert(copy.getParameter(RESET_ON_LOGON)) != 0 );
      copy.removeParameter(RESET_ON_LOGON);
    }
    if( copy.hasParameter(RESET_ON_LOGOUT) )
    {
      pSession->setResetOnLogout( IntConvertor::convert(copy.getParameter(RESET_ON_LOGOUT)) != 0 );
      copy.removeParameter(RESET_ON_LOGOUT);
    }
    if( copy.hasParameter(RESET_ON_DISCONNECT) )
    {
      pSession->setResetOnDisconnect( IntConvertor::convert(copy.getParameter(RESET_ON_DISCONNECT)) != 0 );
      copy.removeParameter(RESET_ON_DISCONNECT);
    }
    if( copy.hasParameter(REFRESH_ON_LOGON) )
    {
      pSession->setRefreshOnLogon( IntConvertor::convert(copy.getParameter(REFRESH_ON_LOGON)) != 0 );
      copy.removeParameter(REFRESH_ON_LOGON);
    }
    if( copy.hasParameter(MILLISECONDS_IN_TIMESTAMP) )
    {
      pSession->setMillisecondsInTimeStamp( IntConvertor::convert(copy.getParameter(MILLISECONDS_IN_TIMESTAMP)) != 0 );
      copy.removeParameter(MILLISECONDS_IN_TIMESTAMP);
    }

    if( url != copy.toString() )
      header << "<META http-equiv='refresh' content=0;URL='" << copy.toString() << "'>";

    body << "<TABLE border='1' cellspacing='2' width='100%'>"
         << "<CAPTION><EM>" << sessionID 
         << "&nbsp;(<A href='/resetSession" << copy.getParameterString() << "'>RESET</A>)"
         << "&nbsp;(<A href='/refreshSession" << copy.getParameterString() << "'>REFRESH</A>)"
         << "</EM></CAPTION>"
         << "<TR><TD>Enabled</TD><TD>" 
         << (pSession->isEnabled() ? "yes" : "no") << "</TD>"
         << "<TD><A href='" << url + "&Enabled=" << !pSession->isEnabled() << "'>" << "[toggle]</A></TD></TR>" 
         << "<TR><TD>Type</TD><TD>" 
         << (pSession->isInitiator() ? "initiator" : "acceptor") << "</TD></TR>"
         << "<TR><TD>Session Time</TD><TD>" 
         << (pSession->isSessionTime() ? "yes" : "no") << "</TD></TR>"
         << "<TR><TD>Logged On</TD><TD>" 
         << (pSession->isLoggedOn() ? "yes" : "no") << "</TD></TR>"
         << "<TR><TD>Next Incoming</TD><TD>" 
         << pSession->getExpectedSenderNum() << "</TD></TR>"
         << "<TR><TD>Next Outgoing</TD><TD>" 
         << pSession->getExpectedTargetNum() << "</TD></TR>"
         << "<TD>" << SEND_REDUNDANT_RESENDREQUESTS << "</TD>"
         << "<TD>" << (pSession->getSendRedundantResendRequests() ? "yes" : "no") << "</TD>"
         << "<TD><A href='" << url << "&" << SEND_REDUNDANT_RESENDREQUESTS << "=" << !pSession->getSendRedundantResendRequests() << "'>" << "[toggle]</A></TD></TR>"
         << "<TD>" << CHECK_COMPID << "</TD>"
         << "<TD>" << (pSession->getCheckCompId() ? "yes" : "no") << "</TD>"
         << "<TD><A href='" << url << "&" << CHECK_COMPID << "=" << !pSession->getCheckCompId() << "'>" << "[toggle]</A></TD></TR>" 
         << "<TR><TD>" << CHECK_LATENCY << "</TD>"
         << "<TD>" << (pSession->getCheckLatency() ? "yes" : "no") << "</TD>"
         << "<TD><A href='" << url << "&" << CHECK_LATENCY << "=" << !pSession->getCheckLatency() << "'>" << "[toggle]</A></TD></TR>"
         << "<TR><TD>" << MAX_LATENCY << "</TD>"
         << "<TD>" << pSession->getMaxLatency() << "</TD></TR>"
         << "<TR><TD>" << LOGON_TIMEOUT << "</TD>"
         << "<TD>" << pSession->getLogonTimeout() << "</TD></TR>"
         << "<TR><TD>" << LOGOUT_TIMEOUT << "</TD>"
         << "<TD>" << pSession->getLogoutTimeout() << "</TD></TR>"
         << "<TR><TD>" << RESET_ON_LOGON << "</TD>"
         << "<TD>" << (pSession->getResetOnLogon() ? "yes" : "no") << "</TD>"
         << "<TD><A href='" << url << "&" << RESET_ON_LOGON << "=" << !pSession->getResetOnLogon() << "'>" << "[toggle]</A></TD></TR>"
         << "<TR><TD>" << RESET_ON_LOGOUT << "</TD>"
         << "<TD>" << (pSession->getResetOnLogout() ? "yes" : "no") << "</TD>"
         << "<TD><A href='" << url << "&" << RESET_ON_LOGOUT << "=" << !pSession->getResetOnLogout() << "'>" << "[toggle]</A></TD></TR>"
         << "<TR><TD>" << RESET_ON_DISCONNECT << "</TD>"
         << "<TD>" << (pSession->getResetOnDisconnect() ? "yes" : "no") << "</TD>"
         << "<TD><A href='" << url << "&" << RESET_ON_DISCONNECT << "=" << !pSession->getResetOnDisconnect() << "'>" << "[toggle]</A></TD></TR>"
         << "<TR><TD>" << REFRESH_ON_LOGON << "</TD>"
         << "<TD>" << (pSession->getRefreshOnLogon() ? "yes" : "no") << "</TD>"
         << "<TD><A href='" << url << "&" << REFRESH_ON_LOGON << "=" << !pSession->getRefreshOnLogon() << "'>" << "[toggle]</A></TD></TR>"
         << "<TR><TD>" << MILLISECONDS_IN_TIMESTAMP << "</TD>"
         << "<TD>" << (pSession->getMillisecondsInTimeStamp() ? "yes" : "no") << "</TD>"
         << "<TD><A href='" << url << "&" << MILLISECONDS_IN_TIMESTAMP << "=" << !pSession->getMillisecondsInTimeStamp() << "'>" << "[toggle]</A></TD></TR>"
         << "</TABLE>";
  }
  catch( std::exception& e )
  {
    body << e.what();
  }

  QF_STACK_POP
}

void HttpConnection::processResetSession
( const HttpMessage& request, std::stringstream& header, std::stringstream& body )
{ QF_STACK_PUSH(HttpConnection::processResetSession)

  try
  {
    HttpMessage copy = request;
    std::string beginString = request.getParameter( "BeginString" );
    std::string senderCompID = request.getParameter( "SenderCompID" );
    std::string targetCompID = request.getParameter( "TargetCompID" );
    std::string sessionQualifier;
	if( copy.hasParameter("SessionQualifier") )
		sessionQualifier = copy.getParameter( "SessionQualifier" );

	SessionID sessionID( beginString, senderCompID, targetCompID, sessionQualifier );
    Session* pSession = Session::lookupSession( sessionID );
    if( pSession == 0 ) throw SessionNotFound();

    std::string sessionUrl = "/session" + request.getParameterString();

    bool confirm = false;
    if( copy.hasParameter("confirm") && IntConvertor::convert(copy.getParameter("confirm")) )
    {
      confirm = true;
      pSession->reset();
      copy.removeParameter("confirm");
    }

    if( confirm )
    {
      header << "<META http-equiv='refresh' content=2;URL='" << "/session" << copy.getParameterString() << "'>";
      body << "<CENTER><H2><A href='" << "/session" << copy.getParameterString() << "'>" 
           << sessionID << "</A> has been reset</H2></CENTER>";
    }
    else
    {
      body << "<CENTER><H2>Are you sure you want to reset session <A href='" << sessionUrl 
           << request.getParameterString() << "'>" << sessionID << "</A>?</H2></CENTER>"
           << "<CENTER>[<A HREF='" << request.toString() + "&confirm=1'>YES, reset session</A>]"
           << "&nbsp;[<A HREF='" << sessionUrl << "'>NO, do not reset session</A>]"
           << "</CENTER>";
    }
  }
  catch( std::exception& e )
  {
    body << e.what();
  }

  QF_STACK_POP
}

void HttpConnection::processRefreshSession
( const HttpMessage& request, std::stringstream& header, std::stringstream& body )
{ QF_STACK_PUSH(HttpConnection::processRefreshSession)

  try
  {
    HttpMessage copy = request;
    std::string beginString = request.getParameter( "BeginString" );
    std::string senderCompID = request.getParameter( "SenderCompID" );
    std::string targetCompID = request.getParameter( "TargetCompID" );
    std::string sessionQualifier;
	if( copy.hasParameter("SessionQualifier") )
		sessionQualifier = copy.getParameter( "SessionQualifier" );

	SessionID sessionID( beginString, senderCompID, targetCompID, sessionQualifier );
    Session* pSession = Session::lookupSession( sessionID );
    if( pSession == 0 ) throw SessionNotFound();

    std::string sessionUrl = "/session" + request.getParameterString();

    bool confirm = false;
    if( copy.hasParameter("confirm") && IntConvertor::convert(copy.getParameter("confirm")) )
    {
      confirm = true;
      pSession->refresh();
      copy.removeParameter("confirm");
    }

    if( confirm )
    {
      header << "<META http-equiv='refresh' content=2;URL='" << "/session" << copy.getParameterString() << "'>";
      body << "<CENTER><H2><A href='" << "/session" << copy.getParameterString() << "'>" 
           << sessionID << "</A> has been refreshed</H2></CENTER>";
    }
    else
    {
      body << "<CENTER><H2>Are you sure you want to refresh session <A href='" << sessionUrl 
           << request.getParameterString() << "'>" << sessionID << "</A>?</H2></CENTER>"
           << "<CENTER>[<A HREF='" << request.toString() + "&confirm=1'>YES, refresh session</A>]"
           << "&nbsp;[<A HREF='" << sessionUrl << "'>NO, do not refresh session</A>]"
           << "</CENTER>";
    }
  }
  catch( std::exception& e )
  {
    body << e.what();
  }

  QF_STACK_POP
}

} // namespace FIX
