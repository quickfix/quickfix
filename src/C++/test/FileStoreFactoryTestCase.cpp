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
#include "FileStoreFactoryTestCase.h"
#include "Session.h"

#include <fstream>

namespace FIX
{
void FileStoreFactoryTestCase::callCreate::onRun( FileStoreFactory& object )
{
  deleteSession( "FS", "FACT" );

  SessionID sessionID( BeginString( "FIX.4.2" ),
                       SenderCompID( "FS" ), TargetCompID( "FACT" ) );

  MessageStore* m = object.create( sessionID );
  assert( typeid( *m ) == typeid( FileStore ) );
  object.destroy( m );

  std::ifstream messageFile( "store/FIX.4.2-FS-FACT.body" );
  assert( !messageFile.fail() );
  messageFile.close();

  std::ifstream seqnumsFile( "store/FIX.4.2-FS-FACT.seqnums" );
  assert( !seqnumsFile.fail() );
  seqnumsFile.close();

  std::ifstream sessionFile( "store/FIX.4.2-FS-FACT.session" );
  assert( !sessionFile.fail() );
  sessionFile.close();
}

void FileStoreFactoryTestCase::callCreate::onTeardown
( FileStoreFactory* pObject )
{
  deleteSession( "FS", "FACT" );
}

} //namespace FIX
