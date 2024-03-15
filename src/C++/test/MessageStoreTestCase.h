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

#include <fix42/Logon.h>
#include <fix42/Heartbeat.h>
#include <fix42/NewOrderSingle.h>
#include <fix42/ExecutionReport.h>
#include <MessageStore.h>
#include <SessionID.h>

#define CHECK_MESSAGE_STORE_SET_GET                         \
  FIX42::Logon logon;                                       \
  logon.getHeader().setField( MsgSeqNum( 1 ) );             \
  object->set( 1, logon.toString() );                       \
                                                            \
  FIX42::Heartbeat heartbeat;                               \
  heartbeat.getHeader().setField( MsgSeqNum( 2 ) );         \
  object->set( 2, heartbeat.toString() );                   \
                                                            \
  FIX42::NewOrderSingle newOrderSingle;                     \
  newOrderSingle.getHeader().setField( MsgSeqNum( 3 ) );    \
  object->set( 3, newOrderSingle.toString() );              \
                                                            \
  std::vector < std::string > messages;                     \
  object->get( 1, 3, messages );                            \
  CHECK( 3U == messages.size() );                           \
  CHECK( logon.toString() == messages[ 0 ] );               \
  CHECK( heartbeat.toString() == messages[ 1 ] );           \
  CHECK( newOrderSingle.toString() == messages[ 2 ] );      \
                                                            \
  object->get( 4, 6, messages );                            \
  CHECK( 0U == messages.size() );                           \
                                                            \
  object->get( 2, 6, messages );                            \
  CHECK( 2U == messages.size() );                           \
  CHECK( heartbeat.toString() == messages[ 0 ] );           \
  CHECK( newOrderSingle.toString() == messages[ 1 ] );

#define CHECK_MESSAGE_STORE_SET_GET_WITH_QUOTE        \
  FIX42::ExecutionReport singleQuote;                 \
  singleQuote.setField( Text("Some Text") );          \
  object->set( 1, singleQuote.toString() );           \
                                                      \
  FIX42::ExecutionReport doubleQuote;                 \
  doubleQuote.setField( Text("\"Some Text\"") );      \
  object->set( 2, doubleQuote.toString() );           \
                                                      \
  FIX42::ExecutionReport bothQuote;                   \
  bothQuote.setField( Text("'\"Some Text\"'") );      \
  object->set( 3, bothQuote.toString() );             \
                                                      \
  FIX42::ExecutionReport escape;                      \
  escape.setField( Text("\\Some Text\\") );           \
  object->set( 4, escape.toString() );                \
                                                      \
  std::vector<std::string> messages;                  \
  object->get( 1, 4, messages );                      \
  CHECK( 4U == messages.size() );                     \
  CHECK( singleQuote.toString() == messages[0] );     \
  CHECK( doubleQuote.toString() == messages[1] );     \
  CHECK( bothQuote.toString() == messages[2] );       \
  CHECK( escape.toString() == messages[3] );

#define CHECK_MESSAGE_STORE_OTHER                       \
  object->setNextSenderMsgSeqNum( 10 );                 \
  CHECK( 10 == object->getNextSenderMsgSeqNum() );      \
  object->setNextTargetMsgSeqNum( 20 );                 \
  CHECK( 20 == object->getNextTargetMsgSeqNum() );      \
  object->incrNextSenderMsgSeqNum();                    \
  CHECK( 11 == object->getNextSenderMsgSeqNum() );      \
  object->incrNextTargetMsgSeqNum();                    \
  CHECK( 21 == object->getNextTargetMsgSeqNum() );      \
                                                        \
  object->setNextSenderMsgSeqNum( 5 );                  \
  object->setNextTargetMsgSeqNum( 6 );

// use same session from previous test
#define CHECK_MESSAGE_STORE_RELOAD                      \
  CHECK( 5 == object->getNextSenderMsgSeqNum() );       \
  CHECK( 6 == object->getNextTargetMsgSeqNum() );

// use same session from previous test
#define CHECK_MESSAGE_STORE_REFRESH                   \
  object->refresh();                                  \
  CHECK( 5 == object->getNextSenderMsgSeqNum() );     \
  CHECK( 6 == object->getNextTargetMsgSeqNum() );
