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

#ifdef _MSC_VER
#include "stdafx.h"
#else
#include "config.h"
#endif

#include "JavaMessageStore.h"
#include "Conversions.h"
#include <iostream>

JavaMessageStore::JavaMessageStore( JVMObject object )
    : messageStore( object.newGlobalRef() ),
    ioExceptionID( "Ljava/io/IOException;" )
{
  setId = object.getClass()
          .getMethodID( "set", "(ILjava/lang/String;)Z" );

  getId = object.getClass()
          .getMethodID( "get", "(ILjava/lang/String;)Z" );

  getRangeId = object.getClass()
               .getMethodID( "get", "(IILjava/util/Collection;)V" );

  getNextSenderMsgSeqNumId = object.getClass()
                             .getMethodID( "getNextSenderMsgSeqNum", "()I" );

  getNextTargetMsgSeqNumId = object.getClass()
                             .getMethodID( "getNextTargetMsgSeqNum", "()I" );

  setNextSenderMsgSeqNumId = object.getClass()
                             .getMethodID( "setNextSenderMsgSeqNum", "(I)V" );

  setNextTargetMsgSeqNumId = object.getClass()
                             .getMethodID( "setNextTargetMsgSeqNum", "(I)V" );

  incrNextSenderMsgSeqNumId = object.getClass()
                              .getMethodID( "incrNextSenderMsgSeqNum", "()V" );

  incrNextTargetMsgSeqNumId = object.getClass()
                              .getMethodID( "incrNextTargetMsgSeqNum", "()V" );

  getCreationTimeId = object.getClass()
                      .getMethodID( "getCreationTime", "()Ljava/util/Date;" );

  resetId = object.getClass()
            .getMethodID( "reset", "()V" );
}

JavaMessageStore::~JavaMessageStore() { messageStore.deleteGlobalRef(); }

bool JavaMessageStore::set( int seq, const std::string& message )
throw ( FIX::IOException& )
{
  JNIEnv * pEnv = ENV::get();
  setupExceptions();
  bool result = pEnv->CallBooleanMethod( messageStore, setId,
                                         seq, newString( message ) ) != 0;
  handleException( pEnv );
  return result;
}

bool JavaMessageStore::get( int seq, std::string& message ) const
throw ( FIX::IOException& )
{
  JNIEnv * pEnv = ENV::get();
  setupExceptions();
  jstring string = newString( "" );
  bool result = pEnv->CallBooleanMethod( messageStore, getId,
                                         seq, string ) != 0;

  message = pEnv->GetStringUTFChars( string, 0 );
  handleException( pEnv );
  return result;
}

void JavaMessageStore::get( int start, int end,
                            std::vector < std::string > & messages ) const
throw ( FIX::IOException& )
{
  JNIEnv * pEnv = ENV::get();
  JVMObject collection( createCollection() );

  setupExceptions();
  pEnv->CallVoidMethod( messageStore, getRangeId,
                        start, end, ( jobject ) collection );
  handleException( pEnv );

  jint size = collection.callIntMethod( "size" );
  jmethodID methodID = collection.getClass()
                       .getMethodID( "get", "(I)Ljava/lang/Object;" );

  for ( jint i = 0; i < size; ++i )
  {
    jstring message = ( jstring ) pEnv->CallObjectMethod( collection, methodID, i );
    messages.push_back( pEnv->GetStringUTFChars( message, 0 ) );
  }
}

int JavaMessageStore::getNextSenderMsgSeqNum() const throw ( FIX::IOException& )
{
  JNIEnv * pEnv = ENV::get();
  setupExceptions();
  int result = pEnv->CallIntMethod( messageStore, getNextSenderMsgSeqNumId );
  handleException( pEnv );
  return result;
}

int JavaMessageStore::getNextTargetMsgSeqNum() const throw ( FIX::IOException& )
{
  JNIEnv * pEnv = ENV::get();
  setupExceptions();
  int result = pEnv->CallIntMethod( messageStore, getNextTargetMsgSeqNumId );
  handleException( pEnv );
  return result;
}

