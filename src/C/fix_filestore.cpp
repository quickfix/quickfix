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
 *    permission, please contact quickfix_-users@lists.sourceforge.net.
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

#include "fix_filestore.h"
#include <quickfix/FileStore.h>
#include <vector>

int fix_FileStore_set(fix_MessageStore* store, int seq, const char* message)
{
  FIX::MessageStore* pStore = (FIX::MessageStore*)store->data;
  return pStore->set(seq, message);
}

int fix_FileStore_get(fix_MessageStore* store, int seq, char* message, int* size)
{
  FIX::MessageStore* pStore = (FIX::MessageStore*)store->data;
  std::string stored;
  bool result = pStore->get(seq, stored);
  if( result )
  {
    *size = stored.size() + 1;
    message = (char*)calloc(*size + 1, sizeof(char));
    strcpy( message, stored.c_str() );
  }
  return result;
}

void fix_FileStore_getRange(fix_MessageStore* store, int begin, int end,
                            char* messages[], int* size)
{
  FIX::MessageStore* pStore = (FIX::MessageStore*)store->data;
  std::vector<std::string> vmessages;
  pStore->get(begin, end, vmessages);
  *size = vmessages.size();
}

int fix_FileStore_getNextSenderMsgSeqNum(fix_MessageStore* store)
{
  FIX::MessageStore* pStore = (FIX::MessageStore*)store->data;
  return pStore->getNextSenderMsgSeqNum();
}

int fix_FileStore_getNextTargetMsgSeqNum(fix_MessageStore* store)
{
  FIX::MessageStore* pStore = (FIX::MessageStore*)store->data;
  return pStore->getNextTargetMsgSeqNum();
}

void fix_FileStore_setNextSenderMsgSeqNum(fix_MessageStore* store, int seq)
{
  FIX::MessageStore* pStore = (FIX::MessageStore*)store->data;
  pStore->setNextSenderMsgSeqNum(seq);
}

void fix_FileStore_setNextTargetMsgSeqNum(fix_MessageStore* store, int seq)
{
  FIX::MessageStore* pStore = (FIX::MessageStore*)store->data;
  pStore->setNextTargetMsgSeqNum(seq);
}

void fix_FileStore_incrNextSenderMsgSeqNum(fix_MessageStore* store)
{
  FIX::MessageStore* pStore = (FIX::MessageStore*)store->data;
  pStore->incrNextSenderMsgSeqNum();
}

void fix_FileStore_incrNextTargetMsgSeqNum(fix_MessageStore* store)
{
  FIX::MessageStore* pStore = (FIX::MessageStore*)store->data;
  pStore->incrNextTargetMsgSeqNum();
}

tm fix_FileStore_getCreationTime(fix_MessageStore* store)
{
  FIX::MessageStore* pStore = (FIX::MessageStore*)store->data;
  return *(tm*)pStore->getCreationTime();
}

void fix_FileStore_reset(fix_MessageStore* store)
{
  FIX::MessageStore* pStore = (FIX::MessageStore*)store->data;
  pStore->reset();
}

fix_MessageStore* fix_FileStore_malloc(const char* path, const fix_SessionID sessionID)
{
  fix_MessageStore* store = (fix_MessageStore*)malloc(sizeof(fix_MessageStore*));
  store->self = store;
  store->data = (void*)new FIX::FileStore(path, *(FIX::SessionID*)sessionID);
  store->set = &fix_FileStore_set;
  store->get = &fix_FileStore_get;
  store->getRange = &fix_FileStore_getRange;
  store->getNextSenderMsgSeqNum = &fix_FileStore_getNextSenderMsgSeqNum;
  store->getNextTargetMsgSeqNum = &fix_FileStore_getNextTargetMsgSeqNum;
  store->setNextSenderMsgSeqNum = &fix_FileStore_setNextSenderMsgSeqNum;
  store->setNextTargetMsgSeqNum = &fix_FileStore_setNextTargetMsgSeqNum;
  store->incrNextSenderMsgSeqNum = &fix_FileStore_incrNextSenderMsgSeqNum;
  store->incrNextTargetMsgSeqNum = &fix_FileStore_incrNextTargetMsgSeqNum;
  store->getCreationTime = &fix_FileStore_getCreationTime;
  store->reset = &fix_FileStore_reset;
  return store;
}

void fix_FileStore_free(fix_MessageStore* store)
{
  delete (FIX::FileStore*)store->data;
  free(store);
}

fix_MessageStore* fix_FileStoreFactory_create(fix_MessageStoreFactory*, const fix_SessionID sessionID)
{
  return fix_FileStore_malloc("store", sessionID);
}

void fix_FileStoreFactory_destroy(fix_MessageStoreFactory* factory, fix_MessageStore* store)
{
  fix_FileStore_free(store);
}

fix_MessageStoreFactory* fix_FileStoreFactory_malloc(const char* path, fix_SessionID sessionID)
{
  fix_MessageStoreFactory* factory =
    (fix_MessageStoreFactory*)malloc(sizeof(fix_MessageStoreFactory*));
  factory->self = factory;
  factory->create = &fix_FileStoreFactory_create;
  factory->destroy = &fix_FileStoreFactory_destroy;
  return factory;
}

void fix_FileStoreFactory_free(fix_MessageStoreFactory* factory)
{
  free(factory);
}
