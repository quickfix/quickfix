/* -*- C++ -*- */

/****************************************************************************
** Copyright (c) quickfixengine.org  All rights reserved.
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

#ifndef JAVA_CONVERSIONS
#define JAVA_CONVERSIONS

#include "JVM.h"
#include <quickfix/SessionID.h>
#include <quickfix/FieldTypes.h>
#include <quickfix/Message.h>
#include <quickfix/SessionSettings.h>
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
  pEnv->DeleteLocalRef( exception );
  return true;
}

inline jstring newString( const std::string string )
{
  jstring result = ENV::get() ->NewStringUTF( string.c_str() );
  if ( result == 0 ) throw std::logic_error( "malformed java string" );
  return result;
}

inline jobject newArrayList()
{
  JNIEnv * pEnv = ENV::get();
  JVMClass type( ARRAYLIST_TYPE );
  jmethodID method = pEnv->GetMethodID( type, "<init>", "()V" );
  jobject result = pEnv->NewObject( type, method );
  return result;
}

inline bool isNull( jobject obj )
{
  return obj == 0;
}

inline bool isNullAndThrow( jobject obj )
{
  bool result = isNull( obj );
  if( result )
    throwNew( "Ljava/lang/NullPointerException;", "" );
  return result;
}

jobject newDate( const FIX::UtcTimeStamp& date );

inline jobject newSessionID( const FIX::SessionID& sessionID )
{
  JNIEnv * pEnv = ENV::get();
  JVMClass type( "Lquickfix/SessionID;" );
  jmethodID method = pEnv->GetMethodID( type, "<init>", "(Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;)V" );

  jstring beginString = newString( sessionID.getBeginString().getValue() );
  jstring senderCompID = newString( sessionID.getSenderCompID().getValue() );
  jstring targetCompID = newString( sessionID.getTargetCompID().getValue() );
  jstring qualifier = newString( sessionID.getSessionQualifier() );
  jobject result = pEnv->NewObject( type, method, beginString, senderCompID, targetCompID, qualifier );

  pEnv->DeleteLocalRef( beginString );
  pEnv->DeleteLocalRef( senderCompID );
  pEnv->DeleteLocalRef( targetCompID );
  pEnv->DeleteLocalRef( qualifier );
  return result;
}

inline jobject newDataDictionary( const FIX::DataDictionary& dataDictionary )
{
  JNIEnv * pEnv = ENV::get();
  JVMClass type( "Lquickfix/DataDictionary;" );
  jmethodID method = pEnv->GetMethodID( type, "<init>", "(J)V" );

  FIX::DataDictionary* pDataDictionary = new FIX::DataDictionary( dataDictionary );
  jobject result = pEnv->NewObject( type, method, pDataDictionary );

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

  JVMClass type( "Lquickfix/MessageFactory;" );
  jmethodID method = pEnv->GetMethodID( type, "create",
                                        "(Ljava/lang/String;Ljava/lang/String;)Lquickfix/Message;" );
  if ( method == 0 ) throw JVMException( "Could not find method create" );
  JVMObject result( pEnv->CallObjectMethod
                    ( factory, method, jBeginString, jMsgType ) );

  pEnv->DeleteLocalRef( jBeginString );
  pEnv->DeleteLocalRef( jMsgType );
  FIX::Message* pMessage = ( FIX::Message* ) result.getLong( "cppPointer" );
  *pMessage = message;
  return result;
}

inline jobject newMessage( const FIX::Message& message )
{
  JNIEnv * pEnv = ENV::get();
  FIX::BeginString beginString;
  FIX::MsgType msgType;

  JVMClass type( "Lquickfix/Message;" );
  jmethodID method = pEnv->GetMethodID( type, "<init>", "()V" );
  if ( method == 0 ) throw JVMException( "Could not find method <init>" );

  JVMObject result( pEnv->NewObject( type, method ) );

  FIX::Message* pMessage = ( FIX::Message* ) result.getLong( "cppPointer" );
  *pMessage = message;
  return result;
}

inline jobject newField( const FIX::FieldBase& field )
{
  JNIEnv * pEnv = ENV::get();
  JVMClass type( "Lquickfix/StringField;" );
  jmethodID method = pEnv->GetMethodID( type, "<init>", "(ILjava/lang/String;)V" );
  if ( method == 0 ) throw JVMException( "Could not find method <init>" );

  jstring jValue = newString( field.getString() );
  JVMObject result( pEnv->NewObject( type, method, field.getField(), jValue ) );
  pEnv->DeleteLocalRef( jValue );
  return result;
}

inline jobject newDictionary( const FIX::Dictionary& dictionary )
{
  JNIEnv * pEnv = ENV::get();
  JVMClass type( "Lquickfix/Dictionary;" );
  jmethodID method = pEnv->GetMethodID( type, "<init>", "()V" );
  if( method == 0 ) throw JVMException( "Could not find method <init>" );

  JVMObject result( pEnv->NewObject( type, method ) );
  FIX::Dictionary* pDictionary = ( FIX::Dictionary* ) result.getLong( "cppPointer" );
  *pDictionary = dictionary;
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

inline void setDouble( FIX::FieldMap& map, jint field, jdouble value, jint padding )
{
	map.setField( field, FIX::DoubleConvertor::convert( value, padding ) );
}

inline void setUtcTimeStamp( FIX::FieldMap& map, jint field, jobject value, bool showMilliseconds )
{
  JVMObject date( value );
  FIX::UtcTimeStamp timeStamp( date.callLongMethod( "getTime" ) / 1000, showMilliseconds );
  map.setField( field, FIX::UtcTimeStampConvertor::convert( timeStamp ) );
}

inline void setUtcTimeOnly( FIX::FieldMap& map, jint field, jobject value, bool showMilliseconds )
{
  JVMObject date( value );
  FIX::UtcTimeOnly timeOnly( date.callLongMethod( "getTime" ) / 1000, showMilliseconds );
  map.setField( field, FIX::UtcTimeOnlyConvertor::convert( timeOnly ) );
}

inline void setUtcDateOnly( FIX::FieldMap& map, jint field, jobject value )
{
  JVMObject date( value );
  FIX::UtcDateOnly dateOnly( date.callLongMethod( "getTime" ) / 1000 );
  map.setField( field, FIX::UtcDateOnlyConvertor::convert( dateOnly ) );
}

inline jstring getString( FIX::FieldMap& map, jint field )
{
  try { return newString( map.getField( field ) ); }
  catch( FIX::FieldNotFound& e )
  { throwNew( "Lquickfix/FieldNotFound;", FIX::IntConvertor::convert( field ).c_str() ); }
  return 0;
}

inline jboolean getBoolean( FIX::FieldMap& map, jint field )
{
  try { return FIX::BoolConvertor::convert( map.getField( field ) ); }
  catch( FIX::FieldNotFound& e )
  { throwNew( "Lquickfix/FieldNotFound;", FIX::IntConvertor::convert( field ).c_str() ); }
  catch( FIX::FieldConvertError& e )
  { throwNew( "Lquickfix/IncorrectDataFormat;", FIX::IntConvertor::convert( field ).c_str() ); }
  return 0;
}

inline jchar getChar( FIX::FieldMap& map, jint field )
{
  try { return FIX::CharConvertor::convert( map.getField( field ) ); }
  catch( FIX::FieldNotFound& e )
  { throwNew( "Lquickfix/FieldNotFound;", FIX::IntConvertor::convert( field ).c_str() ); }
  catch( FIX::FieldConvertError& e )
  { throwNew( "Lquickfix/IncorrectDataFormat;", FIX::IntConvertor::convert( field ).c_str() ); }
  return 0;
}

inline jint getInt( FIX::FieldMap& map, jint field )
{
  try { return FIX::IntConvertor::convert( map.getField( field ) ); }
  catch( FIX::FieldNotFound& e )
  { throwNew( "Lquickfix/FieldNotFound;", FIX::IntConvertor::convert( field ).c_str() ); }
  catch( FIX::FieldConvertError& e )
  { throwNew( "Lquickfix/IncorrectDataFormat;", FIX::IntConvertor::convert( field ).c_str() ); }
  return 0;
}

inline jdouble getDouble( FIX::FieldMap& map, jint field )
{
  try { return FIX::DoubleConvertor::convert( map.getField( field ) ); }
  catch( FIX::FieldNotFound& e )
  { throwNew( "Lquickfix/FieldNotFound;", FIX::IntConvertor::convert( field ).c_str() ); }
  catch( FIX::FieldConvertError& e )
  { throwNew( "Lquickfix/IncorrectDataFormat;", FIX::IntConvertor::convert( field ).c_str() ); }
  return 0;
}

inline jobject newUtcTimeStamp( FIX::FieldMap& map, jint field )
{
  try
  {
    FIX::UtcTimeStamp timeStamp;
    timeStamp = FIX::UtcTimeStampConvertor::convert( map.getField( field ) );
    return newDate( timeStamp );
  }
  catch( FIX::FieldNotFound& e )
  { throwNew( "Lquickfix/FieldNotFound;", FIX::IntConvertor::convert( field ).c_str() ); }
  catch( FIX::FieldConvertError& e )
  { throwNew( "Lquickfix/IncorrectDataFormat;", FIX::IntConvertor::convert( field ).c_str() ); }
  return 0;
}

inline jobject newUtcTimeOnly( FIX::FieldMap& map, jint field )
{
  try
  {
    FIX::UtcTimeOnly timeOnly;
    timeOnly = FIX::UtcTimeOnlyConvertor::convert( map.getField( field ) );
    FIX::UtcTimeStamp* p = reinterpret_cast < FIX::UtcTimeStamp* > ( &timeOnly );
    return newDate( *p );
  }
  catch( FIX::FieldNotFound& e )
  { throwNew( "Lquickfix/FieldNotFound;", FIX::IntConvertor::convert( field ).c_str() ); }
  catch( FIX::FieldConvertError& e )
  { throwNew( "Lquickfix/IncorrectDataFormat;", FIX::IntConvertor::convert( field ).c_str() ); }
  return 0;
}

inline jobject newUtcDateOnly( FIX::FieldMap& map, jint field )
{
  try
  {
    FIX::UtcDateOnly dateOnly;
    dateOnly = FIX::UtcDateOnlyConvertor::convert( map.getField( field ) );
    FIX::UtcTimeStamp* p = reinterpret_cast < FIX::UtcTimeStamp* > ( &dateOnly );
    return newDate( *p );
  }
  catch( FIX::FieldNotFound& e )
  { throwNew( "Lquickfix/FieldNotFound;", FIX::IntConvertor::convert( field ).c_str() ); }
  catch( FIX::FieldConvertError& e )
  { throwNew( "Lquickfix/IncorrectDataFormat;", FIX::IntConvertor::convert( field ).c_str() ); }
  return 0;
}

inline JavaApplication& createApplication( JVMObject& obj )
{
  return * new JavaApplication(
           obj.getObject( "application", "Lquickfix/Application;" ),
           obj.getObject( "messageFactory", "Lquickfix/MessageFactory;" ) );
}

inline JavaMessageStoreFactory& createFactory( JVMObject& obj )
{
  JVMObject jmessageStoreFactory = obj.getObject( "messageStoreFactory",
                                   "Lquickfix/MessageStoreFactory;" );
  return *( new JavaMessageStoreFactory( jmessageStoreFactory ) );
}

inline JavaLogFactory& createLogFactory( JVMObject& obj )
{
  JVMObject jlogFactory = obj.getObject( "logFactory",
                                         "Lquickfix/LogFactory;" );
  return *( new JavaLogFactory( jlogFactory ) );
}

inline FIX::SessionSettings& getSettings( JVMObject& obj )
{
  JVMObject jsettings = obj.getObject( "settings", "Lquickfix/SessionSettings;" );
  FIX::SessionSettings* pSettings
  = ( FIX::SessionSettings* ) jsettings.getLong( "cppPointer" );
  return *pSettings;
}

#endif
