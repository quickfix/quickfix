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
#include "org_quickfix_SocketAcceptor.h"
#include "JavaApplication.h"
#include "JavaMessageStoreFactory.h"
#include "JavaLogFactory.h"
#include "quickfix/include/SocketAcceptor.h"
#include "quickfix/include/Settings.h"
#include "quickfix/include/Utility.h"
#include <sstream>

FIX::SocketAcceptor* getCPPSocketAcceptor( jobject obj )
{
  JVMObject jobject( obj );
  return ( FIX::SocketAcceptor* ) jobject.getInt( "cppPointer" );
}

JNIEXPORT void JNICALL Java_org_quickfix_SocketAcceptor_create
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
    pAcceptor = new FIX::SocketAcceptor(
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
    pAcceptor = new FIX::SocketAcceptor(
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

JNIEXPORT void JNICALL Java_org_quickfix_SocketAcceptor_destroy
( JNIEnv *pEnv, jobject obj )
{
  FIX::SocketAcceptor * p = getCPPSocketAcceptor( obj );
  if ( p == 0 ) return ;

  delete & p ->getApplication();
  delete &p ->getMessageStoreFactory();
  delete p;
}

JNIEXPORT void JNICALL Java_org_quickfix_SocketAcceptor_doStart
( JNIEnv *pEnv, jobject obj )
{
  JVM::set( pEnv );
  getCPPSocketAcceptor( obj ) ->start();
}

JNIEXPORT void JNICALL Java_org_quickfix_SocketAcceptor_doStop
( JNIEnv *pEnv, jobject obj )
{
  JVM::set( pEnv );
  getCPPSocketAcceptor( obj ) ->stop();
}
