/* -*- C++ -*- */

/****************************************************************************
** Copyright (c) 2001-2005 quickfixengine.org  All rights reserved.
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
using namespace System::Collections;
using namespace System::IO;

#include "quickfix_net.h"

#include "Message.h"
#include "SessionID.h"
#include "quickfix/MessageStore.h"
#include "vcclr.h"

namespace QuickFix
{
public __gc __interface MessageStore
{
  virtual bool set( int sequence, String* message );
  virtual void get( int begin, int end, ArrayList* );
  virtual int getNextSenderMsgSeqNum();
  virtual int getNextTargetMsgSeqNum();
  virtual void setNextSenderMsgSeqNum( int next );
  virtual void setNextTargetMsgSeqNum( int next );
  virtual void incrNextSenderMsgSeqNum();
  virtual void incrNextTargetMsgSeqNum();
  virtual DateTime getCreationTime();
  virtual void reset();
};
}

class MessageStore : public FIX::MessageStore
{
public:
  MessageStore( QuickFix::MessageStore* store ) : m_store( store ) {}

  bool set( int num, const std::string& message ) throw ( FIX::IOException& )
  {
    try
    { return m_store->set( num, message.c_str() ); }
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
        char* umessage = QuickFix::createUnmanagedString( message );
        messages.push_back( umessage );
        QuickFix::destroyUnmanagedString( umessage );
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

  gcroot < QuickFix::MessageStore* > m_store;
};
