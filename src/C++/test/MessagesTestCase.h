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

#ifndef FIX_MESSAGESTESTCASE_H
#define FIX_MESSAGESTESTCASE_H

#include <CPPTest/TestCase.h>
#include "Message.h"
#include "fix42/Logon.h"
#include "fix42/TestRequest.h"
#include "fix42/ResendRequest.h"
#include "fix42/Reject.h"
#include "fix42/SequenceReset.h"
#include "fix42/Logout.h"
#include "fix42/NewOrderSingle.h"
#include "fix42/ExecutionReport.h"
#include "fix42/DontKnowTrade.h"
#include "fix42/OrderCancelReplaceRequest.h"
#include "fix42/OrderCancelRequest.h"
#include "fix42/OrderCancelReject.h"
#include "fix42/OrderStatusRequest.h"
#include "fix42/NewOrderList.h"
#include "fix42/MassQuote.h"

namespace FIX
{
class MessageTestCase : public CPPTest::TestCase < Message >
{
public:
  MessageTestCase()
  {
    add( &m_identifyType );
    add( &m_isAdminMsgType );
    add( &m_isAdmin );
    add( &m_isApp );
    add( &m_setString );
    add( &m_setStringWithGroup );
    add( &m_setStringWithHighBit );
    add( &m_copy );
    add( &m_checkSum );
    add( &m_headerFieldsFirst );
    add( &m_noEndingDelim );
    add( &m_outOfOrder );
    add( &m_getXML );
    add( &m_reverseRoute );
    add( &m_addRemoveGroup );
  }

  typedef CPPTest::SimpleTest < Message > SimpleTest;
  typedef CPPTest::EmptyTest < Message > EmptyTest;

  class identifyType : public EmptyTest
  {
    void onRun( Message& object );
  } m_identifyType;

  class isAdminMsgType : public EmptyTest
  {
    void onRun( Message& object );
  } m_isAdminMsgType;

  class isAdmin : public SimpleTest
  {
    void onRun( Message& object );
  } m_isAdmin;

  class isApp : public SimpleTest
  {
    void onRun( Message& object );
  } m_isApp;

  class setString : public SimpleTest
  {
    void onRun( Message& object );
  } m_setString;

  class setStringWithGroup : public SimpleTest
  {
    void onRun( Message& object );
  } m_setStringWithGroup;

  class setStringWithHighBit : public SimpleTest
  {
    void onRun( Message& object );
  } m_setStringWithHighBit;

  class copy : public SimpleTest
  {
    void onRun( Message& object );
  } m_copy;

  class checkSum : public SimpleTest
  {
    void onRun( Message& object );
  } m_checkSum;

  class headerFieldsFirst : public SimpleTest
  {
    void onRun( Message& object );
  } m_headerFieldsFirst;

  class noEndingDelim : public SimpleTest
  {
    void onRun( Message& object );
  } m_noEndingDelim;

  class outOfOrder : public SimpleTest
  {
    void onRun( Message& object );
  } m_outOfOrder;

  class getXML : public SimpleTest
  {
    void onRun( Message& object );
  } m_getXML;

  class reverseRoute : public SimpleTest
  {
    void onRun( Message& object );
  } m_reverseRoute;

  class addRemoveGroup : public SimpleTest
  {
    void onRun( Message& object );
  } m_addRemoveGroup;
};

template < typename T >
class MessageParseTestCase : public CPPTest::TestCase < T >
{
public:
  MessageParseTestCase()
  {
    add( &m_getString );
    add( &m_setString );
  }

private:
  class getString : public CPPTest::Test < T >
  {
    bool onSetup( T*& pObject ) { pObject = &m_object; return true; }
    void onRun( T& object );
    T m_object;
  } m_getString;

  class setString : public CPPTest::Test < T >
  {
    bool onSetup( T*& pObject ) { pObject = &m_object; return true; }
    void onRun( T& object );
    T m_object;
  } m_setString;
};

typedef MessageParseTestCase < FIX42::Logon >
LogonParseTestCase;
typedef MessageParseTestCase < FIX42::TestRequest >
TestRequestParseTestCase;
typedef MessageParseTestCase < FIX42::ResendRequest >
ResendRequestParseTestCase;
typedef MessageParseTestCase < FIX42::Reject >
RejectParseTestCase;
typedef MessageParseTestCase < FIX42::SequenceReset >
SequenceResetParseTestCase;
typedef MessageParseTestCase < FIX42::Logout >
LogoutParseTestCase;
typedef MessageParseTestCase < FIX42::NewOrderSingle >
NewOrderSingleParseTestCase;
typedef MessageParseTestCase < FIX42::ExecutionReport >
ExecutionReportParseTestCase;
typedef MessageParseTestCase < FIX42::DontKnowTrade >
DontKnowTradeParseTestCase;
typedef MessageParseTestCase < FIX42::OrderCancelReplaceRequest >
OrderCancelReplaceRequestParseTestCase;
typedef MessageParseTestCase < FIX42::OrderCancelRequest >
OrderCancelRequestParseTestCase;
typedef MessageParseTestCase < FIX42::OrderCancelReject >
OrderCancelRejectParseTestCase;
typedef MessageParseTestCase < FIX42::OrderStatusRequest >
OrderStatusRequestParseTestCase;
typedef MessageParseTestCase < FIX42::NewOrderList >
NewOrderListParseTestCase;
typedef MessageParseTestCase < FIX42::MassQuote >
MassQuoteParseTestCase;
}

#endif //FIX_MESSAGESTESTCASE_H
