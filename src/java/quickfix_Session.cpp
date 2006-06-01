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

#ifdef _MSC_VER
#include "stdafx.h"
#else
#include "config.h"
#endif

#ifdef _MSC_VER
#pragma warning( disable : 4786 )
#endif

#ifdef HAVE_JAVA

#include "JVM.h"
#include "quickfix_Session.h"
#include <quickfix/Session.h>
#include <quickfix/CallStack.h>
#include "Conversions.h"
#include "JavaMessageStore.h"
#include <iostream>

JNIEXPORT jboolean JNICALL Java_quickfix_Session_sendToTarget__Lquickfix_Message_2
( JNIEnv *pEnv, jclass cls, jobject msg )
{ QF_STACK_TRY

  if( isNullAndThrow(msg) ) return false;

  JVM::set( pEnv );
  JVMObject jmessage( msg );
  FIX::Message* pMessage = ( FIX::Message* ) jmessage.getLong( "cppPointer" );

  FIX::BeginString beginString;
  FIX::SenderCompID senderCompID;
  FIX::TargetCompID targetCompID;

  try
  {
    return FIX::Session::sendToTarget( *pMessage );
  }
  catch( FIX::SessionNotFound& e )
  {
    throwNew( "Lquickfix/SessionNotFound;", e.what() );
    return false;
  }

  QF_STACK_CATCH
}

JNIEXPORT jboolean JNICALL Java_quickfix_Session_sendToTarget__Lquickfix_Message_2Ljava_lang_String_2
( JNIEnv *pEnv, jclass cls, jobject msg, jstring qualifier )
{ QF_STACK_TRY

  if( isNullAndThrow(msg) ) return false;

  JVM::set( pEnv );
  JVMObject jmessage( msg );
  FIX::Message* pMessage = ( FIX::Message* ) jmessage.getLong( "cppPointer" );

  FIX::BeginString beginString;
  FIX::SenderCompID senderCompID;
  FIX::TargetCompID targetCompID;

  try
  {
    if( isNull(qualifier) )
    {
      return FIX::Session::sendToTarget( *pMessage );
    }
    else
    {
      const char* uqualifier = pEnv->GetStringUTFChars( qualifier, 0 );
      return FIX::Session::sendToTarget( *pMessage, uqualifier );
      pEnv->ReleaseStringUTFChars( qualifier, uqualifier );
    }
  }
  catch( FIX::SessionNotFound& e )
  {
    throwNew( "Lquickfix/SessionNotFound;", e.what() );
    return false;
  }

  QF_STACK_CATCH
}

JNIEXPORT jboolean JNICALL Java_quickfix_Session_sendToTarget__Lquickfix_Message_2Lquickfix_SessionID_2
( JNIEnv *pEnv, jclass cls, jobject msg, jobject sID )
{ QF_STACK_TRY

  if( isNullAndThrow(msg) ) return false;
  if( isNullAndThrow(sID) ) return false;

  JVM::set( pEnv );
  JVMObject jmessage( msg );
  JVMObject jsessionid( sID );

  FIX::Message* pMessage = ( FIX::Message* ) jmessage.getLong( "cppPointer" );
  FIX::SessionID* pSessionID = ( FIX::SessionID* ) jsessionid.getLong( "cppPointer" );

  try
  {
    return FIX::Session::sendToTarget( *pMessage, *pSessionID );
  }
  catch( FIX::SessionNotFound& e )
  {
    throwNew( "Lquickfix/SessionNotFound;", e.what() );
    return false;
  }

  QF_STACK_CATCH
}

JNIEXPORT jboolean JNICALL Java_quickfix_Session_sendToTarget__Lquickfix_Message_2Ljava_lang_String_2Ljava_lang_String_2
( JNIEnv *pEnv, jclass cls, jobject msg, jstring sender, jstring target )
{ QF_STACK_TRY

  if( isNullAndThrow(msg) ) return false;
  if( isNullAndThrow(sender) ) return false;
  if( isNullAndThrow(target) ) return false;

  JVM::set( pEnv );
  JVMObject jmessage( msg );
  FIX::Message* pMessage = ( FIX::Message* ) jmessage.getLong( "cppPointer" );

  const char* usender = pEnv->GetStringUTFChars( sender, 0 );
  std::string senderCompID( usender );
  pEnv->ReleaseStringUTFChars( sender, usender );

  const char* utarget = pEnv->GetStringUTFChars( target, 0 );
  std::string targetCompID( utarget );
  pEnv->ReleaseStringUTFChars( target, utarget );

  try
  {
    return FIX::Session::sendToTarget( *pMessage,
                                       FIX::SenderCompID( senderCompID ),
                                       FIX::TargetCompID( targetCompID ) );
  }
  catch( FIX::SessionNotFound& e )
  {
    throwNew( "Lquickfix/SessionNotFound;", e.what() );
    return false;
  }

  QF_STACK_CATCH
}

