#ifdef _MSC_VER
#include "stdafx.h"
#else
#include "config.h"
#endif

#include "JVM.h"
#include "Conversions.h"
#include "org_quickfix_ScreenLogFactory.h"
#include "quickfix/include/Log.h"

JNIEXPORT void JNICALL Java_org_quickfix_ScreenLogFactory_create__ZZZ
( JNIEnv *pEnv, jobject obj, jboolean incoming, jboolean outgoing, jboolean event )
{
  JVM::set( pEnv );
  JVMObject object( obj );

  FIX::LogFactory* pFactory = new FIX::ScreenLogFactory
                              ( incoming, outgoing, event );
  object.setInt( "cppPointer", ( int ) pFactory );
}

JNIEXPORT void JNICALL Java_org_quickfix_ScreenLogFactory_destroy
( JNIEnv *pEnv, jobject obj )
{
  JVM::set( pEnv );
  JVMObject jobject( obj );
  FIX::ScreenLogFactory* pFactory
  = ( FIX::ScreenLogFactory* ) jobject.getInt( "cppPointer" );
  delete pFactory;
}

JNIEXPORT jobject JNICALL Java_org_quickfix_ScreenLogFactory_create__Lorg_quickfix_SessionID_2
( JNIEnv * pEnv, jobject obj, jobject sessionID )
{
  JVM::set( pEnv );
  JVMObject jobject( obj );
  JVMObject jsession( sessionID );

  FIX::ScreenLogFactory* pFactory
  = ( FIX::ScreenLogFactory* ) jobject.getInt( "cppPointer" );
  FIX::SessionID* pSessionID
  = ( FIX::SessionID* ) jsession.getInt( "cppPointer" );

  try
  {
    FIX::Log* pLog = pFactory->create( *pSessionID );
    JVMClass type( "Lorg/quickfix/ScreenLog;" );
    jmethodID method = pEnv->GetMethodID( type, "<init>", "(I)V" );
    return pEnv->NewObject( type, method, ( jint ) pLog );
  }
  catch ( FIX::ConfigError & e )
  {
    throwNew( "Lorg/quickfix/ConfigError;", e.what() );
  }
  return 0;
}
