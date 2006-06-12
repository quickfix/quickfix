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

#include "Log.h"
#include "SessionID.h"
#include "quickfix/Log.h"
#include "vcclr.h"

namespace QuickFix
{
public __gc __interface LogFactory
{
  Log* create() = 0;
  Log* create( SessionID* ) = 0;
};
}

class LogFactory : public FIX::LogFactory
{
public:
  LogFactory( QuickFix::LogFactory* factory )
  : m_factory( factory ) {}

  FIX::Log* create()
  { return new Log( m_factory->create() ); }
  FIX::Log* create( const FIX::SessionID& sessionID )
  { return new Log( m_factory->create( new QuickFix::SessionID( sessionID ) ) ); }
  void destroy( FIX::Log* pLog )
  { delete pLog; }

private:
  gcroot < QuickFix::LogFactory* > m_factory;
};
