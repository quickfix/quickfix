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
#include "org_quickfix_Group.h"
#include "Utility.h"
#include "Group.h"
#include "CallStack.h"
#include "Conversions.h"
#include <iostream>

FIX::Group* getCPPGroup( jobject obj )
{
  JVMObject jobject( obj );
  return ( FIX::Group* ) jobject.getInt( "cppPointer" );
}

JNIEXPORT void JNICALL Java_org_quickfix_Group_create
( JNIEnv *pEnv, jobject obj, jint field, jint delim )
{ QF_STACK_TRY

  JVM::set( pEnv );
  JVMObject jobject( obj ); 
  FIX::Group* pGroup = new FIX::Group( field, delim );
  jobject.setInt( "cppPointer", ( int ) pGroup );

  QF_STACK_CATCH
}

JNIEXPORT void JNICALL Java_org_quickfix_Group_create__II_3I
(JNIEnv *pEnv, jobject obj, jint field, jint delim, jintArray array)
{ QF_STACK_TRY

  JVM::set( pEnv );
  JVMObject jobject( obj );  
  jsize size = pEnv->GetArrayLength(array);
  jint *body = pEnv->GetIntArrayElements(array, 0);
  int* carray = new int[ size + 1 ];
  memcpy(carray, body, size * sizeof(int));
  FIX::Group* pGroup = new FIX::Group( field, delim, carray );
  jobject.setInt( "cppPointer", ( int ) pGroup );
  delete [] carray;
  pEnv->ReleaseIntArrayElements(array, body, 0);

  QF_STACK_CATCH
}

JNIEXPORT void JNICALL Java_org_quickfix_Group_destroy
( JNIEnv *pEnv, jobject obj )
{ QF_STACK_TRY
  delete getCPPGroup( obj );
  QF_STACK_CATCH
}

JNIEXPORT void JNICALL Java_org_quickfix_Group_addGroup0
( JNIEnv *pEnv, jobject obj, jobject group )
{ QF_STACK_TRY

  JVM::set( pEnv );
  FIX::Group* pThis = getCPPGroup( obj );
  FIX::Group* pGroup = getCPPGroup( group );
  pThis->addGroup( *pGroup );

  QF_STACK_CATCH
}

JNIEXPORT jobject JNICALL Java_org_quickfix_Group_getGroup0
( JNIEnv *pEnv, jobject obj, jint num, jobject group )
{ QF_STACK_TRY

  JVM::set( pEnv );
  FIX::Group* pThis = getCPPGroup( obj );
  FIX::Group* pGroup = getCPPGroup( group );

  if ( pThis->hasGroup( num, *pGroup ) )
  {
    pThis->getGroup( num, *pGroup );
    return group;
  }
  else
  {
    throwNew( "Lorg/quickfix/FieldNotFound;", FIX::IntConvertor::convert( num ).c_str() );
    return 0;
  }

  QF_STACK_CATCH
}

JNIEXPORT void JNICALL Java_org_quickfix_Group_setString0
( JNIEnv *pEnv, jobject obj, jint field, jstring value )
{ QF_STACK_TRY

  JVM::set( pEnv );
  FIX::Group* pGroup = getCPPGroup( obj );
  setString( *pGroup, field, value );

  QF_STACK_CATCH
}

JNIEXPORT void JNICALL Java_org_quickfix_Group_setBoolean0
( JNIEnv *pEnv, jobject obj, jint field, jboolean value )
{ QF_STACK_TRY

  FIX::Group * pGroup = getCPPGroup( obj );
  setBoolean( *pGroup, field, value );

  QF_STACK_CATCH
}

JNIEXPORT void JNICALL Java_org_quickfix_Group_setChar0
( JNIEnv *pEnv, jobject obj, jint field, jchar value )
{ QF_STACK_TRY

  FIX::Group * pGroup = getCPPGroup( obj );
  setChar( *pGroup, field, value );

  QF_STACK_CATCH
}

JNIEXPORT void JNICALL Java_org_quickfix_Group_setInt0
( JNIEnv *pEnv, jobject obj, jint field, jint value )
{ QF_STACK_TRY

  FIX::Group * pGroup = getCPPGroup( obj );
  setInt( *pGroup, field, value );

  QF_STACK_CATCH
}

