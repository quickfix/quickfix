/****************************************************************************
** Copyright (c) 2001-2014
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

#ifdef _MSC_VER
#pragma warning( disable : 4503 4355 4786 )
#include "stdafx.h"
#else
#include "config.h"
#endif

#include <UnitTest++.h>
#include <MessageStore.h>

namespace FIX
{

struct memoryStoreFixture
{
  memoryStoreFixture()
  {
    SessionID sessionID( BeginString( "FIX.4.2" ),
                         SenderCompID( "SETGET" ), TargetCompID( "TEST" ) );

    object = factory.create( sessionID );
  }

  ~memoryStoreFixture()
  {
    factory.destroy( object );
  }

  MemoryStoreFactory factory;
  MessageStore* object;
};

}
