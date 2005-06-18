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
#include "Conversions.h"
#include "quickfix_DataDictionary.h"
#include <quickfix/DataDictionary.h>
#include <quickfix/CallStack.h>
#include <string>

JNIEXPORT void JNICALL Java_quickfix_DataDictionary_create__
( JNIEnv *pEnv, jobject obj )
{ QF_STACK_TRY

  JVM::set( pEnv );
  JVMObject jobject( obj );

  FIX::DataDictionary* pDataDictionary = new FIX::DataDictionary();

  jobject.setInt( "cppPointer", ( int ) pDataDictionary );

  QF_STACK_CATCH
}

JNIEXPORT void JNICALL Java_quickfix_DataDictionary_create__Lquickfix_DataDictionary_2
( JNIEnv *pEnv, jobject obj, jobject dd )
{ QF_STACK_TRY

  if( isNullAndThrow(dd) ) return;

  JVM::set( pEnv );
  JVMObject jobject( obj );
  JVMObject jdd( dd );

  FIX::DataDictionary* pOldDataDictionary =
    ( FIX::DataDictionary* ) jdd.getInt( "cppPointer" );
  FIX::DataDictionary* pDataDictionary = new FIX::DataDictionary( *pOldDataDictionary );

  jobject.setInt( "cppPointer", ( int ) pDataDictionary );

  QF_STACK_CATCH
}

JNIEXPORT void JNICALL Java_quickfix_DataDictionary_create__Ljava_lang_String_2
( JNIEnv *pEnv, jobject obj, jstring url )
{ QF_STACK_TRY

  if( isNullAndThrow(url) ) return;

  JVM::set( pEnv );
  JVMObject jobject( obj );

  const char* uurl = pEnv->GetStringUTFChars( url, 0 );
  std::string urlString( uurl );
  pEnv->ReleaseStringUTFChars( url, uurl );

  FIX::DataDictionary* pDataDictionary = new FIX::DataDictionary( urlString );

  jobject.setInt( "cppPointer", ( int ) pDataDictionary );

  QF_STACK_CATCH
}

JNIEXPORT void JNICALL Java_quickfix_DataDictionary_destroy
( JNIEnv *pEnv, jobject obj )
{ QF_STACK_TRY

  JVM::set( pEnv );
  JVMObject jobject( obj );
  FIX::DataDictionary* pDataDictionary = ( FIX::DataDictionary* ) jobject.getInt( "cppPointer" );
  delete pDataDictionary;

  QF_STACK_CATCH
}

JNIEXPORT jstring JNICALL Java_quickfix_DataDictionary_getVersion
( JNIEnv *pEnv, jobject obj )
{ QF_STACK_TRY

  JVM::set( pEnv );
  JVMObject jobject( obj );
  FIX::DataDictionary* pDataDictionary = ( FIX::DataDictionary* ) jobject.getInt( "cppPointer" );
  jstring result = newString( pDataDictionary->getVersion() );
  return result;

  QF_STACK_CATCH
}

JNIEXPORT jstring JNICALL Java_quickfix_DataDictionary_getFieldName
( JNIEnv *pEnv, jobject obj, jint field )
{ QF_STACK_TRY

  JVM::set( pEnv );
  JVMObject jobject( obj );
  FIX::DataDictionary* pDataDictionary = ( FIX::DataDictionary* ) jobject.getInt( "cppPointer" );
  std::string nameString;
  bool result = pDataDictionary->getFieldName(field, nameString);
  return result ? newString(nameString) : 0;

  QF_STACK_CATCH
}

JNIEXPORT jstring JNICALL Java_quickfix_DataDictionary_getValueName
( JNIEnv *pEnv, jobject obj, jint field, jstring value )
{ QF_STACK_TRY

  if( isNullAndThrow(value) ) return 0;

  JVM::set( pEnv );
  JVMObject jobject( obj );
  FIX::DataDictionary* pDataDictionary = ( FIX::DataDictionary* ) jobject.getInt( "cppPointer" );
  const char* uvalue = pEnv->GetStringUTFChars( value, 0 );
  std::string valueString( uvalue );
  pEnv->ReleaseStringUTFChars( value, uvalue );
  std::string nameString;
  bool result = pDataDictionary->getValueName( field, valueString, nameString );
  return result ? newString(nameString) : 0;

  QF_STACK_CATCH
}

JNIEXPORT jboolean JNICALL Java_quickfix_DataDictionary_isField
( JNIEnv *pEnv, jobject obj, jint field )
{ QF_STACK_TRY

  JVM::set( pEnv );
  JVMObject jobject( obj );
  FIX::DataDictionary* pDataDictionary = ( FIX::DataDictionary* ) jobject.getInt( "cppPointer" );
  return pDataDictionary->isField( field );

  QF_STACK_CATCH
}

JNIEXPORT jboolean JNICALL Java_quickfix_DataDictionary_isMsgType
( JNIEnv *pEnv, jobject obj, jstring msgType )
{ QF_STACK_TRY

  if( isNullAndThrow(msgType) ) return false;

  JVM::set( pEnv );
  JVMObject jobject( obj );
  FIX::DataDictionary* pDataDictionary = ( FIX::DataDictionary* ) jobject.getInt( "cppPointer" );
  const char* umsgType = pEnv->GetStringUTFChars( msgType, 0 );
  std::string msgTypeString( umsgType );
  pEnv->ReleaseStringUTFChars( msgType, umsgType );
  return pDataDictionary->isMsgType( msgTypeString );

  QF_STACK_CATCH
}

