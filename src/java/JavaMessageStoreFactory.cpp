/****************************************************************************
** Copyright (c) 2001-2004 quickfixengine.org  All rights reserved.
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

#include "JavaMessageStoreFactory.h"
#include "JavaMessageStore.h"
#include "Conversions.h"

JavaMessageStoreFactory::JavaMessageStoreFactory( JVMObject object )
    : m_object( object.newGlobalRef() )
{
  createId = object.getClass()
             .getMethodID( "create",
                           "(Lquickfix/SessionID;)Lquickfix/MessageStore;" );
}

JavaMessageStoreFactory::~JavaMessageStoreFactory() { m_object.deleteGlobalRef(); }

FIX::MessageStore* JavaMessageStoreFactory::create
( const FIX::SessionID& sessionID )
{
  jobject jsessionid = newSessionID( sessionID );
  jobject obj =
    ENV::get() ->CallObjectMethod( m_object, createId, jsessionid );

  ENV::get()->DeleteLocalRef( jsessionid );
  if ( !obj ) throw FIX::ConfigError();

  return new JavaMessageStore( JVMObject( obj ) );
}

void JavaMessageStoreFactory::destroy( FIX::MessageStore* pStore )
{
  delete pStore;
}
