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

#include "FileStoreTestCase.h"

namespace FIX
{
bool FileStoreTestCase::setGet::onSetup( MessageStore*& pObject )
{
  deleteSession( "SETGET", "TEST" );
  SessionID sessionID( BeginString( "FIX.4.2" ),
                       SenderCompID( "SETGET" ), TargetCompID( "TEST" ) );

  m_object = m_fileStoreFactory.create( sessionID );
  pObject = &( *m_object );

  return true;
}

void FileStoreTestCase::setGet::onTeardown( MessageStore* pObject )
{
  m_fileStoreFactory.destroy( pObject );
  deleteSession( "SETGET", "TEST" );
}

bool FileStoreTestCase::setGetWithQuote::onSetup( MessageStore*& pObject )
{
  deleteSession( "SETGET", "TEST" );
  SessionID sessionID( BeginString( "FIX.4.2" ),
                       SenderCompID( "SETGET" ), TargetCompID( "TEST" ) );

  m_object = m_fileStoreFactory.create( sessionID );
  pObject = &( *m_object );

  return true;
}

void FileStoreTestCase::setGetWithQuote::onTeardown( MessageStore* pObject )
{
  m_fileStoreFactory.destroy( pObject );
  deleteSession( "SETGET", "TEST" );
}

bool FileStoreTestCase::other::onSetup( MessageStore*& pObject )
{
  deleteSession( "SETGET", "TEST" );
  SessionID sessionID( BeginString( "FIX.4.2" ),
                       SenderCompID( "SETGET" ), TargetCompID( "TEST" ) );

  m_object = m_fileStoreFactory.create( sessionID );
  pObject = &( *m_object );

  return true;
}

void FileStoreTestCase::other::onTeardown( MessageStore* pObject )
{
  m_fileStoreFactory.destroy( pObject );
  // keep session around for next test
}

bool FileStoreTestCase::reload::onSetup( MessageStore*& pObject )
{
  SessionID sessionID( BeginString( "FIX.4.2" ),
                       SenderCompID( "SETGET" ), TargetCompID( "TEST" ) );

  m_object = m_fileStoreFactory.create( sessionID );
  pObject = &( *m_object );

  return true;
}

void FileStoreTestCase::reload::onTeardown( MessageStore* pObject )
{
  m_fileStoreFactory.destroy( pObject );
  // keep session around for next test
}

bool FileStoreTestCase::refresh::onSetup( MessageStore*& pObject )
{
  SessionID sessionID( BeginString( "FIX.4.2" ),
                       SenderCompID( "SETGET" ), TargetCompID( "TEST" ) );

  m_object = m_fileStoreFactory.create( sessionID );
  pObject = &( *m_object );

  return true;
}

void FileStoreTestCase::refresh::onTeardown( MessageStore* pObject )
{
  m_fileStoreFactory.destroy( pObject );
  deleteSession( "SETGET", "TEST" );
}
}
