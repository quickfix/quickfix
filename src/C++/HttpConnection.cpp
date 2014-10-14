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

#include "HttpConnection.h"
#include "HttpMessage.h"
#include "HtmlBuilder.h"
#include "Session.h"
#include "Utility.h"

using namespace HTML;

namespace FIX
{
HttpConnection::HttpConnection( int s )
: m_socket( s )
{
  FD_ZERO( &m_fds );
  FD_SET( m_socket, &m_fds );
}

bool HttpConnection::send( const std::string& msg )
{
  return socket_send( m_socket, msg.c_str(), msg.length() ) >= 0;
}

void HttpConnection::disconnect( int error )
{ 
  if( error > 0 )
    send( HttpMessage::createResponse(error) );

  socket_close( m_socket );
}

bool HttpConnection::read()
{
  struct timeval timeout = { 2, 0 };
  fd_set readset = m_fds;

  try
  {
    // Wait for input (1 second timeout)
    int result = select( 1 + m_socket, &readset, 0, 0, &timeout );

    if( result > 0 ) // Something to read
    {
      // We can read without blocking
      ssize_t size = recv( m_socket, m_buffer, sizeof(m_buffer), 0 );
      if ( size <= 0 ) { throw SocketRecvFailed( size ); }
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
}

bool HttpConnection::readMessage( std::string& msg )
throw( SocketRecvFailed )
{
  try
  {
    return m_parser.readHttpMessage( msg );
  }
  catch ( MessageParseError& ) 
  { 
    disconnect( 400 );
  }
  return true;
}

void HttpConnection::processStream()
{
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
}

void HttpConnection::processRequest( const HttpMessage& request )
{
  int error = 200;
  std::stringstream h;
  std::stringstream b;
  std::string titleString = "QuickFIX Engine Web Interface";

  { HEAD head(h); head.text();
    { CENTER center(h); center.text();
      { TITLE title(h); title.text(titleString); }
      { H1 h1(h); h1.text(titleString); }
    }
    { CENTER center(h); center.text();
      { A a(h); a.href("/").text("HOME"); }
      h << NBSP;
      { A a(h); a.href(request.toString()).text("RELOAD"); }
    }
    HR hr(h); hr.text();
  }

  BODY body(b); body.text();

  try
  {
    if( request.getRootString() == "/" )
      processRoot( request, h, b );
    else if( request.getRootString() == "/resetSessions" )
      processResetSessions( request, h, b );
    else if( request.getRootString() == "/refreshSessions" )
      processRefreshSessions( request, h, b );
    else if( request.getRootString() == "/enableSessions" )
      processEnableSessions( request, h, b );
    else if( request.getRootString() == "/disableSessions" )
      processDisableSessions( request, h, b );
    else if( request.getRootString() == "/session" )
      processSession( request, h, b );
    else if( request.getRootString() == "/resetSession" )
      processResetSession( request, h, b );
    else if( request.getRootString() == "/refreshSession" )
      processRefreshSession( request, h, b );
    else
      error = 404;
  }
  catch( std::exception& e )
  {
    error = 400;
    b << e.what();
  }

  std::string response = "<HTML>" + h.str() + b.str() + "</HTML>";
  send( HttpMessage::createResponse(error, error == 200 ? response : "") );

  disconnect();
}

void HttpConnection::processRoot
( const HttpMessage& request, std::stringstream& h, std::stringstream& b )
{
  TABLE table(b); table.border(1).cellspacing(2).width(100).text();

  { CAPTION caption(b); caption.text();
    EM em(b); em.text();
    b << Session::numSessions() << " Sessions managed by QuickFIX";
    { HR hr(b); hr.text(); }
    { b << NBSP; A a(b); a.href("/resetSessions" + request.getParameterString()).text("RESET"); }
    { b << NBSP; A a(b); a.href("/refreshSessions" + request.getParameterString()).text("REFRESH"); }
    { b << NBSP; A a(b); a.href("/enableSessions" + request.getParameterString()).text("ENABLE"); }
    { b << NBSP; A a(b); a.href("/disableSessions" + request.getParameterString()).text("DISABLE"); }
  }

  { TR tr(b); tr.text();
    { TD td(b); td.align("center").text("Session"); }
    { TD td(b); td.align("center").text("ConnectionType"); }
    { TD td(b); td.align("center").text("Enabled"); }
    { TD td(b); td.align("center").text("Session Time"); }
    { TD td(b); td.align("center").text("Logged On"); }
    { TD td(b); td.align("center").text("Next Incoming"); }
    { TD td(b); td.align("center").text("Next Outgoing"); }
  }

  std::set<SessionID> sessions = Session::getSessions();
  std::set<SessionID>::iterator i;
  for( i = sessions.begin(); i != sessions.end(); ++i )
  {
    Session* pSession = Session::lookupSession( *i );
    if( !pSession ) continue;

    { TR tr(b); tr.text();
      { TD td(b); td.text();
        std::string href = "/session?BeginString=" + i->getBeginString().getValue() +
                            "&SenderCompID=" + i->getSenderCompID().getValue() +
                            "&TargetCompID=" + i->getTargetCompID().getValue();
        if( i->getSessionQualifier().size() )
          href += "&SessionQualifier=" + i->getSessionQualifier();

        A a(b); a.href(href).text(i->toString());
      }
      { TD td(b); td.text(pSession->isInitiator() ? "initiator" : "acceptor"); }
      { TD td(b); td.text(pSession->isEnabled() ? "yes" : "no"); }
      { TD td(b); td.text(pSession->isSessionTime(UtcTimeStamp()) ? "yes" : "no"); }
      { TD td(b); td.text(pSession->isLoggedOn() ? "yes" : "no"); }
      { TD td(b); td.text(pSession->getExpectedTargetNum()); }
      { TD td(b); td.text(pSession->getExpectedSenderNum()); }
    }
  }
}

void HttpConnection::processResetSessions
( const HttpMessage& request, std::stringstream& h, std::stringstream& b )
{
  try
  {
    HttpMessage copy = request;

    bool confirm = false;
    if( copy.hasParameter("confirm") && copy.getParameter("confirm") != "0" )
    {
      confirm = true;
      std::set<SessionID> sessions = Session::getSessions();
      std::set<SessionID>::iterator session;
      for( session = sessions.begin(); session != sessions.end(); ++session )
      Session::lookupSession( *session )->reset();
      copy.removeParameter("confirm");
    }

    if( confirm )
    {
      h << "<META http-equiv='refresh' content=2;URL='" << "/'>";
      CENTER center(b); center.text();
      H2 h2(b); h2.text();
      { A a(b); a.href("/").text("Sessions"); }
      b << " have been reset";
    }
    else
    {
      { CENTER center(b); center.text();
        H2 h2(b); h2.text();
        b << "Are you sure you want to reset all sessions ?";
      }
      { CENTER center(b); center.text();
        b << "[";
        { A a(b); a.href(request.toString() + "?confirm=1").text("YES, reset sessions"); }
        b << "]" << NBSP << "[";
        { A a(b); a.href("/").text("NO, do not reset sessions"); }
        b << "]";
      }
    }
  }
  catch( std::exception& e )
  {
    b << e.what();
  }
}

void HttpConnection::processRefreshSessions
( const HttpMessage& request, std::stringstream& h, std::stringstream& b )
{
  try
  {
    HttpMessage copy = request;

    bool confirm = false;
    if( copy.hasParameter("confirm") && copy.getParameter("confirm") != "0" )
    {
      confirm = true;
      std::set<SessionID> sessions = Session::getSessions();
      std::set<SessionID>::iterator session;
      for( session = sessions.begin(); session != sessions.end(); ++session )
      Session::lookupSession( *session )->refresh();
      copy.removeParameter("confirm");
    }

    if( confirm )
    {
      h << "<META http-equiv='refresh' content=2;URL='" << "/'>";
      CENTER center(b); center.text();
      H2 h2(b); h2.text();
      { A a(b); a.href("/").text("Sessions"); }
      b << " have been refreshed";
    }
    else
    {
      { CENTER center(b); center.text();
        H2 h2(b); h2.text();
        b << "Are you sure you want to refresh all sessions ?";
      }
      { CENTER center(b); center.text();
        b << "[";
        { A a(b); a.href(request.toString() + "?confirm=1").text("YES, refresh sessions"); }
        b << "]" << NBSP << "[";
        { A a(b); a.href("/").text("NO, do not refresh sessions"); }
        b << "]";
      }
    }
  }
  catch( std::exception& e )
  {
    b << e.what();
  }
}

void HttpConnection::processEnableSessions
( const HttpMessage& request, std::stringstream& h, std::stringstream& b )
{
  try
  {
    HttpMessage copy = request;

    bool confirm = false;
    if( copy.hasParameter("confirm") && copy.getParameter("confirm") != "0" )
    {
      confirm = true;
      std::set<SessionID> sessions = Session::getSessions();
      std::set<SessionID>::iterator session;
      for( session = sessions.begin(); session != sessions.end(); ++session )
      Session::lookupSession( *session )->logon();
      copy.removeParameter("confirm");
    }

    if( confirm )
    {
      h << "<META http-equiv='refresh' content=2;URL='" << "/'>";
      CENTER center(b); center.text();
      H2 h2(b); h2.text();
      { A a(b); a.href("/").text("Sessions"); }
      b << " have been enabled";
    }
    else
    {
      { CENTER center(b); center.text();
        H2 h2(b); h2.text();
        b << "Are you sure you want to enable all sessions ?";
      }
      { CENTER center(b); center.text();
        b << "[";
        { A a(b); a.href(request.toString() + "?confirm=1").text("YES, enable sessions"); }
        b << "]" << NBSP << "[";
        { A a(b); a.href("/").text("NO, do not enable sessions"); }
        b << "]";
      }
    }
  }
  catch( std::exception& e )
  {
    b << e.what();
  }
}

void HttpConnection::processDisableSessions
( const HttpMessage& request, std::stringstream& h, std::stringstream& b )
{
  try
  {
    HttpMessage copy = request;

    bool confirm = false;
    if( copy.hasParameter("confirm") && copy.getParameter("confirm") != "0" )
    {
      confirm = true;
      std::set<SessionID> sessions = Session::getSessions();
      std::set<SessionID>::iterator session;
      for( session = sessions.begin(); session != sessions.end(); ++session )
      Session::lookupSession( *session )->logout();
      copy.removeParameter("confirm");
    }

    if( confirm )
    {
      h << "<META http-equiv='refresh' content=2;URL='" << "/'>";
      CENTER center(b); center.text();
      H2 h2(b); h2.text();
      { A a(b); a.href("/").text("Sessions"); }
      b << " have been disabled";
    }
    else
    {
      { CENTER center(b); center.text();
        H2 h2(b); h2.text();
        b << "Are you sure you want to disable all sessions ?";
      }
      { CENTER center(b); center.text();
        b << "[";
        { A a(b); a.href(request.toString() + "?confirm=1").text("YES, disable sessions"); }
        b << "]" << NBSP << "[";
        { A a(b); a.href("/").text("NO, do not disable sessions"); }
        b << "]";
      }
    }
  }
  catch( std::exception& e )
  {
    b << e.what();
  }
}

void HttpConnection::processSession
( const HttpMessage& request, std::stringstream& h, std::stringstream& b )
{
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
      copy.getParameter("Enabled") == "0" ? pSession->logout() : pSession->logon();
      copy.removeParameter("Enabled");
    }
    if( copy.hasParameter("Next%20Incoming") )
    {
      int value = IntConvertor::convert( copy.getParameter("Next%20Incoming") );
      pSession->setNextTargetMsgSeqNum( value <= 0 ? 1 : value );
      copy.removeParameter("Next%20Incoming");
    }
    if( copy.hasParameter("Next%20Outgoing") )
    {
      int value = IntConvertor::convert( copy.getParameter("Next%20Outgoing") );
      pSession->setNextSenderMsgSeqNum( value <= 0 ? 1 : value );
      copy.removeParameter("Next%20Outgoing");
    }
    if( copy.hasParameter(SEND_REDUNDANT_RESENDREQUESTS) )
    {
      pSession->setSendRedundantResendRequests( copy.getParameter(SEND_REDUNDANT_RESENDREQUESTS) != "0" );
      copy.removeParameter(SEND_REDUNDANT_RESENDREQUESTS);
    }
    if( copy.hasParameter(CHECK_COMPID) )
    {
      pSession->setCheckCompId( copy.getParameter(CHECK_COMPID) != "0" );
      copy.removeParameter(CHECK_COMPID);
    }
    if( copy.hasParameter(CHECK_LATENCY) )
    {
      pSession->setCheckLatency( copy.getParameter(CHECK_LATENCY) != "0" );
      copy.removeParameter(CHECK_LATENCY);
    }
    if( copy.hasParameter(MAX_LATENCY) )
    {
      int value = IntConvertor::convert( copy.getParameter(MAX_LATENCY) );
      pSession->setMaxLatency( value <= 0 ? 1 : value );
      copy.removeParameter(MAX_LATENCY);
    }
    if( copy.hasParameter(LOGON_TIMEOUT) )
    {
      int value = IntConvertor::convert( copy.getParameter(LOGON_TIMEOUT) );
      pSession->setLogonTimeout( value <= 0 ? 1 : value );
      copy.removeParameter(LOGON_TIMEOUT);
    }
    if( copy.hasParameter(LOGOUT_TIMEOUT) )
    {
      int value = IntConvertor::convert( copy.getParameter(LOGOUT_TIMEOUT) );
      pSession->setLogoutTimeout( value <= 0 ? 1 : value );
      copy.removeParameter(LOGOUT_TIMEOUT);
    }
    if( copy.hasParameter(RESET_ON_LOGON) )
    {
      pSession->setResetOnLogon( copy.getParameter(RESET_ON_LOGON) != "0" );
      copy.removeParameter(RESET_ON_LOGON);
    }
    if( copy.hasParameter(RESET_ON_LOGOUT) )
    {
      pSession->setResetOnLogout( copy.getParameter(RESET_ON_LOGOUT) != "0" );
      copy.removeParameter(RESET_ON_LOGOUT);
    }
    if( copy.hasParameter(RESET_ON_DISCONNECT) )
    {
      pSession->setResetOnDisconnect( copy.getParameter(RESET_ON_DISCONNECT) != "0" );
      copy.removeParameter(RESET_ON_DISCONNECT);
    }
    if( copy.hasParameter(REFRESH_ON_LOGON) )
    {
      pSession->setRefreshOnLogon( copy.getParameter(REFRESH_ON_LOGON) != "0" );
      copy.removeParameter(REFRESH_ON_LOGON);
    }
    if( copy.hasParameter(MILLISECONDS_IN_TIMESTAMP) )
    {
      pSession->setMillisecondsInTimeStamp( copy.getParameter(MILLISECONDS_IN_TIMESTAMP) != "0" );
      copy.removeParameter(MILLISECONDS_IN_TIMESTAMP);
    }
    if( copy.hasParameter(PERSIST_MESSAGES) )
    {
      pSession->setPersistMessages( copy.getParameter(PERSIST_MESSAGES) != "0" );
      copy.removeParameter(PERSIST_MESSAGES);
    }

    if( url != copy.toString() )
      h << "<META http-equiv='refresh' content=0;URL='" << copy.toString() << "'>";

    TABLE table(b); table.border(1).cellspacing(2).width(100).text();

    { CAPTION caption(b); caption.text();
      EM em(b); em.text();
      b << sessionID;
      { HR hr(b); hr.text(); }
      { b << NBSP; A a(b); a.href("/resetSession" + copy.getParameterString()).text("RESET"); }
      { b << NBSP; A a(b); a.href("/refreshSession" + copy.getParameterString()).text("REFRESH"); }
    }

    showRow( b, "Enabled", pSession->isEnabled(), url );
    showRow( b, "ConnectionType", std::string(pSession->isInitiator() ?"initiator" : "acceptor") );
    showRow( b, "SessionTime", pSession->isSessionTime(UtcTimeStamp()) );
    showRow( b, "Logged On", pSession->isLoggedOn() );
    showRow( b, "Next Incoming", (int)pSession->getExpectedTargetNum(), url );
    showRow( b, "Next Outgoing", (int)pSession->getExpectedSenderNum(), url );
    showRow( b, SEND_REDUNDANT_RESENDREQUESTS, pSession->getSendRedundantResendRequests(), url );
    showRow( b, CHECK_COMPID, pSession->getCheckCompId(), url );
    showRow( b, CHECK_LATENCY, pSession->getCheckLatency(), url );
    showRow( b, MAX_LATENCY, pSession->getMaxLatency(), url );
    showRow( b, LOGON_TIMEOUT, pSession->getLogonTimeout(), url );
    showRow( b, LOGOUT_TIMEOUT, pSession->getLogoutTimeout(), url );
    showRow( b, RESET_ON_LOGON, pSession->getResetOnLogon(), url );
    showRow( b, RESET_ON_LOGOUT, pSession->getResetOnLogout(), url );
    showRow( b, RESET_ON_DISCONNECT, pSession->getResetOnDisconnect(), url );
    showRow( b, REFRESH_ON_LOGON, pSession->getRefreshOnLogon(), url );
    showRow( b, MILLISECONDS_IN_TIMESTAMP, pSession->getMillisecondsInTimeStamp(), url );
    showRow( b, PERSIST_MESSAGES, pSession->getPersistMessages(), url );
  }
  catch( std::exception& e )
  {
    b << e.what();
  }
}

void HttpConnection::processResetSession
( const HttpMessage& request, std::stringstream& h, std::stringstream& b )
{
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
    if( copy.hasParameter("confirm") && copy.getParameter("confirm") != "0" )
    {
      confirm = true;
      pSession->reset();
      copy.removeParameter("confirm");
    }

    if( confirm )
    {
      h << "<META http-equiv='refresh' content=2;URL='" << "/session" << copy.getParameterString() << "'>";
      CENTER center(b); center.text();
      H2 h2(b); h2.text();
      { A a(b); a.href("/session" + copy.getParameterString()).text(sessionID.toString()); }
      b << " has been reset";
    }
    else
    {
      { CENTER center(b); center.text();
        H2 h2(b); h2.text();
        b << "Are you sure you want to reset session ";
        { A a(b); a.href(sessionUrl + request.getParameterString()).text(sessionID.toString()); }
        b << "?";
      }
      { CENTER center(b); center.text();
        b << "[";
        { A a(b); a.href(request.toString() + "&confirm=1").text("YES, reset session"); }
        b << "]" << NBSP << "[";
        { A a(b); a.href(sessionUrl).text("NO, do not reset session"); }
        b << "]";
      }
    }
  }
  catch( std::exception& e )
  {
    b << e.what();
  }
}

