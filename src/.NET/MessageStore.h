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
using namespace System::Collections;
using namespace System::IO;

#include "quickfix_net.h"

#include "Message.h"
#include "SessionID.h"
#include "Exceptions.h"
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
  virtual void refresh();
};
}

inline FIX::IOException convertException( IOException * e )
{
  char* umessage = QuickFix::createUnmanagedString( e->Message );
  FIX::IOException ex(umessage);
  QuickFix::destroyUnmanagedString( umessage );
  return ex;
}

__gc class MessageStoreCallback
{
public:
  MessageStoreCallback( QuickFix::MessageStore* store )
  : m_store( store ) {}

  bool set( int num, String* message )
  {
    return m_store->set( num, message );
  }

  void get( int begin, int end, ArrayList* messages )
  {
    m_store->get( begin, end, messages );
  }

  int getNextSenderMsgSeqNum()
  {
    return m_store->getNextSenderMsgSeqNum();
  }

  int getNextTargetMsgSeqNum()
  {
    return m_store->getNextTargetMsgSeqNum();
  }

  void setNextSenderMsgSeqNum( int num )
  {
    return m_store->setNextSenderMsgSeqNum( num );
  }

  void setNextTargetMsgSeqNum( int num )
  {
    return m_store->setNextTargetMsgSeqNum( num );
  }

  void incrNextSenderMsgSeqNum()
  {
    m_store->incrNextSenderMsgSeqNum();
  }

  void incrNextTargetMsgSeqNum()
  {
    m_store->incrNextTargetMsgSeqNum();
  }

  FIX::UtcTimeStamp* getCreationTime()
  {
    DateTime d = m_store->getCreationTime();
    return new FIX::UtcTimeStamp( d.get_Hour(), d.get_Minute(), d.get_Second(),
                                  d.get_Day(), d.get_Month(), d.get_Year() );
  }

  void reset()
  {
    m_store->reset();
  }

  void refresh()
  {
    m_store->refresh();
  }

private:
  QuickFix::MessageStore* m_store;
};

__delegate bool SetDelegate( int, String* );
__delegate void GetDelegate( int begin, int end, ArrayList* );
__delegate int GetNextSenderMsgSeqNumDelegate();
__delegate int GetNextTargetMsgSeqNumDelegate();
__delegate void SetNextSenderMsgSeqNumDelegate( int num );
__delegate void SetNextTargetMsgSeqNumDelegate( int num );
__delegate void IncrNextSenderMsgSeqNumDelegate();
__delegate void IncrNextTargetMsgSeqNumDelegate();
__delegate FIX::UtcTimeStamp* GetCreationTimeDelegate();
__delegate void ResetDelegate();
__delegate void RefreshDelegate();

class MessageStore : public FIX::MessageStore
{
public:
  MessageStore( QuickFix::MessageStore* store ) 
  : m_store( store )
  {
    MessageStoreCallback* callback = new MessageStoreCallback( m_store );

    m_setDelegate = new SetDelegate(callback, &MessageStoreCallback::set);
    m_getDelegate = new GetDelegate(callback, &MessageStoreCallback::get);
    m_getNextSenderMsgSeqNumDelegate = new GetNextSenderMsgSeqNumDelegate(callback, &MessageStoreCallback::getNextSenderMsgSeqNum);
    m_getNextTargetMsgSeqNumDelegate = new GetNextTargetMsgSeqNumDelegate(callback, &MessageStoreCallback::getNextTargetMsgSeqNum);
    m_setNextSenderMsgSeqNumDelegate = new SetNextSenderMsgSeqNumDelegate(callback, &MessageStoreCallback::setNextSenderMsgSeqNum);
    m_setNextTargetMsgSeqNumDelegate = new SetNextTargetMsgSeqNumDelegate(callback, &MessageStoreCallback::setNextTargetMsgSeqNum);
    m_incrNextSenderMsgSeqNumDelegate = new IncrNextSenderMsgSeqNumDelegate(callback, &MessageStoreCallback::incrNextSenderMsgSeqNum);
    m_incrNextTargetMsgSeqNumDelegate = new IncrNextTargetMsgSeqNumDelegate(callback, &MessageStoreCallback::incrNextTargetMsgSeqNum);
    m_getCreationTimeDelegate = new GetCreationTimeDelegate(callback, &MessageStoreCallback::getCreationTime);
    m_resetDelegate = new ResetDelegate(callback, &MessageStoreCallback::reset);
    m_refreshDelegate = new RefreshDelegate(callback, &MessageStoreCallback::refresh);
  }

