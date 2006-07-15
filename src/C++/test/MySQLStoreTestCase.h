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

#ifdef HAVE_MYSQL
#ifndef FIX_MYSQLSTORETESTCASE_H
#define FIX_MYSQLSTORETESTCASE_H

#include <CPPTest/TestCase.h>
#include "MessageStoreTestCase.h"
#include "MySQLStore.h"
#include "Utility.h"

#include <stdio.h>
#ifndef _MSC_VER
#include <unistd.h>
#endif

namespace FIX
{
class MySQLStoreTestCase : public MessageStoreTestCase
{
public:
  MySQLStoreTestCase( const FIX::SessionSettings& sessionSettings )
  : m_setGet( sessionSettings ),
    m_setGetWithQuote( sessionSettings ),
    m_other( sessionSettings ),
    m_reload( sessionSettings ),
    m_refresh( sessionSettings )
  {
    add( &m_setGet );
    add( &m_setGetWithQuote );
    add( &m_other );
    add( &m_reload );
    add( &m_refresh );
  }

private:

  class setGet : public MessageStoreTestCase::setGet
  {
  public:
    setGet( const FIX::SessionSettings& sessionSettings ) 
    : m_factory( sessionSettings.get() ) {}
    bool onSetup( MessageStore*& pObject );
    void onTeardown( MessageStore* pObject );

  private:
    MySQLStoreFactory m_factory;
  }
  m_setGet;

  class setGetWithQuote : public MessageStoreTestCase::setGetWithQuote
  {
  public:
    setGetWithQuote( const FIX::SessionSettings& sessionSettings ) 
    : m_factory( sessionSettings.get() ) {}
    bool onSetup( MessageStore*& pObject );
    void onTeardown( MessageStore* pObject );

  private:
    MySQLStoreFactory m_factory;
  }
  m_setGetWithQuote;

  class other : public MessageStoreTestCase::other
  {
  public:
    other( const FIX::SessionSettings& sessionSettings ) 
    : m_factory( sessionSettings.get() ) {}
    bool onSetup( MessageStore*& pObject );
    void onTeardown( MessageStore* pObject );

  private:
    MySQLStoreFactory m_factory;
  }
  m_other;

  class reload : public MessageStoreTestCase::reload
  {
  public:
    reload( const FIX::SessionSettings& sessionSettings ) 
    : m_factory( sessionSettings.get() ) {}
    bool onSetup( MessageStore*& pObject );
    void onTeardown( MessageStore* pObject );

  private:
    MySQLStoreFactory m_factory;
  }
  m_reload;

  class refresh : public MessageStoreTestCase::refresh
  {
  public:
    refresh( const FIX::SessionSettings& sessionSettings ) 
    : m_factory( sessionSettings.get() ) {}
    bool onSetup( MessageStore*& pObject );
    void onTeardown( MessageStore* pObject );

  private:
    MySQLStoreFactory m_factory;
  }
  m_refresh;
};
}

#endif
#endif
