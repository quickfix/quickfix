/* -*- C++ -*- */

/****************************************************************************
** Copyright (c) 2001-2004 quickfixengine.org  All rights reserved.
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

#ifndef JAVA_MESSAGE_STORE
#define JAVA_MESSAGE_STORE

#include <quickfix/MessageStore.h>
#include "JVM.h"

class JavaMessageStore : public FIX::MessageStore
{
public:
  JavaMessageStore( JVMObject object );
  virtual ~JavaMessageStore();

  virtual bool set( int seq, const std::string& message )
  throw ( FIX::IOException );
  virtual void get( int start, int end, std::vector < std::string > & ) const
  throw ( FIX::IOException );
  virtual int getNextSenderMsgSeqNum() const throw ( FIX::IOException );
  virtual int getNextTargetMsgSeqNum() const throw ( FIX::IOException );
  virtual void setNextSenderMsgSeqNum( int seq ) throw ( FIX::IOException );
  virtual void setNextTargetMsgSeqNum( int seq ) throw ( FIX::IOException );
  virtual void incrNextSenderMsgSeqNum() throw ( FIX::IOException );
  virtual void incrNextTargetMsgSeqNum() throw ( FIX::IOException );
  virtual FIX::UtcTimeStamp getCreationTime() const throw ( FIX::IOException );
  virtual void reset() throw ( FIX::IOException );

private:
  struct Exceptions
  {
    Exceptions() : ioException("Ljava/io/IOException;") {}
    JVMClass ioException;
  };
  void handleException( JNIEnv*, Exceptions& e ) const;

  mutable JVMObject messageStore;

  jmethodID setId;
  jmethodID getId;
  jmethodID getNextSenderMsgSeqNumId;
  jmethodID getNextTargetMsgSeqNumId;
  jmethodID setNextSenderMsgSeqNumId;
  jmethodID setNextTargetMsgSeqNumId;
  jmethodID incrNextSenderMsgSeqNumId;
  jmethodID incrNextTargetMsgSeqNumId;
  jmethodID getCreationTimeId;
  jmethodID resetId;  
};

void JNICALL JavaMessageStore_create
( JNIEnv *, jobject, FIX::MessageStore* );
void JNICALL JavaMessageStore_destroy
( JNIEnv *, jobject );

#endif
