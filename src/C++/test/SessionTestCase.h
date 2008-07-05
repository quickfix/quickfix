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

#ifndef FIX_SESSIONTESTCASE_H
#define FIX_SESSIONTESTCASE_H

#include <CPPTest/TestCase.h>
#include "Session.h"
#include "Responder.h"

namespace FIX
{
class SessionTestCase : public CPPTest::TestCase < Session >
{
public:
  SessionTestCase()
  {
  }

private:
  class AcceptorTest
  {
  public:
    bool onSetup( Session*& pObject );
  };

  class InitiatorTest
  {
  public:
    bool onSetup( Session*& pObject );
  };

  class EmptyTest : public AcceptorTest
  {
    bool onSetup( Session*& pObject ) { return true; }
    void onTeardown( Session* pObject ) {}
  };

  class nextLogon : public AcceptorTest
  {
    void onRun( Session& object );
  }
  m_nextLogon;

  class nextLogonNoEncryptMethod : public AcceptorTest
  {
    void onRun( Session& object );
  }
  m_nextLogonNoEncryptMethod;

  class nextLogonResetSeqNumFlag : public AcceptorTest
  {
    void onRun( Session& object );
  }
  m_nextLogonResetSeqNumFlag;

  class notifyResendRequest : public AcceptorTest
  {
    void onRun( Session& object );
  }
  m_notifyResendRequest;

  class incrMsgSeqNum : public AcceptorTest
  {
    void onRun( Session& object );
  }
  m_incrMsgSeqNum;

  class callDisconnect : public AcceptorTest
  {
    void onRun( Session& object );
  }
  m_callDisconnect;

  class doesSessionExist : public EmptyTest
  {
    void onRun( Session& object );
  }
  m_doesSessionExist;

  class lookupSession : public EmptyTest
  {
    bool onSetup( Session*& pObject );
    void onRun( Session& object );
    void onTeardown( Session* pObject );
    Session *m_pSession1, *m_pSession2, *m_pSession3,
    *m_pSession4, *m_pSession5;
  }
  m_lookupSession;

  class registerSession : public EmptyTest
  {
    bool onSetup( Session*& pObject );
    void onRun( Session& object );
    Session *m_pSession;
  }
  m_registerSession;

  class nextTestRequest : public AcceptorTest
  {
    void onRun( Session& object );
  }
  m_nextTestRequest;

  class outOfOrder : public AcceptorTest
  {
    void onRun( Session& object );
  }
  m_outOfOrder;

  class nextLogout : public AcceptorTest
  {
    void onRun( Session& object );
  }
  m_nextLogout;

  class logoutInitiator : public InitiatorTest
  {
    void onRun( Session& object );
  }
  m_logoutInitiator;

  class badOrigSendingTime : public AcceptorTest
  {
    void onRun( Session& object );
  }
  m_badOrigSendingTime;

  class noOrigSendingTime : public AcceptorTest
  {
    void onRun( Session& object );
  }
  m_noOrigSendingTime;

  class badCompID : public AcceptorTest
  {
    void onRun( Session& object );
  }
  m_badCompID;

  class nextReject : public AcceptorTest
  {
    void onRun( Session& object );
  }
  m_nextReject;

  class badMsgType : public AcceptorTest
  {
    bool onSetup( Session*& pObject );
    void onRun( Session& object );
  }
  m_badMsgType;

  class nextSequenceReset : public AcceptorTest
  {
    void onRun( Session& object );
  }
  m_nextSequenceReset;

  class nextGapFill : public AcceptorTest
  {
    void onRun( Session& object );
  }
  m_nextGapFill;

  class nextResendRequest : public AcceptorTest
  {
    void onRun( Session& object );
  }
  m_nextResendRequest;

  class nextResendRequestRepeatingGroup : public AcceptorTest
  {
    void onRun( Session& object );
  }
  m_nextResendRequestRepeatingGroup;

  class nextResendRequestNoMessagePersist : public AcceptorTest
  {
    void onRun( Session& object );
  }
  m_nextResendRequestNoMessagePersist;

  class badBeginString : public AcceptorTest
  {
    void onRun( Session& object );
  }
  m_badBeginString;

  class unsupportedMsgType : public AcceptorTest
  {
    void onRun( Session& object );
  }
  m_unsupportedMsgType;

  class resetOnEndTime : public AcceptorTest
  {
    bool onSetup( Session*& pObject );
    void onRun( Session& object );
  }
  m_resetOnEndTime;

  class disconnectBeforeStartTime : public AcceptorTest
  {
    bool onSetup( Session*& pObject );
    void onRun( Session& object );
  }
  m_disconnectBeforeStartTime;

  class resetOnNewSession : public AcceptorTest
  {
  class Factory : public MemoryStoreFactory
    {
      MessageStore* create( const SessionID& )
      {
        MemoryStore * pStore = new MemoryStore();
        UtcTimeStamp yesterday;
        yesterday += -( DateTime::SECONDS_PER_DAY - 2 );
        pStore->setCreationTime( yesterday );
        return pStore;
      }
    }
    m_previousDayFactory;

    bool onSetup( Session*& pObject );
    void onRun( Session& object );

    Session* createSession();
  }
  m_resetOnNewSession;

  class logonAtLogonStartTime : public AcceptorTest
  {
    bool onSetup( Session*& pObject );
    void onRun( Session& object );
  }
  m_logonAtLogonStartTime;

  class processQueuedMessages : public AcceptorTest
  {
    bool onSetup( Session*& pObject );
    void onRun( Session& object );
  }
  m_processQueuedMessages;
};
}

#endif //FIX_SESSIONTESTCASE_H
