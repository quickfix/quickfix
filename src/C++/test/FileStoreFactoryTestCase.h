/* -*- C++ -*- */

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

#ifndef FIX_FILESTOREFACTORYTESTCASE_H
#define FIX_FILESTOREFACTORYTESTCASE_H

#include <CPPTest/TestCase.h>
#include "FileStore.h"
#include "Application.h"
#include "Responder.h"

namespace FIX
{
class FileStoreFactoryTestCase : public CPPTest::TestCase < FileStoreFactory >
{
public:
  FileStoreFactoryTestCase()
  {
    add( &m_callCreate );
  };

private:
  typedef CPPTest::Test < FileStoreFactory > Test;

class callCreate : public Test, FIX::NullApplication, FIX::Responder
  {
  public:
  callCreate() : m_object( "store" ) {}
    bool onSetup( FileStoreFactory*& pObject )
    { pObject = &m_object; return true; }
    void onRun( FileStoreFactory& object );
    void onTeardown( FileStoreFactory* pObject );

    void fromApp( const Message&, const SessionID& )
    throw( FieldNotFound&, IncorrectDataFormat&, IncorrectTagValue&, UnsupportedMessageType& ) {}
    void onRun() {}

    bool send( const std::string& ) { return true; }
    void disconnect() {}

  private:
    FileStoreFactory m_object;

  }
  m_callCreate;
};

} //namespace FIX

#endif //FIX_FILESTOREFACTORYTESTCASE_H
