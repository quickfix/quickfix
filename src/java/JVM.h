/* -*- C++ -*- */

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

#include <jni.h>
#include <string>
#include <vector>
#include <map>
#include <stdexcept>

#ifndef _Included_Jvm
#define _Included_Jvm

class JVMException : public std::logic_error
{
public:
JVMException( const std::string& message ) : std::logic_error( message ) {}}
;

class JVM
{
public:
  #define DATE_TYPE "Ljava/util/Date;"
  #define CALENDAR_TYPE "Ljava/util/Calendar;"
  #define TIMEZONE_TYPE "Ljava/util/TimeZone;"
  #define STRING_TYPE "Ljava/lang/String;"
  #define ARRAYLIST_TYPE "Ljava/util/ArrayList;"
  #define CHAR_TYPE "C"
  #define INT_TYPE "I"
  #define LONGMETHOD_TYPE "()J"
  #define INTMETHOD_TYPE "()I"
  #define STRINGMETHOD_TYPE "()Ljava/util/String;"

  static void set( JNIEnv* );
  static void set( JavaVM* );
  static JavaVM* get();

  JVM( JavaVM* pJvm ) : m_pJvm( pJvm ) {}
  JVM() : m_pJvm( 0 ) {}

  operator JavaVM*() { return m_pJvm; }
  JavaVM& getJvm() { return * m_pJvm; }

private:
  JavaVM* m_pJvm;
  static JavaVM* jvm;
};

class ENV
{
public:
  static JNIEnv* get();
  ENV( JNIEnv* pEnv );
  ENV( JVM jvm );
  ~ENV();

  operator JNIEnv*() { return m_pEnv; }
  JNIEnv& getEnv() { return * m_pEnv; }
  JVM getJVM() { return m_jvm; }

private:
  JNIEnv* m_pEnv;
  JVM m_jvm;
  bool detach;
};

class JVMClass
{
public:
  JVMClass( const char* name )
  {
    m_cls = ENV::get() ->FindClass( name );
    if ( !m_cls ) throw JVMException(
        std::string( "Could not find class " ) + name );
  }
  JVMClass( jclass cls ) : m_cls( cls )
  {
    if ( !cls ) throw JVMException( "Class not found" );
  }

  JVMClass( const JVMClass& copy ) : m_cls( copy.m_cls )
  {
    ENV::get()->NewLocalRef( m_cls );
  }

  ~JVMClass()
  {
    ENV::get()->DeleteLocalRef( m_cls );
  }

  int getInt( const std::string& name );

  jmethodID getMethodID( const char* name, const char* type );
  jfieldID getFieldID( const char* name, const char* type );
  jfieldID getStaticFieldID( const char* name, const char* type );
  jobject NewObject();
  jobject NewObject( const char*, ... );
  bool IsInstanceOf( jobject obj );
  operator jclass() { return m_cls; }

private:
  jclass m_cls;
};

class JVMObject
{
public:
  JVMObject( jobject obj )
  : m_obj( obj )
  {
    if ( !obj ) throw JVMException( "Object not found" );
  }

  JVMObject( const JVMObject& copy ) : m_obj(copy.m_obj) {}

  JVMClass getClass() { return JVMClass( ENV::get() ->GetObjectClass( m_obj ) ); }
  JVMObject newGlobalRef() { return JVMObject( ENV::get() ->NewGlobalRef( m_obj ) ); }
  void deleteGlobalRef() { ENV::get() ->DeleteGlobalRef( m_obj ); }
  JVMObject newLocalRef() { return JVMObject( ENV::get() ->NewLocalRef( m_obj ) ); }
  void deleteLocalRef() { ENV::get() ->DeleteLocalRef( m_obj ); }

  std::string getString( const std::string& name );
  char getChar( const std::string& name );
  int getInt( const std::string& name );
  JVMObject getDate( const std::string& name );
  JVMObject getObject( const std::string& name, const std::string& type );

  void setInt( const std::string& name, int );

  jlong callLongMethod( const std::string& name );
  jint callIntMethod( const std::string& name );

  JVMObject getObjectField( jfieldID );

  operator jobject() { return m_obj; }

protected:
  jobject m_obj;
};

#endif
