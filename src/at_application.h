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

#include "Application.h"
#include "MessageCracker.h"
#include <map>

class MessageCracker : public FIX::MessageCracker
{
  void process( const FIX::Message& message, const FIX::SessionID& sessionID )
  {
    FIX::Message echo = message;
    FIX::PossResend possResend( false );
    if ( message.getHeader().isSetField( possResend ) )
      message.getHeader().getField( possResend );

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
  throw( FIX::RejectLogon& )
{}

  void onLogout( const FIX::SessionID& sessionID )
  {
    m_cracker.reset();
  }

  void toAdmin( FIX::Message& message, const FIX::SessionID& )
  {}
  void toApp( FIX::Message& message, const FIX::SessionID& )
  throw( FIX::DoNotSend& )
  {}
  void fromAdmin( const FIX::Message& message, const FIX::SessionID& )
  throw( FIX::FieldNotFound&, FIX::IncorrectDataFormat&, FIX::IncorrectTagValue&, FIX::RejectLogon& ) {}  
  void fromApp( const FIX::Message& message, const FIX::SessionID& sessionID )
  throw( FIX::FieldNotFound&, FIX::IncorrectDataFormat&, FIX::IncorrectTagValue&, FIX::UnsupportedMessageType& )
  {
    m_cracker.crack( message, sessionID );
  }

  MessageCracker m_cracker;
};
