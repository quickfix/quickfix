/* -*- C++ -*- */
/* ====================================================================
 * The QuickFIX Software License, Version 1.0
 *
 * Copyright (c) 2001 ThoughtWorks, Inc.  All rights
 * reserved.
 *
 * Redistribution and use in source and binary forms, with or without
 * modification, are permitted provided that the following conditions
 * are met:
 *
 * 1. Redistributions of source code must retain the above copyright
 *    notice, this list of conditions and the following disclaimer.
 *
 * 2. Redistributions in binary form must reproduce the above copyright
 *    notice, this list of conditions and the following disclaimer in
 *    the documentation and/or other materials provided with the
 *    distribution.
 *
 * 3. The end-user documentation included with the redistribution,
 *    if any, must include the following acknowledgment:
 *       "This product includes software developed by
 *        ThoughtWorks, Inc. (http://www.thoughtworks.com/)."
 *    Alternately, this acknowledgment may appear in the software itself,
 *    if and wherever such third-party acknowledgments normally appear.
 *
 * 4. The names "QuickFIX" and "ThoughtWorks, Inc." must
 *    not be used to endorse or promote products derived from this
 *    software without prior written permission. For written
 *    permission, please contact quickfix-users@lists.sourceforge.net.
 *
 * 5. Products derived from this software may not be called "QuickFIX",
 *    nor may "QuickFIX" appear in their name, without prior written
 *    permission of ThoughtWorks, Inc.
 *
 * THIS SOFTWARE IS PROVIDED ``AS IS'' AND ANY EXPRESSED OR IMPLIED
 * WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE IMPLIED WARRANTIES
 * OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE ARE
 * DISCLAIMED.  IN NO EVENT SHALL THOUGHTWORKS INC OR
 * ITS CONTRIBUTORS BE LIABLE FOR ANY DIRECT, INDIRECT, INCIDENTAL,
 * SPECIAL, EXEMPLARY, OR CONSEQUENTIAL DAMAGES (INCLUDING, BUT NOT
 * LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS OR SERVICES; LOSS OF
 * USE, DATA, OR PROFITS; OR BUSINESS INTERRUPTION) HOWEVER CAUSED AND
 * ON ANY THEORY OF LIABILITY, WHETHER IN CONTRACT, STRICT LIABILITY,
 * OR TORT (INCLUDING NEGLIGENCE OR OTHERWISE) ARISING IN ANY WAY OUT
 * OF THE USE OF THIS SOFTWARE, EVEN IF ADVISED OF THE POSSIBILITY OF
 * SUCH DAMAGE.
 * ====================================================================
 */

#pragma once

using namespace System;

#include "quickfix_net.h"

#include "Message.h"
#include "SessionID.h"
#include "MessageFactory.h"
#include "quickfix/include/Application.h"
#include "vcclr.h"

namespace QuickFix
{
public __gc __interface Application
{
  virtual void onCreate( const SessionID* ) = 0;
  virtual void onLogon( const SessionID* ) = 0;
  virtual void onLogout( const SessionID* ) = 0;
  virtual void toAdmin( Message*, const SessionID* ) = 0;
  virtual void toApp( Message*, const SessionID* )
  throw( DoNotSend* ) = 0;
  virtual void fromAdmin( const Message*, const SessionID* )
  throw( FieldNotFound*, 
	 IncorrectDataFormat*, 
	 IncorrectTagValue*, 
	 RejectLogon* ) = 0;
  virtual void fromApp( const Message*, const SessionID* )
  throw( FieldNotFound*, 
	 IncorrectDataFormat*, 
	 IncorrectTagValue*, 
	 UnsupportedMessageType* ) = 0;
};
}

class Application : public FIX::Application
{
public:
  Application( QuickFix::Application* application, 
	       QuickFix::MessageFactory* factory )
  : m_application( application ), m_factory( factory ) {}
  void onCreate( const FIX::SessionID& sessionID )
  { m_application->onCreate( new QuickFix::SessionID( sessionID ) ); }

  void onLogon( const FIX::SessionID& sessionID )
  { m_application->onLogon( new QuickFix::SessionID( sessionID ) ); }

  void onLogout( const FIX::SessionID& sessionID )
  { m_application->onLogout( new QuickFix::SessionID( sessionID ) ); }

  void toAdmin( FIX::Message& message, const FIX::SessionID& sessionID )
  {
    QuickFix::Message * toMessage = create( message );
    m_application->toAdmin( toMessage, new QuickFix::SessionID( sessionID ) );
    message = toMessage->unmanaged();
  }

  void toApp( FIX::Message& message, const FIX::SessionID& sessionID )
  throw( FIX::DoNotSend& )
  {
    QuickFix::Message * toMessage = create( message );
    try
    {
      m_application->toApp( toMessage, new QuickFix::SessionID( sessionID ) );
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
    QuickFix::Message * toMessage = create( message );
    try
    {
      m_application->fromAdmin
	( toMessage, new QuickFix::SessionID( sessionID ) );
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
    QuickFix::Message * toMessage = create( message );
    try
    {
      m_application->fromApp
	( toMessage, new QuickFix::SessionID( sessionID ) );
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
    QuickFix::Message* message 
      = m_factory->create
      ( beginString.getValue().c_str(), msgType.getValue().c_str() );
    message->setUnmanaged( unmanaged );
    return message;
  }

  gcroot < QuickFix::Application* > m_application;
  gcroot < QuickFix::MessageFactory* > m_factory;
};
