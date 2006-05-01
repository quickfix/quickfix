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

#ifdef HAVE_MSSQL
#pragma once

using namespace System;

#include "quickfix_net.h"

#include "CPPMessageStore.h"
#include "MessageStoreFactory.h"
#include "SessionID.h"
#include "SessionSettings.h"
#include "quickfix/MSSQLStore.h"
#include "quickfix/Settings.h"
#include "quickfix/CallStack.h"
#include "vcclr.h"

namespace QuickFix
{
public __gc class MSSQLStore : public CPPMessageStore
{
public:
  MSSQLStore( SessionID* sessionID, String* database, String* user,
      	      String* password, String* host )
  : CPPMessageStore( new FIX::MSSQLStore
    ( sessionID->unmanaged(),
      convertString(database),
      convertString(user),
      convertString(password),
      convertString(host) ) ) {}

  MSSQLStore( FIX::MessageStore* pUnmanaged )
  : CPPMessageStore( pUnmanaged ) {}
};

public __gc class MSSQLStoreFactory : public MessageStoreFactory
{
public:
  MSSQLStoreFactory( SessionSettings* settings )
  { QF_STACK_TRY
    m_pUnmanaged = new FIX::MSSQLStoreFactory(settings->unmanaged());
    QF_STACK_CATCH
  }

  ~MSSQLStoreFactory() { delete m_pUnmanaged; }

  MessageStore* create( SessionID* sessionID )
  { QF_STACK_TRY
    return new MSSQLStore(m_pUnmanaged->create(sessionID->unmanaged()));
    QF_STACK_CATCH
  }

private:
  FIX::MSSQLStoreFactory* m_pUnmanaged;
};
}

#endif //HAVE_MSSQL
