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
#include "org_quickfix_MemoryStore.h"
#include <quickfix/MessageStore.h>
#include <quickfix/CallStack.h>
#include "Conversions.h"
#include "JavaMessageStore.h"

JNIEXPORT void JNICALL Java_org_quickfix_MemoryStore_create
( JNIEnv *pEnv, jobject obj )
{ QF_STACK_TRY

  FIX::MessageStore * pStore = new FIX::MemoryStore();
  JavaMessageStore_create( pEnv, obj, pStore );

  QF_STACK_CATCH
}

JNIEXPORT void JNICALL Java_org_quickfix_MemoryStore_destroy
( JNIEnv *pEnv, jobject obj )
{ QF_STACK_TRY
  JavaMessageStore_destroy( pEnv, obj ); 
  QF_STACK_CATCH
}

JNIEXPORT jboolean JNICALL Java_org_quickfix_MemoryStore_set0
( JNIEnv *pEnv, jobject obj, jint seq, jstring message )
{ QF_STACK_TRY
  return JavaMessageStore_set0( pEnv, obj, seq, message ); 
  QF_STACK_CATCH
}

JNIEXPORT jboolean JNICALL Java_org_quickfix_MemoryStore_get0__ILjava_lang_String_2
( JNIEnv *pEnv, jobject obj, jint seq, jstring message )
{ QF_STACK_TRY
  return JavaMessageStore_get0__ILjava_lang_String_2( pEnv, obj, seq, message ); 
  QF_STACK_CATCH
}

JNIEXPORT void JNICALL Java_org_quickfix_MemoryStore_get0__IILjava_util_Collection_2
( JNIEnv *pEnv, jobject obj, jint start, jint end, jobject array )
{ QF_STACK_TRY
  JavaMessageStore_get0__IILjava_util_Collection_2( pEnv, obj, start, end, array ); 
  QF_STACK_CATCH
}

JNIEXPORT jint JNICALL Java_org_quickfix_MemoryStore_getNextSenderMsgSeqNum0
( JNIEnv *pEnv, jobject obj )
{ QF_STACK_TRY
  return JavaMessageStore_getNextSenderMsgSeqNum0( pEnv, obj ); 
  QF_STACK_CATCH
}

JNIEXPORT jint JNICALL Java_org_quickfix_MemoryStore_getNextTargetMsgSeqNum0
( JNIEnv *pEnv, jobject obj )
{ QF_STACK_TRY
  return JavaMessageStore_getNextTargetMsgSeqNum0( pEnv, obj ); 
  QF_STACK_CATCH
}

JNIEXPORT void JNICALL Java_org_quickfix_MemoryStore_setNextSenderMsgSeqNum0
( JNIEnv *pEnv, jobject obj, jint seq )
{ QF_STACK_TRY
  JavaMessageStore_setNextSenderMsgSeqNum0( pEnv, obj, seq ); 
  QF_STACK_CATCH
}

JNIEXPORT void JNICALL Java_org_quickfix_MemoryStore_setNextTargetMsgSeqNum0
( JNIEnv *pEnv, jobject obj, jint seq )
{ QF_STACK_TRY
  JavaMessageStore_setNextTargetMsgSeqNum0( pEnv, obj, seq ); 
  QF_STACK_CATCH
}

JNIEXPORT void JNICALL Java_org_quickfix_MemoryStore_incrNextSenderMsgSeqNum0
( JNIEnv *pEnv, jobject obj )
{ QF_STACK_TRY
  JavaMessageStore_incrNextSenderMsgSeqNum0( pEnv, obj ); 
  QF_STACK_CATCH
}

JNIEXPORT void JNICALL Java_org_quickfix_MemoryStore_incrNextTargetMsgSeqNum0
( JNIEnv *pEnv, jobject obj )
{ QF_STACK_TRY
  JavaMessageStore_incrNextTargetMsgSeqNum0( pEnv, obj ); 
  QF_STACK_CATCH
}

JNIEXPORT jobject JNICALL Java_org_quickfix_MemoryStore_getCreationTime0
( JNIEnv *pEnv, jobject obj )
{ QF_STACK_TRY
  return JavaMessageStore_getCreationTime0( pEnv, obj ); 
  QF_STACK_CATCH
}

JNIEXPORT void JNICALL Java_org_quickfix_MemoryStore_reset0
( JNIEnv *pEnv, jobject obj )
{ QF_STACK_TRY
  JavaMessageStore_reset0( pEnv, obj ); 
  QF_STACK_CATCH
}