JNIEXPORT jboolean JNICALL Java_quickfix_DataDictionary_isMsgField
( JNIEnv *pEnv, jobject obj, jstring msgType, jint field )
{ QF_STACK_TRY

  if( isNullAndThrow(msgType) ) return false;

  JVM::set( pEnv );
  JVMObject jobject( obj );
  FIX::DataDictionary* pDataDictionary = ( FIX::DataDictionary* ) jobject.getInt( "cppPointer" );
  const char* umsgType = pEnv->GetStringUTFChars( msgType, 0 );
  std::string msgTypeString( umsgType );
  pEnv->ReleaseStringUTFChars( msgType, umsgType );
  return pDataDictionary->isMsgField( msgTypeString, field );

  QF_STACK_CATCH
}

JNIEXPORT jboolean JNICALL Java_quickfix_DataDictionary_isHeaderField
( JNIEnv *pEnv, jobject obj, jint field )
{ QF_STACK_TRY

  JVM::set( pEnv );
  JVMObject jobject( obj );
  FIX::DataDictionary* pDataDictionary = ( FIX::DataDictionary* ) jobject.getInt( "cppPointer" );
  return pDataDictionary->isHeaderField( field );

  QF_STACK_CATCH
}

JNIEXPORT jboolean JNICALL Java_quickfix_DataDictionary_isTrailerField
( JNIEnv *pEnv, jobject obj, jint field )
{ QF_STACK_TRY

  JVM::set( pEnv );
  JVMObject jobject( obj );
  FIX::DataDictionary* pDataDictionary = ( FIX::DataDictionary* ) jobject.getInt( "cppPointer" );
  return pDataDictionary->isTrailerField( field );

  QF_STACK_CATCH
}

JNIEXPORT jboolean JNICALL Java_quickfix_DataDictionary_isRequiredField
( JNIEnv *pEnv, jobject obj, jstring msgType, jint field )
{ QF_STACK_TRY

  if( isNullAndThrow(msgType) ) return false;

  JVM::set( pEnv );
  JVMObject jobject( obj );
  FIX::DataDictionary* pDataDictionary = ( FIX::DataDictionary* ) jobject.getInt( "cppPointer" );
  const char* umsgType = pEnv->GetStringUTFChars( msgType, 0 );
  std::string msgTypeString( umsgType );
  pEnv->ReleaseStringUTFChars( msgType, umsgType );
  return pDataDictionary->isRequiredField( msgTypeString, field );

  QF_STACK_CATCH
}

JNIEXPORT jboolean JNICALL Java_quickfix_DataDictionary_hasFieldValue
( JNIEnv *pEnv, jobject obj, jint field )
{ QF_STACK_TRY

  JVM::set( pEnv );
  JVMObject jobject( obj );
  FIX::DataDictionary* pDataDictionary = ( FIX::DataDictionary* ) jobject.getInt( "cppPointer" );
  return pDataDictionary->hasFieldValue( field );

  QF_STACK_CATCH
}

JNIEXPORT jboolean JNICALL Java_quickfix_DataDictionary_isFieldValue
( JNIEnv *pEnv, jobject obj, jint field, jstring value )
{ QF_STACK_TRY

  if( isNullAndThrow(value) ) return false;

  JVM::set( pEnv );
  JVMObject jobject( obj );
  FIX::DataDictionary* pDataDictionary = ( FIX::DataDictionary* ) jobject.getInt( "cppPointer" );
  const char* uvalue = pEnv->GetStringUTFChars( value, 0 );
  std::string valueString( uvalue );
  pEnv->ReleaseStringUTFChars( value, uvalue );
  return pDataDictionary->isFieldValue( field, valueString );

  QF_STACK_CATCH
}

JNIEXPORT jboolean JNICALL Java_quickfix_DataDictionary_isGroup
( JNIEnv *pEnv, jobject obj, jstring msg, jint group )
{ QF_STACK_TRY

  if( isNullAndThrow(msg) ) return false;

  JVM::set( pEnv );
  JVMObject jobject( obj );
  FIX::DataDictionary* pDataDictionary = ( FIX::DataDictionary* ) jobject.getInt( "cppPointer" );
  const char* umsg = pEnv->GetStringUTFChars( msg, 0 );
  std::string msgString( umsg );
  pEnv->ReleaseStringUTFChars( msg, umsg );
  return pDataDictionary->isGroup( msgString, group );

  QF_STACK_CATCH
}

JNIEXPORT jint JNICALL Java_quickfix_DataDictionary_getFieldType
( JNIEnv *pEnv, jobject obj, jint field )
{ QF_STACK_TRY

  JVM::set( pEnv );
  JVMObject jobject( obj );
  FIX::DataDictionary* pDataDictionary = ( FIX::DataDictionary* ) jobject.getInt( "cppPointer" );
  FIX::TYPE::Type type;
  bool result = pDataDictionary->getFieldType( field, type );
  if( result ) return type;
  return FIX::TYPE::Unknown;
  QF_STACK_CATCH
}
