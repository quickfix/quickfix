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

#include "JavaLog.h"
#include "Conversions.h"

JavaLog::JavaLog( JVMObject object )
    : m_object( object.newGlobalRef() )
{
  onIncomingId = object.getClass()
                 .getMethodID( "onIncoming", "(Ljava/lang/String;)V" );
  onOutgoingId = object.getClass()
                 .getMethodID( "onOutgoing", "(Ljava/lang/String;)V" );
  onEventId = object.getClass()
              .getMethodID( "onEvent", "(Ljava/lang/String;)V" );
}

JavaLog::~JavaLog() { m_object.deleteGlobalRef(); }

void JavaLog::onIncoming( const std::string& string )
{
  JNIEnv * pEnv = ENV::get();
  jstring jstr = newString( string );
  pEnv->CallVoidMethod( m_object, onIncomingId, jstr );
  pEnv->DeleteLocalRef( jstr );
}

void JavaLog::onOutgoing( const std::string& string )
{
  JNIEnv * pEnv = ENV::get();
  jstring jstr = newString( string );
  pEnv->CallVoidMethod( m_object, onOutgoingId, jstr );
  pEnv->DeleteLocalRef( jstr );
}

void JavaLog::onEvent( const std::string& string )
{
  JNIEnv * pEnv = ENV::get();
  jstring jstr = newString( string );
  pEnv->CallVoidMethod( m_object, onEventId, jstr );
  pEnv->DeleteLocalRef( jstr );
}
