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
#include <SocketMonitor.h>
#include <Utility.h>

using namespace FIX;

SUITE(SocketMonitorTests)
{

  class TestStrategy : public SocketMonitor::Strategy {
  public:
      virtual ~TestStrategy(){}
      virtual void onConnect( SocketMonitor&, int socket ){ connectCount++; };
      virtual void onEvent( SocketMonitor&, int socket ){ eventCount++; };
      virtual void onWrite( SocketMonitor&, int socket ){ writeCount++; };
      virtual void onError( SocketMonitor&, int socket ){ errorCount++; };
      virtual void onError( SocketMonitor& ){ errorCount++; };
      virtual void onTimeout( SocketMonitor& monitor){
        SocketMonitor::Strategy::onTimeout(monitor);
        timeoutCount++;
      };


      int connectCount = 0;
      int eventCount   = 0;
      int writeCount   = 0;
      int errorCount   = 0;
      int timeoutCount = 0;

  };

TEST(addWrite_ReadSocketDoesNotExist_False)
{
  SocketMonitor monitor;
  int socket = 101;
  CHECK(!monitor.addWrite(socket));

  socket_close(socket);
}

TEST(addWrite_WriteSocketAlreadyExists_False)
{
  SocketMonitor monitor;
  int socket = 101;
  monitor.addRead(socket);
  monitor.addWrite(socket);

  CHECK(!monitor.addWrite(socket));

  socket_close(socket);
}

TEST(Unsignal_SocketExists_WriteSocketErased)
{
  SocketMonitor monitor;
  TestStrategy strategy;

  int socket = 101;
  monitor.addRead(socket);
  monitor.addWrite(socket);
  monitor.addConnect(socket);

  monitor.signal(socket);
  monitor.unsignal(socket);

  socket_close(socket);
}

TEST(Unsignal_SocketDoesNotExist_WriteSocketErased)
{
  SocketMonitor monitor;
  TestStrategy strategy;

  int socket = 101;
  monitor.addRead(socket);
  monitor.addConnect(socket);

  monitor.signal(socket);
  monitor.unsignal(socket);

  socket_close(socket);
}

}
