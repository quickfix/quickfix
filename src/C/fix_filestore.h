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

#ifndef FIX_MEMORYSTORE_C
#define FIX_MEMORYSTORE_C

#ifdef __cplusplus
extern "C" {
#endif

#include "fix_messagestore.h"
#include <time.h>

/* FileStore */
int fix_FileStore_set(fix_MessageStore*, int, char*);
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