void HttpConnection::processRefreshSession
( const HttpMessage& request, std::stringstream& h, std::stringstream& b )
{
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
    if( copy.hasParameter("confirm") && copy.getParameter("confirm") != "0" )
    {
      confirm = true;
      pSession->refresh();
      copy.removeParameter("confirm");
    }

    if( confirm )
    {
      h << "<META http-equiv='refresh' content=2;URL='" << "/session" << copy.getParameterString() << "'>";
      CENTER center(b); center.text();
      H2 h2(b); h2.text();
      { A a(b); a.href("/session" + copy.getParameterString()).text(sessionID.toString()); }
      b << " has been refreshed";
    }
    else
    {
      { CENTER center(b); center.text();
        H2 h2(b); h2.text();
        b << "Are you sure you want to refresh session ";
        { A a(b); a.href(sessionUrl + request.getParameterString()).text(sessionID.toString()); }
        b << "?";
      }
      { CENTER center(b); center.text();
        b << "[";
        { A a(b); a.href(request.toString() + "&confirm=1").text("YES, refresh session"); }
        b << "]" << NBSP << "[";
        { A a(b); a.href(sessionUrl).text("NO, do not refresh session"); }
        b << "]";
      }
    }
  }
  catch( std::exception& e )
  {
    b << e.what();
  }
}

