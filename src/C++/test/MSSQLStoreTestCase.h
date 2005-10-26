/* -*- C++ -*- */

/****************************************************************************
** Copyright (c) 2001-2005 quickfixengine.org  All rights reserved.
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

#ifdef HAVE_MSSQL
#ifndef FIX_MSSQLSTORETESTCASE_H
#define FIX_MSSQLSTORETESTCASE_H

#include <CPPTest/TestCase.h>
#include "MessageStoreTestCase.h"
#include "MSSQLStore.h"
#include "Utility.h"

#include <stdio.h>
#ifndef _MSC_VER
#include <unistd.h>
#endif

namespace FIX
{
class MSSQLStoreTestCase : public MessageStoreTestCase
{
public:
  MSSQLStoreTestCase()
  {
    add( &m_setGet );
    add( &m_other );
    add( &m_reload );
  }

private:

  class setGet : public MessageStoreTestCase::setGet
  {
  public:
    setGet() : m_factory() {}
    bool onSetup( MessageStore*& pObject );
    void onTeardown( MessageStore* pObject );

  private:
    MSSQLStoreFactory m_factory;
  }
  m_setGet;

  class other : public MessageStoreTestCase::other
  {
  public:
    other() : m_factory() {}
    bool onSetup( MessageStore*& pObject );
    void onTeardown( MessageStore* pObject );

  private:
    MSSQLStoreFactory m_factory;
  }
  m_other;

  class reload : public MessageStoreTestCase::reload
  {
  public:
    reload() : m_factory() {}
    bool onSetup( MessageStore*& pObject );
    void onTeardown( MessageStore* pObject );

  private:
    MSSQLStoreFactory m_factory;
  }
  m_reload;
};
}

#endif
#endif
