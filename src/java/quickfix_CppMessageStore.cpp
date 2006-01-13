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

#ifdef _MSC_VER
#include "stdafx.h"
#else
#include "config.h"
#endif

#ifdef HAVE_JAVA

#include "JVM.h"
#include "quickfix_CppMessageStore.h"
#include <quickfix/MessageStore.h>
#include <quickfix/CallStack.h>
#include "Conversions.h"
#include "JavaMessageStore.h"

JNIEXPORT jboolean JNICALL Java_quickfix_CppMessageStore_set
( JNIEnv *pEnv, jobject obj, jint seq, jstring message )
{ QF_STACK_TRY

  if( isNullAndThrow(message) ) return false;

  JVM::set( pEnv );
  JVMObject jobject( obj );
  FIX::MessageStoreExceptionWrapper* pWrapper =
    ( FIX::MessageStoreExceptionWrapper* ) jobject.getLong( "cppPointer" );

  bool threw = false;
  FIX::IOException e;

  const char* umessage = pEnv->GetStringUTFChars( message, 0 );
  bool result = pWrapper->set( seq, umessage, threw, e );
  pEnv->ReleaseStringUTFChars( message, umessage );

  if ( threw )
  {
    throwNew( "Ljava/io/IOException;", e.what() );
    return 0;
  }
  return result;

  QF_STACK_CATCH
}

JNIEXPORT void JNICALL Java_quickfix_CppMessageStore_get__IILjava_util_Collection_2
( JNIEnv *pEnv, jobject obj, jint start, jint end, jobject array )
{ QF_STACK_TRY

  if( isNullAndThrow(array) ) return;

  JVM::set( pEnv );
  JVMObject jobject( obj );
  JVMObject jarray( array );

  FIX::MessageStoreExceptionWrapper* pWrapper =
    ( FIX::MessageStoreExceptionWrapper* ) jobject.getLong( "cppPointer" );
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
  {
    jstring jstr = newString( *i );
    pEnv->CallVoidMethod( jarray, methodID, jstr );
    pEnv->DeleteLocalRef( jstr );
  }

  QF_STACK_CATCH
}

JNIEXPORT jint JNICALL Java_quickfix_CppMessageStore_getNextSenderMsgSeqNum
( JNIEnv *pEnv, jobject obj )
{ QF_STACK_TRY

  JVM::set( pEnv );
  JVMObject jobject( obj );
  FIX::MessageStoreExceptionWrapper* pWrapper =
    ( FIX::MessageStoreExceptionWrapper* ) jobject.getLong( "cppPointer" );
  bool threw = false;
  FIX::IOException e;
  jint result = pWrapper->getNextSenderMsgSeqNum( threw, e );
  if ( threw )
  {
    throwNew( "Ljava/io/IOException;", e.what() );
    return 0;
  }
  return result;

  QF_STACK_CATCH
}

JNIEXPORT jint JNICALL Java_quickfix_CppMessageStore_getNextTargetMsgSeqNum
( JNIEnv *pEnv, jobject obj )
{ QF_STACK_TRY

  JVM::set( pEnv );
  JVMObject jobject( obj );
  FIX::MessageStoreExceptionWrapper* pWrapper =
    ( FIX::MessageStoreExceptionWrapper* ) jobject.getLong( "cppPointer" );
  bool threw = false;
  FIX::IOException e;
  jint result = pWrapper->getNextTargetMsgSeqNum( threw, e );
  if ( threw )
  {
    throwNew( "Ljava/io/IOException;", e.what() );
    return 0;
  }
  return result;

  QF_STACK_CATCH
}

