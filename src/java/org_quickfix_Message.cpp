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
#include "org_quickfix_Message.h"
#include "quickfix/include/Utility.h"
#include "quickfix/include/Message.h"
#include "Conversions.h"
#include <iostream>

FIX::Message* getCPPMessage( jobject obj )
{
  JVMObject jobject( obj );
  return ( FIX::Message* ) jobject.getInt( "cppPointer" );
}

JNIEXPORT jboolean JNICALL Java_org_quickfix_Message_InitializeXML
( JNIEnv *pEnv, jclass type, jstring url )
{
  JVM::set( pEnv );
  const char* uurl = ENV::get()->GetStringUTFChars( url, 0 );
  return FIX::Message::InitializeXML( uurl );
  ENV::get()->ReleaseStringUTFChars( url, uurl );
}

JNIEXPORT void JNICALL Java_org_quickfix_Message_create
( JNIEnv *pEnv, jobject obj )
{
  JVM::set( pEnv );
  JVMObject jobject( obj );
  FIX::Message* pMessage = new FIX::Message();
  jobject.setInt( "cppPointer", ( int ) pMessage );
}

JNIEXPORT void JNICALL Java_org_quickfix_Message_destroy
( JNIEnv *pEnv, jobject obj )
{
  delete getCPPMessage( obj );
}

JNIEXPORT jobject JNICALL Java_org_quickfix_Message_clone
( JNIEnv *pEnv, jobject obj )
{
  JVM::set( pEnv );
  JVMObject jobj( obj );

  JVMClass type = jobj.getClass();
  jmethodID method = pEnv->GetMethodID( type, "<init>", "()V" );
  jobject clone = pEnv->NewObject( type, method );
  *getCPPMessage( clone ) = *getCPPMessage( obj );
  return clone;
}

JNIEXPORT void JNICALL Java_org_quickfix_Message_addGroup0
( JNIEnv *pEnv, jobject obj, jobject group )
{
  JVM::set( pEnv );
  FIX::Message* pMessage = getCPPMessage( obj );
  JVMObject jgroup( group );
  FIX::Group* pGroup = ( FIX::Group* ) jgroup.getInt( "cppPointer" );
  pMessage->addGroup( *pGroup );
}

JNIEXPORT jobject JNICALL Java_org_quickfix_Message_getGroup0
( JNIEnv *pEnv, jobject obj, jint num, jobject group )
{
  JVM::set( pEnv );
  FIX::Message* pMessage = getCPPMessage( obj );
  JVMObject jgroup( group );
  FIX::Group* pGroup = ( FIX::Group* ) jgroup.getInt( "cppPointer" );
  if ( pMessage->hasGroup( num, *pGroup ) )
  {
    pMessage->getGroup( num, *pGroup );
    return group;
  }
  else
  {
    throwNew( "Lorg/quickfix/FieldNotFound;", FIX::IntConvertor::convert( num ).c_str() );
    return 0;
  }
}

JNIEXPORT void JNICALL Java_org_quickfix_Message_setString0
( JNIEnv *pEnv, jobject obj, jint field, jstring value )
{
  JVM::set( pEnv );
  FIX::Message* pMessage = getCPPMessage( obj );
  setString( *pMessage, field, value );
}

JNIEXPORT void JNICALL Java_org_quickfix_Message_setBoolean0
( JNIEnv *pEnv, jobject obj, jint field, jboolean value )
{
  FIX::Message * pMessage = getCPPMessage( obj );
  setBoolean( *pMessage, field, value );
}

JNIEXPORT void JNICALL Java_org_quickfix_Message_setChar0
( JNIEnv *pEnv, jobject obj, jint field, jchar value )
{
  FIX::Message * pMessage = getCPPMessage( obj );
  setChar( *pMessage, field, value );
}

JNIEXPORT void JNICALL Java_org_quickfix_Message_setInt0
( JNIEnv *pEnv, jobject obj, jint field, jint value )
{
  FIX::Message * pMessage = getCPPMessage( obj );
  setInt( *pMessage, field, value );
}

