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
#include "org_quickfix_ThreadedSocketAcceptor.h"
#include "JavaApplication.h"
#include "JavaMessageStoreFactory.h"
#include "JavaLogFactory.h"
#include "quickfix/include/ThreadedSocketAcceptor.h"
#include "quickfix/include/Settings.h"
#include "quickfix/include/Utility.h"
#include <sstream>

FIX::ThreadedSocketAcceptor* getCPPThreadedSocketAcceptor( jobject obj )
{
  JVMObject jobject( obj );
  return ( FIX::ThreadedSocketAcceptor* ) jobject.getInt( "cppPointer" );
}

FIX::SessionSettings& getThreadedAcceptorSettings( JVMObject& obj )
{
  JVMObject jsettings = obj.getObject( "settings", "Lorg/quickfix/Settings;" );
  FIX::SessionSettings* pSettings
  = ( FIX::SessionSettings* ) jsettings.getInt( "cppPointer" );
  return *pSettings;
}

JNIEXPORT void JNICALL Java_org_quickfix_ThreadedSocketAcceptor_create
( JNIEnv *pEnv, jobject obj )
{
  JVM::set( pEnv );
  JVMObject jobject( obj );

  JavaLogFactory* pLogFactory = 0;
  try
  { pLogFactory = &createLogFactory( jobject ); }
  catch ( JVMException& ) {}

  FIX::Acceptor* pAcceptor = 0;
  bool threw = false;
  FIX::ConfigError e;

  if ( pLogFactory )
  {
    pAcceptor = new FIX::ThreadedSocketAcceptor(
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
    pAcceptor = new FIX::ThreadedSocketAcceptor(
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

  jobject.setInt( "cppPointer", ( int ) pAcceptor );
}

JNIEXPORT void JNICALL Java_org_quickfix_ThreadedSocketAcceptor_destroy
( JNIEnv *pEnv, jobject obj )
{
  FIX::ThreadedSocketAcceptor * p = getCPPThreadedSocketAcceptor( obj );
  if ( p == 0 ) return ;

  delete & p ->getApplication();
  delete &p ->getMessageStoreFactory();
  delete p;
}

JNIEXPORT void JNICALL Java_org_quickfix_ThreadedSocketAcceptor_doStart
( JNIEnv *pEnv, jobject obj )
{
  JVM::set( pEnv );
  getCPPThreadedSocketAcceptor( obj ) ->start();
}

JNIEXPORT void JNICALL Java_org_quickfix_ThreadedSocketAcceptor_doStop
( JNIEnv *pEnv, jobject obj )
{
  JVM::set( pEnv );
  getCPPThreadedSocketAcceptor( obj ) ->stop();
}
