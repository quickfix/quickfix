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

#ifdef _MSC_VER
#include "stdafx.h"
#else
#include "config.h"
#endif

#include "JavaMessageStore.h"
#include "Conversions.h"
#include <iostream>

JavaMessageStore::JavaMessageStore( JVMObject object )
    : messageStore( object.newGlobalRef() )
{
  setId = object.getClass()
          .getMethodID( "set", "(ILjava/lang/String;)Z" );

  getId = object.getClass()
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
throw ( FIX::IOException )
{
  JNIEnv * pEnv = ENV::get();
  jstring jstr = newString( message );
  Exceptions e;
  bool result = pEnv->CallBooleanMethod( messageStore, setId,
                                         seq, jstr ) != 0;  
  pEnv->DeleteLocalRef( jstr );
  handleException( pEnv, e );
  return result;
}

void JavaMessageStore::get( int start, int end,
                            std::vector < std::string > & messages ) const
throw ( FIX::IOException )
{
  JNIEnv * pEnv = ENV::get();
  JVMObject collection( newCollection() );

  Exceptions e;
  pEnv->CallVoidMethod( messageStore, getId,
                        start, end, ( jobject ) collection );
  handleException( pEnv, e );

  jint size = collection.callIntMethod( "size" );
  jmethodID methodID = collection.getClass()
                       .getMethodID( "get", "(I)Ljava/lang/Object;" );

  for ( jint i = 0; i < size; ++i )
  {
    jstring message = ( jstring ) pEnv->CallObjectMethod( collection, methodID, i );
    const char* umessage = pEnv->GetStringUTFChars( message, 0 );
    messages.push_back( umessage );
    pEnv->ReleaseStringUTFChars( message, umessage );
    pEnv->DeleteLocalRef( message );    
  }
  pEnv->DeleteLocalRef( collection );
}

int JavaMessageStore::getNextSenderMsgSeqNum() const throw ( FIX::IOException )
{
  JNIEnv * pEnv = ENV::get();
  Exceptions e;
  int result = pEnv->CallIntMethod( messageStore, getNextSenderMsgSeqNumId );
  handleException( pEnv, e );
  return result;
}

int JavaMessageStore::getNextTargetMsgSeqNum() const throw ( FIX::IOException )
{
  JNIEnv * pEnv = ENV::get();
  Exceptions e;
  int result = pEnv->CallIntMethod( messageStore, getNextTargetMsgSeqNumId );
  handleException( pEnv, e );
  return result;
}

void JavaMessageStore::setNextSenderMsgSeqNum( int seq ) throw ( FIX::IOException )
{
  JNIEnv * pEnv = ENV::get();
  Exceptions e;
  pEnv->CallVoidMethod( messageStore, setNextSenderMsgSeqNumId, seq );
  handleException( pEnv, e );
}

void JavaMessageStore::setNextTargetMsgSeqNum( int seq ) throw ( FIX::IOException )
{
  JNIEnv * pEnv = ENV::get();
  Exceptions e;
  pEnv->CallVoidMethod( messageStore, setNextTargetMsgSeqNumId, seq );
  handleException( pEnv, e );
}

void JavaMessageStore::incrNextSenderMsgSeqNum() throw ( FIX::IOException )
{
  JNIEnv * pEnv = ENV::get();
  Exceptions e;
  pEnv->CallVoidMethod( messageStore, incrNextSenderMsgSeqNumId );
  handleException( pEnv, e );
}

void JavaMessageStore::incrNextTargetMsgSeqNum() throw ( FIX::IOException )
{
  JNIEnv * pEnv = ENV::get();
  Exceptions e;
  pEnv->CallVoidMethod( messageStore, incrNextTargetMsgSeqNumId );
  handleException( pEnv, e );
}

FIX::UtcTimeStamp JavaMessageStore::getCreationTime() const
throw ( FIX::IOException )
{
  JNIEnv * pEnv = ENV::get();
  Exceptions e;
  JVMObject date( pEnv->CallObjectMethod( messageStore, getCreationTimeId ) );
  handleException( pEnv, e );
  long longTime = date.callLongMethod( "getTime" ) / 1000;
  date.deleteLocalRef();
  return FIX::UtcTimeStamp( longTime );
}

void JavaMessageStore::reset() throw ( FIX::IOException )
{
  JNIEnv * pEnv = ENV::get();
  Exceptions e;
  pEnv->CallVoidMethod( messageStore, resetId );
  handleException( pEnv, e );
}

jobject JavaMessageStore::newCollection() const
{
  JNIEnv * pEnv = ENV::get();
  JVMClass type( "Ljava/util/ArrayList;" );
  jmethodID method = pEnv->GetMethodID( type, "<init>", "()V" );
  jobject result = pEnv->NewObject( type, method );
  return result;
}

void JavaMessageStore::handleException( JNIEnv* env, Exceptions& e ) const
{
  jthrowable exception = env->ExceptionOccurred();
  if ( exception )
  {
    if ( e.ioException.IsInstanceOf( exception ) )
    {
      env->ExceptionClear();
      throw FIX::IOException();
    }
    else
    {
      env->ExceptionDescribe();
      env->ExceptionClear();
      exit(1);
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


