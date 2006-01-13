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
#include "quickfix_ThreadedSocketInitiator.h"
#include "JavaApplication.h"
#include "JavaMessageStoreFactory.h"
#include "JavaLogFactory.h"
#include <quickfix/ThreadedSocketInitiator.h>
#include <quickfix/Settings.h>
#include <quickfix/Utility.h>
#include <quickfix/CallStack.h>
#include <sstream>

FIX::ThreadedSocketInitiator* getCPPThreadedSocketInitiator( jobject obj )
{
  JVMObject jobject( obj );
  return ( FIX::ThreadedSocketInitiator* ) jobject.getLong( "cppPointer" );
}

FIX::SessionSettings& getThreadedInitiatorSettings( JVMObject& obj )
{ QF_STACK_TRY

  JVMObject jsettings = obj.getObject( "settings", "Lquickfix/SessionSettings;" );
  FIX::SessionSettings* pSettings
  = ( FIX::SessionSettings* ) jsettings.getLong( "cppPointer" );
  return *pSettings;

  QF_STACK_CATCH
}

JNIEXPORT void JNICALL Java_quickfix_ThreadedSocketInitiator_create
( JNIEnv *pEnv, jobject obj )
{ QF_STACK_TRY

  JVM::set( pEnv );
  JVMObject jobject( obj );

  JavaLogFactory* pLogFactory = 0;
  try
  { pLogFactory = &createLogFactory( jobject ); }
  catch ( JVMException& ) {}

  FIX::Initiator* pInitiator = 0;

  try
  {
    if ( pLogFactory )
    {
      pInitiator = new FIX::ThreadedSocketInitiator(
                    createApplication( jobject ),
                    createFactory( jobject ),
                    getSettings( jobject ),
                    *pLogFactory );
    }
    else
    {
      pInitiator = new FIX::ThreadedSocketInitiator(
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

  jobject.setLong( "cppPointer", ( long ) pInitiator );

  QF_STACK_CATCH
}

JNIEXPORT void JNICALL Java_quickfix_ThreadedSocketInitiator_destroy
( JNIEnv *pEnv, jobject obj )
{ QF_STACK_TRY

  try
  {
    FIX::ThreadedSocketInitiator * p = getCPPThreadedSocketInitiator( obj );
    if ( p == 0 ) return ;

    delete &p ->getApplication();
    delete &p ->getMessageStoreFactory();
    delete p;
  }
  catch( ... ) {}

  QF_STACK_CATCH
}

JNIEXPORT void JNICALL Java_quickfix_ThreadedSocketInitiator_doStart
( JNIEnv *pEnv, jobject obj )
{ QF_STACK_TRY

  JVM::set( pEnv );
  try
  {
    getCPPThreadedSocketInitiator( obj ) ->start();
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

JNIEXPORT void JNICALL Java_quickfix_ThreadedSocketInitiator_doBlock
( JNIEnv *pEnv, jobject obj )
{ QF_STACK_TRY

  JVM::set( pEnv );
  try
  {
    getCPPThreadedSocketInitiator( obj ) ->block();
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

JNIEXPORT jboolean JNICALL Java_quickfix_ThreadedSocketInitiator_doPoll
( JNIEnv *pEnv, jobject obj )
{ QF_STACK_TRY

  JVM::set( pEnv );
  try
  {
    return getCPPThreadedSocketInitiator( obj ) ->poll();
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

JNIEXPORT void JNICALL Java_quickfix_ThreadedSocketInitiator_doStop__
( JNIEnv *pEnv, jobject obj )
{ QF_STACK_TRY

  JVM::set( pEnv );
  getCPPThreadedSocketInitiator( obj ) ->stop();

  QF_STACK_CATCH
}

JNIEXPORT void JNICALL Java_quickfix_ThreadedSocketInitiator_doStop__Z
( JNIEnv *pEnv, jobject obj, jboolean force )
{ QF_STACK_TRY

  JVM::set( pEnv );
  getCPPThreadedSocketInitiator( obj )->stop( force );

  QF_STACK_CATCH
}

JNIEXPORT jboolean JNICALL Java_quickfix_ThreadedSocketInitiator_doIsLoggedOn
( JNIEnv *pEnv, jobject obj )
{ QF_STACK_TRY

  JVM::set( pEnv );
  return getCPPThreadedSocketInitiator( obj )->isLoggedOn();

  QF_STACK_CATCH
}

JNIEXPORT jobject JNICALL Java_quickfix_ThreadedSocketInitiator_doGetSessions
( JNIEnv *pEnv, jobject obj )
{ QF_STACK_TRY

  JVMObject result( newArrayList() );
  jmethodID methodID = result.getClass().getMethodID( "add", "(Ljava/lang/Object;)Z" );
  std::set<FIX::SessionID> sessions = getCPPThreadedSocketInitiator( obj )->getSessions();
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