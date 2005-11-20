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

#include "JVM.h"
#include "quickfix_SessionSettings.h"
#include <quickfix/SessionSettings.h>
#include <quickfix/CallStack.h>
#include "Conversions.h"

FIX::SessionSettings* getCPPSessionSettings( jobject obj )
{
  JVMObject jobject( obj );
  return ( FIX::SessionSettings* ) jobject.getLong( "cppPointer" );
}

JNIEXPORT void JNICALL Java_quickfix_SessionSettings_create__Ljava_io_InputStream_2
( JNIEnv *pEnv, jobject obj, jobject stream )
{ QF_STACK_TRY

  if( isNullAndThrow(stream) ) return;

  JVM::set( pEnv );

  JVMObject jobject( obj );
  JVMObject jstream( stream );
  std::string string; int i = -1;
  while ( ( i = jstream.callIntMethod( "read" ) ) != -1 )
    string += ( char ) i;
  std::istringstream stringStream( string );

  try
  {
    FIX::SessionSettings* pSettings = new FIX::SessionSettings( stringStream );
    jobject.setLong( "cppPointer", ( long ) pSettings );
  }
  catch( FIX::ConfigError& e )
  { throwNew( "Lquickfix/ConfigError;", e.what() ); }

  QF_STACK_CATCH
}

JNIEXPORT void JNICALL Java_quickfix_SessionSettings_create__Ljava_lang_String_2
( JNIEnv *pEnv, jobject obj, jstring file )
{ QF_STACK_TRY

  if( isNullAndThrow(file) ) return;

  JVM::set( pEnv );

  JVMObject jobject( obj );

  const char* ufile = pEnv->GetStringUTFChars( file, 0 );

  try
  {
    FIX::SessionSettings* pSettings = new FIX::SessionSettings( ufile );
    jobject.setLong( "cppPointer", ( long ) pSettings );
  }
  catch( FIX::ConfigError& e )
  { throwNew( "Lquickfix/ConfigError;", e.what() ); }
  pEnv->ReleaseStringUTFChars( file, ufile );

  QF_STACK_CATCH
}

JNIEXPORT void JNICALL Java_quickfix_SessionSettings_destroy
( JNIEnv *pEnv, jobject obj )
{ QF_STACK_TRY
  delete getCPPSessionSettings( obj );
  QF_STACK_CATCH
}

JNIEXPORT jobject JNICALL Java_quickfix_SessionSettings_get__Lquickfix_SessionID_2
( JNIEnv *pEnv, jobject obj, jobject sessionID )
{ QF_STACK_TRY

  if( isNullAndThrow(sessionID) ) return 0;

  JVM::set( pEnv );

  JVMObject jobject( obj );
  JVMObject jsessionID( sessionID );

  try
  {
    FIX::SessionID* pSessionID = (FIX::SessionID*)jobject.getLong( "cppPointer" );
    FIX::SessionSettings* pSessionSettings = getCPPSessionSettings( obj );
    const FIX::Dictionary& dictionary = pSessionSettings->get( *pSessionID );
    return newDictionary( dictionary );
  }
  catch( FIX::ConfigError& e )
  { throwNew( "Lquickfix/ConfigError;", e.what() ); }
  return 0;

  QF_STACK_CATCH
}

JNIEXPORT void JNICALL Java_quickfix_SessionSettings_set__Lquickfix_SessionID_2Lquickfix_Dictionary_2
( JNIEnv *pEnv, jobject obj, jobject sessionID, jobject dictionary )
{
  JVM::set( pEnv );

  JVMObject jobject( obj );

  try
  {
    FIX::SessionID* pSessionID = (FIX::SessionID*)jobject.getLong( "cppPointer" );
    FIX::Dictionary* pDictionary = (FIX::Dictionary*)jobject.getLong( "cppPointer" );
    FIX::SessionSettings* pSessionSettings = getCPPSessionSettings( obj );
    pSessionSettings->set( *pSessionID, *pDictionary );
  }
  catch( FIX::ConfigError& e )
  { throwNew( "Lquickfix/ConfigError;", e.what() ); }

}

JNIEXPORT jobject JNICALL Java_quickfix_SessionSettings_get__
( JNIEnv *pEnv, jobject obj )
{ QF_STACK_TRY

  JVM::set( pEnv );

  JVMObject jobject( obj );

  FIX::SessionSettings* pSessionSettings = getCPPSessionSettings( obj );
  const FIX::Dictionary& dictionary = pSessionSettings->get();
  return newDictionary( dictionary );

  QF_STACK_CATCH
}

JNIEXPORT void JNICALL Java_quickfix_SessionSettings_set__Lquickfix_Dictionary_2
( JNIEnv *pEnv, jobject obj, jobject dictionary )
{
  JVM::set( pEnv );

  JVMObject jobject( obj );

  try
  {
    FIX::Dictionary* pDictionary = (FIX::Dictionary*)jobject.getLong( "cppPointer" );
    FIX::SessionSettings* pSessionSettings = getCPPSessionSettings( obj );
    pSessionSettings->set( *pDictionary );
  }
  catch( FIX::ConfigError& e )
  { throwNew( "Lquickfix/ConfigError;", e.what() ); }

}

JNIEXPORT jint JNICALL Java_quickfix_SessionSettings_size
( JNIEnv *pEnv, jobject obj )
{ QF_STACK_TRY

  JVM::set( pEnv );

  FIX::SessionSettings* pSessionSettings = getCPPSessionSettings( obj );
  return pSessionSettings->size();
  
  QF_STACK_CATCH
}
