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

#ifndef JAVA_CONVERSIONS
#define JAVA_CONVERSIONS

#include "JVM.h"
#include "quickfix/include/SessionID.h"
#include "quickfix/include/FieldTypes.h"
#include "quickfix/include/Message.h"
#include "quickfix/include/SessionSettings.h"
#include "JavaApplication.h"
#include "JavaMessageStoreFactory.h"
#include "JavaLogFactory.h"
#include <iostream>
#include <string>

inline bool throwNew( const char* name, const char* message )
{
  JNIEnv * pEnv = ENV::get();
  jclass exception = pEnv->FindClass( name );
  if ( exception == 0 ) return false;
  pEnv->ThrowNew( exception, message );
  return true;
}

inline jstring newString( const std::string string )
{
  jstring result = ENV::get() ->NewStringUTF( string.c_str() );
  if ( result == 0 ) throw std::logic_error( "malformed java string" );
  return result;
}

jobject newDate( const FIX::UtcTimeStamp& date );

inline jobject newSessionID( const FIX::SessionID& sessionID )
{
  JNIEnv * pEnv = ENV::get();
  JVMClass type( "Lorg/quickfix/SessionID;" );
  jmethodID method = pEnv->GetMethodID( type, "<init>", "(Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;)V" );
  
  jstring beginString = newString( sessionID.getBeginString().getValue() );
  jstring senderCompID = newString( sessionID.getSenderCompID().getValue() );
  jstring targetCompID = newString( sessionID.getTargetCompID().getValue() );
  jobject result = pEnv->NewObject( type, method, beginString, senderCompID, targetCompID );

  pEnv->DeleteLocalRef( beginString );
  pEnv->DeleteLocalRef( senderCompID );
  pEnv->DeleteLocalRef( targetCompID );
  return result;
}

inline jobject newMessage( const FIX::Message& message, JVMObject factory )
{
  JNIEnv * pEnv = ENV::get();
  FIX::BeginString beginString;
  FIX::MsgType msgType;

  jstring jBeginString;
  if ( message.getHeader().isSetField( beginString ) )
    jBeginString = newString( message.getHeader().getField( beginString ).getString() );
  else
    jBeginString = newString( "" );
  if ( jBeginString == 0 ) throw JVMException( "Could not create string" );

  jstring jMsgType;
  if ( message.getHeader().isSetField( msgType ) )
    jMsgType = newString( message.getHeader().getField( msgType ).getString() );
  else
    jMsgType = newString( "" );
  if ( jMsgType == 0 ) throw JVMException( "Could not create string" );

  JVMClass type( "Lorg/quickfix/MessageFactory;" );
  jmethodID method = pEnv->GetMethodID( type, "create",
                                        "(Ljava/lang/String;Ljava/lang/String;)Lorg/quickfix/Message;" );
  if ( method == 0 ) throw JVMException( "Could not find method create" );
  JVMObject result( pEnv->CallObjectMethod
                    ( factory, method, jBeginString, jMsgType ) );

  pEnv->DeleteLocalRef( jBeginString );
  pEnv->DeleteLocalRef( jMsgType );
  FIX::Message* pMessage = ( FIX::Message* ) result.getInt( "cppPointer" );
  *pMessage = message;
  return result;
}

inline jobject newMessage( const FIX::Message& message )
{
  JNIEnv * pEnv = ENV::get();
  FIX::BeginString beginString;
  FIX::MsgType msgType;

  JVMClass type( "Lorg/quickfix/Message;" );
  jmethodID method = pEnv->GetMethodID( type, "<init>", "()V" );
  if ( method == 0 ) throw JVMException( "Could not find method <init>" );

  JVMObject result( pEnv->NewObject( type, method ) );

  FIX::Message* pMessage = ( FIX::Message* ) result.getInt( "cppPointer" );
  *pMessage = message;
  return result;
}

inline void setString( FIX::FieldMap& map, jint field, jstring value )
{
  const char* uvalue = ENV::get()->GetStringUTFChars( value, 0 );
  map.setField( field, uvalue );
  ENV::get()->ReleaseStringUTFChars( value, uvalue );
}

inline void setBoolean( FIX::FieldMap& map, jint field, jboolean value )
{
  map.setField( field, FIX::BoolConvertor::convert( value ) );
}

inline void setChar( FIX::FieldMap& map, jint field, jchar value )
{
  map.setField( field, FIX::CharConvertor::convert( value ) );
}

inline void setInt( FIX::FieldMap& map, jint field, jint value )
{
  map.setField( field, FIX::IntConvertor::convert( value ) );
}

inline void setDouble( FIX::FieldMap& map, jint field, jdouble value )
{
  map.setField( field, FIX::DoubleConvertor::convert( value ) );
}

inline void setUtcTimeStamp( FIX::FieldMap& map, jint field, jobject value )
{
  JVMObject date( value );
  FIX::UtcTimeStamp timeStamp( date.callLongMethod( "getTime" ) / 1000 );
  map.setField( field, FIX::UtcTimeStampConvertor::convert( timeStamp ) );
}

