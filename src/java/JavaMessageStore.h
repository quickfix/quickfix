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
  throw ( FIX::IOException& );
  virtual bool get( int seq, std::string& message ) const
  throw ( FIX::IOException& );
  virtual void get( int start, int end, std::vector < std::string > & ) const
  throw ( FIX::IOException& );
  virtual int getNextSenderMsgSeqNum() const throw ( FIX::IOException& );
  virtual int getNextTargetMsgSeqNum() const throw ( FIX::IOException& );
  virtual void setNextSenderMsgSeqNum( int seq ) throw ( FIX::IOException& );
  virtual void setNextTargetMsgSeqNum( int seq ) throw ( FIX::IOException& );
  virtual void incrNextSenderMsgSeqNum() throw ( FIX::IOException& );
  virtual void incrNextTargetMsgSeqNum() throw ( FIX::IOException& );
  virtual FIX::UtcTimeStamp getCreationTime() const throw ( FIX::IOException& );
  virtual void reset() throw ( FIX::IOException& );

private:
  struct Exceptions
  {
    Exceptions() : ioException("Ljava/io/IOException;") {}
    JVMClass ioException;
  };
  void handleException( JNIEnv*, Exceptions& e ) const;

  jobject newCollection() const;

  mutable JVMObject messageStore;

  jmethodID setId;
  jmethodID getId;
  jmethodID getRangeId;
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
jboolean JNICALL JavaMessageStore_set0
( JNIEnv *, jobject, jint, jstring );
jboolean JNICALL JavaMessageStore_get0__ILjava_lang_String_2
( JNIEnv *, jobject, jint, jstring );
void JNICALL JavaMessageStore_get0__IILjava_util_Collection_2
( JNIEnv *, jobject, jint, jint, jobject );
jint JNICALL JavaMessageStore_getNextSenderMsgSeqNum0
( JNIEnv *, jobject );
jint JNICALL JavaMessageStore_getNextTargetMsgSeqNum0
( JNIEnv *, jobject );
void JNICALL JavaMessageStore_setNextSenderMsgSeqNum0
( JNIEnv *, jobject, jint );
void JNICALL JavaMessageStore_setNextTargetMsgSeqNum0
( JNIEnv *, jobject, jint );
void JNICALL JavaMessageStore_incrNextSenderMsgSeqNum0
( JNIEnv *, jobject );
void JNICALL JavaMessageStore_incrNextTargetMsgSeqNum0
( JNIEnv *, jobject );
jobject JNICALL JavaMessageStore_getCreationTime0
( JNIEnv *, jobject );
void JNICALL JavaMessageStore_reset0
( JNIEnv *, jobject );

#endif