JNIEXPORT jboolean JNICALL Java_quickfix_Session_sendToTarget__Lquickfix_Message_2Ljava_lang_String_2Ljava_lang_String_2Ljava_lang_String_2
( JNIEnv *pEnv, jclass cls, jobject msg, jstring sender, jstring target, jstring qualifier )
{ QF_STACK_TRY

  if( isNullAndThrow(msg) ) return false;
  if( isNullAndThrow(sender) ) return false;
  if( isNullAndThrow(target) ) return false;

  JVM::set( pEnv );
  JVMObject jmessage( msg );
  FIX::Message* pMessage = ( FIX::Message* ) jmessage.getLong( "cppPointer" );

  const char* usender = pEnv->GetStringUTFChars( sender, 0 );
  std::string senderCompID( usender );
  pEnv->ReleaseStringUTFChars( sender, usender );

  const char* utarget = pEnv->GetStringUTFChars( target, 0 );
  std::string targetCompID( utarget );
  pEnv->ReleaseStringUTFChars( target, utarget );

  try
  {
    if( isNull(qualifier) )
    {
      return FIX::Session::sendToTarget( *pMessage,
	                                  FIX::SenderCompID( senderCompID ),
		                          FIX::TargetCompID( targetCompID ) );
    }
    else
    {
      const char* uqualifier = pEnv->GetStringUTFChars( qualifier, 0 );
      return FIX::Session::sendToTarget( *pMessage,
	                                  FIX::SenderCompID( senderCompID ),
					  FIX::TargetCompID( targetCompID ),
                                          uqualifier );
      pEnv->ReleaseStringUTFChars( qualifier, uqualifier );
    }
  }
  catch( FIX::SessionNotFound& e )
  {
    throwNew( "Lquickfix/SessionNotFound;", e.what() );
    return false;
  }

  QF_STACK_CATCH
}

JNIEXPORT jboolean JNICALL Java_quickfix_Session_doesSessionExist
(JNIEnv *pEnv, jclass cls, jobject sID)
{ QF_STACK_TRY

  if( isNullAndThrow(sID) ) return false;

  JVM::set( pEnv );
  JVMObject jsessionid( sID );

  FIX::SessionID* pSessionID = ( FIX::SessionID* ) jsessionid.getLong( "cppPointer" );
  return FIX::Session::doesSessionExist( *pSessionID );

  QF_STACK_CATCH
}

JNIEXPORT jobject JNICALL Java_quickfix_Session_lookupSession
(JNIEnv *pEnv, jclass cls, jobject sID)
{ QF_STACK_TRY

  if( isNullAndThrow(sID) ) return 0;

  JVM::set( pEnv );
  JVMObject jsessionid( sID );

  FIX::SessionID* pSessionID = ( FIX::SessionID* ) jsessionid.getLong( "cppPointer" );
  FIX::Session* pSession = FIX::Session::lookupSession( *pSessionID );
  if( !pSession ) return 0;
  JVMClass type( "Lquickfix/Session;" );
  jmethodID method = pEnv->GetMethodID( type, "<init>", "(J)V" );
  jobject result = pEnv->NewObject( type, method, ( jlong ) pSession );
  return result;

  QF_STACK_CATCH
}

JNIEXPORT void JNICALL Java_quickfix_Session_logon
(JNIEnv* pEnv, jobject obj)
{ QF_STACK_TRY

  JVM::set( pEnv );
  JVMObject jobject( obj );
  FIX::Session* pSession = ( FIX::Session* ) jobject.getLong( "cppPointer" );
  pSession->logon();

  QF_STACK_CATCH
}

JNIEXPORT void JNICALL Java_quickfix_Session_logout
(JNIEnv *pEnv, jobject obj)
{ QF_STACK_TRY

  JVM::set( pEnv );
  JVMObject jobject( obj );
  FIX::Session* pSession = ( FIX::Session* ) jobject.getLong( "cppPointer" );
  pSession->logout();

  QF_STACK_CATCH
}

