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
#include "quickfix_SessionSettings.h"
#include <quickfix/SessionSettings.h>
#include <quickfix/CallStack.h>
#include "Conversions.h"

FIX::SessionSettings* getCPPSessionSettings( jobject obj )
{
  JVMObject jobject( obj );
  return ( FIX::SessionSettings* ) jobject.getInt( "cppPointer" );
}

JNIEXPORT void JNICALL Java_quickfix_SessionSettings_create
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
    jobject.setInt( "cppPointer", ( int ) pSettings );
  }
  catch( FIX::ConfigError& e )
  { throwNew( "Lquickfix/ConfigError;", e.what() ); }

  QF_STACK_CATCH
}

JNIEXPORT void JNICALL Java_quickfix_SessionSettings_destroy
( JNIEnv *pEnv, jobject obj )
{ QF_STACK_TRY
  delete getCPPSessionSettings( obj );
  QF_STACK_CATCH
}

JNIEXPORT jstring JNICALL Java_quickfix_SessionSettings_getString
  (JNIEnv *pEnv, jobject obj, jobject sessionid, jstring key)
{ QF_STACK_TRY

  if( isNullAndThrow(sessionid) ) return 0;
  if( isNullAndThrow(key) ) return 0;

  JVM::set( pEnv );

  const char* ukey = pEnv->GetStringUTFChars( key, 0 );
  JVMObject jsessionid( sessionid );
  FIX::SessionID* pSessionID = (FIX::SessionID*)jsessionid.getInt( "cppPointer" );

  FIX::SessionSettings* pSettings = getCPPSessionSettings( obj );
  try
  {
    FIX::Dictionary dict = pSettings->get( *pSessionID );
    std::string result = dict.getString( ukey );
    pEnv->ReleaseStringUTFChars( key, ukey );
    return newString( result );
  }
  catch( FIX::ConfigError& e )
  { throwNew( "Lquickfix/ConfigError;", e.what() ); }
  catch( FIX::FieldConvertError& e )
  { throwNew( "Lquickfix/FieldConvertError;", e.what() ); }
  pEnv->ReleaseStringUTFChars( key, ukey );
  return 0;

  QF_STACK_CATCH
}

JNIEXPORT jlong JNICALL Java_quickfix_SessionSettings_getLong
  (JNIEnv *pEnv, jobject obj, jobject sessionid, jstring key)
{ QF_STACK_TRY

  if( isNullAndThrow(sessionid) ) return 0;
  if( isNullAndThrow(key) ) return 0;

  JVM::set( pEnv );

  const char* ukey = pEnv->GetStringUTFChars( key, 0 );
  JVMObject jsessionid( sessionid );
  FIX::SessionID* pSessionID = (FIX::SessionID*)jsessionid.getInt( "cppPointer" );

  FIX::SessionSettings* pSettings = getCPPSessionSettings( obj );
  try
  {
    FIX::Dictionary dict = pSettings->get( *pSessionID );
    long result = dict.getLong( ukey );
    pEnv->ReleaseStringUTFChars( key, ukey );
    return result;
  }
  catch( FIX::ConfigError& e )
  { throwNew( "Lquickfix/ConfigError;", e.what() ); }
  catch( FIX::FieldConvertError& e )
  { throwNew( "Lquickfix/FieldConvertError;", e.what() ); }
  pEnv->ReleaseStringUTFChars( key, ukey );
  return 0;

  QF_STACK_CATCH
}

JNIEXPORT jdouble JNICALL Java_quickfix_SessionSettings_getDouble
  (JNIEnv *pEnv, jobject obj, jobject sessionid, jstring key)
{ QF_STACK_TRY

  if( isNullAndThrow(sessionid) ) return 0.0;
  if( isNullAndThrow(key) ) return 0.0;

  JVM::set( pEnv );

  const char* ukey = pEnv->GetStringUTFChars( key, 0 );
  JVMObject jsessionid( sessionid );
  FIX::SessionID* pSessionID = (FIX::SessionID*)jsessionid.getInt( "cppPointer" );

  FIX::SessionSettings* pSettings = getCPPSessionSettings( obj );
  try
  {
    FIX::Dictionary dict = pSettings->get( *pSessionID );
    double result = dict.getDouble( ukey );
    pEnv->ReleaseStringUTFChars( key, ukey );
    return result;
  }
  catch( FIX::ConfigError& e )
  { throwNew( "Lquickfix/ConfigError;", e.what() ); }
  catch( FIX::FieldConvertError& e )
  { throwNew( "Lquickfix/FieldConvertError;", e.what() ); }
  pEnv->ReleaseStringUTFChars( key, ukey );
  return 0;

  QF_STACK_CATCH
}

