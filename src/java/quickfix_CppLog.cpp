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
#include "quickfix_CppLog.h"
#include <quickfix/Log.h>
#include <quickfix/CallStack.h>

JNIEXPORT void JNICALL Java_quickfix_CppLog_onIncoming
( JNIEnv * pEnv, jobject obj, jstring string )
{ QF_STACK_TRY

  if( isNullAndThrow(string) ) return;

  JVM::set( pEnv );
  JVMObject jobject( obj );
  FIX::Log* pLog = ( FIX::Log* ) jobject.getInt( "cppPointer" );

  const char* ustring = pEnv->GetStringUTFChars( string, 0 );
  pLog->onIncoming( ustring );
  pEnv->ReleaseStringUTFChars( string, ustring );

  QF_STACK_CATCH
}

JNIEXPORT void JNICALL Java_quickfix_CppLog_onOutgoing
( JNIEnv * pEnv, jobject obj, jstring string )
{ QF_STACK_TRY

  if( isNullAndThrow(string) ) return;

  JVM::set( pEnv );
  JVMObject jobject( obj );
  FIX::Log* pLog = ( FIX::Log* ) jobject.getInt( "cppPointer" );

  const char* ustring = pEnv->GetStringUTFChars( string, 0 );
  pLog->onOutgoing( ustring );
  pEnv->ReleaseStringUTFChars( string, ustring );

  QF_STACK_CATCH
}

JNIEXPORT void JNICALL Java_quickfix_CppLog_onEvent
( JNIEnv * pEnv, jobject obj, jstring string )
{ QF_STACK_TRY

  if( isNullAndThrow(string) ) return;

  JVM::set( pEnv );
  JVMObject jobject( obj );
  FIX::Log* pLog = ( FIX::Log* ) jobject.getInt( "cppPointer" );

  const char* ustring = pEnv->GetStringUTFChars( string, 0 );
  pLog->onEvent( ustring );
  pEnv->ReleaseStringUTFChars( string, ustring );

  QF_STACK_CATCH
}
