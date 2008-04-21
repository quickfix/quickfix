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

#include "FileLogTestCase.h"

namespace FIX
{
bool FileLogTestCase::generateFileName::onSetup( FileLog*& pObject )
{
  deleteLogSession( "GENERATEFILENAME", "TEST" );
  SessionID sessionID( BeginString( "FIX.4.2" ),
                       SenderCompID( "GENERATEFILENAME" ), TargetCompID( "TEST" ) );

  m_object = (FileLog*)m_fileLogFactory.create( sessionID );
  pObject = &( *m_object );

  return true;
}

void FileLogTestCase::generateFileName::onTeardown( FileLog* pObject )
{
  m_fileLogFactory.destroy( pObject );
  deleteLogSession( "GENERATEFILENAME", "TEST" );
}

void FileLogTestCase::generateFileName::onRun( FileLog& object )
{
  FILE* logFile = file_fopen( "log/FIX.4.2-GENERATEFILENAME-TEST.event.current.log", "r" );
  assert( logFile != NULL );
  file_fclose( logFile );
  logFile = file_fopen( "log/FIX.4.2-GENERATEFILENAME-TEST.messages.current.log", "r" );
  assert( logFile != NULL );
  file_fclose( logFile );

  object.backup();
  logFile = file_fopen( "log/FIX.4.2-GENERATEFILENAME-TEST.event.backup.1.log", "r" );
  assert( logFile != NULL );
}
}
