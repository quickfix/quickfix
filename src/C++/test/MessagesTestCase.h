/* -*- C++ -*- */
/* ====================================================================
 * The QuickFIX Software License, Version 1.0
 *
 * Copyright (c) 2001 ThoughtWorks, Inc.  All rights
 * reserved.
 *
 * Redistribution and use in source and binary forms, with or without
 * modification, are permitted provided that the following conditions
 * are met:
 *
 * 1. Redistributions of source code must retain the above copyright
 *    notice, this list of conditions and the following disclaimer.
 *
 * 2. Redistributions in binary form must reproduce the above copyright
 *    notice, this list of conditions and the following disclaimer in
 *    the documentation and/or other materials provided with the
 *    distribution.
 *
 * 3. The end-user documentation included with the redistribution,
 *    if any, must include the following acknowledgment:
 *       "This product includes software developed by
 *        ThoughtWorks, Inc. (http://www.thoughtworks.com/)."
 *    Alternately, this acknowledgment may appear in the software itself,
 *    if and wherever such third-party acknowledgments normally appear.
 *
 * 4. The names "QuickFIX" and "ThoughtWorks, Inc." must
 *    not be used to endorse or promote products derived from this
 *    software without prior written permission. For written
 *    permission, please contact quickfix-users@lists.sourceforge.net.
 *
 * 5. Products derived from this software may not be called "QuickFIX",
 *    nor may "QuickFIX" appear in their name, without prior written
 *    permission of ThoughtWorks, Inc.
 *
 * THIS SOFTWARE IS PROVIDED ``AS IS'' AND ANY EXPRESSED OR IMPLIED
 * WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE IMPLIED WARRANTIES
 * OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE ARE
 * DISCLAIMED.  IN NO EVENT SHALL THOUGHTWORKS INC OR
 * ITS CONTRIBUTORS BE LIABLE FOR ANY DIRECT, INDIRECT, INCIDENTAL,
 * SPECIAL, EXEMPLARY, OR CONSEQUENTIAL DAMAGES (INCLUDING, BUT NOT
 * LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS OR SERVICES; LOSS OF
 * USE, DATA, OR PROFITS; OR BUSINESS INTERRUPTION) HOWEVER CAUSED AND
 * ON ANY THEORY OF LIABILITY, WHETHER IN CONTRACT, STRICT LIABILITY,
 * OR TORT (INCLUDING NEGLIGENCE OR OTHERWISE) ARISING IN ANY WAY OUT
 * OF THE USE OF THIS SOFTWARE, EVEN IF ADVISED OF THE POSSIBILITY OF
 * SUCH DAMAGE.
 * ====================================================================
 */

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
    add( &m_checkSum );
    add( &m_headerFieldsFirst );
    add( &m_noEndingDelim );
    add( &m_outOfOrder );
    add( &m_getXML );
    add( &m_reverseRoute );
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
