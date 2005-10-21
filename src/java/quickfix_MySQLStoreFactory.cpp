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

#ifdef HAVE_MYSQL

#include "JVM.h"
#include "quickfix_MySQLStoreFactory.h"
#include <quickfix/MySQLStore.h>
#include <quickfix/SessionSettings.h>
#include <quickfix/CallStack.h>
#include "Conversions.h"

JNIEXPORT void JNICALL Java_quickfix_MySQLStoreFactory_create__
( JNIEnv *pEnv, jobject obj )
{ QF_STACK_TRY

  JVM::set( pEnv );
  JVMObject object( obj );

  JVMObject jsettings( object.getObject( "settings", "Lquickfix/SessionSettings;" ) );
  FIX::SessionSettings* pSettings
  = ( FIX::SessionSettings* ) jsettings.getLong( "cppPointer" );

  FIX::MessageStoreFactory* pFactory = new FIX::MySQLStoreFactory( *pSettings );
  object.setLong( "cppPointer", ( long ) pFactory );

  QF_STACK_CATCH
}

JNIEXPORT void JNICALL Java_quickfix_MySQLStoreFactory_destroy
( JNIEnv *pEnv, jobject obj )
{ QF_STACK_TRY

  JVM::set( pEnv );
  JVMObject jobject( obj );
  FIX::MySQLStoreFactory* pFactory
  = ( FIX::MySQLStoreFactory* ) jobject.getLong( "cppPointer" );
  delete pFactory;

  QF_STACK_CATCH
}

JNIEXPORT jobject JNICALL Java_quickfix_MySQLStoreFactory_create__Lquickfix_SessionID_2
( JNIEnv *pEnv, jobject obj, jobject sessionID )
{ QF_STACK_TRY

  if( isNullAndThrow(sessionID) ) return 0;

  JVM::set( pEnv );
  JVMObject jobj( obj );
  JVMObject jsession( sessionID );

  FIX::MySQLStoreFactory* pFactory
  = ( FIX::MySQLStoreFactory* ) jobj.getLong( "cppPointer" );
  FIX::SessionID* pSessionID
  = ( FIX::SessionID* ) jsession.getLong( "cppPointer" );

  FIX::MessageStoreFactoryExceptionWrapper wrapper( pFactory );
  bool threw = false;
  FIX::ConfigError e;
  FIX::MessageStore* pStore = wrapper.create( *pSessionID, threw, e );
  if ( threw )
  {
    throwNew( "Lquickfix/ConfigError;", e.what() );
    return 0;
  }

  FIX::MessageStoreExceptionWrapper* pWrapper =
    new FIX::MessageStoreExceptionWrapper( pStore );

  JVMClass type( "Lquickfix/FileStore;" );
  jmethodID method = pEnv->GetMethodID( type, "<init>", "(J)V" );
  jobject result = pEnv->NewObject( type, method, ( jint ) pWrapper );
  return result;

  QF_STACK_CATCH
}

#endif //HAVE_MYSQL
