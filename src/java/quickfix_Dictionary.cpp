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

#ifdef _MSC_VER
#include "stdafx.h"
#else
#include "config.h"
#endif

#ifdef HAVE_JAVA

#include "JVM.h"
#include "Conversions.h"
#include "quickfix_Dictionary.h"
#include <quickfix/Dictionary.h>

FIX::Dictionary* getCPPDictionary( jobject obj )
{
  JVMObject jobject( obj );
  return ( FIX::Dictionary* ) jobject.getLong( "cppPointer" );
}

JNIEXPORT void JNICALL Java_quickfix_Dictionary_create__Ljava_lang_String_2
( JNIEnv *pEnv, jobject obj, jstring name )
{ QF_STACK_TRY

  if( isNullAndThrow(name) ) return;

  JVM::set( pEnv );

  JVMObject jobject( obj );

  const char* uname = pEnv->GetStringUTFChars( name, 0 );
  FIX::Dictionary* pDictionary = new FIX::Dictionary( uname );
  jobject.setLong( "cppPointer", ( long ) pDictionary );
  pEnv->ReleaseStringUTFChars( name, uname );

  QF_STACK_CATCH
}

JNIEXPORT void JNICALL Java_quickfix_Dictionary_create__
( JNIEnv *pEnv, jobject obj )
{ QF_STACK_TRY

  JVM::set( pEnv );

  JVMObject jobject( obj );


  FIX::Dictionary* pDictionary = new FIX::Dictionary();
  jobject.setLong( "cppPointer", ( long ) pDictionary );

  QF_STACK_CATCH
}

JNIEXPORT void JNICALL Java_quickfix_Dictionary_create__Lquickfix_Dictionary_2
( JNIEnv *pEnv, jobject obj, jobject dictionary )
{ QF_STACK_TRY

  JVM::set( pEnv );

  JVMObject jobject( obj );

  FIX::Dictionary* copy = getCPPDictionary( dictionary );
  FIX::Dictionary* pDictionary = new FIX::Dictionary( *copy );
  jobject.setLong( "cppPointer", ( long ) pDictionary );

  QF_STACK_CATCH
}

JNIEXPORT void JNICALL Java_quickfix_Dictionary_destroy
( JNIEnv *pEnv, jobject obj )
{ QF_STACK_TRY
  delete getCPPDictionary( obj );
  QF_STACK_CATCH
}

JNIEXPORT jstring JNICALL Java_quickfix_Dictionary_getName
( JNIEnv *pEnv, jobject obj )
{ QF_STACK_TRY

  JVM::set( pEnv );

  FIX::Dictionary* pDictionary = getCPPDictionary( obj );
  std::string result = pDictionary->getName();
  return newString( result );

  QF_STACK_CATCH
}

JNIEXPORT jint JNICALL Java_quickfix_Dictionary_size
( JNIEnv *pEnv, jobject obj )
{ QF_STACK_TRY

  JVM::set( pEnv );
  
  FIX::Dictionary* pDictionary = getCPPDictionary( obj );
  return pDictionary->size();
  
  QF_STACK_CATCH
}