JNIEXPORT void JNICALL Java_quickfix_Session_logout__Ljava_lang_String_2
( JNIEnv *pEnv, jobject obj, jstring reason )
{ QF_STACK_TRY

  JVM::set( pEnv );
  JVMObject jobject( obj );
  FIX::Session* pSession = ( FIX::Session* ) jobject.getLong( "cppPointer" );

  const char* ureason = pEnv->GetStringUTFChars( reason, 0 );
  std::string reasonString( ureason );
  pEnv->ReleaseStringUTFChars( reason, ureason );

  pSession->logout( reasonString );

  QF_STACK_CATCH
}

JNIEXPORT jboolean JNICALL Java_quickfix_Session_isEnabled
(JNIEnv *pEnv, jobject obj)
{ QF_STACK_TRY

  JVM::set( pEnv );
  JVMObject jobject( obj );
  FIX::Session* pSession = ( FIX::Session* ) jobject.getLong( "cppPointer" );
  return pSession->isEnabled();

  QF_STACK_CATCH
}

JNIEXPORT jboolean JNICALL Java_quickfix_Session_sentLogon
(JNIEnv *pEnv, jobject obj)
{ QF_STACK_TRY

  JVM::set( pEnv );
  JVMObject jobject( obj );
  FIX::Session* pSession = ( FIX::Session* ) jobject.getLong( "cppPointer" );
  return pSession->sentLogon();

  QF_STACK_CATCH
}


JNIEXPORT jboolean JNICALL Java_quickfix_Session_sentLogout
(JNIEnv *pEnv, jobject obj)
{ QF_STACK_TRY

  JVM::set( pEnv );
  JVMObject jobject( obj );
  FIX::Session* pSession = ( FIX::Session* ) jobject.getLong( "cppPointer" );
  return pSession->sentLogout();

  QF_STACK_CATCH
}


JNIEXPORT jboolean JNICALL Java_quickfix_Session_receivedLogon
(JNIEnv *pEnv, jobject obj)
{ QF_STACK_TRY

  JVM::set( pEnv );
  JVMObject jobject( obj );
  FIX::Session* pSession = ( FIX::Session* ) jobject.getLong( "cppPointer" );
  return pSession->receivedLogon();

  QF_STACK_CATCH
}


JNIEXPORT jboolean JNICALL Java_quickfix_Session_isLoggedOn
(JNIEnv *pEnv, jobject obj)
{ QF_STACK_TRY

  JVM::set( pEnv );
  JVMObject jobject( obj );
  FIX::Session* pSession = ( FIX::Session* ) jobject.getLong( "cppPointer" );
  return pSession->isLoggedOn();

  QF_STACK_CATCH
}


JNIEXPORT void JNICALL Java_quickfix_Session_reset
(JNIEnv *pEnv, jobject obj)
{ QF_STACK_TRY

  JVM::set( pEnv );
  JVMObject jobject( obj );

  FIX::Session* pSession = ( FIX::Session* ) jobject.getLong( "cppPointer" );
  try
  {
    pSession->reset();
  }
  catch( FIX::IOException& )
  {
    throwNew( "Ljava/io/IOException;", "" );
  }

  QF_STACK_CATCH
}

JNIEXPORT void JNICALL Java_quickfix_Session_setNextSenderMsgSeqNum
(JNIEnv *pEnv, jobject obj, jint num)
{ QF_STACK_TRY

  JVM::set( pEnv );
  JVMObject jobject( obj );

  FIX::Session* pSession = ( FIX::Session* ) jobject.getLong( "cppPointer" );
  try
  {
    pSession->setNextSenderMsgSeqNum( num );
  }
  catch( FIX::IOException& )
  {
    throwNew( "Ljava/io/IOException;", "" );
  }

  QF_STACK_CATCH
}

JNIEXPORT jobject JNICALL Java_quickfix_Session_getSessionID
(JNIEnv *pEnv, jobject obj)
{ QF_STACK_TRY

  JVM::set( pEnv );
  JVMObject jobject( obj );

  FIX::Session* pSession = ( FIX::Session* ) jobject.getLong( "cppPointer" );
  return newSessionID( pSession->getSessionID() );

  QF_STACK_CATCH
}

