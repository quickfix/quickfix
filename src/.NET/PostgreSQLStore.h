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

#ifdef HAVE_POSTGRESQL
#pragma once

using namespace System;

#include "quickfix_net.h"

#include "CPPMessageStore.h"
#include "MessageStoreFactory.h"
#include "SessionID.h"
#include "SessionSettings.h"
#include "quickfix/PostgreSQLStore.h"
#include "quickfix/Settings.h"
#include "quickfix/CallStack.h"
#include "vcclr.h"

namespace QuickFix
{
public __gc class PostgreSQLStore : public CPPMessageStore
{
public:
  PostgreSQLStore( SessionID* sessionID, String* database, String* user,
      	      String* password, String* host, short port )
  : CPPMessageStore( new FIX::PostgreSQLStore
    ( sessionID->unmanaged(),
      convertString(database),
      convertString(user),
      convertString(password),
      convertString(host),
      port ) ) {}

  PostgreSQLStore( FIX::MessageStore* pUnmanaged )
  : CPPMessageStore( pUnmanaged ) {}
};

public __gc class PostgreSQLStoreFactory : public MessageStoreFactory
{
public:
  PostgreSQLStoreFactory( SessionSettings* settings )
  { QF_STACK_TRY
    m_pUnmanaged = new FIX::PostgreSQLStoreFactory(settings->unmanaged());
    QF_STACK_CATCH
  }

  ~PostgreSQLStoreFactory() { delete m_pUnmanaged; }

  MessageStore* create( SessionID* sessionID )
  { QF_STACK_TRY
    return new PostgreSQLStore(m_pUnmanaged->create(sessionID->unmanaged()));
    QF_STACK_CATCH
  }

private:
  FIX::PostgreSQLStoreFactory* m_pUnmanaged;
};
}

#endif //HAVE_POSTGRESQL
