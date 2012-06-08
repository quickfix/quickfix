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
using namespace System::IO;
using namespace System::Collections;

#include "quickfix_net.h"

#include "quickfix/SessionSettings.h"
#include "SessionID.h"
#include "Dictionary.h"
#include "Exceptions.h"

namespace QuickFix
{
public __gc class SessionSettings
{
public:
  SessionSettings()
  {
    m_pUnmanaged = new FIX::SessionSettings();
  }

  SessionSettings( Stream* stream )
  {
    std::string streamValue;
    char read = -1;
    while ( ( read = ( char ) stream->ReadByte() ) != -1 )
      streamValue += read;
    std::stringstream stringStream( streamValue );
    try
    {
      m_pUnmanaged = new FIX::SessionSettings( stringStream );
    }
    catch ( std::exception & e ) { throw new ConfigError( e.what() ); }
  }

  SessionSettings( String* file )
  {
    try
    {
      m_pUnmanaged = new FIX::SessionSettings( convertString( file ) );
    }
    catch ( std::exception & e ) { throw new ConfigError( e.what() ); }
  }

  ~SessionSettings()
  {
    delete m_pUnmanaged;
  }

  Dictionary* get( SessionID* sessionID )
  {
    try
    {
      return new Dictionary( unmanaged().get(sessionID->unmanaged()) );
    }
    catch( FIX::ConfigError& e )
    {
      throw new ConfigError( e.what() );
    }
  }

  void set( SessionID* sessionID, Dictionary* settings )
  {
    try
    {
      unmanaged().set( sessionID->unmanaged(), settings->unmanaged() );
    }
    catch( FIX::ConfigError& e )
    {
      throw new ConfigError( e.what() );
    }
  }

  Dictionary* get()
  {
    return new Dictionary( unmanaged().get() );
  }

  void set( Dictionary* defaults )
  {
    unmanaged().set( defaults->unmanaged() );
  }

  int size()
  {
    return unmanaged().size();
  }

  ArrayList* getSessions()
  {
    std::set<FIX::SessionID> sessions = unmanaged().getSessions();
    ArrayList* result = new ArrayList();

    std::set<FIX::SessionID>::iterator i;
    for( i = sessions.begin(); i != sessions.end(); ++i )
    {
      SessionID* sessionID = new SessionID( *i );
      result->Add( sessionID );
    }
    return result;
  }

  String* ToString()
  {
    std::stringstream stream;
    stream << *m_pUnmanaged;
    return stream.str().c_str();
  }

  FIX::SessionSettings& unmanaged()
  { return * m_pUnmanaged; }

private:
  FIX::SessionSettings* m_pUnmanaged;
};
}
