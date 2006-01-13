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

#ifdef HAVE_JAVA

#include "JavaApplication.h"
#include <quickfix/Utility.h>
#include "Conversions.h"

JavaApplication::JavaApplication( JVMObject object, JVMObject factory )
    : m_object( object.newGlobalRef() ), m_factory( factory.newGlobalRef() )
{
  onCreateId = object.getClass()
               .getMethodID( "onCreate", "(Lquickfix/SessionID;)V" );

  onLogonId = object.getClass()
              .getMethodID( "onLogon", "(Lquickfix/SessionID;)V" );

  onLogoutId = object.getClass()
               .getMethodID( "onLogout", "(Lquickfix/SessionID;)V" );

  notifyToAdminId = object.getClass()
                    .getMethodID( "toAdmin", "(Lquickfix/Message;Lquickfix/SessionID;)V" );

  notifyToAppId = object.getClass()
                  .getMethodID( "toApp", "(Lquickfix/Message;Lquickfix/SessionID;)V" );

  notifyFromAdminId = object.getClass()
                      .getMethodID( "fromAdmin", "(Lquickfix/Message;Lquickfix/SessionID;)V" );

  notifyFromAppId = object.getClass()
                    .getMethodID( "fromApp", "(Lquickfix/Message;Lquickfix/SessionID;)V" );
}

JavaApplication::~JavaApplication() { m_factory.deleteGlobalRef(); m_object.deleteGlobalRef(); }

void JavaApplication::onCreate( const FIX::SessionID& sessionID )
{
  JNIEnv* pEnv = ENV::get();
  jobject jsessionid = newSessionID( sessionID );
  Exceptions e;
  pEnv->CallVoidMethod( m_object, onCreateId, jsessionid );
  pEnv->DeleteLocalRef( jsessionid );
  handleException( pEnv, e );
};

void JavaApplication::onLogon( const FIX::SessionID& sessionID )
{
  JNIEnv* pEnv = ENV::get();
  jobject jsessionid = newSessionID( sessionID );
  Exceptions e;
  pEnv->CallVoidMethod( m_object, onLogonId, jsessionid );
  pEnv->DeleteLocalRef( jsessionid );
  handleException( pEnv, e );
};

void JavaApplication::onLogout( const FIX::SessionID& sessionID )
{
  JNIEnv* pEnv = ENV::get();
  jobject jsessionid = newSessionID( sessionID );
  Exceptions e;
  pEnv->CallVoidMethod( m_object, onLogoutId, jsessionid );
  pEnv->DeleteLocalRef( jsessionid );
  handleException( pEnv, e );
};

void JavaApplication::toAdmin( FIX::Message& msg, const FIX::SessionID& sessionID )
{
  JNIEnv* pEnv = ENV::get();
  JVMObject jmsg = newMessage( msg, m_factory );
  JVMObject jsessionid = newSessionID( sessionID );
  Exceptions e;
  pEnv->CallVoidMethod( m_object, notifyToAdminId, (jobject)jmsg, (jobject)jsessionid );
  if( !pEnv->ExceptionOccurred() )
    msg = *((FIX::Message*)jmsg.getLong( "cppPointer" ));
  jsessionid.deleteLocalRef();
  jmsg.deleteLocalRef();
  handleException( pEnv, e );
}

void JavaApplication::toApp( FIX::Message& msg, const FIX::SessionID& sessionID )
throw( FIX::DoNotSend )
{
  JNIEnv* pEnv = ENV::get();
  JVMObject jmsg = newMessage( msg, m_factory );
  JVMObject jsessionid = newSessionID( sessionID );
  Exceptions e;
  pEnv->CallVoidMethod( m_object, notifyToAppId, (jobject)jmsg, (jobject)jsessionid );
  if( !pEnv->ExceptionOccurred() )
    msg = *((FIX::Message*)jmsg.getLong( "cppPointer" ));
  jsessionid.deleteLocalRef();
  jmsg.deleteLocalRef();
  handleException( pEnv, e );
}

void JavaApplication::fromAdmin( const FIX::Message& msg, const FIX::SessionID& sessionID )
  throw( FIX::FieldNotFound,
         FIX::IncorrectDataFormat,
         FIX::IncorrectTagValue,
         FIX::RejectLogon )
{
  JNIEnv* pEnv = ENV::get();
  jobject jmessage = newMessage( msg, m_factory );
  jobject jsessionid = newSessionID( sessionID );
  Exceptions e;
  pEnv->CallVoidMethod
  ( m_object, notifyFromAdminId, jmessage, jsessionid );
  pEnv->DeleteLocalRef(jsessionid);
  pEnv->DeleteLocalRef(jmessage);
  handleException( pEnv, e );
}

void JavaApplication::fromApp( const FIX::Message& msg, const FIX::SessionID& sessionID )
throw( FIX::FieldNotFound,
       FIX::IncorrectDataFormat,
       FIX::IncorrectTagValue,
       FIX::UnsupportedMessageType )
{
  JNIEnv* pEnv = ENV::get();
  jobject jmessage = newMessage( msg, m_factory );
  jobject jsessionid = newSessionID( sessionID );
  Exceptions e;
  pEnv->CallVoidMethod
  ( m_object, notifyFromAppId, jmessage, jsessionid );
  pEnv->DeleteLocalRef(jsessionid);
  pEnv->DeleteLocalRef(jmessage);
  handleException( pEnv, e );
};

void JavaApplication::handleException( JNIEnv* env, Exceptions& e ) const
{
  jthrowable exception = env->ExceptionOccurred();
  if ( exception )
  {
    if ( e.doNotSend.IsInstanceOf( exception ) )
    {
      env->ExceptionClear();
      throw FIX::DoNotSend();
    }
    else if ( e.rejectLogon.IsInstanceOf( exception ) )
    {
      env->ExceptionClear();
      throw FIX::RejectLogon();
    }
    else if ( e.unsupportedMessageType.IsInstanceOf( exception ) )
    {
      env->ExceptionClear();
      throw FIX::UnsupportedMessageType();
    }
    else if ( e.fieldNotFound.IsInstanceOf( exception ) )
    {
      env->ExceptionClear();
      throw FIX::FieldNotFound( 0 );
    }
    else if ( e.incorrectTagValue.IsInstanceOf( exception ) )
    {
      env->ExceptionClear();
      throw FIX::IncorrectTagValue( 0 );
    }
    else if ( e.incorrectDataFormat.IsInstanceOf( exception ) )
    {
      env->ExceptionClear();
      throw FIX::IncorrectDataFormat( 0 );
    }
    else
    {
      env->ExceptionDescribe();
      env->ExceptionClear();
      exit(1);
    }
  }
}

#endif