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

#ifndef FIX_MESSAGESTORE_C
#define FIX_MESSAGESTORE_C

#ifdef __cplusplus
extern "C" {
#endif

#include "fix_message.h"
#include "fix_sessionid.h"
#include <time.h>

struct fix_MessageStore
{
  int(*set)(fix_MessageStore*, int, const char*);
  int(*get)(fix_MessageStore*, int, char*);
  void(*getRange)(fix_MessageStore*, int, int, char*[], int*);
  int(*getNextSenderMsgSeqNum)(fix_MessageStore*);
  int(*getNextTargetMsgSeqNum)(fix_MessageStore*);
  void(*setNextSenderMsgSeqNum)(fix_MessageStore*, int);
  void(*setNextTargetMsgSeqNum)(fix_MessageStore*, int);
  void(*incrNextSenderMsgSeqNum)(fix_MessageStore*);
  void(*incrNextTargetMsgSeqNum)(fix_MessageStore*);
  tm(*getCreationTime)(fix_MessageStore*);
  void(*reset)(fix_MessageStore*);
  fix_MessageStore* self;
  void* data;
};

struct fix_MessageStoreFactory
{
  fix_MessageStore*(*create)(fix_MessageStoreFactory*, const fix_SessionID);
  void(*destroy)(fix_MessageStoreFactory*, fix_MessageStore*);
  fix_MessageStoreFactory* self;
  void* data;
};

#ifdef __cplusplus
} /* extern "C" */
#endif
/* FIX_MESSAGESTORE_C */
#endif
