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

#ifdef _MSC_VER
#pragma warning( disable : 4503 4355 4786 )
#include "stdafx.h"
#else
#include "config.h"
#endif

#include "MessageStoreTestCase.h"
#include "Messages.h"

namespace FIX
{
using namespace FIX42;
void MessageStoreTestCase::setGet::onRun( MessageStore& object )
{
  Logon logon;
  logon.getHeader().setField( MsgSeqNum( 1 ) );
  object.set( 1, logon.toString() );

  Heartbeat heartbeat;
  heartbeat.getHeader().setField( MsgSeqNum( 2 ) );
  object.set( 2, heartbeat.toString() );

  std::string message;
  assert( object.get( 1, message ) );
  assert( message == logon.toString() );

  Message getHeartbeat;
  assert( object.get( 2, message ) );
  assert( message == heartbeat.toString() );
}

void MessageStoreTestCase::getRange::onRun( MessageStore& object )
{
  Logon logon;
  logon.getHeader().setField( MsgSeqNum( 1 ) );
  object.set( 1, logon.toString() );

  Heartbeat heartbeat;
  heartbeat.getHeader().setField( MsgSeqNum( 2 ) );
  object.set( 2, heartbeat.toString() );

  NewOrderSingle newOrderSingle;
  newOrderSingle.getHeader().setField( MsgSeqNum( 3 ) );
  object.set( 3, newOrderSingle.toString() );

  std::vector < std::string > messages;
  object.get( 1, 3, messages );
  assert( messages.size() == 3 );
  assert( messages[ 0 ] == logon.toString() );
  assert( messages[ 1 ] == heartbeat.toString() );
  assert( messages[ 2 ] == newOrderSingle.toString() );

  object.get( 4, 6, messages );
  assert( messages.size() == 0 );

  object.get( 2, 6, messages );
  assert( messages.size() == 2 );
  assert( messages[ 0 ] == heartbeat.toString() );
  assert( messages[ 1 ] == newOrderSingle.toString() );
}

void MessageStoreTestCase::other::onRun( MessageStore& object )
{
  object.setNextSenderMsgSeqNum( 10 );
  assert( object.getNextSenderMsgSeqNum() == 10 );
  object.setNextTargetMsgSeqNum( 20 );
  assert( object.getNextTargetMsgSeqNum() == 20 );
  object.incrNextSenderMsgSeqNum();
  assert( object.getNextSenderMsgSeqNum() == 11 );
  object.incrNextTargetMsgSeqNum();
  assert( object.getNextTargetMsgSeqNum() == 21 );
}
}
