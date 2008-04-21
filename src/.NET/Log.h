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

#include "SessionID.h"
#include "quickfix/Log.h"
#include "vcclr.h"

namespace QuickFix
{
public __gc __interface Log
{
  virtual void clear() = 0;
  virtual void backup() = 0;
  virtual void onIncoming( String* string ) = 0;
  virtual void onOutgoing( String* string ) = 0;
  virtual void onEvent( String* string ) = 0;
};
}

class Log : public FIX::Log
{
public:
  Log( QuickFix::Log* log ) : m_log( log ) {}
  ~Log() 
  { 
    QuickFix::Log* log = ((QuickFix::Log*)m_log);
    IDisposable* disposable = dynamic_cast<IDisposable*>(log);
    if( disposable ) disposable->Dispose();
    m_log = gcroot < QuickFix::Log* >(0); 
  }

  void clear()
  { m_log->clear(); }
  void backup()
  { m_log->clear(); }
  void onIncoming( const std::string& string )
  { m_log->onIncoming( string.c_str() ); }
  void onOutgoing( const std::string& string )
  { m_log->onOutgoing( string.c_str() ); }
  void onEvent( const std::string& string )
  { m_log->onEvent( string.c_str() ); }

  gcroot < QuickFix::Log* > m_log;
};
