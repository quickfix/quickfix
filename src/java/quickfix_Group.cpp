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
#include "quickfix_Group.h"
#include <quickfix/Utility.h>
#include <quickfix/Group.h>
#include <quickfix/CallStack.h>
#include "Conversions.h"
#include <iostream>

FIX::Group* getCPPGroup( jobject obj )
{
  JVMObject jobject( obj );
  return ( FIX::Group* ) jobject.getLong( "cppPointer" );
}

JNIEXPORT void JNICALL Java_quickfix_Group_create__II
( JNIEnv *pEnv, jobject obj, jint field, jint delim )
{ QF_STACK_TRY

  JVM::set( pEnv );
  JVMObject jobject( obj );
  FIX::Group* pGroup = new FIX::Group( field, delim );
  jobject.setLong( "cppPointer", ( long ) pGroup );

  QF_STACK_CATCH
}

JNIEXPORT void JNICALL Java_quickfix_Group_create__II_3I
(JNIEnv *pEnv, jobject obj, jint field, jint delim, jintArray array)
{ QF_STACK_TRY

  JVM::set( pEnv );
  JVMObject jobject( obj );
  jsize size = pEnv->GetArrayLength(array);
  jint *body = pEnv->GetIntArrayElements(array, 0);
  int* carray = new int[ size + 1 ];
  memcpy(carray, body, size * sizeof(int));
  FIX::Group* pGroup = new FIX::Group( field, delim, carray );
  jobject.setLong( "cppPointer", ( long ) pGroup );
  delete [] carray;
  pEnv->ReleaseIntArrayElements(array, body, 0);

  QF_STACK_CATCH
}

JNIEXPORT void JNICALL Java_quickfix_Group_destroy
( JNIEnv *pEnv, jobject obj )
{ QF_STACK_TRY
  delete getCPPGroup( obj );
  QF_STACK_CATCH
}

JNIEXPORT void JNICALL Java_quickfix_Group_addGroup
( JNIEnv *pEnv, jobject obj, jobject group )
{ QF_STACK_TRY

  if( isNullAndThrow(group) ) return;

  JVM::set( pEnv );
  FIX::Group* pThis = getCPPGroup( obj );
  FIX::Group* pGroup = getCPPGroup( group );
  pThis->addGroup( *pGroup );

  QF_STACK_CATCH
}

JNIEXPORT jobject JNICALL Java_quickfix_Group_getGroup
( JNIEnv *pEnv, jobject obj, jint num, jobject group )
{ QF_STACK_TRY

  if( isNullAndThrow(group) ) return 0;

  JVM::set( pEnv );
  FIX::Group* pThis = getCPPGroup( obj );
  FIX::Group* pGroup = getCPPGroup( group );

  try
  {
    pThis->getGroup( num, *pGroup );
    return group;
  }
  catch( FIX::FieldNotFound& e )
  {
    throwNew( "Lquickfix/FieldNotFound;", FIX::IntConvertor::convert( e.field ).c_str() );
    return 0;
  }

  QF_STACK_CATCH
}

JNIEXPORT void JNICALL Java_quickfix_Group_setString
( JNIEnv *pEnv, jobject obj, jint field, jstring value )
{ QF_STACK_TRY

  if( isNullAndThrow(value) ) return;

  JVM::set( pEnv );
  FIX::Group* pGroup = getCPPGroup( obj );
  setString( *pGroup, field, value );

  QF_STACK_CATCH
}

JNIEXPORT void JNICALL Java_quickfix_Group_setBoolean
( JNIEnv *pEnv, jobject obj, jint field, jboolean value )
{ QF_STACK_TRY

  FIX::Group * pGroup = getCPPGroup( obj );
  setBoolean( *pGroup, field, value );

  QF_STACK_CATCH
}

JNIEXPORT void JNICALL Java_quickfix_Group_setChar
( JNIEnv *pEnv, jobject obj, jint field, jchar value )
{ QF_STACK_TRY

  FIX::Group * pGroup = getCPPGroup( obj );
  setChar( *pGroup, field, value );

  QF_STACK_CATCH
}

JNIEXPORT void JNICALL Java_quickfix_Group_setInt
( JNIEnv *pEnv, jobject obj, jint field, jint value )
{ QF_STACK_TRY

  FIX::Group * pGroup = getCPPGroup( obj );
  setInt( *pGroup, field, value );

  QF_STACK_CATCH
}

