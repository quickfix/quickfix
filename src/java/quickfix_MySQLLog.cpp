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

#ifdef _MSC_VER
#include "stdafx.h"
#else
#include "config.h"
#endif

#ifdef HAVE_MYSQL

#include "JVM.h"
#include "Conversions.h"
#include "quickfix_MySQLLog.h"
#include "MySQLLog.h"
#include "CallStack.h"

JNIEXPORT void JNICALL Java_quickfix_MySQLLog_create
( JNIEnv *, jobject )
{ QF_STACK_TRY
  // not used
  QF_STACK_CATCH
}

JNIEXPORT void JNICALL Java_quickfix_MySQLLog_destroy
( JNIEnv *pEnv, jobject obj )
{ QF_STACK_TRY

  JVM::set( pEnv );
  JVMObject jobject( obj );
  FIX::Log* pLog = ( FIX::Log* ) jobject.getInt( "cppPointer" );
  delete pLog;

  QF_STACK_CATCH
}

#endif //HAVE_MYSQL
