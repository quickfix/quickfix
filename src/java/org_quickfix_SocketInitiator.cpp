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
#include "org_quickfix_SocketInitiator.h"
#include "JavaApplication.h"
#include "JavaMessageStoreFactory.h"
#include "JavaLogFactory.h"
#include "quickfix/include/SocketInitiator.h"
#include "quickfix/include/Settings.h"
#include "quickfix/include/Utility.h"
#include <sstream>

FIX::SocketInitiator* getCPPSocketInitiator( jobject obj )
{
  JVMObject jobject( obj );
  return ( FIX::SocketInitiator* ) jobject.getInt( "cppPointer" );
}

FIX::SessionSettings& getInitiatorSettings( JVMObject& obj )
{
  JVMObject jsettings = obj.getObject( "settings", "Lorg/quickfix/Settings;" );
  FIX::SessionSettings* pSettings
  = ( FIX::SessionSettings* ) jsettings.getInt( "cppPointer" );
  return *pSettings;
}

JNIEXPORT void JNICALL Java_org_quickfix_SocketInitiator_create
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
    pInitiator = new FIX::SocketInitiator(
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
    pInitiator = new FIX::SocketInitiator(
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

JNIEXPORT void JNICALL Java_org_quickfix_SocketInitiator_destroy
( JNIEnv *pEnv, jobject obj )
{
  FIX::SocketInitiator * p = getCPPSocketInitiator( obj );
  if ( p == 0 ) return ;

  delete & p ->getApplication();
  delete &p ->getMessageStoreFactory();
  delete p;
}

JNIEXPORT void JNICALL Java_org_quickfix_SocketInitiator_doStart
( JNIEnv *pEnv, jobject obj )
{
  JVM::set( pEnv );
  getCPPSocketInitiator( obj ) ->start();
}

JNIEXPORT void JNICALL Java_org_quickfix_SocketInitiator_doStop
( JNIEnv *pEnv, jobject obj )
{
  JVM::set( pEnv );
  getCPPSocketInitiator( obj ) ->stop();
}