JNIEXPORT void JNICALL Java_quickfix_Group_setDouble
( JNIEnv *pEnv, jobject obj, jint field, jdouble value )
{ QF_STACK_TRY

  FIX::Group * pGroup = getCPPGroup( obj );
  setDouble( *pGroup, field, value );

  QF_STACK_CATCH
}

JNIEXPORT void JNICALL Java_quickfix_Group_setUtcTimeStamp__ILjava_util_Date_2
( JNIEnv *pEnv, jobject obj, jint field, jobject value )
{ QF_STACK_TRY

  if( isNullAndThrow(value) ) return;

  JVM::set( pEnv );
  FIX::Group* pGroup = getCPPGroup( obj );
  setUtcTimeStamp( *pGroup, field, value, false );

  QF_STACK_CATCH
}

JNIEXPORT void JNICALL Java_quickfix_Group_setUtcTimeStamp__ILjava_util_Date_2Z
( JNIEnv *pEnv, jobject obj, jint field, jobject value, jboolean showMilliseconds )
{ QF_STACK_TRY

  if( isNullAndThrow(value) ) return;

  JVM::set( pEnv );
  FIX::Group* pGroup = getCPPGroup( obj );
  setUtcTimeStamp( *pGroup, field, value, showMilliseconds );

  QF_STACK_CATCH
}

JNIEXPORT void JNICALL Java_quickfix_Group_setUtcTimeOnly__ILjava_util_Date_2
( JNIEnv *pEnv, jobject obj, jint field, jobject value )
{ QF_STACK_TRY

  if( isNullAndThrow(value) ) return;

  JVM::set( pEnv );
  FIX::Group* pGroup = getCPPGroup( obj );
  setUtcTimeOnly( *pGroup, field, value, false );

  QF_STACK_CATCH
}

JNIEXPORT void JNICALL Java_quickfix_Group_setUtcTimeOnly__ILjava_util_Date_2
( JNIEnv *pEnv, jobject obj, jint field, jobject value, jboolean showMilliseconds )
{ QF_STACK_TRY

  if( isNullAndThrow(value) ) return;

  JVM::set( pEnv );
  FIX::Group* pGroup = getCPPGroup( obj );
  setUtcTimeOnly( *pGroup, field, value, showMilliseconds );

  QF_STACK_CATCH
}

JNIEXPORT void JNICALL Java_quickfix_Group_setUtcDateOnly
( JNIEnv *pEnv, jobject obj, jint field, jobject value )
{ QF_STACK_TRY

  if( isNullAndThrow(value) ) return;

  JVM::set( pEnv );
  FIX::Group* pGroup = getCPPGroup( obj );
  setUtcDateOnly( *pGroup, field, value );

  QF_STACK_CATCH
}

JNIEXPORT jstring JNICALL Java_quickfix_Group_getString
( JNIEnv *pEnv, jobject obj, jint field )
{ QF_STACK_TRY

  JVM::set( pEnv );
  FIX::Group* pGroup = getCPPGroup( obj );
  return getString( *pGroup, field );

  QF_STACK_CATCH
}

JNIEXPORT jboolean JNICALL Java_quickfix_Group_getBoolean
( JNIEnv * pEnv, jobject obj, jint field )
{ QF_STACK_TRY

  JVM::set( pEnv );
  FIX::Group* pGroup = getCPPGroup( obj );
  return getBoolean( *pGroup, field );

  QF_STACK_CATCH
}

JNIEXPORT jchar JNICALL Java_quickfix_Group_getChar
( JNIEnv *pEnv, jobject obj, jint field )
{ QF_STACK_TRY

  JVM::set( pEnv );
  FIX::Group* pGroup = getCPPGroup( obj );
  return getChar( *pGroup, field );

  QF_STACK_CATCH
}

JNIEXPORT jint JNICALL Java_quickfix_Group_getInt
( JNIEnv *pEnv, jobject obj, jint field )
{ QF_STACK_TRY

  JVM::set( pEnv );
  FIX::Group* pGroup = getCPPGroup( obj );
  return getInt( *pGroup, field );

  QF_STACK_CATCH
}

JNIEXPORT jdouble JNICALL Java_quickfix_Group_getDouble
( JNIEnv *pEnv, jobject obj, jint field )
{ QF_STACK_TRY

  JVM::set( pEnv );
  FIX::Group* pGroup = getCPPGroup( obj );
  return getDouble( *pGroup, field );

  QF_STACK_CATCH
}