JNIEXPORT void JNICALL Java_quickfix_CppMessageStore_setNextSenderMsgSeqNum
( JNIEnv *pEnv, jobject obj, jint seq )
{ QF_STACK_TRY

  JVM::set( pEnv );
  JVMObject jobject( obj );
  FIX::MessageStoreExceptionWrapper* pWrapper =
    ( FIX::MessageStoreExceptionWrapper* ) jobject.getLong( "cppPointer" );
  bool threw = false;
  FIX::IOException e;
  pWrapper->setNextSenderMsgSeqNum( seq, threw, e );
  if ( threw )
  {
    throwNew( "Ljava/io/IOException;", e.what() );
    return ;
  }

  QF_STACK_CATCH
}

JNIEXPORT void JNICALL Java_quickfix_CppMessageStore_setNextTargetMsgSeqNum
( JNIEnv *pEnv, jobject obj, jint seq )
{ QF_STACK_TRY

  JVM::set( pEnv );
  JVMObject jobject( obj );
  FIX::MessageStoreExceptionWrapper* pWrapper =
    ( FIX::MessageStoreExceptionWrapper* ) jobject.getLong( "cppPointer" );
  bool threw = false;
  FIX::IOException e;
  pWrapper->setNextTargetMsgSeqNum( seq, threw, e );
  if ( threw )
  {
    throwNew( "Ljava/io/IOException;", e.what() );
    return ;
  }

  QF_STACK_CATCH
}

JNIEXPORT void JNICALL Java_quickfix_CppMessageStore_incrNextSenderMsgSeqNum
( JNIEnv *pEnv, jobject obj )
{ QF_STACK_TRY

  JVM::set( pEnv );
  JVMObject jobject( obj );
  FIX::MessageStoreExceptionWrapper* pWrapper =
    ( FIX::MessageStoreExceptionWrapper* ) jobject.getLong( "cppPointer" );
  bool threw = false;
  FIX::IOException e;
  pWrapper->incrNextSenderMsgSeqNum( threw, e );
  if ( threw )
  {
    throwNew( "Ljava/io/IOException;", e.what() );
    return ;
  }

  QF_STACK_CATCH
}

JNIEXPORT void JNICALL Java_quickfix_CppMessageStore_incrNextTargetMsgSeqNum
( JNIEnv *pEnv, jobject obj )
{ QF_STACK_TRY

  JVM::set( pEnv );
  JVMObject jobject( obj );
  FIX::MessageStoreExceptionWrapper* pWrapper =
    ( FIX::MessageStoreExceptionWrapper* ) jobject.getLong( "cppPointer" );
  bool threw = false;
  FIX::IOException e;
  pWrapper->incrNextTargetMsgSeqNum( threw, e );
  if ( threw )
  {
    throwNew( "Ljava/io/IOException;", e.what() );
    return ;
  }

  QF_STACK_CATCH
}

JNIEXPORT jobject JNICALL Java_quickfix_CppMessageStore_getCreationTime0
( JNIEnv *pEnv, jobject obj )
{ QF_STACK_TRY

  JVM::set( pEnv );
  JVMObject jobj( obj );
  FIX::MessageStoreExceptionWrapper* pWrapper =
    ( FIX::MessageStoreExceptionWrapper* ) jobj.getLong( "cppPointer" );
  bool threw = false;
  FIX::IOException e;
  jobject result = newDate( pWrapper->getCreationTime( threw, e ) );
  if ( threw )
  {
    throwNew( "Ljava/io/IOException;", e.what() );
    return 0;
  }
  return result;

  QF_STACK_CATCH
}

JNIEXPORT void JNICALL Java_quickfix_CppMessageStore_reset0
( JNIEnv *pEnv, jobject obj )
{ QF_STACK_TRY

  JVM::set( pEnv );
  JVMObject jobject( obj );
  FIX::MessageStoreExceptionWrapper* pWrapper =
    ( FIX::MessageStoreExceptionWrapper* ) jobject.getLong( "cppPointer" );
  bool threw = false;
  FIX::IOException e;
  pWrapper->reset( threw, e );
  if ( threw )
  {
    throwNew( "Ljava/io/IOException;", e.what() );
    return ;
  }

  QF_STACK_CATCH
}

#endif