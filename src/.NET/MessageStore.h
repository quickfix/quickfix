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
using namespace System::Collections;
using namespace System::IO;

#include "quickfix_net.h"

#include "Message.h"
#include "SessionID.h"
#include "quickfix/include/MessageStore.h"
#include "vcclr.h"

namespace Fix
{
public __gc __interface MessageStore
{
  virtual bool set( int sequence, String* message )
  throw ( IOException* );
  virtual bool get( int sequence, String* message )
  throw ( IOException* );
  virtual void get( int begin, int end, ArrayList* )
  throw ( IOException* );
  virtual int getNextSenderMsgSeqNum() throw ( IOException* );
  virtual int getNextTargetMsgSeqNum() throw ( IOException* );
  virtual void setNextSenderMsgSeqNum( int next ) throw ( IOException* );
  virtual void setNextTargetMsgSeqNum( int next ) throw ( IOException* );
  virtual void incrNextSenderMsgSeqNum() throw ( IOException* );
  virtual void incrNextTargetMsgSeqNum() throw ( IOException* );
  virtual DateTime getCreationTime() throw ( IOException* );
  virtual void reset() throw ( IOException* );
};
}

class MessageStore : public FIX::MessageStore
{
public:
MessageStore( Fix::MessageStore* store ) : m_store( store ) {}

  bool set( int num, const std::string& message ) throw ( FIX::IOException& )
  {
    try
    { return m_store->set( num, message.c_str() ); }
    catch ( IOException * e )
    { throw FIX::IOException(); }
  }

  bool get( int num, std::string& message ) const throw ( FIX::IOException& )
  {
    try
    { return m_store->get( num, message.c_str() ); }
    catch ( IOException * e )
    { throw FIX::IOException(); }
  }

  void get( int begin, int end, std::vector < std::string > & messages ) const
  throw ( FIX::IOException& )
  {
    try
    {
      ArrayList * list = new ArrayList();
      m_store->get( begin, end, list );
      IEnumerator* e = list->GetEnumerator();
      while ( e->MoveNext() )
      {
        String * message = dynamic_cast < String* > ( e->get_Current() );
        char* umessage = Fix::createUnmanagedString( message );
        messages.push_back( umessage );
        Fix::destroyUnmanagedString( umessage );
      }
    }
    catch ( IOException * e )
    { throw FIX::IOException(); }
  }

  int getNextSenderMsgSeqNum() const throw ( FIX::IOException& )
  {
    try
    { return m_store->getNextSenderMsgSeqNum(); }
    catch ( IOException * e )
    { throw FIX::IOException(); }
  }

  int getNextTargetMsgSeqNum() const throw ( FIX::IOException& )
  {
    try
    { return m_store->getNextTargetMsgSeqNum(); }
    catch ( IOException * e )
    { throw FIX::IOException(); }
  }

  void setNextSenderMsgSeqNum( int num ) throw ( FIX::IOException& )
  {
    try
    { return m_store->setNextSenderMsgSeqNum( num ); }
    catch ( IOException * e )
    { throw FIX::IOException(); }
  }

  void setNextTargetMsgSeqNum( int num ) throw ( FIX::IOException& )
  {
    try
    { return m_store->setNextTargetMsgSeqNum( num ); }
    catch ( IOException * e )
    { throw FIX::IOException(); }
  }

  void incrNextSenderMsgSeqNum() throw ( FIX::IOException& )
  {
    try
    { m_store->incrNextSenderMsgSeqNum(); }
    catch ( IOException * e )
    { throw FIX::IOException(); }
  }

  void incrNextTargetMsgSeqNum() throw ( FIX::IOException& )
  {
    try
    { m_store->incrNextTargetMsgSeqNum(); }
    catch ( IOException * e )
    { throw FIX::IOException(); }
  }

  FIX::UtcTimeStamp getCreationTime() const throw ( FIX::IOException& )
  {
    try
    {
      DateTime d = m_store->getCreationTime();
      return FIX::UtcTimeStamp( d.get_Hour(), d.get_Minute(), d.get_Second(),
                                d.get_Day(), d.get_Month(), d.get_Year() );
    }
    catch ( IOException * e )
    { throw FIX::IOException(); }
  }

  void reset() throw ( FIX::IOException& )
  {
    try
    { m_store->reset(); }
    catch ( IOException * e )
    { throw FIX::IOException(); }
  }

  gcroot < Fix::MessageStore* > m_store;
};