JNIEXPORT void JNICALL Java_org_quickfix_Message_setDouble0
( JNIEnv *pEnv, jobject obj, jint field, jdouble value )
{
  FIX::Message * pMessage = getCPPMessage( obj );
  setDouble( *pMessage, field, value );
}

JNIEXPORT void JNICALL Java_org_quickfix_Message_setUtcTimeStamp0
( JNIEnv *pEnv, jobject obj, jint field, jobject value )
{
  JVM::set( pEnv );
  FIX::Message* pMessage = getCPPMessage( obj );
  setUtcTimeStamp( *pMessage, field, value );
}

JNIEXPORT void JNICALL Java_org_quickfix_Message_setUtcTimeOnly0
( JNIEnv *pEnv, jobject obj, jint field, jobject value )
{
  JVM::set( pEnv );
  FIX::Message* pMessage = getCPPMessage( obj );
  setUtcTimeOnly( *pMessage, field, value );
}

JNIEXPORT void JNICALL Java_org_quickfix_Message_setUtcDate0
( JNIEnv *pEnv, jobject obj, jint field, jobject value )
{
  JVM::set( pEnv );
  FIX::Message* pMessage = getCPPMessage( obj );
  setUtcDate( *pMessage, field, value );
}

JNIEXPORT jstring JNICALL Java_org_quickfix_Message_getString0
( JNIEnv *pEnv, jobject obj, jint field )
{
  JVM::set( pEnv );
  FIX::Message* pMessage = getCPPMessage( obj );
  return getString( *pMessage, field );
}

JNIEXPORT jboolean JNICALL Java_org_quickfix_Message_getBoolean0
( JNIEnv * pEnv, jobject obj, jint field )
{
  JVM::set( pEnv );
  FIX::Message* pMessage = getCPPMessage( obj );
  return getBoolean( *pMessage, field );
}

JNIEXPORT jchar JNICALL Java_org_quickfix_Message_getChar0
( JNIEnv *pEnv, jobject obj, jint field )
{
  JVM::set( pEnv );
  FIX::Message* pMessage = getCPPMessage( obj );
  return getChar( *pMessage, field );
}

JNIEXPORT jint JNICALL Java_org_quickfix_Message_getInt0
( JNIEnv *pEnv, jobject obj, jint field )
{
  JVM::set( pEnv );
  FIX::Message* pMessage = getCPPMessage( obj );
  return getInt( *pMessage, field );
}

JNIEXPORT jdouble JNICALL Java_org_quickfix_Message_getDouble0
( JNIEnv *pEnv, jobject obj, jint field )
{
  JVM::set( pEnv );
  FIX::Message* pMessage = getCPPMessage( obj );
  return getDouble( *pMessage, field );
}

JNIEXPORT jobject JNICALL Java_org_quickfix_Message_getUtcTimeStamp0
( JNIEnv *pEnv, jobject obj, jint field )
{
  JVM::set( pEnv );
  FIX::Message* pMessage = getCPPMessage( obj );
  jobject result = newUtcTimeStamp( *pMessage, field );
  return result;
}

JNIEXPORT jobject JNICALL Java_org_quickfix_Message_getUtcTimeOnly0
( JNIEnv *pEnv, jobject obj, jint field )
{
  JVM::set( pEnv );
  FIX::Message* pMessage = getCPPMessage( obj );
  jobject result = newUtcTimeOnly( *pMessage, field );
  return result;
}

JNIEXPORT jobject JNICALL Java_org_quickfix_Message_getUtcDate0
( JNIEnv *pEnv, jobject obj, jint field )
{
  JVM::set( pEnv );
  FIX::Message* pMessage = getCPPMessage( obj );
  jobject result = newUtcDate( *pMessage, field );
  return result;
}

// Header Methods

