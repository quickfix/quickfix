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

#include "stdafx.h"

#include "quickfix_net.h"
#include "DataDictionary.h"
#include "DataDictionaryProvider.h"
#include "SessionSettings.h"
#include "Dictionary.h"
#include "Application.h"
#include "SocketInitiator.h"
#include "SocketAcceptor.h"
#include "ThreadedSocketInitiator.h"
#include "ThreadedSocketAcceptor.h"
#include "MessageFactory.h"

namespace QuickFix
{
char* createUnmanagedString( String* s )
{
  try
  {
    return ( char* ) ( Marshal::StringToHGlobalAnsi( s ) ).ToPointer();
  }
  catch ( ArgumentException* ) { return 0; }
  catch ( OutOfMemoryException* ) { return 0; }
}

void destroyUnmanagedString( char* s )
{
  Marshal::FreeHGlobal( static_cast < IntPtr > ( const_cast < void* > (
                        static_cast < const void* > ( s ) ) ) );
}

std::string convertString( String* s )
{
  if ( !String::Compare( s, String::Empty ) )
    return std::string();

  char* unmanaged = createUnmanagedString( s );
  std::string result( unmanaged );
  destroyUnmanagedString( unmanaged );
  return result;
}
}
