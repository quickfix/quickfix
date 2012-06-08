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

#include "CPPLog.h"
#include "Log.h"
#include "LogFactory.h"
#include "SessionSettings.h"
#include "quickfix/FileLog.h"
#include "vcclr.h"

namespace QuickFix
{
public __gc class FileLog : public CPPLog
{
public:
  FileLog( FIX::Log* pUnmanaged )
  {
    m_pUnmanaged = pUnmanaged;
  }
};

public __gc class FileLogFactory : public LogFactory
{
public:
  FileLogFactory( SessionSettings* settings )
  {
    m_pUnmanaged = new FIX::FileLogFactory( settings->unmanaged() );
  }

  FileLogFactory( String* path )
  {
    char* upath = createUnmanagedString( path );
    m_pUnmanaged = new FIX::FileLogFactory( upath );
    destroyUnmanagedString( upath );
  }

  Log* create()
  {
    return new FileLog(m_pUnmanaged->create());
  }

  Log* create( SessionID* sessionID )
  {
    return new FileLog(m_pUnmanaged->create(sessionID->unmanaged()));
  }

private:
  FIX::FileLogFactory* m_pUnmanaged;
};
}