JNIEXPORT void JNICALL Java_org_quickfix_Message_setHeaderString0
( JNIEnv *pEnv, jobject obj, jint field, jstring value )
{
  JVM::set( pEnv );
  FIX::Message* pMessage = getCPPMessage( obj );
  setString( pMessage->getHeader(), field, value );
}

JNIEXPORT void JNICALL Java_org_quickfix_Message_setHeaderBoolean0
( JNIEnv * pEnv, jobject obj, jint field, jboolean value )
{
  FIX::Message * pMessage = getCPPMessage( obj );
  setBoolean( pMessage->getHeader(), field, value );
}

JNIEXPORT void JNICALL Java_org_quickfix_Message_setHeaderChar0
( JNIEnv *pEnv, jobject obj, jint field, jchar value )
{
  FIX::Message * pMessage = getCPPMessage( obj );
  setChar( pMessage->getHeader(), field, value );
}

JNIEXPORT void JNICALL Java_org_quickfix_Message_setHeaderInt0
( JNIEnv *pEnv, jobject obj, jint field, jint value )
{
  FIX::Message * pMessage = getCPPMessage( obj );
  setInt( pMessage->getHeader(), field, value );
}

JNIEXPORT void JNICALL Java_org_quickfix_Message_setHeaderDouble0
( JNIEnv *pEnv, jobject obj, jint field, jdouble value )
{
  FIX::Message * pMessage = getCPPMessage( obj );
  setDouble( pMessage->getHeader(), field, value );
}

JNIEXPORT void JNICALL Java_org_quickfix_Message_setHeaderUtcTimeStamp0
( JNIEnv *pEnv, jobject obj, jint field, jobject value )
{
  JVM::set( pEnv );
  FIX::Message* pMessage = getCPPMessage( obj );
  setUtcTimeStamp( pMessage->getHeader(), field, value );
}

JNIEXPORT void JNICALL Java_org_quickfix_Message_setHeaderUtcTimeOnly0
( JNIEnv *pEnv, jobject obj, jint field, jobject value )
{
  JVM::set( pEnv );
  FIX::Message* pMessage = getCPPMessage( obj );
  setUtcTimeOnly( pMessage->getHeader(), field, value );
}

JNIEXPORT void JNICALL Java_org_quickfix_Message_setHeaderUtcDate0
( JNIEnv *pEnv, jobject obj, jint field, jobject value )
{
  JVM::set( pEnv );
  FIX::Message* pMessage = getCPPMessage( obj );
  setUtcDate( pMessage->getHeader(), field, value );
}

JNIEXPORT jstring JNICALL Java_org_quickfix_Message_getHeaderString0
( JNIEnv *pEnv, jobject obj, jint field )
{
  JVM::set( pEnv );
  FIX::Message* pMessage = getCPPMessage( obj );
  return getString( pMessage->getHeader(), field );
}

JNIEXPORT jboolean JNICALL Java_org_quickfix_Message_getHeaderBoolean0
( JNIEnv * pEnv, jobject obj, jint field )
{
  JVM::set( pEnv );
  FIX::Message* pMessage = getCPPMessage( obj );
  return getBoolean( pMessage->getHeader(), field );
}

JNIEXPORT jchar JNICALL Java_org_quickfix_Message_getHeaderChar0
( JNIEnv *pEnv, jobject obj, jint field )
{
  JVM::set( pEnv );
  FIX::Message* pMessage = getCPPMessage( obj );
  return getChar( pMessage->getHeader(), field );
}

JNIEXPORT jint JNICALL Java_org_quickfix_Message_getHeaderInt0
( JNIEnv *pEnv, jobject obj, jint field )
{
  JVM::set( pEnv );
  FIX::Message* pMessage = getCPPMessage( obj );
  return getInt( pMessage->getHeader(), field );
}

JNIEXPORT jdouble JNICALL Java_org_quickfix_Message_getHeaderDouble0
( JNIEnv *pEnv, jobject obj, jint field )
{
  JVM::set( pEnv );
  FIX::Message* pMessage = getCPPMessage( obj );
  return getDouble( pMessage->getHeader(), field );
}

