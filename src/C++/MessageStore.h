/* -*- C++ -*- */

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

#ifndef FIX_MESSAGESTORE_H
#define FIX_MESSAGESTORE_H

#ifdef _MSC_VER
#pragma warning(disable : 4503 4355 4786 4290)
#endif

#include "Message.h"
#include <map>
#include <string>
#include <vector>

namespace FIX {
class MessageStore;

/**
 * This interface must be implemented to create a MessageStore.
 */
class MessageStoreFactory {
public:
  virtual ~MessageStoreFactory() {}
  virtual MessageStore *create(const UtcTimeStamp &now, const SessionID &) = 0;
  virtual void destroy(MessageStore *) = 0;
};

/**
 * Creates a memory based implementation of MessageStore.
 *
 * This will lose all data on process termination. This class should only
 * be used for test applications, never in production.
 */
class MemoryStoreFactory : public MessageStoreFactory {
public:
  MessageStore *create(const UtcTimeStamp &now, const SessionID &);
  void destroy(MessageStore *);
};

/**
 * This interface must be implemented to store and retrieve messages and
 * sequence numbers.
 */
class MessageStore {
public:
  virtual ~MessageStore() {}

  virtual bool set(SEQNUM, const std::string &) EXCEPT(IOException) = 0;
  virtual void get(SEQNUM, SEQNUM, std::vector<std::string> &) const EXCEPT(IOException) = 0;

  virtual SEQNUM getNextSenderMsgSeqNum() const EXCEPT(IOException) = 0;
  virtual SEQNUM getNextTargetMsgSeqNum() const EXCEPT(IOException) = 0;
  virtual void setNextSenderMsgSeqNum(SEQNUM) EXCEPT(IOException) = 0;
  virtual void setNextTargetMsgSeqNum(SEQNUM) EXCEPT(IOException) = 0;
  virtual void incrNextSenderMsgSeqNum() EXCEPT(IOException) = 0;
  virtual void incrNextTargetMsgSeqNum() EXCEPT(IOException) = 0;

  virtual UtcTimeStamp getCreationTime() const EXCEPT(IOException) = 0;

  virtual void reset(const UtcTimeStamp &now) EXCEPT(IOException) = 0;
  virtual void refresh() EXCEPT(IOException) = 0;
};
/*! @} */

/**
 * Memory based implementation of MessageStore.
 *
 * This will lose all data on process terminition. This class should only
 * be used for test applications, never in production.
 */
class MemoryStore : public MessageStore {
public:
  MemoryStore(const UtcTimeStamp &now)
      : m_nextSenderMsgSeqNum(1),
        m_nextTargetMsgSeqNum(1),
        m_creationTime(now) {}

  bool set(SEQNUM, const std::string &) EXCEPT(IOException);
  void get(SEQNUM, SEQNUM, std::vector<std::string> &) const EXCEPT(IOException);

  SEQNUM getNextSenderMsgSeqNum() const EXCEPT(IOException) { return m_nextSenderMsgSeqNum; }
  SEQNUM getNextTargetMsgSeqNum() const EXCEPT(IOException) { return m_nextTargetMsgSeqNum; }
  void setNextSenderMsgSeqNum(SEQNUM value) EXCEPT(IOException) { m_nextSenderMsgSeqNum = value; }
  void setNextTargetMsgSeqNum(SEQNUM value) EXCEPT(IOException) { m_nextTargetMsgSeqNum = value; }
  void incrNextSenderMsgSeqNum() EXCEPT(IOException) { ++m_nextSenderMsgSeqNum; }
  void incrNextTargetMsgSeqNum() EXCEPT(IOException) { ++m_nextTargetMsgSeqNum; }

  void setCreationTime(const UtcTimeStamp &creationTime) EXCEPT(IOException) { m_creationTime = creationTime; }
  UtcTimeStamp getCreationTime() const EXCEPT(IOException) { return m_creationTime; }

  void reset(const UtcTimeStamp &now) EXCEPT(IOException) {
    m_nextSenderMsgSeqNum = 1;
    m_nextTargetMsgSeqNum = 1;
    m_messages.clear();
    m_creationTime = now;
  }
  void refresh() EXCEPT(IOException) {}

private:
  typedef std::map<SEQNUM, std::string> Messages;

  Messages m_messages;
  SEQNUM m_nextSenderMsgSeqNum;
  SEQNUM m_nextTargetMsgSeqNum;
  UtcTimeStamp m_creationTime;
};

class MessageStoreFactoryExceptionWrapper {
private:
  MessageStoreFactory *m_pFactory;

public:
  MessageStoreFactoryExceptionWrapper(MessageStoreFactory *pFactory)
      : m_pFactory(pFactory) {}

  MessageStore *create(const UtcTimeStamp &now, const SessionID &, bool &, ConfigError &);
  void destroy(MessageStore *);
};

class MessageStoreExceptionWrapper {
private:
  MessageStore *m_pStore;

public:
  MessageStoreExceptionWrapper(MessageStore *pStore)
      : m_pStore(pStore) {}
  ~MessageStoreExceptionWrapper() { delete m_pStore; }

  bool set(SEQNUM, const std::string &, bool &, IOException &);
  void get(SEQNUM, SEQNUM, std::vector<std::string> &, bool &, IOException &) const;
  SEQNUM getNextSenderMsgSeqNum(bool &, IOException &) const;
  SEQNUM getNextTargetMsgSeqNum(bool &, IOException &) const;
  void setNextSenderMsgSeqNum(SEQNUM, bool &, IOException &);
  void setNextTargetMsgSeqNum(SEQNUM, bool &, IOException &);
  void incrNextSenderMsgSeqNum(bool &, IOException &);
  void incrNextTargetMsgSeqNum(bool &, IOException &);

  UtcTimeStamp getCreationTime(bool &, IOException &);

  void reset(const UtcTimeStamp &, bool &, IOException &);
  void refresh(bool &, IOException &);
};
} // namespace FIX

#endif // FIX_MESSAGESTORE_H
