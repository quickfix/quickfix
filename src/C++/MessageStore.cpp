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

#ifdef _MSC_VER
#include "stdafx.h"
#else
#include "config.h"
#endif
#include "CallStack.h"

#include "MessageStore.h"

namespace FIX
{
MessageStore* MemoryStoreFactory::create( const SessionID& )
{ QF_STACK_PUSH(MemoryStoreFactory::create)
  return new MemoryStore();
  QF_STACK_POP
}

void MemoryStoreFactory::destroy( MessageStore* pStore )
{ QF_STACK_PUSH(MemoryStoreFactory::destroy)
  delete pStore;
  QF_STACK_POP
}

bool MemoryStore::set( int msgSeqNum, const std::string& msg )
throw( IOException )
{ QF_STACK_PUSH(MemoryStore::set)
  m_messages[ msgSeqNum ] = msg;
  return true;
  QF_STACK_POP
}

void MemoryStore::get( int begin, int end,
                       std::vector < std::string > & messages ) const
throw( IOException )
{ QF_STACK_PUSH(MemoryStore::get)

  messages.clear();
  Messages::const_iterator find = m_messages.find( begin );
  for ( ; find != m_messages.end() && find->first <= end; ++find )
    messages.push_back( find->second );

  QF_STACK_POP
}

MessageStore* MessageStoreFactoryExceptionWrapper::create( const SessionID& sessionID, bool& threw, ConfigError& ex )
{ QF_STACK_PUSH(MessageStoreFactoryExceptionWrapper::create)

  threw = false;
  try { return m_pFactory->create( sessionID ); }
  catch ( ConfigError & e ) { threw = true; ex = e; return 0; }

  QF_STACK_POP
}

void MessageStoreFactoryExceptionWrapper::destroy( MessageStore* pStore )
{ QF_STACK_PUSH(MessageStoreFactoryExceptionWrapper::destroy)
  m_pFactory->destroy( pStore );
  QF_STACK_POP
}

bool MessageStoreExceptionWrapper::set( int num, const std::string& msg, bool& threw, IOException& ex )
{ QF_STACK_PUSH(MessageStoreExceptionWrapper::set)

  threw = false;
  try { return m_pStore->set( num, msg ); }
  catch ( IOException & e ) { threw = true; ex = e; return false; }

  QF_STACK_POP
}

void MessageStoreExceptionWrapper::get( int begin, int end, std::vector < std::string > & msgs, bool& threw, IOException& ex ) const
{ QF_STACK_PUSH(MessageStoreExceptionWrapper::get)

  threw = false;
  try { m_pStore->get( begin, end, msgs ); }
  catch ( IOException & e ) { threw = true; ex = e; }

  QF_STACK_POP
}

int MessageStoreExceptionWrapper::getNextSenderMsgSeqNum( bool& threw, IOException& ex ) const
{ QF_STACK_PUSH(MessageStoreExceptionWrapper::getNextSenderMsgSeqNum)

  threw = false;
  try { return m_pStore->getNextSenderMsgSeqNum(); }
  catch ( IOException & e ) { threw = true; ex = e; return 0; }

  QF_STACK_POP
}

int MessageStoreExceptionWrapper::getNextTargetMsgSeqNum( bool& threw, IOException& ex ) const
{ QF_STACK_PUSH(MessageStoreExceptionWrapper::getNextTargetMsgSeqNum)

  threw = false;
  try { return m_pStore->getNextTargetMsgSeqNum(); }
  catch ( IOException & e ) { threw = true; ex = e; return 0; }

  QF_STACK_POP
}

void MessageStoreExceptionWrapper::setNextSenderMsgSeqNum( int num, bool& threw, IOException& ex )
{ QF_STACK_PUSH(MessageStoreExceptionWrapper::setNextSenderMsgSeqNum)

  threw = false;
  try { m_pStore->setNextSenderMsgSeqNum( num ); }
  catch ( IOException & e ) { threw = true; ex = e; }

  QF_STACK_POP
}

void MessageStoreExceptionWrapper::setNextTargetMsgSeqNum( int num, bool& threw, IOException& ex )
{ QF_STACK_PUSH(MessageStoreExceptionWrapper::setNextTargetMsgSeqNum)

  threw = false;
  try { m_pStore->setNextTargetMsgSeqNum( num ); }
  catch ( IOException & e ) { threw = true; ex = e; }

  QF_STACK_POP
}

void MessageStoreExceptionWrapper::incrNextSenderMsgSeqNum( bool& threw, IOException& ex )
{ QF_STACK_PUSH(MessageStoreExceptionWrapper::incrNextSenderMsgSeqNum)

  threw = false;
  try { m_pStore->incrNextSenderMsgSeqNum(); }
  catch ( IOException & e ) { threw = true; ex = e; }

  QF_STACK_POP
}

void MessageStoreExceptionWrapper::incrNextTargetMsgSeqNum( bool& threw, IOException& ex )
{ QF_STACK_PUSH(MessageStoreExceptionWrapper::incrNextTargetMsgSeqNum)

  threw = false;
  try { m_pStore->incrNextTargetMsgSeqNum(); }
  catch ( IOException & e ) { threw = true; ex = e; }

  QF_STACK_POP
}

UtcTimeStamp MessageStoreExceptionWrapper::getCreationTime( bool& threw, IOException& ex )
{ QF_STACK_PUSH(MessageStoreExceptionWrapper::getCreationTime)

  threw = false;
  try { return m_pStore->getCreationTime(); }
  catch ( IOException & e ) { threw = true; ex = e; return UtcTimeStamp(); }

  QF_STACK_POP
}

void MessageStoreExceptionWrapper::reset( bool& threw, IOException& ex )
{ QF_STACK_PUSH(MessageStoreExceptionWrapper::reset)

  threw = false;
  try { m_pStore->reset(); }
  catch ( IOException & e ) { threw = true; ex = e; }

  QF_STACK_POP
}

void MessageStoreExceptionWrapper::refresh( bool& threw, IOException& ex )
{ QF_STACK_PUSH(MessageStoreExceptionWrapper::reset)

  threw = false;
  try { m_pStore->refresh(); }
  catch ( IOException & e ) { threw = true; ex = e; }

  QF_STACK_POP
}

} //namespace FIX
