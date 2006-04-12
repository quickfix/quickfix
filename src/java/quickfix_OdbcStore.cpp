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

#ifdef HAVE_JAVA
#ifdef HAVE_ODBC

#include "JVM.h"
#include "quickfix_OdbcStore.h"
#include <quickfix/OdbcStore.h>
#include <quickfix/CallStack.h>
#include "Conversions.h"
#include "JavaMessageStore.h"

JNIEXPORT void JNICALL Java_quickfix_OdbcStore_create
( JNIEnv *pEnv, jobject obj )
{}

JNIEXPORT void JNICALL Java_quickfix_OdbcStore_destroy
( JNIEnv *pEnv, jobject obj )
{ QF_STACK_TRY
  JavaMessageStore_destroy( pEnv, obj );
  QF_STACK_CATCH
}

#endif
#endif