  ~MessageStore() 
  { 
    QuickFix::MessageStore* store = ((QuickFix::MessageStore*)m_store);
    IDisposable* disposable = dynamic_cast<IDisposable*>(store);
    if( disposable ) disposable->Dispose();
    m_store = gcroot < QuickFix::MessageStore* >(0); 
  }

  bool set( int num, const std::string& message ) throw ( FIX::IOException& )
  {
    try
    {  return m_setDelegate->Invoke( num, message.c_str() ); }
    catch ( IOException * e )
    { throw convertException( e ); }
  }

  void get( int begin, int end, std::vector < std::string > & messages ) const
  throw ( FIX::IOException& )
  {
    try
    {
      ArrayList * list = new ArrayList();
      m_getDelegate->Invoke( begin, end, list );  
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
    {
      char* umessage = QuickFix::createUnmanagedString( e->Message );
      FIX::IOException ex(umessage);
      QuickFix::destroyUnmanagedString( umessage );
      throw ex;
    }

  }

  int getNextSenderMsgSeqNum() const throw ( FIX::IOException& )
  {
    try
    { return m_getNextSenderMsgSeqNumDelegate->Invoke(); }
    catch ( IOException * e )
    { throw convertException( e ); }
  }

  int getNextTargetMsgSeqNum() const throw ( FIX::IOException& )
  {
    try
    { return m_getNextTargetMsgSeqNumDelegate->Invoke(); }
    catch ( IOException * e )
    { throw convertException( e ); }
  }

  void setNextSenderMsgSeqNum( int num ) throw ( FIX::IOException& )
  {
    try
    { m_setNextSenderMsgSeqNumDelegate->Invoke( num ); }
    catch ( IOException * e )
    { throw convertException( e ); }
  }

  void setNextTargetMsgSeqNum( int num ) throw ( FIX::IOException& )
  {
    try
    { m_setNextTargetMsgSeqNumDelegate->Invoke( num ); }
    catch ( IOException * e )
    { throw convertException( e ); }
  }

  void incrNextSenderMsgSeqNum() throw ( FIX::IOException& )
  {
    try
    { m_incrNextSenderMsgSeqNumDelegate->Invoke(); }
    catch ( IOException * e )
    { throw convertException( e ); }
  }

  void incrNextTargetMsgSeqNum() throw ( FIX::IOException& )
  {
    try
    { m_incrNextTargetMsgSeqNumDelegate->Invoke(); }
    catch ( IOException * e )
    { throw convertException( e ); }
  }

  FIX::UtcTimeStamp getCreationTime() const throw ( FIX::IOException& )
  {
    try
    {
      FIX::UtcTimeStamp* delegateResult = (FIX::UtcTimeStamp*)m_getCreationTimeDelegate->Invoke();
      FIX::UtcTimeStamp result = *delegateResult;
      delete delegateResult;
      return result;
    }
    catch ( IOException * e )
    { throw convertException( e ); }
  }

  void reset() throw ( FIX::IOException& )
  {
    try
    { m_resetDelegate->Invoke(); }
    catch ( IOException * e )
    { throw convertException( e ); }
  }

  void refresh() throw ( FIX::IOException& )
  {
    try
    { m_refreshDelegate->Invoke(); }
    catch ( IOException * e )
    { throw convertException( e ); }
  }

  gcroot < QuickFix::MessageStore* > m_store;

  gcroot< SetDelegate* > m_setDelegate;
  gcroot< GetDelegate* > m_getDelegate;
  gcroot< GetNextSenderMsgSeqNumDelegate* > m_getNextSenderMsgSeqNumDelegate;
  gcroot< GetNextTargetMsgSeqNumDelegate* > m_getNextTargetMsgSeqNumDelegate;
  gcroot< SetNextSenderMsgSeqNumDelegate* > m_setNextSenderMsgSeqNumDelegate;
  gcroot< SetNextTargetMsgSeqNumDelegate* > m_setNextTargetMsgSeqNumDelegate;
  gcroot< IncrNextSenderMsgSeqNumDelegate* > m_incrNextSenderMsgSeqNumDelegate;
  gcroot< IncrNextTargetMsgSeqNumDelegate* > m_incrNextTargetMsgSeqNumDelegate;
  gcroot< GetCreationTimeDelegate* > m_getCreationTimeDelegate;  
  gcroot< ResetDelegate* > m_resetDelegate;
  gcroot< RefreshDelegate* > m_refreshDelegate;
};
