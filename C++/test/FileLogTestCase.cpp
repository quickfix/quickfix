/****************************************************************************
** Copyright (c) 2001-2014
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

#include <UnitTest++.h>
#include <FileLog.h>
#include <Utility.h>
#include <fstream>

using namespace FIX;

SUITE(FileLogTests)
{

void deleteLogSession( std::string sender, std::string target )
{
  file_unlink( ( "log/FIX.4.2-" + sender + "-" + target + ".event.current.log" ).c_str() );
  file_unlink( ( "log/backup/FIX.4.2-" + sender + "-" + target + ".event.backup.1.log" ).c_str() );
  file_unlink( ( "log/backup/FIX.4.2-" + sender + "-" + target + ".event.backup.2.log" ).c_str() );
  file_unlink( ( "log/backup/FIX.4.2-" + sender + "-" + target + ".event.backup.3.log" ).c_str() );
  file_unlink( ( "log/backup/FIX.4.2-" + sender + "-" + target + ".event.backup.4.log" ).c_str() );
  file_unlink( ( "log/backup/FIX.4.2-" + sender + "-" + target + ".event.backup.5.log" ).c_str() );

  file_unlink( ( "log/FIX.4.2-" + sender + "-" + target + ".messages.current.log" ).c_str() );
  file_unlink( ( "log/backup/FIX.4.2-" + sender + "-" + target + ".messages.backup.1.log" ).c_str() );
  file_unlink( ( "log/backup/FIX.4.2-" + sender + "-" + target + ".messages.backup.2.log" ).c_str() );
  file_unlink( ( "log/backup/FIX.4.2-" + sender + "-" + target + ".messages.backup.3.log" ).c_str() );
  file_unlink( ( "log/backup/FIX.4.2-" + sender + "-" + target + ".messages.backup.4.log" ).c_str() );
  file_unlink( ( "log/backup/FIX.4.2-" + sender + "-" + target + ".messages.backup.5.log" ).c_str() );
}

struct generateFileNameFixture
{
  generateFileNameFixture()
  : fileLogFactory( "log", "log" + file_separator() + "backup" ) 
  {
    deleteLogSession( "GENERATEFILENAME", "TEST" );
    SessionID sessionID( BeginString( "FIX.4.2" ),
                         SenderCompID( "GENERATEFILENAME" ), TargetCompID( "TEST" ) );

    object = (FileLog*)fileLogFactory.create( sessionID );
  }

  ~generateFileNameFixture()
  {
    fileLogFactory.destroy( object );
    deleteLogSession( "GENERATEFILENAME", "TEST" );
  }

  FileLogFactory fileLogFactory;
  FileLog* object;
};

TEST_FIXTURE(generateFileNameFixture, generateFileName)
{
  object->onEvent( "EVENT1" );
  object->onIncoming( "INCOMING1" );
  object->onOutgoing( "OUTGOING1" );

  CHECK( file_exists("log/FIX.4.2-GENERATEFILENAME-TEST.event.current.log") );
  CHECK( file_exists("log/FIX.4.2-GENERATEFILENAME-TEST.messages.current.log") );

  object->backup();
  object->onEvent( "EVENT2" );
  object->onIncoming( "INCOMING2" );
  object->onOutgoing( "OUTGOING2" );

  CHECK( file_exists("log/backup/FIX.4.2-GENERATEFILENAME-TEST.event.backup.1.log") );
  CHECK( file_exists("log/backup/FIX.4.2-GENERATEFILENAME-TEST.messages.backup.1.log") );

  object->backup();
  object->onEvent( "EVENT3" );
  object->onIncoming( "INCOMING3" );
  object->onOutgoing( "OUTGOING3" );

  CHECK( file_exists("log/backup/FIX.4.2-GENERATEFILENAME-TEST.event.backup.2.log") );
  CHECK( file_exists("log/backup/FIX.4.2-GENERATEFILENAME-TEST.messages.backup.2.log") );

  object->backup();
  object->onEvent( "EVENT4" );
  object->onIncoming( "INCOMING4" );
  object->onOutgoing( "OUTGOING4" );

  CHECK( file_exists("log/backup/FIX.4.2-GENERATEFILENAME-TEST.event.backup.3.log") );
  CHECK( file_exists("log/backup/FIX.4.2-GENERATEFILENAME-TEST.messages.backup.3.log") );

  object->backup();
  object->onEvent( "EVENT5" );
  object->onIncoming( "INCOMING5" );
  object->onOutgoing( "OUTGOING5" );

  CHECK( file_exists("log/backup/FIX.4.2-GENERATEFILENAME-TEST.event.backup.4.log") );
  CHECK( file_exists("log/backup/FIX.4.2-GENERATEFILENAME-TEST.messages.backup.4.log") );
}
}