JNIEXPORT void JNICALL Java_quickfix_Session_setDataDictionary
(JNIEnv *pEnv, jobject obj, jobject dataDictionary)
{ QF_STACK_TRY

  JVM::set( pEnv );
  JVMObject jobject( obj );
  JVMObject jdataDictionary( dataDictionary );

  FIX::Session* pSession = ( FIX::Session* ) jobject.getLong( "cppPointer" );
  FIX::DataDictionary* pDataDictionary = ( FIX::DataDictionary* ) jdataDictionary.getLong( "cppPointer" );
  pSession->setDataDictionary( *pDataDictionary );

  QF_STACK_CATCH
}

JNIEXPORT jobject JNICALL Java_quickfix_Session_getDataDictionary
(JNIEnv *pEnv, jobject obj)
{ QF_STACK_TRY

  JVM::set( pEnv );
  JVMObject jobject( obj );

  FIX::Session* pSession = ( FIX::Session* ) jobject.getLong( "cppPointer" );
  return newDataDictionary( pSession->getDataDictionary() );

  QF_STACK_CATCH
}

JNIEXPORT jint JNICALL Java_quickfix_Session_numSessions
(JNIEnv *pEnv, jclass cls)
{ QF_STACK_TRY

  JVM::set( pEnv );

  return FIX::Session::numSessions();

  QF_STACK_CATCH
}

JNIEXPORT jboolean JNICALL Java_quickfix_Session_isSessionTime
(JNIEnv *pEnv, jobject obj)
{ QF_STACK_TRY

  JVM::set( pEnv );
  JVMObject jobject( obj );

  FIX::Session* pSession = ( FIX::Session* ) jobject.getLong( "cppPointer" );
  return pSession->isSessionTime();

  QF_STACK_CATCH
}

JNIEXPORT void JNICALL Java_quickfix_Session_setNextTargetMsgSeqNum
(JNIEnv *pEnv, jobject obj, jint num)
{ QF_STACK_TRY

  JVM::set( pEnv );
  JVMObject jobject( obj );

  FIX::Session* pSession = ( FIX::Session* ) jobject.getLong( "cppPointer" );
  try
  {
    pSession->setNextTargetMsgSeqNum( num );
  }
  catch( FIX::IOException& )
  {
    throwNew( "Ljava/io/IOException;", "" );
  }

  QF_STACK_CATCH
}

JNIEXPORT jint JNICALL Java_quickfix_Session_getExpectedSenderNum
(JNIEnv *pEnv, jobject obj)
{ QF_STACK_TRY

  JVM::set( pEnv );
  JVMObject jobject( obj );
  FIX::Session* pSession = ( FIX::Session* ) jobject.getLong( "cppPointer" );
  return pSession->getExpectedSenderNum();

  QF_STACK_CATCH
}

JNIEXPORT jint JNICALL Java_quickfix_Session_getExpectedTargetNum
(JNIEnv *pEnv, jobject obj)
{ QF_STACK_TRY

  JVM::set( pEnv );
  JVMObject jobject( obj );
  FIX::Session* pSession = ( FIX::Session* ) jobject.getLong( "cppPointer" );
  return pSession->getExpectedTargetNum();

  QF_STACK_CATCH
}

JNIEXPORT jobject JNICALL Java_quickfix_Session_getLog
(JNIEnv *pEnv, jobject obj)
{ QF_STACK_TRY

  JVM::set( pEnv );
  JVMObject jobject( obj );
  FIX::Session* pSession = ( FIX::Session* ) jobject.getLong( "cppPointer" );
  JVMClass type( "Lquickfix/CppLog;" );
  jmethodID method = pEnv->GetMethodID( type, "<init>", "(J)V" );
  JVMObject result = pEnv->NewObject( type, method, ( jlong ) pSession->getLog() );
  return result;

  QF_STACK_CATCH
}

JNIEXPORT jobject JNICALL Java_quickfix_Session_getStore
(JNIEnv *pEnv, jobject obj)
{ QF_STACK_TRY

  JVM::set( pEnv );
  JVMObject jobject( obj );
  FIX::Session* pSession = ( FIX::Session* ) jobject.getLong( "cppPointer" );
  JVMClass type( "Lquickfix/CppMessageStore;" );
  jmethodID method = pEnv->GetMethodID( type, "<init>", "()V" );
  JVMObject result = pEnv->NewObject( type, method );
  JavaMessageStore_create( pEnv, result, const_cast<FIX::MessageStore*>(pSession->getStore()) );
  return result;

  QF_STACK_CATCH
}

#endif
