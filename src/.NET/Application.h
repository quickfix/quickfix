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

#pragma once

using namespace System;

#include "quickfix_net.h"

#include "Message.h"
#include "SessionID.h"
#include "MessageFactory.h"
#include "quickfix/Application.h"
#include "vcclr.h"

namespace QuickFix
{
public __gc __interface Application
{
  virtual void onCreate( SessionID* ) = 0;
  virtual void onLogon( SessionID* ) = 0;
  virtual void onLogout( SessionID* ) = 0;
  virtual void toAdmin( Message*, SessionID* ) = 0;
  virtual void toApp( Message*, SessionID* );
  virtual void fromAdmin( Message*, SessionID* );
  virtual void fromApp( Message*, SessionID* );
};
}

class Application : public FIX::Application
{
public:
  Application( QuickFix::Application* application,
	       QuickFix::MessageFactory* factory )
  : m_application( application ), m_factory( factory ) {}

  void onCreate( const FIX::SessionID& sessionID )
  {
    QuickFix::SessionID __pin * toSessionID = new QuickFix::SessionID( sessionID );
    m_application->onCreate( toSessionID );
  }

  void onLogon( const FIX::SessionID& sessionID )
  {
    QuickFix::SessionID __pin * toSessionID = new QuickFix::SessionID( sessionID );
    m_application->onLogon( toSessionID ); 
  }

  void onLogout( const FIX::SessionID& sessionID )
  {
    QuickFix::SessionID __pin * toSessionID = new QuickFix::SessionID( sessionID );
    m_application->onLogout( toSessionID ); 
  }

  void toAdmin( FIX::Message& message, const FIX::SessionID& sessionID )
  {
    QuickFix::Message __pin * toMessage = create( message );
    QuickFix::SessionID __pin * toSessionID = new QuickFix::SessionID( sessionID );
    m_application->toAdmin( toMessage, toSessionID );
    message = toMessage->unmanaged();
  }

  void toApp( FIX::Message& message, const FIX::SessionID& sessionID )
  throw( FIX::DoNotSend& )
  {
    QuickFix::Message __pin * toMessage = create( message );
    QuickFix::SessionID __pin * toSessionID = new QuickFix::SessionID( sessionID );
    try
    {
      m_application->toApp( toMessage, toSessionID );
    }
    catch ( QuickFix::DoNotSend* ) { throw FIX::DoNotSend(); }
    message = toMessage->unmanaged();
  }

  void fromAdmin( const FIX::Message& message,
      	          const FIX::SessionID& sessionID )
  throw( FIX::FieldNotFound&,
	       FIX::IncorrectDataFormat&,
	       FIX::IncorrectTagValue&,
	       FIX::RejectLogon& )
  {
    QuickFix::Message __pin * toMessage = create( message );
    QuickFix::SessionID __pin * toSessionID = new QuickFix::SessionID( sessionID );
    try
    {
      m_application->fromAdmin( toMessage, toSessionID );
    }
    catch ( QuickFix::FieldNotFound * e )
    {
      throw FIX::FieldNotFound( e->field );
    }
    catch ( QuickFix::IncorrectDataFormat * e )
    {
      throw FIX::IncorrectDataFormat( e->field );
    }
    catch ( QuickFix::IncorrectTagValue * e )
    {
      throw FIX::IncorrectTagValue( e->field );
    }
    catch ( QuickFix::RejectLogon* ) { throw FIX::RejectLogon(); }
  }

  void fromApp( const FIX::Message& message, const FIX::SessionID& sessionID )
  throw( FIX::FieldNotFound&,
	       FIX::IncorrectDataFormat&,
	       FIX::IncorrectTagValue&,
	       FIX::UnsupportedMessageType& )
  {
    QuickFix::SessionID __pin * toSessionID = new QuickFix::SessionID( sessionID );
    QuickFix::Message __pin * toMessage = create( message );
    try
    {
      m_application->fromApp( toMessage, toSessionID );
    }
    catch ( QuickFix::FieldNotFound * e )
    {
      throw FIX::FieldNotFound( e->field );
    }
    catch ( QuickFix::IncorrectDataFormat * e )
    {
      throw FIX::IncorrectDataFormat( e->field );
    }
    catch ( QuickFix::IncorrectTagValue * e )
    {
      throw FIX::IncorrectTagValue( e->field );
    }
    catch ( QuickFix::UnsupportedMessageType* )
    {
      throw FIX::UnsupportedMessageType();
    }
  }

private:
  QuickFix::Message* create( const FIX::Message& unmanaged )
  {
    FIX::BeginString beginString;
    FIX::MsgType msgType;
    unmanaged.getHeader().getField( beginString );
    unmanaged.getHeader().getField( msgType );
    QuickFix::Message __pin * message
      = m_factory->create
      ( beginString.getValue().c_str(), msgType.getValue().c_str() );
    message->setUnmanaged( unmanaged );
    return message;
  }

  gcroot < QuickFix::Application* > m_application;
  gcroot < QuickFix::MessageFactory* > m_factory;
};
