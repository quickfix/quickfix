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

#ifdef _MSC_VER
#pragma warning( disable : 4786 )
#endif

#include "JVM.h"
#include "org_quickfix_Session.h"
#include "quickfix/include/Session.h"
#include "Conversions.h"
#include <iostream>

JNIEXPORT jboolean JNICALL Java_org_quickfix_Session_sendToTarget0__Lorg_quickfix_Message_2
( JNIEnv *pEnv, jclass cls, jobject msg )
{
  JVM::set( pEnv );
  JVMObject jmessage( msg );
  FIX::Message* pMessage = ( FIX::Message* ) jmessage.getInt( "cppPointer" );

  FIX::BeginString beginString;
  FIX::SenderCompID senderCompID;
  FIX::TargetCompID targetCompID;

  if ( !pMessage->getHeader().isSetField( beginString ) ||
       !pMessage->getHeader().isSetField( senderCompID ) ||
       !pMessage->getHeader().isSetField( targetCompID ) )
  {
    throwNew( "Lorg/quickfix/SessionNotFound;", "" );
    return false;
  }

  FIX::SessionID sessionID = pMessage->getSessionID();
  if ( !FIX::Session::lookupSession( sessionID ) )
  {
    throwNew( "Lorg/quickfix/SessionNotFound;", "" );
    return false;
  }

  return FIX::Session::sendToTarget( *pMessage );
}

JNIEXPORT jboolean JNICALL Java_org_quickfix_Session_sendToTarget0__Lorg_quickfix_Message_2Lorg_quickfix_SessionID_2
( JNIEnv *pEnv, jclass cls, jobject msg, jobject sID )
{
  JVM::set( pEnv );
  JVMObject jmessage( msg );
  JVMObject jsessionid( sID );

  FIX::Message* pMessage = ( FIX::Message* ) jmessage.getInt( "cppPointer" );
  FIX::SessionID* pSessionID = ( FIX::SessionID* ) jsessionid.getInt( "cppPointer" );

  if ( !FIX::Session::lookupSession( *pSessionID ) )
  {
    throwNew( "Lorg/quickfix/SessionNotFound;", "" );
    return false;
  }
  return FIX::Session::sendToTarget( *pMessage, *pSessionID );
}

JNIEXPORT jboolean JNICALL Java_org_quickfix_Session_sendToTarget0__Lorg_quickfix_Message_2Ljava_lang_String_2Ljava_lang_String_2
( JNIEnv *pEnv, jclass cls, jobject msg, jstring sender, jstring target )
{
  JVM::set( pEnv );
  JVMObject jmessage( msg );
  FIX::Message* pMessage = ( FIX::Message* ) jmessage.getInt( "cppPointer" );

  std::string senderCompID( ( pEnv->GetStringUTFChars( sender, 0 ) ) );
  std::string targetCompID( ( pEnv->GetStringUTFChars( target, 0 ) ) );

  FIX::BeginString beginString;
  if ( !pMessage->getHeader().isSetField( beginString ) )
  {
    throwNew( "Lorg/quickfix/SessionNotFound;", "" );
    return 0;
  }

  FIX::SessionID sessionID = FIX::SessionID( beginString,
                             FIX::SenderCompID( senderCompID ), FIX::TargetCompID( targetCompID ) );
  if ( !FIX::Session::lookupSession( sessionID ) )
  {
    throwNew( "Lorg/quickfix/SessionNotFound;", "" );
    return false;
  }
  return FIX::Session::sendToTarget( *pMessage,
                                     FIX::SenderCompID( senderCompID ),
                                     FIX::TargetCompID( targetCompID ) );
}
