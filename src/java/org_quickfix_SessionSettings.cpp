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

#include "JVM.h"
#include "org_quickfix_SessionSettings.h"
#include <quickfix/SessionSettings.h>
#include <quickfix/CallStack.h>
#include "Conversions.h"

FIX::SessionSettings* getCPPSessionSettings( jobject obj )
{
  JVMObject jobject( obj );
  return ( FIX::SessionSettings* ) jobject.getInt( "cppPointer" );
}

JNIEXPORT void JNICALL Java_org_quickfix_SessionSettings_create
( JNIEnv *pEnv, jobject obj, jobject stream )
{ QF_STACK_TRY

  JVM::set( pEnv );

  JVMObject jobject( obj );
  JVMObject jstream( stream );
  std::string string; int i = -1;
  while ( ( i = jstream.callIntMethod( "read" ) ) != -1 )
    string += ( char ) i;
  std::istringstream stringStream( string );

  FIX::SessionSettings* pSettings = new FIX::SessionSettings( stringStream );
  jobject.setInt( "cppPointer", ( int ) pSettings );

  QF_STACK_CATCH
}

JNIEXPORT void JNICALL Java_org_quickfix_SessionSettings_destroy
( JNIEnv *pEnv, jobject obj )
{ QF_STACK_TRY
  delete getCPPSessionSettings( obj );
  QF_STACK_CATCH
}

JNIEXPORT jstring JNICALL Java_org_quickfix_SessionSettings_getString
  (JNIEnv *pEnv, jobject obj, jobject sessionid, jstring key)
{ QF_STACK_TRY

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
  { throwNew( "Lorg/quickfix/ConfigError;", e.what() ); }
  catch( FIX::FieldConvertError& e )
  { throwNew( "Lorg/quickfix/FieldConvertError;", e.what() ); }  
  pEnv->ReleaseStringUTFChars( key, ukey );  
  return 0;

  QF_STACK_CATCH
}

JNIEXPORT jlong JNICALL Java_org_quickfix_SessionSettings_getLong
  (JNIEnv *pEnv, jobject obj, jobject sessionid, jstring key)
{ QF_STACK_TRY

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
  { throwNew( "Lorg/quickfix/ConfigError;", e.what() ); }
  catch( FIX::FieldConvertError& e )
  { throwNew( "Lorg/quickfix/FieldConvertError;", e.what() ); }  
  pEnv->ReleaseStringUTFChars( key, ukey );  
  return 0;

  QF_STACK_CATCH
}

JNIEXPORT jdouble JNICALL Java_org_quickfix_SessionSettings_getDouble
  (JNIEnv *pEnv, jobject obj, jobject sessionid, jstring key)
{ QF_STACK_TRY

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
  { throwNew( "Lorg/quickfix/ConfigError;", e.what() ); }
  catch( FIX::FieldConvertError& e )
  { throwNew( "Lorg/quickfix/FieldConvertError;", e.what() ); }  
  pEnv->ReleaseStringUTFChars( key, ukey );  
  return 0;

  QF_STACK_CATCH
}

JNIEXPORT jboolean JNICALL Java_org_quickfix_SessionSettings_getBool
  (JNIEnv *pEnv, jobject obj, jobject sessionid, jstring key)
{ QF_STACK_TRY

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
  { throwNew( "Lorg/quickfix/ConfigError;", e.what() ); }
  catch( FIX::FieldConvertError& e )
  { throwNew( "Lorg/quickfix/FieldConvertError;", e.what() ); }  
  pEnv->ReleaseStringUTFChars( key, ukey );  
  return 0;

  QF_STACK_CATCH
}

JNIEXPORT void JNICALL Java_org_quickfix_SessionSettings_setString
  (JNIEnv *pEnv, jobject obj, jobject sessionid, jstring key, jstring value)
{ QF_STACK_TRY

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
  { throwNew( "Lorg/quickfix/ConfigError;", e.what() ); }

  pEnv->ReleaseStringUTFChars( key, ukey );
  pEnv->ReleaseStringUTFChars( value, uvalue );

  QF_STACK_CATCH
}

JNIEXPORT void JNICALL Java_org_quickfix_SessionSettings_setLong
  (JNIEnv *pEnv, jobject obj, jobject sessionid, jstring key, jlong value)
{ QF_STACK_TRY

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
  { throwNew( "Lorg/quickfix/ConfigError;", e.what() ); }

  pEnv->ReleaseStringUTFChars( key, ukey );

  QF_STACK_CATCH
}

JNIEXPORT void JNICALL Java_org_quickfix_SessionSettings_setDouble
  (JNIEnv *pEnv, jobject obj, jobject sessionid, jstring key, jdouble value)
{ QF_STACK_TRY

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
  { throwNew( "Lorg/quickfix/ConfigError;", e.what() ); }

  pEnv->ReleaseStringUTFChars( key, ukey );

  QF_STACK_CATCH
}

JNIEXPORT void JNICALL Java_org_quickfix_SessionSettings_setBool
  (JNIEnv *pEnv, jobject obj, jobject sessionid, jstring key, jboolean value)
{ QF_STACK_TRY

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
  { throwNew( "Lorg/quickfix/ConfigError;", e.what() ); }

  pEnv->ReleaseStringUTFChars( key, ukey );

  QF_STACK_CATCH
}
