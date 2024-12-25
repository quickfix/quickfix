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
#include "stdafx.h"
#else
#include "config.h"
#endif

#include "MessageStore.h"

namespace FIX {
MessageStore *MemoryStoreFactory::create(const UtcTimeStamp &now, const SessionID &) { return new MemoryStore(now); }

void MemoryStoreFactory::destroy(MessageStore *pStore) { delete pStore; }

bool MemoryStore::set(SEQNUM msgSeqNum, const std::string &msg) EXCEPT(IOException) {
  m_messages[msgSeqNum] = msg;
  return true;
}

void MemoryStore::get(SEQNUM begin, SEQNUM end, std::vector<std::string> &messages) const EXCEPT(IOException) {
  messages.clear();
  Messages::const_iterator find = m_messages.find(begin);
  for (; find != m_messages.end() && find->first <= end; ++find) {
    messages.push_back(find->second);
  }
}

MessageStore *MessageStoreFactoryExceptionWrapper::create(
    const UtcTimeStamp &now,
    const SessionID &sessionID,
    bool &threw,
    ConfigError &ex) {
  threw = false;
  try {
    return m_pFactory->create(now, sessionID);
  } catch (ConfigError &e) {
    threw = true;
    ex = e;
    return 0;
  }
}

void MessageStoreFactoryExceptionWrapper::destroy(MessageStore *pStore) { m_pFactory->destroy(pStore); }

bool MessageStoreExceptionWrapper::set(SEQNUM num, const std::string &msg, bool &threw, IOException &ex) {
  threw = false;
  try {
    return m_pStore->set(num, msg);
  } catch (IOException &e) {
    threw = true;
    ex = e;
    return false;
  }
}

void MessageStoreExceptionWrapper::get(
    SEQNUM begin,
    SEQNUM end,
    std::vector<std::string> &msgs,
    bool &threw,
    IOException &ex) const {
  threw = false;
  try {
    m_pStore->get(begin, end, msgs);
  } catch (IOException &e) {
    threw = true;
    ex = e;
  }
}

SEQNUM MessageStoreExceptionWrapper::getNextSenderMsgSeqNum(bool &threw, IOException &ex) const {
  threw = false;
  try {
    return m_pStore->getNextSenderMsgSeqNum();
  } catch (IOException &e) {
    threw = true;
    ex = e;
    return 0;
  }
}

SEQNUM MessageStoreExceptionWrapper::getNextTargetMsgSeqNum(bool &threw, IOException &ex) const {
  threw = false;
  try {
    return m_pStore->getNextTargetMsgSeqNum();
  } catch (IOException &e) {
    threw = true;
    ex = e;
    return 0;
  }
}

void MessageStoreExceptionWrapper::setNextSenderMsgSeqNum(SEQNUM num, bool &threw, IOException &ex) {
  threw = false;
  try {
    m_pStore->setNextSenderMsgSeqNum(num);
  } catch (IOException &e) {
    threw = true;
    ex = e;
  }
}

void MessageStoreExceptionWrapper::setNextTargetMsgSeqNum(SEQNUM num, bool &threw, IOException &ex) {
  threw = false;
  try {
    m_pStore->setNextTargetMsgSeqNum(num);
  } catch (IOException &e) {
    threw = true;
    ex = e;
  }
}

void MessageStoreExceptionWrapper::incrNextSenderMsgSeqNum(bool &threw, IOException &ex) {
  threw = false;
  try {
    m_pStore->incrNextSenderMsgSeqNum();
  } catch (IOException &e) {
    threw = true;
    ex = e;
  }
}

void MessageStoreExceptionWrapper::incrNextTargetMsgSeqNum(bool &threw, IOException &ex) {
  threw = false;
  try {
    m_pStore->incrNextTargetMsgSeqNum();
  } catch (IOException &e) {
    threw = true;
    ex = e;
  }
}

UtcTimeStamp MessageStoreExceptionWrapper::getCreationTime(bool &threw, IOException &ex) {
  threw = false;
  try {
    return m_pStore->getCreationTime();
  } catch (IOException &e) {
    threw = true;
    ex = e;
    return UtcTimeStamp::now();
  }
}

void MessageStoreExceptionWrapper::reset(const UtcTimeStamp &now, bool &threw, IOException &ex) {
  threw = false;
  try {
    m_pStore->reset(now);
  } catch (IOException &e) {
    threw = true;
    ex = e;
  }
}

void MessageStoreExceptionWrapper::refresh(bool &threw, IOException &ex) {
  threw = false;
  try {
    m_pStore->refresh();
  } catch (IOException &e) {
    threw = true;
    ex = e;
  }
}

} // namespace FIX
