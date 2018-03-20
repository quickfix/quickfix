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

#include "Application.h"
#include "MessageCracker.h"
#include "Session.h"
#include "fix40/NewOrderSingle.h"
#include "fix41/NewOrderSingle.h"
#include "fix42/NewOrderSingle.h"
#include "fix43/NewOrderSingle.h"
#include "fix44/NewOrderSingle.h"
#include "fix50/NewOrderSingle.h"
#include "fix50sp1/NewOrderSingle.h"
#include "fix50sp2/NewOrderSingle.h"
#include "fix42/SecurityDefinition.h"
#include "fix43/SecurityDefinition.h"
#include "fix44/SecurityDefinition.h"
#include "fix50/SecurityDefinition.h"
#include "fix50sp1/SecurityDefinition.h"
#include "fix50sp2/SecurityDefinition.h"
#include <map>

class MessageCracker : public FIX::MessageCracker
{
public:
  void process( const FIX::Message& message, const FIX::SessionID& sessionID )
  {
    FIX::Message echo = message;
    FIX::PossResend possResend( false );
    message.getHeader().getFieldIfSet( possResend );

    FIX::ClOrdID clOrdID;
    message.getField( clOrdID );

    std::pair < FIX::ClOrdID, FIX::SessionID > pair =
      std::make_pair( clOrdID, sessionID );

    if ( possResend == true )
    {
      if ( m_orderIDs.find( pair ) != m_orderIDs.end() )
        return ;
    }
    m_orderIDs.insert( pair );
    FIX::Session::sendToTarget( echo, sessionID );
  }

  void onMessage( const FIX50SP2::NewOrderSingle& message,
                  const FIX::SessionID& sessionID )
  {
    process( message, sessionID );
  }

  void onMessage( const FIX50SP2::SecurityDefinition& message,
                  const FIX::SessionID& sessionID )
  {
    FIX50SP2::SecurityDefinition echo = message;
    FIX::Session::sendToTarget( echo, sessionID );
  }

  void onMessage( const FIX50SP1::NewOrderSingle& message,
                  const FIX::SessionID& sessionID )
  {
    process( message, sessionID );
  }

  void onMessage( const FIX50SP1::SecurityDefinition& message,
                  const FIX::SessionID& sessionID )
  {
    FIX50SP1::SecurityDefinition echo = message;
    FIX::Session::sendToTarget( echo, sessionID );
  }

  void onMessage( const FIX50::NewOrderSingle& message,
                  const FIX::SessionID& sessionID )
  {
    process( message, sessionID );
  }

  void onMessage( const FIX50::SecurityDefinition& message,
                  const FIX::SessionID& sessionID )
  {
    FIX50::SecurityDefinition echo = message;
    FIX::Session::sendToTarget( echo, sessionID );
  }

  void onMessage( const FIX44::NewOrderSingle& message,
                  const FIX::SessionID& sessionID )
  {
    process( message, sessionID );
  }

  void onMessage( const FIX44::SecurityDefinition& message,
                  const FIX::SessionID& sessionID )
  {
    FIX44::SecurityDefinition echo = message;
    FIX::Session::sendToTarget( echo, sessionID );
  }

  void onMessage( const FIX43::NewOrderSingle& message,
                  const FIX::SessionID& sessionID )
  {
    process( message, sessionID );
  }

  void onMessage( const FIX43::SecurityDefinition& message,
                  const FIX::SessionID& sessionID )
  {
    FIX43::SecurityDefinition echo = message;
    FIX::Session::sendToTarget( echo, sessionID );
  }

  void onMessage( const FIX42::NewOrderSingle& message,
                  const FIX::SessionID& sessionID )
  {
    process( message, sessionID );
  }

  void onMessage( const FIX42::SecurityDefinition& message,
                  const FIX::SessionID& sessionID )
  {
    FIX42::SecurityDefinition echo = message;
    FIX::Session::sendToTarget( echo, sessionID );
  }

  void onMessage( const FIX41::NewOrderSingle& message,
                  const FIX::SessionID& sessionID )
  {
    process( message, sessionID );
  }

  void onMessage( const FIX40::NewOrderSingle& message,
                  const FIX::SessionID& sessionID )
  {
    process( message, sessionID );
  }

  std::set < std::pair < FIX::ClOrdID, FIX::SessionID > > m_orderIDs;

public:
  void reset() { m_orderIDs.clear(); }
};

class Application : public FIX::Application
{
  void onCreate( const FIX::SessionID& sessionID )
  {
    FIX::Session * pSession = FIX::Session::lookupSession( sessionID );
    if ( pSession ) pSession->reset();
  }

  void onLogon( const FIX::SessionID& sessionID )
  {}

  void onLogout( const FIX::SessionID& sessionID )
  {
    m_cracker.reset();
  }

  void toAdmin( FIX::Message& message, const FIX::SessionID& )
  {}

  void toApp( FIX::Message& message, const FIX::SessionID& )
  {}

  void fromAdmin( const FIX::Message& message, const FIX::SessionID& sessionID )
  {
    FIX::MsgType msgType;
    message.getHeader().getField( msgType );
    if(msgType == FIX::MsgType_Logon)
    {
      FIX::DefaultApplVerID defaultApplVerID;
      if(message.isSetField(defaultApplVerID))
      {
        message.getField(defaultApplVerID);
        FIX::Session::lookupSession(sessionID)->setSenderDefaultApplVerID(defaultApplVerID);
      }
    }
  }

  void fromApp( const FIX::Message& message, const FIX::SessionID& sessionID )
  {
    FIX::MsgType msgType;
    message.getHeader().getField( msgType );
    if(msgType == FIX::MsgType_Email)
    {
      FIX::Message echo = message;
      FIX::Session::sendToTarget( echo, sessionID );
    }
    else
    {
      m_cracker.crack( message, sessionID );
    }
  }

  MessageCracker m_cracker;
};