JNIEXPORT jstring JNICALL Java_quickfix_Dictionary_getString__Ljava_lang_String_2
( JNIEnv *pEnv, jobject obj, jstring key )
{ QF_STACK_TRY

  JVM::set( pEnv );

  const char* ukey = pEnv->GetStringUTFChars( key, 0 );

  try
  {
    FIX::Dictionary* pDictionary = getCPPDictionary( obj );
    std::string result = pDictionary->getString( ukey );
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

JNIEXPORT jstring JNICALL Java_quickfix_Dictionary_getString__Ljava_lang_String_2Z
( JNIEnv *pEnv, jobject obj, jstring key, jboolean capitalize )
{ QF_STACK_TRY

  JVM::set( pEnv );

  const char* ukey = pEnv->GetStringUTFChars( key, 0 );

  try
  {
    FIX::Dictionary* pDictionary = getCPPDictionary( obj );
    std::string result = pDictionary->getString( ukey, capitalize );
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

JNIEXPORT jlong JNICALL Java_quickfix_Dictionary_getLong
( JNIEnv *pEnv, jobject obj, jstring key )
{ QF_STACK_TRY

  JVM::set( pEnv );

  const char* ukey = pEnv->GetStringUTFChars( key, 0 );

  try
  {
    FIX::Dictionary* pDictionary = getCPPDictionary( obj );
    long result = pDictionary->getLong( ukey );
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

JNIEXPORT jdouble JNICALL Java_quickfix_Dictionary_getDouble
( JNIEnv *pEnv, jobject obj, jstring key )
{ QF_STACK_TRY

  JVM::set( pEnv );

  const char* ukey = pEnv->GetStringUTFChars( key, 0 );

  try
  {
    FIX::Dictionary* pDictionary = getCPPDictionary( obj );
    double result = pDictionary->getDouble( ukey );
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

JNIEXPORT jboolean JNICALL Java_quickfix_Dictionary_getBool
( JNIEnv *pEnv, jobject obj, jstring key )
{ QF_STACK_TRY

  JVM::set( pEnv );

  const char* ukey = pEnv->GetStringUTFChars( key, 0 );

  try
  {
    FIX::Dictionary* pDictionary = getCPPDictionary( obj );
    bool result = pDictionary->getBool( ukey );
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

JNIEXPORT jint JNICALL Java_quickfix_Dictionary_getDay
( JNIEnv *pEnv, jobject obj, jstring key )
{ QF_STACK_TRY

  JVM::set( pEnv );

  const char* ukey = pEnv->GetStringUTFChars( key, 0 );

  try
  {
    FIX::Dictionary* pDictionary = getCPPDictionary( obj );
    int result = pDictionary->getDay( ukey );
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

JNIEXPORT void JNICALL Java_quickfix_Dictionary_setString
( JNIEnv *pEnv, jobject obj, jstring key, jstring value )
{ QF_STACK_TRY

  JVM::set( pEnv );

  const char* ukey = pEnv->GetStringUTFChars( key, 0 );
  const char* uvalue = pEnv->GetStringUTFChars( value, 0 );

  FIX::Dictionary* pDictionary = getCPPDictionary( obj );
  pDictionary->setString( ukey, uvalue );
  pEnv->ReleaseStringUTFChars( key, ukey );
  pEnv->ReleaseStringUTFChars( value, uvalue );

  QF_STACK_CATCH
}

JNIEXPORT void JNICALL Java_quickfix_Dictionary_setLong
( JNIEnv *pEnv, jobject obj, jstring key, jlong value )
{ QF_STACK_TRY

  JVM::set( pEnv );

  const char* ukey = pEnv->GetStringUTFChars( key, 0 );

  FIX::Dictionary* pDictionary = getCPPDictionary( obj );
  pDictionary->setLong( ukey, value );
  pEnv->ReleaseStringUTFChars( key, ukey );

  QF_STACK_CATCH
}

JNIEXPORT void JNICALL Java_quickfix_Dictionary_setDouble
( JNIEnv *pEnv, jobject obj, jstring key, jdouble value )
{ QF_STACK_TRY

  JVM::set( pEnv );

  const char* ukey = pEnv->GetStringUTFChars( key, 0 );

  FIX::Dictionary* pDictionary = getCPPDictionary( obj );
  pDictionary->setDouble( ukey, value );
  pEnv->ReleaseStringUTFChars( key, ukey );

  QF_STACK_CATCH
}

JNIEXPORT void JNICALL Java_quickfix_Dictionary_setBool
( JNIEnv *pEnv, jobject obj, jstring key, jboolean value )
{ QF_STACK_TRY

  JVM::set( pEnv );

  const char* ukey = pEnv->GetStringUTFChars( key, 0 );

  FIX::Dictionary* pDictionary = getCPPDictionary( obj );
  pDictionary->setBool( ukey, value );
  pEnv->ReleaseStringUTFChars( key, ukey );

  QF_STACK_CATCH
}

JNIEXPORT void JNICALL Java_quickfix_Dictionary_setDay
( JNIEnv *pEnv, jobject obj, jstring key, jint value )
{ QF_STACK_TRY

  JVM::set( pEnv );

  const char* ukey = pEnv->GetStringUTFChars( key, 0 );

  FIX::Dictionary* pDictionary = getCPPDictionary( obj );
  pDictionary->setDay( ukey, value );
  pEnv->ReleaseStringUTFChars( key, ukey );

  QF_STACK_CATCH
}

JNIEXPORT jboolean JNICALL Java_quickfix_Dictionary_has
( JNIEnv *pEnv, jobject obj, jstring key )
{ QF_STACK_TRY

  JVM::set( pEnv );

  const char* ukey = pEnv->GetStringUTFChars( key, 0 );

  FIX::Dictionary* pDictionary = getCPPDictionary( obj );
  bool result = pDictionary->has( ukey );
  pEnv->ReleaseStringUTFChars( key, ukey );
  return result;

  QF_STACK_CATCH
}

JNIEXPORT void JNICALL Java_quickfix_Dictionary_merge
( JNIEnv *pEnv, jobject obj, jstring toMerge )
{ QF_STACK_TRY

  JVM::set( pEnv );

  FIX::Dictionary* pToMerge = getCPPDictionary( toMerge );
  FIX::Dictionary* pDictionary = getCPPDictionary( obj );
  pDictionary->merge( *pToMerge );

  QF_STACK_CATCH
}

#endif