void JavaMessageStore::setNextSenderMsgSeqNum( int seq ) throw ( FIX::IOException& )
{
  JNIEnv * pEnv = ENV::get();
  setupExceptions();
  pEnv->CallVoidMethod( messageStore, setNextSenderMsgSeqNumId, seq );
  handleException( pEnv );
}

void JavaMessageStore::setNextTargetMsgSeqNum( int seq ) throw ( FIX::IOException& )
{
  JNIEnv * pEnv = ENV::get();
  setupExceptions();
  pEnv->CallVoidMethod( messageStore, setNextTargetMsgSeqNumId, seq );
  handleException( pEnv );
}

void JavaMessageStore::incrNextSenderMsgSeqNum() throw ( FIX::IOException& )
{
  JNIEnv * pEnv = ENV::get();
  setupExceptions();
  pEnv->CallVoidMethod( messageStore, incrNextSenderMsgSeqNumId );
  handleException( pEnv );
}

void JavaMessageStore::incrNextTargetMsgSeqNum() throw ( FIX::IOException& )
{
  JNIEnv * pEnv = ENV::get();
  setupExceptions();
  pEnv->CallVoidMethod( messageStore, incrNextTargetMsgSeqNumId );
  handleException( pEnv );
}

FIX::UtcTimeStamp JavaMessageStore::getCreationTime() const
throw ( FIX::IOException& )
{
  JNIEnv * pEnv = ENV::get();
  setupExceptions();
  JVMObject date( pEnv->CallObjectMethod( messageStore, getCreationTimeId ) );
  handleException( pEnv );
  return FIX::UtcTimeStamp( date.callLongMethod( "getTime" ) / 1000 );
}

void JavaMessageStore::reset() throw ( FIX::IOException& )
{
  JNIEnv * pEnv = ENV::get();
  setupExceptions();
  pEnv->CallVoidMethod( messageStore, resetId );
  handleException( pEnv );
}

jobject JavaMessageStore::messageToJavaMessage( const FIX::Message& message )
{
  JNIEnv * pEnv = ENV::get();
  JVMClass type( "Lorg/quickfix/Message;" );
  jmethodID method = pEnv->GetMethodID( type, "<init>", "()V" );
  jobject result = pEnv->NewObject( type, method );
  return result;
}

jobject JavaMessageStore::createJavaMessage() const
{
  JNIEnv * pEnv = ENV::get();
  JVMClass type( "Lorg/quickfix/Message;" );
  jmethodID method = pEnv->GetMethodID( type, "<init>", "()V" );
  jobject result = pEnv->NewObject( type, method );
  return result;
}

jobject JavaMessageStore::createCollection() const
{
  JNIEnv * pEnv = ENV::get();
  JVMClass type( "Ljava/util/ArrayList;" );
  jmethodID method = pEnv->GetMethodID( type, "<init>", "()V" );
  jobject result = pEnv->NewObject( type, method );
  return result;
}

void JavaMessageStore::setupExceptions() const
{
  ioExceptionID = JVMClass( "Ljava/io/IOException;" );
}

void JavaMessageStore::handleException( JNIEnv* env ) const
{
  jthrowable exception = env->ExceptionOccurred();
  if ( exception )
  {
    if ( ioExceptionID.IsInstanceOf( exception ) )
    {
      env->ExceptionClear();
      throw FIX::IOException();
    }
    else
    {
      env->ExceptionDescribe();
      env->ExceptionClear();
    }
  }
}

void JNICALL JavaMessageStore_create
( JNIEnv *pEnv, jobject obj, FIX::MessageStore* pStore )
{
  JVM::set( pEnv );
  JVMObject jobject( obj );
  FIX::MessageStoreExceptionWrapper* pWrapper =
    new FIX::MessageStoreExceptionWrapper( pStore );
  jobject.setInt( "cppPointer", ( int ) pWrapper );
}