JNIEXPORT jobject JNICALL Java_org_quickfix_Message_getHeaderUtcTimeStamp0
( JNIEnv *pEnv, jobject obj, jint field )
{
  JVM::set( pEnv );
  FIX::Message* pMessage = getCPPMessage( obj );
  jobject result = newUtcTimeStamp( pMessage->getHeader(), field );
  return result;
}

JNIEXPORT jobject JNICALL Java_org_quickfix_Message_getHeaderUtcTimeOnly0
( JNIEnv *pEnv, jobject obj, jint field )
{
  JVM::set( pEnv );
  FIX::Message* pMessage = getCPPMessage( obj );
  jobject result = newUtcTimeOnly( pMessage->getHeader(), field );
  return result;
}

JNIEXPORT jobject JNICALL Java_org_quickfix_Message_getHeaderUtcDate0
( JNIEnv *pEnv, jobject obj, jint field )
{
  JVM::set( pEnv );
  FIX::Message* pMessage = getCPPMessage( obj );
  jobject result = newUtcDate( pMessage->getHeader(), field );
  return result;
}

// Trailer Methods

JNIEXPORT void JNICALL Java_org_quickfix_Message_setTrailerString0
( JNIEnv *pEnv, jobject obj, jint field, jstring value )
{
  JVM::set( pEnv );
  FIX::Message* pMessage = getCPPMessage( obj );
  setString( pMessage->getTrailer(), field, value );
}

JNIEXPORT void JNICALL Java_org_quickfix_Message_setTrailerBoolean0
( JNIEnv * pEnv, jobject obj, jint field, jboolean value )
{
  FIX::Message * pMessage = getCPPMessage( obj );
  setBoolean( pMessage->getTrailer(), field, value );
}

JNIEXPORT void JNICALL Java_org_quickfix_Message_setTrailerChar0
( JNIEnv *pEnv, jobject obj, jint field, jchar value )
{
  FIX::Message * pMessage = getCPPMessage( obj );
  setChar( pMessage->getTrailer(), field, value );
}

JNIEXPORT void JNICALL Java_org_quickfix_Message_setTrailerInt0
( JNIEnv *pEnv, jobject obj, jint field, jint value )
{
  FIX::Message * pMessage = getCPPMessage( obj );
  setInt( pMessage->getTrailer(), field, value );
}

JNIEXPORT void JNICALL Java_org_quickfix_Message_setTrailerDouble0
( JNIEnv *pEnv, jobject obj, jint field, jdouble value )
{
  FIX::Message * pMessage = getCPPMessage( obj );
  setDouble( pMessage->getTrailer(), field, value );
}

JNIEXPORT void JNICALL Java_org_quickfix_Message_setTrailerUtcTimeStamp0
( JNIEnv *pEnv, jobject obj, jint field, jobject value )
{
  JVM::set( pEnv );
  FIX::Message* pMessage = getCPPMessage( obj );
  setUtcTimeStamp( pMessage->getTrailer(), field, value );
}

JNIEXPORT void JNICALL Java_org_quickfix_Message_setTrailerUtcTimeOnly0
( JNIEnv *pEnv, jobject obj, jint field, jobject value )
{
  JVM::set( pEnv );
  FIX::Message* pMessage = getCPPMessage( obj );
  setUtcTimeOnly( pMessage->getTrailer(), field, value );
}

JNIEXPORT void JNICALL Java_org_quickfix_Message_setTrailerUtcDate0
( JNIEnv *pEnv, jobject obj, jint field, jobject value )
{
  JVM::set( pEnv );
  FIX::Message* pMessage = getCPPMessage( obj );
  setUtcDate( pMessage->getTrailer(), field, value );
}

JNIEXPORT jstring JNICALL Java_org_quickfix_Message_getTrailerString0
( JNIEnv *pEnv, jobject obj, jint field )
{
  JVM::set( pEnv );
  FIX::Message* pMessage = getCPPMessage( obj );
  return getString( pMessage->getTrailer(), field );
}