JNIEXPORT jboolean JNICALL Java_quickfix_SessionSettings_getBool
  (JNIEnv *pEnv, jobject obj, jobject sessionid, jstring key)
{ QF_STACK_TRY

  if( isNullAndThrow(sessionid) ) return false;
  if( isNullAndThrow(key) ) return false;

  JVM::set( pEnv );

  const char* ukey = pEnv->GetStringUTFChars( key, 0 );
  JVMObject jsessionid( sessionid );
  FIX::SessionID* pSessionID = (FIX::SessionID*)jsessionid.getInt( "cppPointer" );

  FIX::SessionSettings* pSettings = getCPPSessionSettings( obj );
  try
  {
    FIX::Dictionary dict = pSettings->get( *pSessionID );
    bool result = dict.getBool( ukey );
    pEnv->ReleaseStringUTFChars( key, ukey );
    return result;
  }
  catch( FIX::ConfigError& e )
  { throwNew( "Lquickfix/ConfigError;", e.what() ); }
  catch( FIX::FieldConvertError& e )
  { throwNew( "Lquickfix/FieldConvertError;", e.what() ); }
  pEnv->ReleaseStringUTFChars( key, ukey );
  return 0;

  QF_STACK_CATCH
}

JNIEXPORT void JNICALL Java_quickfix_SessionSettings_setString
  (JNIEnv *pEnv, jobject obj, jobject sessionid, jstring key, jstring value)
{ QF_STACK_TRY

  if( isNullAndThrow(sessionid) ) return;
  if( isNullAndThrow(key) ) return;
  if( isNullAndThrow(value) ) return;

  JVM::set( pEnv );

  const char* ukey = pEnv->GetStringUTFChars( key, 0 );
  const char* uvalue = pEnv->GetStringUTFChars( value, 0 );
  JVMObject jsessionid( sessionid );
  FIX::SessionID* pSessionID = (FIX::SessionID*)jsessionid.getInt( "cppPointer" );

  FIX::SessionSettings* pSettings = getCPPSessionSettings( obj );
  try
  {
    FIX::Dictionary dict = pSettings->get( *pSessionID );
    dict.setString( ukey, uvalue );
  }
  catch( FIX::ConfigError& e )
  { throwNew( "Lquickfix/ConfigError;", e.what() ); }

  pEnv->ReleaseStringUTFChars( key, ukey );
  pEnv->ReleaseStringUTFChars( value, uvalue );

  QF_STACK_CATCH
}

JNIEXPORT void JNICALL Java_quickfix_SessionSettings_setLong
  (JNIEnv *pEnv, jobject obj, jobject sessionid, jstring key, jlong value)
{ QF_STACK_TRY

  if( isNullAndThrow(sessionid) ) return;
  if( isNullAndThrow(key) ) return;

  JVM::set( pEnv );

  const char* ukey = pEnv->GetStringUTFChars( key, 0 );
  JVMObject jsessionid( sessionid );
  FIX::SessionID* pSessionID = (FIX::SessionID*)jsessionid.getInt( "cppPointer" );

  FIX::SessionSettings* pSettings = getCPPSessionSettings( obj );
  try
  {
    FIX::Dictionary dict = pSettings->get( *pSessionID );
    dict.setLong( ukey, value );
  }
  catch( FIX::ConfigError& e )
  { throwNew( "Lquickfix/ConfigError;", e.what() ); }

  pEnv->ReleaseStringUTFChars( key, ukey );

  QF_STACK_CATCH
}

JNIEXPORT void JNICALL Java_quickfix_SessionSettings_setDouble
  (JNIEnv *pEnv, jobject obj, jobject sessionid, jstring key, jdouble value)
{ QF_STACK_TRY

  if( isNullAndThrow(sessionid) ) return;
  if( isNullAndThrow(key) ) return;

  JVM::set( pEnv );

  const char* ukey = pEnv->GetStringUTFChars( key, 0 );
  JVMObject jsessionid( sessionid );
  FIX::SessionID* pSessionID = (FIX::SessionID*)jsessionid.getInt( "cppPointer" );

  FIX::SessionSettings* pSettings = getCPPSessionSettings( obj );
  try
  {
    FIX::Dictionary dict = pSettings->get( *pSessionID );
    dict.setDouble( ukey, value );
  }
  catch( FIX::ConfigError& e )
  { throwNew( "Lquickfix/ConfigError;", e.what() ); }

  pEnv->ReleaseStringUTFChars( key, ukey );

  QF_STACK_CATCH
}

JNIEXPORT void JNICALL Java_quickfix_SessionSettings_setBool
  (JNIEnv *pEnv, jobject obj, jobject sessionid, jstring key, jboolean value)
{ QF_STACK_TRY

  if( isNullAndThrow(sessionid) ) return;
  if( isNullAndThrow(key) ) return;

  JVM::set( pEnv );

  const char* ukey = pEnv->GetStringUTFChars( key, 0 );
  JVMObject jsessionid( sessionid );
  FIX::SessionID* pSessionID = (FIX::SessionID*)jsessionid.getInt( "cppPointer" );

  FIX::SessionSettings* pSettings = getCPPSessionSettings( obj );
  try
  {
    FIX::Dictionary dict = pSettings->get( *pSessionID );
    dict.setBool( ukey, value );
  }
  catch( FIX::ConfigError& e )
  { throwNew( "Lquickfix/ConfigError;", e.what() ); }

  pEnv->ReleaseStringUTFChars( key, ukey );

  QF_STACK_CATCH
}