inline void setUtcTimeOnly( FIX::FieldMap& map, jint field, jobject value )
{
  JVMObject date( value );
  FIX::UtcTimeOnly timeOnly( date.callLongMethod( "getTime" ) / 1000 );
  map.setField( field, FIX::UtcTimeOnlyConvertor::convert( timeOnly ) );
}

inline void setUtcDate( FIX::FieldMap& map, jint field, jobject value )
{
  JVMObject date( value );
  FIX::UtcDate utcDate( date.callLongMethod( "getTime" ) / 1000 );
  map.setField( field, FIX::UtcDateConvertor::convert( utcDate ) );
}

inline jstring getString( FIX::FieldMap& map, jint field )
{
  if ( map.isSetField( field ) )
  {
    jstring result = newString( map.getField( field ) );
    return result;
  }
  throwNew( "Lorg/quickfix/FieldNotFound;", FIX::IntConvertor::convert( field ).c_str() );
  return 0;
}

inline jboolean getBoolean( FIX::FieldMap& map, jint field )
{
  if ( map.isSetField( field ) ) return FIX::BoolConvertor::convert( map.getField( field ) );
  throwNew( "Lorg/quickfix/FieldNotFound;", FIX::IntConvertor::convert( field ).c_str() );
  return 0;
}

inline jchar getChar( FIX::FieldMap& map, jint field )
{
  if ( map.isSetField( field ) ) return FIX::CharConvertor::convert( map.getField( field ) );
  throwNew( "Lorg/quickfix/FieldNotFound;", FIX::IntConvertor::convert( field ).c_str() );
  return 0;
}

inline jint getInt( FIX::FieldMap& map, jint field )
{
  if ( map.isSetField( field ) ) return FIX::IntConvertor::convert( map.getField( field ) );
  throwNew( "Lorg/quickfix/FieldNotFound;", FIX::IntConvertor::convert( field ).c_str() );
  return 0;
}

inline jdouble getDouble( FIX::FieldMap& map, jint field )
{
  if ( map.isSetField( field ) ) return FIX::DoubleConvertor::convert( map.getField( field ) );
  throwNew( "Lorg/quickfix/FieldNotFound;", FIX::IntConvertor::convert( field ).c_str() );
  return 0;
}

inline jobject newUtcTimeStamp( FIX::FieldMap& map, jint field )
{
  if ( map.isSetField( field ) )
  {
    FIX::UtcTimeStamp timeStamp;
    timeStamp = FIX::UtcTimeStampConvertor::convert( map.getField( field ) );
    return newDate( timeStamp );
  }
  throwNew( "Lorg/quickfix/FieldNotFound;", FIX::IntConvertor::convert( field ).c_str() );
  return 0;
}

inline jobject newUtcTimeOnly( FIX::FieldMap& map, jint field )
{
  if ( map.isSetField( field ) )
  {
    FIX::UtcTimeOnly timeOnly;
    timeOnly = FIX::UtcTimeOnlyConvertor::convert( map.getField( field ) );
    FIX::UtcTimeStamp* p = reinterpret_cast < FIX::UtcTimeStamp* > ( &timeOnly );
    return newDate( *p );
  }
  throwNew( "Lorg/quickfix/FieldNotFound;", FIX::IntConvertor::convert( field ).c_str() );
  return 0;
}

inline jobject newUtcDate( FIX::FieldMap& map, jint field )
{
  if ( map.isSetField( field ) )
  {
    FIX::UtcDate utcDate;
    utcDate = FIX::UtcDateConvertor::convert( map.getField( field ) );
    FIX::UtcTimeStamp* p = reinterpret_cast < FIX::UtcTimeStamp* > ( &utcDate );
    return newDate( *p );
  }
  throwNew( "Lorg/quickfix/FieldNotFound;", FIX::IntConvertor::convert( field ).c_str() );
  return 0;
}

inline JavaApplication& createApplication( JVMObject& obj )
{
  return * new JavaApplication(
           obj.getObject( "application", "Lorg/quickfix/Application;" ),
           obj.getObject( "messageFactory", "Lorg/quickfix/MessageFactory;" ) );
}

inline JavaMessageStoreFactory& createFactory( JVMObject& obj )
{
  JVMObject jmessageStoreFactory = obj.getObject( "messageStoreFactory",
                                   "Lorg/quickfix/MessageStoreFactory;" );
  return *( new JavaMessageStoreFactory( jmessageStoreFactory ) );
}

inline JavaLogFactory& createLogFactory( JVMObject& obj )
{
  JVMObject jlogFactory = obj.getObject( "logFactory",
                                         "Lorg/quickfix/LogFactory;" );
  return *( new JavaLogFactory( jlogFactory ) );
}

inline FIX::SessionSettings& getSettings( JVMObject& obj )
{
  JVMObject jsettings = obj.getObject( "settings", "Lorg/quickfix/Settings;" );
  FIX::SessionSettings* pSettings
  = ( FIX::SessionSettings* ) jsettings.getInt( "cppPointer" );
  return *pSettings;
}

#endif
