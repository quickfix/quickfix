/****************************************************************************
** Copyright (c) 2001-2004 quickfixengine.org  All rights reserved.
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

#ifndef FIX_MEMORYSTORE_C
#define FIX_MEMORYSTORE_C

#ifdef __cplusplus
extern "C" {
#endif

#include "fix_messagestore.h"
#include <time.h>

/* MemoryStore */
int fix_MemoryStore_set(fix_MessageStore*, int, const char*);
int fix_MemoryStore_get(fix_MessageStore*, int, char*);
void fix_MemoryStore_getRange(fix_MessageStore*, int, int, char*[], int*);
int fix_MemoryStore_getNextSenderMsgSeqNum(fix_MessageStore*);
int fix_MemoryStore_getNextTargetMsgSeqNum(fix_MessageStore*);
void fix_MemoryStore_setNextSenderMsgSeqNum(fix_MessageStore*, int);
void fix_MemoryStore_setNextTargetMsgSeqNum(fix_MessageStore*, int);
void fix_MemoryStore_incrNextSenderMsgSeqNum(fix_MessageStore*);
void fix_MemoryStore_incrNextTargetMsgSeqNum(fix_MessageStore*);
tm fix_MemoryStore_getCreationTime(fix_MessageStore*);
void fix_MemoryStore_reset(fix_MessageStore*);
/* allocation/deallocation */
fix_MessageStore* fix_MemoryStore_malloc();
void fix_MemoryStore_free(fix_MessageStore*);

/* MemoryStoreFactory */
fix_MessageStore* fix_MemoryStoreFactory_create(fix_MessageStoreFactory*, const fix_SessionID);
void fix_MemoryStoreFactory_destroy(fix_MessageStoreFactory*, fix_MessageStore*);
/* allocation/deallocation */
fix_MessageStoreFactory* fix_MemoryStoreFactory_malloc();
void fix_MemoryStoreFactory_free(fix_MessageStoreFactory*);

#ifdef __cplusplus
} /* extern "C" */
#endif
/* FIX_MEMORYSTORE_C */
#endif