void HttpConnection::showRow
( std::stringstream& s, const std::string& name, bool value, const std::string& url )
{
    { TR tr(s); tr.text();
      { TD td(s); td.text(name); }
      { TD td(s); td.text(value ? "yes" : "no"); }
      { TD td(s); td.text();
        CENTER center(s); center.text();
        if( url.size() )
        {
          std::stringstream href;
          href << url << "&" << name << "=" << !value;
          A a(s); a.href(href.str()).text("toggle");
        }
      }
    }
}

void HttpConnection::showRow
( std::stringstream& s, const std::string& name, const std::string& value, const std::string& url )
{
    { TR tr(s); tr.text();
      { TD td(s); td.text(name); }
      { TD td(s); td.text(value); }
      { TD td(s); td.text();
        CENTER center(s); center.text();
      }
    }
}

void HttpConnection::showRow
( std::stringstream& s, const std::string& name, int value, const std::string& url )
{
    { TR tr(s); tr.text();
      { TD td(s); td.text(name); }
      { TD td(s); td.text(value); }
      { TD td(s); td.text();
        CENTER center(s); center.text();
        {
          std::stringstream href;
          href << url << "&" << name << "=" << value - 10;
          A a(s); a.href(href.str()).text("<<");
        }
        s << NBSP;
        {
          std::stringstream href;
          href << url << "&" << name << "=" << value - 1;
          A a(s); a.href(href.str()).text("<");
        }
        s << NBSP << "|" << NBSP;
        {
          std::stringstream href;
          href << url << "&" << name << "=" << value + 1;
          A a(s); a.href(href.str()).text(">");
        }
        s << NBSP;
        {
          std::stringstream href;
          href << url << "&" << name << "=" << value + 10;
          A a(s); a.href(href.str()).text(">>");
        }
      }
    }
}

} // namespace FIX
