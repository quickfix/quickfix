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
#include <iostream>

#ifdef _MSC_VER
#pragma warning( disable : 4876 )
#include <windows.h>
#endif

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
  jfieldID fid = getStaticFieldID( name.c_str(), INT_TYPE );
  if ( fid == 0 ) throw std::logic_error( "int field " + name + " not found" );

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
  jmethodID mid = getClass().getMethodID( name.c_str(), LONGMETHOD_TYPE );
  if ( mid == 0 ) throw std::logic_error( "method " + name + " is not found" );

  return pEnv->CallLongMethod( m_obj, mid );
}

jint JVMObject::callIntMethod( const std::string& name )
{
  JNIEnv * pEnv = ENV::get();
  jmethodID mid = getClass().getMethodID( name.c_str(), INTMETHOD_TYPE );
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
  jfieldID fid = getClass().getFieldID( name.c_str(), INT_TYPE );
  if ( fid == 0 )
    throw std::logic_error( "string field " + name + " not found" );

  pEnv->SetIntField( m_obj, fid, value );
}

void JVMObject::setLong( const std::string& name, long value )
{
  JNIEnv * pEnv = ENV::get();
  jfieldID fid = getClass().getFieldID( name.c_str(), LONG_TYPE );
  if ( fid == 0 )
    throw std::logic_error( "string field " + name + " not found" );

  pEnv->SetLongField( m_obj, fid, value );
}

std::string JVMObject::getString( const std::string& name )
{
  JNIEnv * pEnv = ENV::get();
  jfieldID fid = getClass().getFieldID( name.c_str(), STRING_TYPE );
  if ( fid == 0 )
    throw std::logic_error( "string field " + name + " not found" );

  jstring jstr = ( jstring ) ( jobject ) getObjectField( fid );
  if ( jstr == 0 ) throw std::logic_error( "string field " + name + " is null" );

  const char* u = pEnv->GetStringUTFChars( jstr, 0 );
  std::string result = u;
  pEnv->ReleaseStringUTFChars( jstr, u );
  return result;
}

char JVMObject::getChar( const std::string& name )
{
  JNIEnv * pEnv = ENV::get();
  jfieldID fid = getClass().getFieldID( name.c_str(), CHAR_TYPE );
  if ( fid == 0 ) throw std::logic_error( "char field " + name + " not found" );

  return ( char ) ( pEnv->GetCharField( m_obj, fid ) );
}

int JVMObject::getInt( const std::string& name )
{
  JNIEnv * pEnv = ENV::get();
  jfieldID fid = getClass().getFieldID( name.c_str(), INT_TYPE );
  if ( fid == 0 ) throw std::logic_error( "int field " + name + " not found" );

  return pEnv->GetIntField( m_obj, fid );
}

long JVMObject::getLong( const std::string& name )
{
  JNIEnv * pEnv = ENV::get();
  jfieldID fid = getClass().getFieldID( name.c_str(), LONG_TYPE );
  if ( fid == 0 ) throw std::logic_error( "jlong field " + name + " not found" );

  return (long)pEnv->GetLongField( m_obj, fid );
}

JVMObject JVMObject::getDate( const std::string& name )
{
  jfieldID fid = getClass().getFieldID( name.c_str(), DATE_TYPE );
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