void JNICALL JavaMessageStore_destroy
( JNIEnv *pEnv, jobject obj )
{
  JVM::set( pEnv );
  JVMObject jobject( obj );
  FIX::MessageStoreExceptionWrapper* pWrapper =
    ( FIX::MessageStoreExceptionWrapper* ) jobject.getInt( "cppPointer" );
  delete pWrapper;
}

jboolean JNICALL JavaMessageStore_set0
( JNIEnv *pEnv, jobject obj, jint seq, jstring message )
{
  JVM::set( pEnv );
  JVMObject jobject( obj );
  FIX::MessageStoreExceptionWrapper* pWrapper =
    ( FIX::MessageStoreExceptionWrapper* ) jobject.getInt( "cppPointer" );

  bool threw = false;
  FIX::IOException e;
  bool result = pWrapper->set( seq, pEnv->GetStringUTFChars( message, 0 ), threw, e );

  if ( threw )
  {
    throwNew( "Ljava/io/IOException;", e.what() );
    return 0;
  }
  return result;

}

jboolean JNICALL JavaMessageStore_get0__ILjava_lang_String_2
( JNIEnv *pEnv, jobject obj, jint seq, jstring message )
{
  JVM::set( pEnv );
  JVMObject jobject( obj );
  FIX::MessageStoreExceptionWrapper* pWrapper =
    ( FIX::MessageStoreExceptionWrapper* ) jobject.getInt( "cppPointer" );

  std::string msg;
  bool threw = false;
  FIX::IOException e;
  bool result = pWrapper->get( seq, msg, threw, e );
  if ( threw )
  {
    throwNew( "Ljava/io/IOException;", e.what() );
    return 0;
  }

  if ( result ) message = newString( msg );
  return result;
}

void JNICALL JavaMessageStore_get0__IILjava_util_Collection_2
( JNIEnv *pEnv, jobject obj, jint start, jint end, jobject array )
{
  JVM::set( pEnv );
  JVMObject jobject( obj );
  JVMObject jarray( array );

  FIX::MessageStoreExceptionWrapper* pWrapper =
    ( FIX::MessageStoreExceptionWrapper* ) jobject.getInt( "cppPointer" );
  std::vector < std::string > messages;
  bool threw = false;
  FIX::IOException e;
  pWrapper->get( start, end, messages, threw, e );
  if ( threw )
  {
    throwNew( "Ljava/io/IOException;", e.what() );
    return ;
  }

  jmethodID methodID = jarray.getClass().getMethodID( "add", "(Ljava/lang/Object;)Z" );
  std::vector < std::string > ::iterator i;
  for ( i = messages.begin(); i != messages.end(); ++i )
    pEnv->CallVoidMethod( jarray, methodID, newString( *i ) );
}

jint JNICALL JavaMessageStore_getNextSenderMsgSeqNum0
( JNIEnv *pEnv, jobject obj )
{
  JVM::set( pEnv );
  JVMObject jobject( obj );
  FIX::MessageStoreExceptionWrapper* pWrapper =
    ( FIX::MessageStoreExceptionWrapper* ) jobject.getInt( "cppPointer" );
  bool threw = false;
  FIX::IOException e;
  jint result = pWrapper->getNextSenderMsgSeqNum( threw, e );
  if ( threw )
  {
    throwNew( "Ljava/io/IOException;", e.what() );
    return 0;
  }
  return result;
}

jint JNICALL JavaMessageStore_getNextTargetMsgSeqNum0
( JNIEnv *pEnv, jobject obj )
{
  JVM::set( pEnv );
  JVMObject jobject( obj );
  FIX::MessageStoreExceptionWrapper* pWrapper =
    ( FIX::MessageStoreExceptionWrapper* ) jobject.getInt( "cppPointer" );
  bool threw = false;
  FIX::IOException e;
  jint result = pWrapper->getNextTargetMsgSeqNum( threw, e );
  if ( threw )
  {
    throwNew( "Ljava/io/IOException;", e.what() );
    return 0;
  }
  return result;
}

