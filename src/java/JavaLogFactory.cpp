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

#include "JavaLogFactory.h"
#include "JavaLog.h"
#include "Conversions.h"

JavaLogFactory::JavaLogFactory( JVMObject object )
    : m_object( object.newGlobalRef() )
{
  createId = object.getClass()
             .getMethodID( "create",
                           "(Lquickfix/SessionID;)Lquickfix/Log;" );
}

JavaLogFactory::~JavaLogFactory() { m_object.deleteGlobalRef(); }

FIX::Log* JavaLogFactory::create
( const FIX::SessionID& sessionID )
{
  jobject jsessionID = newSessionID( sessionID );
  jobject obj =
    ENV::get() ->CallObjectMethod( m_object, createId, jsessionID );

  ENV::get()->DeleteLocalRef( jsessionID );
  if ( !obj ) throw FIX::ConfigError();

  return new JavaLog( JVMObject( obj ) );
}

void JavaLogFactory::destroy( FIX::Log* pLog )
{
  delete pLog;
}
