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
#include <iostream>

#ifdef _MSC_VER
#pragma warning( disable : 4876 )
#include <windows.h>
#endif

const std::string JVM::dateType = "Ljava/util/Date;";
const std::string JVM::calendarType = "Ljava/util/Calendar;";
const std::string JVM::timezoneType = "Ljava/util/TimeZone;";
const std::string JVM::stringType = "Ljava/lang/String;";
const std::string JVM::charType = "C";
const std::string JVM::intType = "I";
const std::string JVM::longMethodType = "()J";
const std::string JVM::intMethodType = "()I";
const std::string JVM::stringMethodType = "()Ljava/util/String;";

JavaVM* JVM::jvm = 0;

void JVM::set( JNIEnv* pEnv )
{
  pEnv->GetJavaVM( &jvm );
}

void JVM::set( JavaVM* pJvm )
{
  jvm = pJvm;
}

JavaVM* JVM::get()
{
  return jvm;
}

JNIEnv* ENV::get()
{
  JNIEnv * pEnv = 0;
  JVM::get() ->AttachCurrentThread( ( void** ) & pEnv, 0 );
  return pEnv;
}

ENV::ENV( JNIEnv* pEnv ) : m_pEnv( pEnv ), detach( false )
{
  JavaVM * pJvm;
  pEnv->GetJavaVM( &pJvm );
  m_jvm = JVM( pJvm );
  JVM::set( pJvm );
}

ENV::ENV( JVM jvm ) : m_jvm( jvm ), detach( true )
{
  m_jvm.getJvm().AttachCurrentThread( ( void** ) & m_pEnv, 0 );
}

ENV::~ENV()
{
  if ( detach ) m_jvm.getJvm().DetachCurrentThread();
}

int countVariables( const std::string& parameters )
{
  int result = 0;

  std::string::size_type i;
  for ( i = parameters.find( '(', 0 ); i != parameters.length() && parameters[ ++i ] != ')'; )
  {
    if ( parameters[ i ] == 'L' ) i = parameters.find( ';', i );
    ++result;
  }
  return result;
}

jobject JVMClass::NewObject()
{
  JNIEnv * pEnv = ENV::get();
  jmethodID method = pEnv->GetMethodID( m_cls, "<init>", "()V" );
  return pEnv->NewObject( m_cls, method );
}

jobject JVMClass::NewObject( const char* ctor, ... )
{
  JNIEnv * pEnv = ENV::get();
  int variables = countVariables( ctor );
  va_list list;
  va_start( list, variables );

  jmethodID method = pEnv->GetMethodID( m_cls, "<init>", ctor );
  if ( method == 0 ) throw std::logic_error( "method " + std::string( ctor ) + "." );
  return pEnv->NewObject( m_cls, method, list );
}

bool JVMClass::IsInstanceOf( jobject obj )
{
  JNIEnv * pEnv = ENV::get();
  return pEnv->IsInstanceOf( obj, m_cls );
}

int JVMClass::getInt( const std::string& name )
{
  JNIEnv * pEnv = ENV::get();
  jfieldID fid = getStaticFieldID( name.c_str(), JVM::intType.c_str() );
  if ( fid == 0 ) throw std::logic_error( "char field " + name + " not found" );

  return pEnv->GetStaticIntField( m_cls, fid );
}

jmethodID JVMClass::getMethodID( const char* name, const char* type )
{
  JNIEnv * pEnv = ENV::get();
  return pEnv->GetMethodID( m_cls, name, type );
}

jfieldID JVMClass::getFieldID( const char* name, const char* type )
{
  JNIEnv * pEnv = ENV::get();
  return pEnv->GetFieldID( m_cls, name, type );
}

jfieldID JVMClass::getStaticFieldID( const char* name, const char* type )
{
  JNIEnv * pEnv = ENV::get();
  return pEnv->GetStaticFieldID( m_cls, name, type );
}

jlong JVMObject::callLongMethod( const std::string& name )
{
  JNIEnv * pEnv = ENV::get();
  jmethodID mid = getClass().getMethodID( name.c_str(), JVM::longMethodType.c_str() );
  if ( mid == 0 ) throw std::logic_error( "method " + name + " is not found" );

  return pEnv->CallLongMethod( m_obj, mid );
}

jint JVMObject::callIntMethod( const std::string& name )
{
  JNIEnv * pEnv = ENV::get();
  jmethodID mid = getClass().getMethodID( name.c_str(), JVM::intMethodType.c_str() );
  if ( mid == 0 ) throw std::logic_error( "method " + name + " is not found" );

  return pEnv->CallIntMethod( m_obj, mid );
}

JVMObject JVMObject::getObjectField( jfieldID fid )
{
  JNIEnv * pEnv = ENV::get();
  return JVMObject( pEnv->GetObjectField( m_obj, fid ) );
}

void JVMObject::setInt( const std::string& name, int value )
{
  JNIEnv * pEnv = ENV::get();
  jfieldID fid = getClass().getFieldID( name.c_str(), JVM::intType.c_str() );
  if ( fid == 0 )
    throw std::logic_error( "string field " + name + " not found" );

  pEnv->SetIntField( m_obj, fid, value );
}

std::string JVMObject::getString( const std::string& name )
{
  JNIEnv * pEnv = ENV::get();
  jfieldID fid = getClass().getFieldID( name.c_str(), JVM::stringType.c_str() );
  if ( fid == 0 )
    throw std::logic_error( "string field " + name + " not found" );

  jstring jstr = ( jstring ) ( jobject ) getObjectField( fid );
  if ( jstr == 0 ) throw std::logic_error( "string field " + name + " is null" );

  return pEnv->GetStringUTFChars( jstr, 0 );
}

char JVMObject::getChar( const std::string& name )
{
  JNIEnv * pEnv = ENV::get();
  jfieldID fid = getClass().getFieldID( name.c_str(), JVM::charType.c_str() );
  if ( fid == 0 ) throw std::logic_error( "char field " + name + " not found" );

  return ( char ) ( pEnv->GetCharField( m_obj, fid ) );
}

int JVMObject::getInt( const std::string& name )
{
  JNIEnv * pEnv = ENV::get();
  jfieldID fid = getClass().getFieldID( name.c_str(), JVM::intType.c_str() );
  if ( fid == 0 ) throw std::logic_error( "char field " + name + " not found" );

  return pEnv->GetIntField( m_obj, fid );
}

JVMObject JVMObject::getDate( const std::string& name )
{
  jfieldID fid = getClass().getFieldID( name.c_str(), JVM::dateType.c_str() );
  if ( fid == 0 ) throw std::logic_error( "date field " + name + " not found" );

  JVMObject jobj = getObjectField( fid );
  if ( jobj == 0 ) throw std::logic_error( "date field " + name + " is null" );

  return JVMObject( jobj );
}

JVMObject JVMObject::getObject( const std::string& name, const std::string& type )
{
  jfieldID fid = getClass().getFieldID( name.c_str(), type.c_str() );
  if ( fid == 0 ) throw std::logic_error( "object field " + name + " not found" );

  JVMObject jobj = getObjectField( fid );
  if ( jobj == 0 ) throw std::logic_error( "object field " + name + " is null" );

  return JVMObject( jobj );
}
