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

#include "fix_message.h"

#ifdef __cplusplus
extern "C" {
#endif

fix_Message fix_CreateLogon();
void fix_DestroyLogon( fix_Message );

int fix_GetLength( fix_Message );
int fix_GetString( fix_Message, unsigned int, char* );

int fix_SetEncryptMethod( fix_Message, int );
int fix_GetEncryptMethod( fix_Message, int* );

#ifdef __cplusplus
} /* extern "C" */
#endif
