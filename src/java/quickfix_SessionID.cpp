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

#include "JVM.h"
#include "Conversions.h"
#include "quickfix_SessionID.h"
#include <quickfix/SessionID.h>
#include <quickfix/CallStack.h>
#include <string>

JNIEXPORT void JNICALL Java_quickfix_SessionID_create
( JNIEnv *pEnv, jobject obj, jstring begin, jstring sender, jstring target )
{ QF_STACK_TRY

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

  FIX::SessionID* pSession = new FIX::SessionID
                             ( FIX::BeginString( beginString ),
                               FIX::SenderCompID( senderCompID ),
                               FIX::TargetCompID( targetCompID ) );

  jobject.setInt( "cppPointer", ( int ) pSession );

  QF_STACK_CATCH
}

JNIEXPORT void JNICALL Java_quickfix_SessionID_destroy
( JNIEnv *pEnv, jobject obj )
{ QF_STACK_TRY

  JVM::set( pEnv );
  JVMObject jobject( obj );
  FIX::SessionID* pSession = ( FIX::SessionID* ) jobject.getInt( "cppPointer" );
  delete pSession;

  QF_STACK_CATCH
}

JNIEXPORT jstring JNICALL Java_quickfix_SessionID_getBeginString0
( JNIEnv *pEnv, jobject obj )
{ QF_STACK_TRY

  JVM::set( pEnv );
  JVMObject jobject( obj );
  FIX::SessionID* pSession = ( FIX::SessionID* ) jobject.getInt( "cppPointer" );
  jstring result = newString( pSession->getBeginString().getValue() );
  return result;

  QF_STACK_CATCH
}

JNIEXPORT jstring JNICALL Java_quickfix_SessionID_getSenderCompID0
( JNIEnv *pEnv, jobject obj )
{ QF_STACK_TRY

  JVM::set( pEnv );
  JVMObject jobject( obj );
  FIX::SessionID* pSession = ( FIX::SessionID* ) jobject.getInt( "cppPointer" );
  jstring result = newString( pSession->getSenderCompID().getValue() );
  return result;

  QF_STACK_CATCH
}

JNIEXPORT jstring JNICALL Java_quickfix_SessionID_getTargetCompID0
( JNIEnv *pEnv, jobject obj )
{ QF_STACK_TRY

  JVM::set( pEnv );
  JVMObject jobject( obj );
  FIX::SessionID* pSession = ( FIX::SessionID* ) jobject.getInt( "cppPointer" );
  jstring result = newString( pSession->getTargetCompID().getValue() );
  return result;

  QF_STACK_CATCH
}
