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

/* FileStore */
int fix_FileStore_set(fix_MessageStore*, int, const char*);
int fix_FileStore_get(fix_MessageStore*, int, char*);
void fix_FileStore_getRange(fix_MessageStore*, int, int, char*[], int*);
int fix_FileStore_getNextSenderMsgSeqNum(fix_MessageStore*);
int fix_FileStore_getNextTargetMsgSeqNum(fix_MessageStore*);
void fix_FileStore_setNextSenderMsgSeqNum(fix_MessageStore*, int);
void fix_FileStore_setNextTargetMsgSeqNum(fix_MessageStore*, int);
void fix_FileStore_incrNextSenderMsgSeqNum(fix_MessageStore*);
void fix_FileStore_incrNextTargetMsgSeqNum(fix_MessageStore*);
tm fix_FileStore_getCreationTime(fix_MessageStore*);
void fix_FileStore_reset(fix_MessageStore*);
/* allocation/deallocation */
fix_MessageStore* fix_FileStore_malloc();
void fix_FileStore_free(fix_MessageStore*);

/* FileStoreFactory */
fix_MessageStore* fix_FileStoreFactory_create(fix_MessageStoreFactory*, const fix_SessionID);
void fix_FileStoreFactory_destroy(fix_MessageStoreFactory*, fix_MessageStore*);
/* allocation/deallocation */
fix_MessageStoreFactory* fix_FileStoreFactory_malloc(const char*, const fix_SessionID);
void fix_FileStoreFactory_free(fix_MessageStoreFactory*);

#ifdef __cplusplus
} /* extern "C" */
#endif
/* FIX_MEMORYSTORE_C */
#endif
