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
#pragma warning( disable : 4503 4355 4786 )
#include "stdafx.h"
#else
#include "config.h"
#endif

#ifdef HAVE_ODBC

#include "OdbcStoreTestCase.h"

namespace FIX
{
bool OdbcStoreTestCase::setGet::onSetup( MessageStore*& pObject )
{
  SessionID sessionID( BeginString( "FIX.4.2" ),
                       SenderCompID( "SETGET" ), TargetCompID( "TEST" ) );

  m_object = m_factory.create( sessionID );
  pObject = &( *m_object );
  pObject->reset();

  return true;
}

void OdbcStoreTestCase::setGet::onTeardown( MessageStore* pObject )
{
  m_factory.destroy( pObject );
}

bool OdbcStoreTestCase::other::onSetup( MessageStore*& pObject )
{
  SessionID sessionID( BeginString( "FIX.4.2" ),
                       SenderCompID( "SETGET" ), TargetCompID( "TEST" ) );

  m_object = m_factory.create( sessionID );
  pObject = &( *m_object );
  pObject->reset();

  return true;
}

void OdbcStoreTestCase::other::onTeardown( MessageStore* pObject )
{
  m_factory.destroy( pObject );
}

bool OdbcStoreTestCase::reload::onSetup( MessageStore*& pObject )
{
  SessionID sessionID( BeginString( "FIX.4.2" ),
                       SenderCompID( "SETGET" ), TargetCompID( "TEST" ) );

  m_object = m_factory.create( sessionID );
  pObject = &( *m_object );

  return true;
}

void OdbcStoreTestCase::reload::onTeardown( MessageStore* pObject )
{
  m_factory.destroy( pObject );
}
}

#endif