JNIEXPORT jboolean JNICALL Java_org_quickfix_Message_getTrailerBoolean0
( JNIEnv * pEnv, jobject obj, jint field )
{
  JVM::set( pEnv );
  FIX::Message* pMessage = getCPPMessage( obj );
  return getBoolean( pMessage->getTrailer(), field );
}

JNIEXPORT jchar JNICALL Java_org_quickfix_Message_getTrailerChar0
( JNIEnv *pEnv, jobject obj, jint field )
{
  JVM::set( pEnv );
  FIX::Message* pMessage = getCPPMessage( obj );
  return getChar( pMessage->getTrailer(), field );
}

JNIEXPORT jint JNICALL Java_org_quickfix_Message_getTrailerInt0
( JNIEnv *pEnv, jobject obj, jint field )
{
  JVM::set( pEnv );
  FIX::Message* pMessage = getCPPMessage( obj );
  return getInt( pMessage->getTrailer(), field );
}

JNIEXPORT jdouble JNICALL Java_org_quickfix_Message_getTrailerDouble0
( JNIEnv *pEnv, jobject obj, jint field )
{
  JVM::set( pEnv );
  FIX::Message* pMessage = getCPPMessage( obj );
  return getDouble( pMessage->getTrailer(), field );
}

JNIEXPORT jobject JNICALL Java_org_quickfix_Message_getTrailerUtcTimeStamp0
( JNIEnv *pEnv, jobject obj, jint field )
{
  JVM::set( pEnv );
  FIX::Message* pMessage = getCPPMessage( obj );
  jobject result = newUtcTimeStamp( pMessage->getTrailer(), field );
  return result;
}

JNIEXPORT jobject JNICALL Java_org_quickfix_Message_getTrailerUtcTimeOnly0
( JNIEnv *pEnv, jobject obj, jint field )
{
  JVM::set( pEnv );
  FIX::Message* pMessage = getCPPMessage( obj );
  jobject result = newUtcTimeOnly( pMessage->getTrailer(), field );
  return result;
}

JNIEXPORT jobject JNICALL Java_org_quickfix_Message_getTrailerUtcDate0
( JNIEnv *pEnv, jobject obj, jint field )
{
  JVM::set( pEnv );
  FIX::Message* pMessage = getCPPMessage( obj );
  jobject result = newUtcDate( pMessage->getTrailer(), field );
  return result;
}

JNIEXPORT jstring JNICALL Java_org_quickfix_Message_toString
( JNIEnv *pEnv, jobject obj )
{
  JVM::set( pEnv );
  JVMObject jobject( obj );
  FIX::Message* pMessage = ( FIX::Message* ) jobject.getInt( "cppPointer" );
  jstring result = newString( pMessage->toString() );
  return result;
}

JNIEXPORT jstring JNICALL Java_org_quickfix_Message_toXML
( JNIEnv *pEnv, jobject obj )
{
  JVM::set( pEnv );
  JVMObject jobject( obj );
  FIX::Message* pMessage = ( FIX::Message* ) jobject.getInt( "cppPointer" );
  jstring result = newString( pMessage->toXML() );
  return result;
}

JNIEXPORT void JNICALL Java_org_quickfix_Message_fromString
( JNIEnv *pEnv, jobject obj, jstring value, jboolean validate )
{
  JVM::set( pEnv );
  JVMObject jobject( obj );
  FIX::Message* pMessage = ( FIX::Message* ) jobject.getInt( "cppPointer" );

  const char* uvalue = ENV::get()->GetStringUTFChars( value, 0 );
  if ( !pMessage->setString( uvalue, validate ) )
  {
    throwNew( "Lorg/quickfix/InvalidMessage;", "Invalid Message" );
  }
  ENV::get()->ReleaseStringUTFChars( value, uvalue );
}