void JNICALL JavaMessageStore_setNextSenderMsgSeqNum0
( JNIEnv *pEnv, jobject obj, jint seq )
{
  JVM::set( pEnv );
  JVMObject jobject( obj );
  FIX::MessageStoreExceptionWrapper* pWrapper =
    ( FIX::MessageStoreExceptionWrapper* ) jobject.getInt( "cppPointer" );
  bool threw = false;
  FIX::IOException e;
  pWrapper->setNextSenderMsgSeqNum( seq, threw, e );
  if ( threw )
  {
    throwNew( "Ljava/io/IOException;", e.what() );
    return ;
  }
}

void JNICALL JavaMessageStore_setNextTargetMsgSeqNum0
( JNIEnv *pEnv, jobject obj, jint seq )
{
  JVM::set( pEnv );
  JVMObject jobject( obj );
  FIX::MessageStoreExceptionWrapper* pWrapper =
    ( FIX::MessageStoreExceptionWrapper* ) jobject.getInt( "cppPointer" );
  bool threw = false;
  FIX::IOException e;
  pWrapper->setNextTargetMsgSeqNum( seq, threw, e );
  if ( threw )
  {
    throwNew( "Ljava/io/IOException;", e.what() );
    return ;
  }
}

void JNICALL JavaMessageStore_incrNextSenderMsgSeqNum0
( JNIEnv *pEnv, jobject obj )
{
  JVM::set( pEnv );
  JVMObject jobject( obj );
  FIX::MessageStoreExceptionWrapper* pWrapper =
    ( FIX::MessageStoreExceptionWrapper* ) jobject.getInt( "cppPointer" );
  bool threw = false;
  FIX::IOException e;
  pWrapper->incrNextSenderMsgSeqNum( threw, e );
  if ( threw )
  {
    throwNew( "Ljava/io/IOException;", e.what() );
    return ;
  }
}

void JNICALL JavaMessageStore_incrNextTargetMsgSeqNum0
( JNIEnv *pEnv, jobject obj )
{
  JVM::set( pEnv );
  JVMObject jobject( obj );
  FIX::MessageStoreExceptionWrapper* pWrapper =
    ( FIX::MessageStoreExceptionWrapper* ) jobject.getInt( "cppPointer" );
  bool threw = false;
  FIX::IOException e;
  pWrapper->incrNextTargetMsgSeqNum( threw, e );
  if ( threw )
  {
    throwNew( "Ljava/io/IOException;", e.what() );
    return ;
  }
}

jobject JNICALL JavaMessageStore_getCreationTime0
( JNIEnv *pEnv, jobject obj )
{
  JVM::set( pEnv );
  JVMObject jobj( obj );
  FIX::MessageStoreExceptionWrapper* pWrapper =
    ( FIX::MessageStoreExceptionWrapper* ) jobj.getInt( "cppPointer" );
  bool threw = false;
  FIX::IOException e;
  jobject result = newDate( pWrapper->getCreationTime( threw, e ) );
  if ( threw )
  {
    throwNew( "Ljava/io/IOException;", e.what() );
    return 0;
  }
  return result;
}

void JNICALL JavaMessageStore_reset0
( JNIEnv *pEnv, jobject obj )
{
  JVM::set( pEnv );
  JVMObject jobject( obj );
  FIX::MessageStoreExceptionWrapper* pWrapper =
    ( FIX::MessageStoreExceptionWrapper* ) jobject.getInt( "cppPointer" );
  bool threw = false;
  FIX::IOException e;
  pWrapper->reset( threw, e );
  if ( threw )
  {
    throwNew( "Ljava/io/IOException;", e.what() );
    return ;
  }
}

