#ifdef _MSC_VER
#include "stdafx.h"
#else
#include "config.h"
#endif

#include "JVM.h"
#include "Conversions.h"
#include "org_quickfix_ScreenLog.h"
#include "quickfix/include/Log.h"

JNIEXPORT void JNICALL Java_org_quickfix_ScreenLog_create
( JNIEnv *, jobject )
{
  // not used
}

JNIEXPORT void JNICALL Java_org_quickfix_ScreenLog_destroy
( JNIEnv *pEnv, jobject obj )
{
  JVM::set( pEnv );
  JVMObject jobject( obj );
  FIX::Log* pLog = ( FIX::Log* ) jobject.getInt( "cppPointer" );
  delete pLog;
}

JNIEXPORT void JNICALL Java_org_quickfix_ScreenLog_onIncoming0
( JNIEnv * pEnv, jobject obj, jstring string )
{
  JVM::set( pEnv );
  JVMObject jobject( obj );
  FIX::Log* pLog = ( FIX::Log* ) jobject.getInt( "cppPointer" );
  pLog->onIncoming( pEnv->GetStringUTFChars( string, 0 ) );
}

JNIEXPORT void JNICALL Java_org_quickfix_ScreenLog_onOutgoing0
( JNIEnv * pEnv, jobject obj, jstring string )
{
  JVM::set( pEnv );
  JVMObject jobject( obj );
  FIX::Log* pLog = ( FIX::Log* ) jobject.getInt( "cppPointer" );
  pLog->onOutgoing( pEnv->GetStringUTFChars( string, 0 ) );
}

JNIEXPORT void JNICALL Java_org_quickfix_ScreenLog_onEvent0
( JNIEnv * pEnv, jobject obj, jstring string )
{
  JVM::set( pEnv );
  JVMObject jobject( obj );
  FIX::Log* pLog = ( FIX::Log* ) jobject.getInt( "cppPointer" );
  pLog->onEvent( pEnv->GetStringUTFChars( string, 0 ) );
}
