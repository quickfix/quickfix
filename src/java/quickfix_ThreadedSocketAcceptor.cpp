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

#ifdef _MSC_VER
#pragma warning( disable : 4876 )
#endif

#include "JVM.h"
#include "Conversions.h"
#include "quickfix_ThreadedSocketAcceptor.h"
#include "JavaApplication.h"
#include "JavaMessageStoreFactory.h"
#include "JavaLogFactory.h"
#include <quickfix/ThreadedSocketAcceptor.h>
#include <quickfix/Settings.h>
#include <quickfix/Utility.h>
#include <quickfix/CallStack.h>
#include <sstream>

FIX::ThreadedSocketAcceptor* getCPPThreadedSocketAcceptor( jobject obj )
{
  JVMObject jobject( obj );
  return ( FIX::ThreadedSocketAcceptor* ) jobject.getInt( "cppPointer" );
}

FIX::SessionSettings& getThreadedAcceptorSettings( JVMObject& obj )
{ QF_STACK_TRY

  JVMObject jsettings = obj.getObject( "settings", "Lquickfix/SessionSettings;" );
  FIX::SessionSettings* pSettings
  = ( FIX::SessionSettings* ) jsettings.getInt( "cppPointer" );
  return *pSettings;

  QF_STACK_CATCH
}

JNIEXPORT void JNICALL Java_quickfix_ThreadedSocketAcceptor_create
( JNIEnv *pEnv, jobject obj )
{ QF_STACK_TRY

  JVM::set( pEnv );
  JVMObject jobject( obj );

  JavaLogFactory* pLogFactory = 0;
  try
  { pLogFactory = &createLogFactory( jobject ); }
  catch ( JVMException& ) {}

  FIX::Acceptor* pAcceptor = 0;

  try
  {
    if ( pLogFactory )
    {
      pAcceptor = new FIX::ThreadedSocketAcceptor(
                    createApplication( jobject ),
                    createFactory( jobject ),
                    getSettings( jobject ),
                    *pLogFactory );
    }
    else
    {
      pAcceptor = new FIX::ThreadedSocketAcceptor(
                    createApplication( jobject ),
                    createFactory( jobject ),
                    getSettings( jobject ));
    }
  }
  catch( FIX::ConfigError& e )
  {
    throwNew( "Lquickfix/ConfigError;", e.what() );
    return;
  }

  jobject.setInt( "cppPointer", ( int ) pAcceptor );

  QF_STACK_CATCH
}

JNIEXPORT void JNICALL Java_quickfix_ThreadedSocketAcceptor_destroy
( JNIEnv *pEnv, jobject obj )
{ QF_STACK_TRY

  try
  {
    FIX::ThreadedSocketAcceptor * p = getCPPThreadedSocketAcceptor( obj );
    if ( p == 0 ) return ;

    delete &p ->getApplication();
    delete &p ->getMessageStoreFactory();
    delete p;
  }
  catch(...) {}

  QF_STACK_CATCH
}

JNIEXPORT void JNICALL Java_quickfix_ThreadedSocketAcceptor_doStart
( JNIEnv *pEnv, jobject obj )
{ QF_STACK_TRY

  JVM::set( pEnv );
  try
  {
    getCPPThreadedSocketAcceptor( obj ) ->start();
  }
  catch( FIX::ConfigError &e )
  {
    throwNew( "Lquickfix/ConfigError;", e.what() );
  }
  catch( FIX::RuntimeError &e )
  {
    throwNew( "Lquickfix/RuntimeError;", e.what() );
  }

  QF_STACK_CATCH
}

JNIEXPORT void JNICALL Java_quickfix_ThreadedSocketAcceptor_doBlock
( JNIEnv *pEnv, jobject obj )
{ QF_STACK_TRY

  JVM::set( pEnv );
  try
  {
    getCPPThreadedSocketAcceptor( obj ) ->block();
  }
  catch( FIX::ConfigError &e )
  {
    throwNew( "Lquickfix/ConfigError;", e.what() );
  }
  catch( FIX::RuntimeError &e )
  {
    throwNew( "Lquickfix/RuntimeError;", e.what() );
  }

  QF_STACK_CATCH
}

JNIEXPORT jboolean JNICALL Java_quickfix_ThreadedSocketAcceptor_doPoll
( JNIEnv *pEnv, jobject obj )
{ QF_STACK_TRY

  JVM::set( pEnv );
  try
  {
    return getCPPThreadedSocketAcceptor( obj ) ->poll();
  }
  catch( FIX::ConfigError &e )
  {
    throwNew( "Lquickfix/ConfigError;", e.what() );
  }
  catch( FIX::RuntimeError &e )
  {
    throwNew( "Lquickfix/RuntimeError;", e.what() );
  }
  return false;

  QF_STACK_CATCH
}

JNIEXPORT void JNICALL Java_quickfix_ThreadedSocketAcceptor_doStop
( JNIEnv *pEnv, jobject obj )
{ QF_STACK_TRY

  JVM::set( pEnv );
  getCPPThreadedSocketAcceptor( obj )->stop();

  QF_STACK_CATCH
}

JNIEXPORT void JNICALL Java_quickfix_ThreadedSocketAcceptor_doStop__Z
( JNIEnv *pEnv, jobject obj, jboolean force )
{ QF_STACK_TRY

  JVM::set( pEnv );
  getCPPThreadedSocketAcceptor( obj )->stop( force );

  QF_STACK_CATCH
}

JNIEXPORT jboolean JNICALL Java_quickfix_ThreadedSocketAcceptor_doIsLoggedOn
( JNIEnv *pEnv, jobject obj )
{ QF_STACK_TRY

  JVM::set( pEnv );
  return getCPPThreadedSocketAcceptor( obj )->isLoggedOn();

  QF_STACK_CATCH
}