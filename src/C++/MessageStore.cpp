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
#include "stdafx.h"
#else
#include "config.h"
#endif

#include "MessageStore.h"

namespace FIX
{
MessageStore* MemoryStoreFactory::create( const SessionID& )
{
  return new MemoryStore();
}

void MemoryStoreFactory::destroy( MessageStore* pStore )
{
  delete pStore;
}

bool MemoryStore::set( int msgSeqNum, const std::string& msg )
throw( IOException& )
{
  m_messages[ msgSeqNum ] = msg;
  return true;
}

bool MemoryStore::get( int msgSeqNum, std::string& msg ) const
throw( IOException& )
{
  Messages::const_iterator find = m_messages.find( msgSeqNum );
  if ( find == m_messages.end() ) return false;
  msg = find->second;
  return true;
}

void MemoryStore::get( int begin, int end,
                       std::vector < std::string > & messages ) const
throw( IOException& )
{
  messages.clear();
  Messages::const_iterator find = m_messages.find( begin );
  for ( ; find != m_messages.end() && find->first <= end; ++find )
    messages.push_back( find->second );
}

MessageStore* MessageStoreFactoryExceptionWrapper::create( const SessionID& sessionID, bool& threw, ConfigError& ex )
{
  threw = false;
  try { return m_pFactory->create( sessionID ); }
  catch ( ConfigError & e ) { threw = true; ex = e; return 0; }
}

void MessageStoreFactoryExceptionWrapper::destroy( MessageStore* pStore )
{
  m_pFactory->destroy( pStore );
}

bool MessageStoreExceptionWrapper::set( int num, const std::string& msg, bool& threw, IOException& ex )
{
  threw = false;
  try { return m_pStore->set( num, msg ); }
  catch ( IOException & e ) { threw = true; ex = e; return false; }
}

bool MessageStoreExceptionWrapper::get( int num, std::string& msg, bool& threw, IOException& ex ) const
{
  threw = false;
  try { return m_pStore->get( num, msg ); }
  catch ( IOException & e ) { threw = true; ex = e; return false; }
}

void MessageStoreExceptionWrapper::get( int begin, int end, std::vector < std::string > & msgs, bool& threw, IOException& ex ) const
{
  threw = false;
  try { m_pStore->get( begin, end, msgs ); }
  catch ( IOException & e ) { threw = true; ex = e; }
}

int MessageStoreExceptionWrapper::getNextSenderMsgSeqNum( bool& threw, IOException& ex ) const
{
  threw = false;
  try { return m_pStore->getNextSenderMsgSeqNum(); }
  catch ( IOException & e ) { threw = true; ex = e; return 0; }
}

int MessageStoreExceptionWrapper::getNextTargetMsgSeqNum( bool& threw, IOException& ex ) const
{
  threw = false;
  try { return m_pStore->getNextTargetMsgSeqNum(); }
  catch ( IOException & e ) { threw = true; ex = e; return 0; }
}

void MessageStoreExceptionWrapper::setNextSenderMsgSeqNum( int num, bool& threw, IOException& ex )
{
  threw = false;
  try { m_pStore->setNextSenderMsgSeqNum( num ); }
  catch ( IOException & e ) { threw = true; ex = e; }
}

void MessageStoreExceptionWrapper::setNextTargetMsgSeqNum( int num, bool& threw, IOException& ex )
{
  threw = false;
  try { m_pStore->setNextTargetMsgSeqNum( num ); }
  catch ( IOException & e ) { threw = true; ex = e; }
}

void MessageStoreExceptionWrapper::incrNextSenderMsgSeqNum( bool& threw, IOException& ex )
{
  threw = false;
  try { m_pStore->incrNextSenderMsgSeqNum(); }
  catch ( IOException & e ) { threw = true; ex = e; }
}

void MessageStoreExceptionWrapper::incrNextTargetMsgSeqNum( bool& threw, IOException& ex )
{
  threw = false;
  try { m_pStore->incrNextTargetMsgSeqNum(); }
  catch ( IOException & e ) { threw = true; ex = e; }
}

UtcTimeStamp MessageStoreExceptionWrapper::getCreationTime( bool& threw, IOException& ex )
{
  threw = false;
  try { return m_pStore->getCreationTime(); }
  catch ( IOException & e ) { threw = true; ex = e; return UtcTimeStamp(); }
}

void MessageStoreExceptionWrapper::reset( bool& threw, IOException& ex )
{
  threw = false;
  try { m_pStore->reset(); }
  catch ( IOException & e ) { threw = true; ex = e; }
}
} //namespace FIX
