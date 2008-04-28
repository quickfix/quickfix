/* -*- C++ -*- */

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

#ifndef FIX_FILELOGTESTCASE_H
#define FIX_FILELOGTESTCASE_H

#include <CPPTest/TestCase.h>
#include "FileLog.h"
#include "Utility.h"

#include <stdio.h>
#ifndef _MSC_VER
#include <unistd.h>
#endif

namespace FIX
{
class FileLogTestCase : public CPPTest::TestCase < FileLog >
{
public:
  FileLogTestCase()
  {
    add( &m_generateFileName );
  }

public:
  typedef CPPTest::Test < FileLog > Test;

  class generateFileName : public Test
  {
  public:
    generateFileName() : m_fileLogFactory( "log", "log" + file_separator() + "backup" ) {}
    bool onSetup( FileLog*& pObject );
    void onTeardown( FileLog* pObject );
    void onRun( FileLog& object );
    FileLog* m_object;

  private:
    FileLogFactory m_fileLogFactory;
  }
  m_generateFileName;
};

inline void deleteLogSession( std::string sender, std::string target )
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
}

#endif //FIX_FILELOGTESTCASE_H