JNIEXPORT void JNICALL Java_org_quickfix_Group_setDouble0
( JNIEnv *pEnv, jobject obj, jint field, jdouble value )
{ QF_STACK_TRY

  FIX::Group * pGroup = getCPPGroup( obj );
  setDouble( *pGroup, field, value );

  QF_STACK_CATCH
}

JNIEXPORT void JNICALL Java_org_quickfix_Group_setUtcTimeStamp0
( JNIEnv *pEnv, jobject obj, jint field, jobject value )
{ QF_STACK_TRY

  JVM::set( pEnv );
  FIX::Group* pGroup = getCPPGroup( obj );
  setUtcTimeStamp( *pGroup, field, value );

  QF_STACK_CATCH
}

JNIEXPORT void JNICALL Java_org_quickfix_Group_setUtcTimeOnly0
( JNIEnv *pEnv, jobject obj, jint field, jobject value )
{ QF_STACK_TRY

  JVM::set( pEnv );
  FIX::Group* pGroup = getCPPGroup( obj );
  setUtcTimeOnly( *pGroup, field, value );

  QF_STACK_CATCH
}

JNIEXPORT void JNICALL Java_org_quickfix_Group_setUtcDate0
( JNIEnv *pEnv, jobject obj, jint field, jobject value )
{ QF_STACK_TRY

  JVM::set( pEnv );
  FIX::Group* pGroup = getCPPGroup( obj );
  setUtcDate( *pGroup, field, value );

  QF_STACK_CATCH
}

JNIEXPORT jstring JNICALL Java_org_quickfix_Group_getString0
( JNIEnv *pEnv, jobject obj, jint field )
{ QF_STACK_TRY

  JVM::set( pEnv );
  FIX::Group* pGroup = getCPPGroup( obj );
  return getString( *pGroup, field );

  QF_STACK_CATCH
}

JNIEXPORT jboolean JNICALL Java_org_quickfix_Group_getBoolean0
( JNIEnv * pEnv, jobject obj, jint field )
{ QF_STACK_TRY

  JVM::set( pEnv );
  FIX::Group* pGroup = getCPPGroup( obj );
  return getBoolean( *pGroup, field );

  QF_STACK_CATCH
}

JNIEXPORT jchar JNICALL Java_org_quickfix_Group_getChar0
( JNIEnv *pEnv, jobject obj, jint field )
{ QF_STACK_TRY

  JVM::set( pEnv );
  FIX::Group* pGroup = getCPPGroup( obj );
  return getChar( *pGroup, field );

  QF_STACK_CATCH
}

JNIEXPORT jint JNICALL Java_org_quickfix_Group_getInt0
( JNIEnv *pEnv, jobject obj, jint field )
{ QF_STACK_TRY

  JVM::set( pEnv );
  FIX::Group* pGroup = getCPPGroup( obj );
  return getInt( *pGroup, field );

  QF_STACK_CATCH
}

JNIEXPORT jdouble JNICALL Java_org_quickfix_Group_getDouble0
( JNIEnv *pEnv, jobject obj, jint field )
{ QF_STACK_TRY

  JVM::set( pEnv );
  FIX::Group* pGroup = getCPPGroup( obj );
  return getDouble( *pGroup, field );

  QF_STACK_CATCH
}

JNIEXPORT jobject JNICALL Java_org_quickfix_Group_getUtcTimeStamp0
( JNIEnv *pEnv, jobject obj, jint field )
{ QF_STACK_TRY

  JVM::set( pEnv );
  FIX::Group* pGroup = getCPPGroup( obj );
  jobject result = newUtcTimeStamp( *pGroup, field );
  return result;

  QF_STACK_CATCH
}

JNIEXPORT jobject JNICALL Java_org_quickfix_Group_getUtcTimeOnly0
( JNIEnv *pEnv, jobject obj, jint field )
{ QF_STACK_TRY

  JVM::set( pEnv );
  FIX::Group* pGroup = getCPPGroup( obj );
  jobject result = newUtcTimeOnly( *pGroup, field );
  return result;

  QF_STACK_CATCH
}

JNIEXPORT jobject JNICALL Java_org_quickfix_Group_getUtcDate0
( JNIEnv *pEnv, jobject obj, jint field )
{ QF_STACK_TRY

  JVM::set( pEnv );
  FIX::Group* pGroup = getCPPGroup( obj );
  jobject result = newUtcDate( *pGroup, field );
  return result;

  QF_STACK_CATCH
}
