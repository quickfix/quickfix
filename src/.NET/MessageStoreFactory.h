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

#pragma once

using namespace System;

#include "quickfix_net.h"

#include "MessageStore.h"
#include "SessionID.h"
#include "quickfix/MessageStore.h"
#include "vcclr.h"

namespace QuickFix
{
public __gc __interface MessageStoreFactory
{
  MessageStore* create( SessionID* ) = 0;
};
}

class MessageStoreFactory : public FIX::MessageStoreFactory
{
public:
  MessageStoreFactory( QuickFix::MessageStoreFactory* factory )
: m_factory( factory ) {}

  FIX::MessageStore* create( const FIX::SessionID& sessionID )
  { return new MessageStore
      ( m_factory->create( new QuickFix::SessionID( sessionID ) ) ); }
  void destroy( FIX::MessageStore* pStore )
  { delete pStore; }

private:
  gcroot < QuickFix::MessageStoreFactory* > m_factory;
};
