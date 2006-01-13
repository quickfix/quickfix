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
#include "Conversions.h"
#include "quickfix_SessionID.h"
#include <quickfix/SessionID.h>
#include <quickfix/CallStack.h>
#include <string>

JNIEXPORT void JNICALL Java_quickfix_SessionID_create
( JNIEnv *pEnv, jobject obj, jstring begin, jstring sender, jstring target, jstring qualifier )
{ QF_STACK_TRY

  if( isNullAndThrow(begin) ) return;
  if( isNullAndThrow(sender) ) return;
  if( isNullAndThrow(target) ) return;

  JVM::set( pEnv );
  JVMObject jobject( obj );

  const char* ubegin = pEnv->GetStringUTFChars( begin, 0 );
  std::string beginString( ubegin );
  pEnv->ReleaseStringUTFChars( begin, ubegin );

  const char* usender = pEnv->GetStringUTFChars( sender, 0 );
  std::string senderCompID( usender );
  pEnv->ReleaseStringUTFChars( sender, usender );

  const char* utarget = pEnv->GetStringUTFChars( target, 0 );
  std::string targetCompID( utarget );
  pEnv->ReleaseStringUTFChars( target, utarget );

  std::string sessionQualifier = "";
  if( !isNull(qualifier) )
  {
    const char* uqualifier = pEnv->GetStringUTFChars( qualifier, 0 );
    sessionQualifier = uqualifier;
    pEnv->ReleaseStringUTFChars( qualifier, uqualifier );
  }

  FIX::SessionID* pSessionID = new FIX::SessionID
                             ( FIX::BeginString( beginString ),
                               FIX::SenderCompID( senderCompID ),
                               FIX::TargetCompID( targetCompID ),
                               sessionQualifier );

  jobject.setLong( "cppPointer", ( long ) pSessionID );

  QF_STACK_CATCH
}

JNIEXPORT void JNICALL Java_quickfix_SessionID_destroy
( JNIEnv *pEnv, jobject obj )
{ QF_STACK_TRY

  JVM::set( pEnv );
  JVMObject jobject( obj );
  FIX::SessionID* pSessionID = ( FIX::SessionID* ) jobject.getLong( "cppPointer" );
  delete pSessionID;

  QF_STACK_CATCH
}

JNIEXPORT jstring JNICALL Java_quickfix_SessionID_getBeginString
( JNIEnv *pEnv, jobject obj )
{ QF_STACK_TRY

  JVM::set( pEnv );
  JVMObject jobject( obj );
  FIX::SessionID* pSessionID = ( FIX::SessionID* ) jobject.getLong( "cppPointer" );
  jstring result = newString( pSessionID->getBeginString().getValue() );
  return result;

  QF_STACK_CATCH
}

JNIEXPORT jstring JNICALL Java_quickfix_SessionID_getSenderCompID
( JNIEnv *pEnv, jobject obj )
{ QF_STACK_TRY

  JVM::set( pEnv );
  JVMObject jobject( obj );
  FIX::SessionID* pSessionID = ( FIX::SessionID* ) jobject.getLong( "cppPointer" );
  jstring result = newString( pSessionID->getSenderCompID().getValue() );
  return result;

  QF_STACK_CATCH
}

JNIEXPORT jstring JNICALL Java_quickfix_SessionID_getTargetCompID
( JNIEnv *pEnv, jobject obj )
{ QF_STACK_TRY

  JVM::set( pEnv );
  JVMObject jobject( obj );
  FIX::SessionID* pSessionID = ( FIX::SessionID* ) jobject.getLong( "cppPointer" );
  jstring result = newString( pSessionID->getTargetCompID().getValue() );
  return result;

  QF_STACK_CATCH
}

JNIEXPORT jstring JNICALL Java_quickfix_SessionID_getSessionQualifier
( JNIEnv *pEnv, jobject obj )
{ QF_STACK_TRY

  JVM::set( pEnv );
  JVMObject jobject( obj );
  FIX::SessionID* pSessionID = ( FIX::SessionID* ) jobject.getLong( "cppPointer" );
  jstring result = newString( pSessionID->getSessionQualifier() );
  return result;

  QF_STACK_CATCH
}

JNIEXPORT jboolean JNICALL Java_quickfix_SessionID_equals
( JNIEnv *pEnv, jobject obj, jobject obj2 )
{ QF_STACK_TRY

  if( isNull(obj2) ) return false;

  JVM::set( pEnv );
  JVMObject jobject( obj );
  JVMObject jobject2( obj2 );
  FIX::SessionID* pSessionID = ( FIX::SessionID* ) jobject.getLong( "cppPointer" );
  FIX::SessionID* pSessionID2 = ( FIX::SessionID* ) jobject2.getLong( "cppPointer" );
  return *pSessionID == *pSessionID2;

  QF_STACK_CATCH
}

JNIEXPORT jstring JNICALL Java_quickfix_SessionID_toString
( JNIEnv *pEnv, jobject obj )
{ QF_STACK_TRY

  JVM::set( pEnv );
  JVMObject jobject( obj );
  FIX::SessionID* pSessionID = ( FIX::SessionID* ) jobject.getLong( "cppPointer" );
  jstring result = newString( pSessionID->toString() );
  return result;

  QF_STACK_CATCH
}

#endif