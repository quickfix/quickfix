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

  class TestSocketOperator : public SocketMonitor::SocketOperator {
  public:
    virtual ~TestSocketOperator(){}
    virtual bool fdIsSet(int i, fd_set& set) {
      return isfdset;
    }
    virtual int selectExecution(int set_size, fd_set* readset, fd_set* writeset, fd_set* exceptset, timeval* timeout) {
      return selectResult;
    }

   bool isfdset = false;
   int selectResult = 1;

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

TEST(block_DroppedSocketsExist_StrategyHasError)
{
  SocketMonitor monitor(1);
  TestStrategy strategy;
  std::shared_ptr<TestSocketOperator> socketOperator = std::make_shared<TestSocketOperator>(TestSocketOperator());
  monitor.setSocketOperator(socketOperator);
  socketOperator->selectResult = -1;

  int socket = 101;
  monitor.addRead(socket);
  monitor.addWrite(socket);
  monitor.addConnect(socket);

  monitor.drop(socket);
  monitor.block(strategy, false, 1);

  CHECK_EQUAL(1, strategy.errorCount);

  socket_close(socket);

}

TEST(block_TimeOut_StrategyHasTimeout)
{
  SocketMonitor monitor(1);
  TestStrategy strategy;
  std::shared_ptr<TestSocketOperator> socketOperator = std::make_shared<TestSocketOperator>(TestSocketOperator());
  monitor.setSocketOperator(socketOperator);
  socketOperator->selectResult = 0;

  int socket = 101;
  monitor.addRead(socket);
  monitor.addWrite(socket);
  monitor.addConnect(socket);
  monitor.block(strategy, false, 1);

  CHECK_EQUAL(1, strategy.timeoutCount);

  socket_close(socket);
}

TEST(block_EmptySocketConnections_StrategyHasTimeout)
{
  SocketMonitor monitor(1);
  TestStrategy strategy;
  std::shared_ptr<TestSocketOperator> socketOperator = std::make_shared<TestSocketOperator>(TestSocketOperator());
  monitor.setSocketOperator(socketOperator);

  monitor.dropAllReadSockets();

  monitor.block(strategy, false, 1);
  //Second call required otherwise dropped sockets will be included
  monitor.block(strategy, false, 1);

  CHECK(strategy.timeoutCount >= 1);
}

TEST(block_ProcessSocketsWithFDSetAllTrue_ReadWriteAndConnectEventsOccur)
{
  SocketMonitor monitor;
  TestStrategy strategy;
  std::shared_ptr<TestSocketOperator> socketOperator = std::make_shared<TestSocketOperator>(TestSocketOperator());
  socketOperator->isfdset = true;
  monitor.setSocketOperator(socketOperator);

  int socket = 101;
  monitor.addRead(socket);
  monitor.addWrite(socket);
  monitor.addConnect(socket);

  monitor.block(strategy, false, 0);

  CHECK_EQUAL(1, strategy.eventCount);
  CHECK_EQUAL(1, strategy.writeCount);
  CHECK_EQUAL(1, strategy.connectCount);

  socket_close(socket);
}

TEST(block_ProcessSocketsWithFDSetAllFalse_NoReadWriteAndConnectEventsOccur)
{
  SocketMonitor monitor;
  TestStrategy strategy;
  std::shared_ptr<TestSocketOperator> socketOperator = std::make_shared<TestSocketOperator>(TestSocketOperator());
  socketOperator->isfdset = false;
  monitor.setSocketOperator(socketOperator);

  int socket = 101;
  monitor.addRead(socket);
  monitor.addWrite(socket);
  monitor.addConnect(socket);


  monitor.block(strategy, false, 0);

  CHECK_EQUAL(0, strategy.eventCount);
  CHECK_EQUAL(0, strategy.writeCount);
  CHECK_EQUAL(0, strategy.connectCount);

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
