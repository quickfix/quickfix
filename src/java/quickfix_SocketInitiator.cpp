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
#include "quickfix_SocketInitiator.h"
#include "JavaApplication.h"
#include "JavaMessageStoreFactory.h"
#include "JavaLogFactory.h"
#include <quickfix/SocketInitiator.h>
#include <quickfix/Settings.h>
#include <quickfix/Utility.h>
#include <quickfix/CallStack.h>
#include <sstream>
#include <iostream>

#define PRINT_LOCATION std::cout << __FILE__ << ":" << __LINE__ << std::endl;

FIX::SocketInitiator* getCPPSocketInitiator( jobject obj )
{
  JVMObject jobject( obj );
  return ( FIX::SocketInitiator* ) jobject.getInt( "cppPointer" );
}

FIX::SessionSettings& getInitiatorSettings( JVMObject& obj )
{ QF_STACK_TRY

  JVMObject jsettings = obj.getObject( "settings", "Lquickfix/SessionSettings;" );
  FIX::SessionSettings* pSettings
  = ( FIX::SessionSettings* ) jsettings.getInt( "cppPointer" );
  return *pSettings;

  QF_STACK_CATCH
}

JNIEXPORT void JNICALL Java_quickfix_SocketInitiator_create
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
      pInitiator = new FIX::SocketInitiator(
                    createApplication( jobject ),
                    createFactory( jobject ),
                    getSettings( jobject ),
                    *pLogFactory );
    }
    else
    {
      pInitiator = new FIX::SocketInitiator(
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

  jobject.setInt( "cppPointer", ( int ) pInitiator );

  QF_STACK_CATCH
}

JNIEXPORT void JNICALL Java_quickfix_SocketInitiator_destroy
( JNIEnv *pEnv, jobject obj )
{ QF_STACK_TRY

  try
  {
    FIX::SocketInitiator * p = getCPPSocketInitiator( obj );
    if ( p == 0 ) return ;

    delete &p ->getApplication();
    delete &p ->getMessageStoreFactory();
    delete p;
  }
  catch( ... ) {}

  QF_STACK_CATCH
}

JNIEXPORT void JNICALL Java_quickfix_SocketInitiator_doStart
( JNIEnv *pEnv, jobject obj )
{ QF_STACK_TRY

  JVM::set( pEnv );
  try
  {
    getCPPSocketInitiator( obj ) ->start();
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

JNIEXPORT void JNICALL Java_quickfix_SocketInitiator_doBlock
( JNIEnv *pEnv, jobject obj )
{ QF_STACK_TRY

  JVM::set( pEnv );
  try
  {
    getCPPSocketInitiator( obj ) ->block();
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

JNIEXPORT jboolean JNICALL Java_quickfix_SocketInitiator_doPoll
( JNIEnv *pEnv, jobject obj )
{ QF_STACK_TRY

  JVM::set( pEnv );
  try
  {
    return getCPPSocketInitiator( obj ) ->poll();
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

JNIEXPORT void JNICALL Java_quickfix_SocketInitiator_doStop
( JNIEnv *pEnv, jobject obj )
{ QF_STACK_TRY

  JVM::set( pEnv );
  getCPPSocketInitiator( obj ) ->stop();

  QF_STACK_CATCH
}
