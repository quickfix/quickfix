/* -*- C++ -*- */
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
  static const std::string dateType;
  static const std::string calendarType;
  static const std::string timezoneType;
  static const std::string stringType;
  static const std::string charType;
  static const std::string intType;
  static const std::string longMethodType;
  static const std::string intMethodType;
  static const std::string stringMethodType;

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

  JVMClass( JVMClass& copy ) : m_cls( copy.m_cls ) 
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
  
  JVMObject( JVMObject& copy ) : m_obj(copy) {}

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
