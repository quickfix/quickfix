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

#include "CPPMessageStore.h"
#include "MessageStoreFactory.h"
#include "SessionID.h"
#include "SessionSettings.h"
#include "quickfix/FileStore.h"
#include "quickfix/Settings.h"
#include "quickfix/CallStack.h"
#include "vcclr.h"

namespace QuickFix
{
public __gc class FileStore : public CPPMessageStore
{
public:
  FileStore( String* path, SessionID* sessionID )
  : CPPMessageStore( new FIX::FileStore(convertString(path), sessionID->unmanaged() ) )
  {}
};

public __gc class FileStoreFactory : public MessageStoreFactory
{
public:
  FileStoreFactory( SessionSettings* settings )
  : m_path( 0 ), m_settings( settings ) {}

  FileStoreFactory( String* path )
  : m_path( path ), m_settings( 0 ) {}

  MessageStore* create( SessionID* sessionID )
  { QF_STACK_TRY

    if ( m_path ) return new FileStore( m_path, sessionID );

    FIX::SessionSettings& s = m_settings->unmanaged();
    FIX::Dictionary settings = s.get( sessionID->unmanaged() );
    m_path = settings.getString( FIX::FILE_STORE_PATH ).c_str();
    return new FileStore( m_path, sessionID );

    QF_STACK_CATCH
  }

private:
  String* m_path;
  SessionSettings* m_settings;
};
}
