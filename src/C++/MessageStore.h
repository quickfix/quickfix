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

#ifndef FIX_MESSAGESTORE_H
#define FIX_MESSAGESTORE_H

#ifdef _MSC_VER
#pragma warning( disable : 4503 4355 4786 4290 )
#endif

#include "Message.h"
#include <map>
#include <vector>
#include <string>

namespace FIX
{
class MessageStore;

/*! \addtogroup user
 *  @{
 */ 
/**
 * This interface must be implemented to create a MessageStore.
 */
class MessageStoreFactory
{
public:
  virtual ~MessageStoreFactory() {}
  virtual MessageStore* create( const SessionID& ) = 0;
  virtual void destroy( MessageStore* ) = 0;
};

/**
 * Creates a memory based implementation of MessageStore.
 *
 * This will lose all data on process terminition. This class should only
 * be used for test applications, never in production.
 */
class MemoryStoreFactory : public MessageStoreFactory
{
public:
  MessageStore* create( const SessionID& );
  void destroy( MessageStore* );
};

/**
 * This interface must be implemented to store and retrieve messages and
 * sequence numbers.
 */
class MessageStore
{
public:
  virtual ~MessageStore() {}

  virtual bool set( int, const std::string& )
  throw ( IOException& ) = 0;
  virtual bool get( int, std::string& ) const
  throw ( IOException& ) = 0;
  virtual void get( int, int, std::vector < std::string > & ) const
  throw ( IOException& ) = 0;

  virtual int getNextSenderMsgSeqNum() const throw ( IOException& ) = 0;
  virtual int getNextTargetMsgSeqNum() const throw ( IOException& ) = 0;
  virtual void setNextSenderMsgSeqNum( int ) throw ( IOException& ) = 0;
  virtual void setNextTargetMsgSeqNum( int ) throw ( IOException& ) = 0;
  virtual void incrNextSenderMsgSeqNum() throw ( IOException& ) = 0;
  virtual void incrNextTargetMsgSeqNum() throw ( IOException& ) = 0;

  virtual UtcTimeStamp getCreationTime() const throw ( IOException& ) = 0;

  virtual void reset() throw ( IOException& ) = 0;
};
/*! @} */

/**
 * Memory based implementation of MessageStore.
 *
 * This will lose all data on process terminition. This class should only
 * be used for test applications, never in production.
 */
class MemoryStore : public MessageStore
{
public:
  MemoryStore() : m_nextSenderMsgSeqNum( 1 ), m_nextTargetMsgSeqNum( 1 ) {}

  bool set( int, const std::string& ) throw ( IOException& );
  bool get( int, std::string& ) const throw ( IOException& );
  void get( int, int, std::vector < std::string > & ) const throw ( IOException& );

  int getNextSenderMsgSeqNum() const throw ( IOException& )
  { return m_nextSenderMsgSeqNum; }
  int getNextTargetMsgSeqNum() const throw ( IOException& )
  { return m_nextTargetMsgSeqNum; }
  void setNextSenderMsgSeqNum( int value ) throw ( IOException& )
  { m_nextSenderMsgSeqNum = value; }
  void setNextTargetMsgSeqNum( int value ) throw ( IOException& )
  { m_nextTargetMsgSeqNum = value; }
  void incrNextSenderMsgSeqNum() throw ( IOException& )
  { ++m_nextSenderMsgSeqNum; }
  void incrNextTargetMsgSeqNum() throw ( IOException& )
  { ++m_nextTargetMsgSeqNum; }

  void setCreationTime( const UtcTimeStamp& creationTime ) throw ( IOException& )
  { m_creationTime = creationTime; }
  UtcTimeStamp getCreationTime() const throw ( IOException& )
  { return m_creationTime; }

  void reset() throw ( IOException& )
  {
    m_nextSenderMsgSeqNum = 1; m_nextTargetMsgSeqNum = 1;
    m_messages.clear(); m_creationTime.setCurrent();
  }

private:
  typedef std::map < int, std::string > Messages;

  Messages m_messages;
  int m_nextSenderMsgSeqNum;
  int m_nextTargetMsgSeqNum;
  UtcTimeStamp m_creationTime;
};

class MessageStoreFactoryExceptionWrapper
{
private:
  MessageStoreFactory* m_pFactory;
public:
MessageStoreFactoryExceptionWrapper( MessageStoreFactory* pFactory ) : m_pFactory( pFactory ) {}

  MessageStore* create( const SessionID&, bool&, ConfigError& );
  void destroy( MessageStore* );
};

class MessageStoreExceptionWrapper
{
private:
  MessageStore* m_pStore;
public:
  MessageStoreExceptionWrapper( MessageStore* pStore ) : m_pStore( pStore ) {}
  ~MessageStoreExceptionWrapper() { delete m_pStore; }

  bool set( int, const std::string&, bool&, IOException& );
  bool get( int, std::string&, bool&, IOException& ) const;
  void get( int, int, std::vector < std::string > &, bool&, IOException& ) const;
  int getNextSenderMsgSeqNum( bool&, IOException& ) const;
  int getNextTargetMsgSeqNum( bool&, IOException& ) const;
  void setNextSenderMsgSeqNum( int, bool&, IOException& );
  void setNextTargetMsgSeqNum( int, bool&, IOException& );
  void incrNextSenderMsgSeqNum( bool&, IOException& );
  void incrNextTargetMsgSeqNum( bool&, IOException& );

  UtcTimeStamp getCreationTime( bool&, IOException& );

  void reset( bool&, IOException& );
};
}

#endif //FIX_MESSAGESTORE_H
