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

#ifndef FIX_FILESTORETESTCASE_H
#define FIX_FILESTORETESTCASE_H

#include <CPPTest/TestCase.h>
#include "MessageStoreTestCase.h"
#include "FileStore.h"
#include "Utility.h"

#include <stdio.h>
#ifndef _MSC_VER
#include <unistd.h>
#endif

namespace FIX
{
class FileStoreTestCase : public MessageStoreTestCase
{
public:
  FileStoreTestCase()
  {
    add( &m_setGet );
    add( &m_other );
    add( &m_reload );
    add( &m_refresh );
  }

private:

  class setGet : public MessageStoreTestCase::setGet
  {
  public:
    setGet() : m_fileStoreFactory( "store" ) {}
    bool onSetup( MessageStore*& pObject );
    void onTeardown( MessageStore* pObject );

  private:
    FileStoreFactory m_fileStoreFactory;
  }
  m_setGet;

  class other : public MessageStoreTestCase::other
  {
  public:
    other() : m_fileStoreFactory( "store" ) {}
    bool onSetup( MessageStore*& pObject );
    void onTeardown( MessageStore* pObject );

  private:
    FileStoreFactory m_fileStoreFactory;
  }
  m_other;

  class reload : public MessageStoreTestCase::reload
  {
  public:
    reload() : m_fileStoreFactory( "store" ) {}
    bool onSetup( MessageStore*& pObject );
    void onTeardown( MessageStore* pObject );

  private:
    FileStoreFactory m_fileStoreFactory;
  }
  m_reload;

  class refresh : public MessageStoreTestCase::refresh
  {
  public:
    refresh() : m_fileStoreFactory( "store" ) {}
    bool onSetup( MessageStore*& pObject );
    void onTeardown( MessageStore* pObject );

  private:
    FileStoreFactory m_fileStoreFactory;
  }
  m_refresh;
};

inline void deleteSession( std::string sender, std::string target )
{
  file_unlink( ( "store/FIX.4.2-" + sender + "-" + target + ".messages" ).c_str() );
  file_unlink( ( "store/FIX.4.2-" + sender + "-" + target + ".header" ).c_str() );
  file_unlink( ( "store/FIX.4.2-" + sender + "-" + target + ".seqnums" ).c_str() );
  file_unlink( ( "store/FIX.4.2-" + sender + "-" + target + ".session" ).c_str() );
}
}

#endif //FIX_FILESTORETESTCASE_H
