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

#ifdef _MSC_VER
#pragma warning( disable : 4876 )
#endif

#ifdef HAVE_JAVA

#include "JVM.h"
#include "Conversions.h"
#include "quickfix_SocketAcceptor.h"
#include "JavaApplication.h"
#include "JavaMessageStoreFactory.h"
#include "JavaLogFactory.h"
#include <quickfix/SocketAcceptor.h>
#include <quickfix/Settings.h>
#include <quickfix/Utility.h>
#include <quickfix/CallStack.h>
#include <sstream>

FIX::SocketAcceptor* getCPPSocketAcceptor( jobject obj )
{
  JVMObject jobject( obj );
  return ( FIX::SocketAcceptor* ) jobject.getLong( "cppPointer" );
}

JNIEXPORT void JNICALL Java_quickfix_SocketAcceptor_create
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
      pAcceptor = new FIX::SocketAcceptor(
                    createApplication( jobject ),
                    createFactory( jobject ),
                    getSettings( jobject ),
                    *pLogFactory );
    }
    else
    {
      pAcceptor = new FIX::SocketAcceptor(
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

  jobject.setLong( "cppPointer", ( long ) pAcceptor );

  QF_STACK_CATCH
}

JNIEXPORT void JNICALL Java_quickfix_SocketAcceptor_destroy
( JNIEnv *pEnv, jobject obj )
{ QF_STACK_TRY

  try
  {
    FIX::SocketAcceptor * p = getCPPSocketAcceptor( obj );
    if ( p == 0 ) return ;

    delete &p ->getApplication();
    delete &p ->getMessageStoreFactory();
    delete p;
  }
  catch( ... ) {}

  QF_STACK_CATCH
}

JNIEXPORT void JNICALL Java_quickfix_SocketAcceptor_doStart
( JNIEnv *pEnv, jobject obj )
{ QF_STACK_TRY

  JVM::set( pEnv );
  try
  {
    getCPPSocketAcceptor( obj ) ->start();
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



JNIEXPORT void JNICALL Java_quickfix_SocketAcceptor_doBlock
( JNIEnv *pEnv, jobject obj )
{ QF_STACK_TRY

  JVM::set( pEnv );
  try
  {
    getCPPSocketAcceptor( obj ) ->block();
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

JNIEXPORT jboolean JNICALL Java_quickfix_SocketAcceptor_doPoll
( JNIEnv *pEnv, jobject obj )
{ QF_STACK_TRY

  JVM::set( pEnv );
  try
  {
    return getCPPSocketAcceptor( obj ) ->poll();
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

JNIEXPORT void JNICALL Java_quickfix_SocketAcceptor_doStop__
( JNIEnv *pEnv, jobject obj )
{ QF_STACK_TRY

  JVM::set( pEnv );
  getCPPSocketAcceptor( obj )->stop();

  QF_STACK_CATCH
}

JNIEXPORT void JNICALL Java_quickfix_SocketAcceptor_doStop__Z
( JNIEnv *pEnv, jobject obj, jboolean force )
{ QF_STACK_TRY

  JVM::set( pEnv );
  getCPPSocketAcceptor( obj )->stop( force );

  QF_STACK_CATCH
}

JNIEXPORT jboolean JNICALL Java_quickfix_SocketAcceptor_doIsLoggedOn
( JNIEnv *pEnv, jobject obj )
{ QF_STACK_TRY

  JVM::set( pEnv );
  return getCPPSocketAcceptor( obj )->isLoggedOn();

  QF_STACK_CATCH
}

JNIEXPORT jobject JNICALL Java_quickfix_SocketAcceptor_doGetSessions
( JNIEnv *pEnv, jobject obj )
{ QF_STACK_TRY

  JVMObject result( newArrayList() );
  jmethodID methodID = result.getClass().getMethodID( "add", "(Ljava/lang/Object;)Z" );
  std::set<FIX::SessionID> sessions = getCPPSocketAcceptor( obj )->getSessions();
  std::set<FIX::SessionID>::iterator i;
  for( i = sessions.begin(); i != sessions.end(); ++i )
  {
    jobject sessionid = newSessionID( *i );
    pEnv->CallVoidMethod( result, methodID, sessionid );
    pEnv->DeleteLocalRef( sessionid );
  }
  return result;

  QF_STACK_CATCH
}

#endif