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
#include <SocketAcceptor.h>
#include <Utility.h>
#include <fix42/Logon.h>
#include <sstream>
#include "TestHelper.h"

using namespace FIX;

SUITE(SocketAcceptorTests)
{

struct receivePartialMessageFixture
{
  receivePartialMessageFixture()
  {
    SessionSettings settings;
    std::string input =
      "[DEFAULT]\n"
      "ConnectionType=acceptor\n"
      "SocketAcceptPort=5000\n"
      "SocketReuseAddress=Y\n"
      "SendBufferSize=1024\n"
      "ReceiveBufferSize=1024\n"
      "StartTime=00:00:00\n"
      "EndTime=00:00:00\n"
      "UseDataDictionary=N\n"
      "CheckLatency=N\n"
      "[SESSION]\n"
      "BeginString=FIX.4.2\n"
      "SenderCompID=ISLD\n"
      "TargetCompID=TW\n"
      "[SESSION]\n"
      "BeginString=FIX.4.1\n"
      "SenderCompID=ISLD\n"
      "TargetCompID=WT\n";
    std::stringstream stream( input );
    stream >> settings;

    object = new SocketAcceptor( application, factory, settings );
    object->poll();
    s = createSocket( 5000, "127.0.0.1" );
    object->poll();
  }

  ~receivePartialMessageFixture()
  {
    object->stop( true );
    delete object;
    destroySocket( s );
  }

  TestApplication application;
  MemoryStoreFactory factory;
  SocketAcceptor* object;
  int s;
};

TEST_FIXTURE(receivePartialMessageFixture, receivePartialMessage)
{
  std::string firstPart = "8=FIX.4.29=28235=834=2369=31450"
                          "52=20041209-15:35:32.68749=TW50=G56=ISLD"
                          "60=20041209-15:35:3259=055=GE54=148=BLA000060467"
                          "107=BLF5167=FUT44=9740.0041=040=239=038=10"
                          "37=20041209004077151=10150=020=09717=67960"
                          "17=0068712004120909353214=011=000679606=0432=20041209"
                          "1=1234567810=1458=F";

  std::string secondPart = "IX.4.29=34035=834=3369=31450"
                           "52=20041209-15:35:32.69249=TW50=G56=ISLD"
                           "60=20041209-15:35:3259=055=GE54=148=CME000060467"
                           "107=BLF5167=FUT44=9740.0041=040=239=238=10"
                           "37=20041209004077337=0C032=1031=9740.00151=0150=2"
                           "20=09717=6796017=00687220041209093532TN0002843"
                           "75=2004120914=011=00067960375=BLA030A16=0"
                           "432=200412091=1234567810=217";

  FIX42::Logon logon;
  logon.getHeader().set( SenderCompID("TW") );
  logon.getHeader().set( TargetCompID("ISLD") );
  logon.getHeader().set( MsgSeqNum(1) );
  logon.getHeader().set( SendingTime() );
  logon.set( HeartBtInt(30) );

  CHECK( socket_send( s, logon.toString().c_str(), (int)strlen(logon.toString().c_str()) ) );
  object->poll();
  CHECK( socket_send( s, firstPart.c_str(), (int)strlen(firstPart.c_str()) ) );
  object->poll();
  CHECK( socket_send( s, secondPart.c_str(), (int)strlen(secondPart.c_str()) ) );
  object->poll();
}
}