JNIEXPORT jobject JNICALL Java_quickfix_Group_getUtcTimeStamp
( JNIEnv *pEnv, jobject obj, jint field )
{ QF_STACK_TRY

  JVM::set( pEnv );
  FIX::Group* pGroup = getCPPGroup( obj );
  jobject result = newUtcTimeStamp( *pGroup, field );
  return result;

  QF_STACK_CATCH
}

JNIEXPORT jobject JNICALL Java_quickfix_Group_getUtcTimeOnly
( JNIEnv *pEnv, jobject obj, jint field )
{ QF_STACK_TRY

  JVM::set( pEnv );
  FIX::Group* pGroup = getCPPGroup( obj );
  jobject result = newUtcTimeOnly( *pGroup, field );
  return result;

  QF_STACK_CATCH
}

JNIEXPORT jobject JNICALL Java_quickfix_Group_getUtcDateOnly
( JNIEnv *pEnv, jobject obj, jint field )
{ QF_STACK_TRY

  JVM::set( pEnv );
  FIX::Group* pGroup = getCPPGroup( obj );
  jobject result = newUtcDateOnly( *pGroup, field );
  return result;

  QF_STACK_CATCH
}

JNIEXPORT jboolean JNICALL Java_quickfix_Group_isSetField
( JNIEnv *pEnv, jobject obj, jint field )
{ QF_STACK_TRY

  JVM::set( pEnv );
  FIX::Group* pGroup = getCPPGroup( obj );
  return pGroup->isSetField( field );

  QF_STACK_CATCH
}

JNIEXPORT void JNICALL Java_quickfix_Group_removeField
( JNIEnv *pEnv, jobject obj, jint field )
{ QF_STACK_TRY

  JVM::set( pEnv );
  FIX::Group* pGroup = getCPPGroup( obj );
  pGroup->removeField( field );

  QF_STACK_CATCH
}

JNIEXPORT jobject JNICALL Java_quickfix_Group_groupIteratorCreate
( JNIEnv *pEnv, jobject obj, jobject iterator )
{ QF_STACK_TRY

  if( isNullAndThrow(iterator) ) return 0;

  JVM::set( pEnv );
  JVMObject jiterator( iterator );
  JVMObject jgroup = jiterator.getObject( "group", "Lquickfix/Group;" );
  FIX::Group* pGroup = ( FIX::Group* ) jgroup.getLong( "cppPointer" );
  jiterator.setLong( "cppPointer", ( long ) new FIX::Group::iterator(pGroup->begin()) );
  return jiterator;

  QF_STACK_CATCH
}

JNIEXPORT jboolean JNICALL Java_quickfix_Group_groupIteratorHasNext
( JNIEnv *pEnv, jobject obj, jobject iterator )
{ QF_STACK_TRY

  if( isNullAndThrow(iterator) ) return false;

  JVM::set( pEnv );
  JVMObject jiterator( iterator );
  JVMObject jgroup = jiterator.getObject( "group", "Lquickfix/Group;" );
  FIX::Group* pGroup = ( FIX::Group* ) jgroup.getLong( "cppPointer" );
  FIX::Group::iterator* i = ( FIX::Group::iterator* ) jiterator.getLong( "cppPointer" );
  return( *i != pGroup->end() );

  QF_STACK_CATCH
}

JNIEXPORT jobject JNICALL Java_quickfix_Group_groupIteratorNext
( JNIEnv *pEnv, jobject obj, jobject iterator )
{ QF_STACK_TRY

  if( isNullAndThrow(iterator) ) return 0;

  JVM::set( pEnv );
  JVMObject jiterator( iterator );
  JVMObject jgroup = jiterator.getObject( "group", "Lquickfix/Group;" );
  FIX::Group* pGroup = ( FIX::Group* ) jgroup.getLong( "cppPointer" );
  FIX::Group::iterator* i = ( FIX::Group::iterator* ) jiterator.getLong( "cppPointer" );
  if( *i == pGroup->end() ) {
    throwNew( "Ljava/util/NoSuchElementException;", "" );
    return 0;
  }
  const FIX::FieldBase& field = (*i)->second;
  (*i)++;
  try {
    return newField( field );
  } catch( std::exception& e ) {
    return 0;
  }

  QF_STACK_CATCH
}
