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
#include "org_quickfix_ThreadedSocketInitiator.h"
#include "JavaApplication.h"
#include "JavaMessageStoreFactory.h"
#include "JavaLogFactory.h"
#include "quickfix/include/ThreadedSocketInitiator.h"
#include "quickfix/include/Settings.h"
#include "quickfix/include/Utility.h"
#include <sstream>

FIX::ThreadedSocketInitiator* getCPPThreadedSocketInitiator( jobject obj )
{
  JVMObject jobject( obj );
  return ( FIX::ThreadedSocketInitiator* ) jobject.getInt( "cppPointer" );
}

FIX::SessionSettings& getThreadedInitiatorSettings( JVMObject& obj )
{
  JVMObject jsettings = obj.getObject( "settings", "Lorg/quickfix/Settings;" );
  FIX::SessionSettings* pSettings
  = ( FIX::SessionSettings* ) jsettings.getInt( "cppPointer" );
  return *pSettings;
}

JNIEXPORT void JNICALL Java_org_quickfix_ThreadedSocketInitiator_create
( JNIEnv *pEnv, jobject obj )
{
  JVM::set( pEnv );
  JVMObject jobject( obj );

  JavaLogFactory* pLogFactory = 0;
  try
  { pLogFactory = &createLogFactory( jobject ); }
  catch ( JVMException& ) {}

  FIX::Initiator* pInitiator = 0;
  bool threw = false;
  FIX::ConfigError e;

  if ( pLogFactory )
  {
    pInitiator = new FIX::ThreadedSocketInitiator(
                   createApplication( jobject ),
                   createFactory( jobject ),
                   getSettings( jobject ),
                   *pLogFactory, threw, e );
    if ( threw )
    {
      throwNew( "Lorg/quickfix/ConfigError;", e.what() );
      return ;
    }
  }
  else
  {
    pInitiator = new FIX::ThreadedSocketInitiator(
                   createApplication( jobject ),
                   createFactory( jobject ),
                   getSettings( jobject ),
                   threw, e );
    if ( threw )
    {
      throwNew( "Lorg/quickfix/ConfigError;", e.what() );
      return ;
    }
  }

  jobject.setInt( "cppPointer", ( int ) pInitiator );
}

JNIEXPORT void JNICALL Java_org_quickfix_ThreadedSocketInitiator_destroy
( JNIEnv *pEnv, jobject obj )
{
  FIX::ThreadedSocketInitiator * p = getCPPThreadedSocketInitiator( obj );
  if ( p == 0 ) return ;

  delete & p ->getApplication();
  delete &p ->getMessageStoreFactory();
  delete p;
}

JNIEXPORT void JNICALL Java_org_quickfix_ThreadedSocketInitiator_doStart
( JNIEnv *pEnv, jobject obj )
{
  JVM::set( pEnv );
  getCPPThreadedSocketInitiator( obj ) ->start();
}

JNIEXPORT void JNICALL Java_org_quickfix_ThreadedSocketInitiator_doStop
( JNIEnv *pEnv, jobject obj )
{
  JVM::set( pEnv );
  getCPPThreadedSocketInitiator( obj ) ->start();
}
