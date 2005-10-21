/****************************************************************************
** Copyright (c) 2001-2005 quickfixengine.org  All rights reserved.
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

#include "JVM.h"
#include "Conversions.h"
#include "quickfix_FileLog.h"
#include <quickfix/FileLog.h>
#include <quickfix/CallStack.h>

JNIEXPORT void JNICALL Java_quickfix_FileLog_create
( JNIEnv *, jobject )
{ QF_STACK_TRY
  // not used
  QF_STACK_CATCH
}

JNIEXPORT void JNICALL Java_quickfix_FileLog_destroy
( JNIEnv *pEnv, jobject obj )
{ QF_STACK_TRY

  JVM::set( pEnv );
  JVMObject jobject( obj );
  FIX::Log* pLog = ( FIX::Log* ) jobject.getLong( "cppPointer" );
  delete pLog;

  QF_STACK_CATCH
}
