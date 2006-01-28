/****************************************************************************
** Copyright (c) quickfixengine.org  All rights reserved.
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

#ifdef HAVE_JAVA

#include "Conversions.h"

jobject newDate( const FIX::UtcTimeStamp& date )
{
  JNIEnv * pEnv = ENV::get();
  JVMClass calType( CALENDAR_TYPE );
  JVMClass zoneType( TIMEZONE_TYPE );

  // get timezone from static instance method
  jmethodID method = pEnv->GetStaticMethodID( zoneType, "getTimeZone",
                     ( std::string("(") + STRING_TYPE + ")" + TIMEZONE_TYPE ).c_str() );
  if ( !method ) throw JVMException( "Could not find method getTimeZone" );
  jobject zoneStr = newString( "GMT" );
  JVMObject zone( pEnv->CallStaticObjectMethod( zoneType, method, zoneStr ) );
  pEnv->DeleteLocalRef( zoneStr );

  // get calendar from static instance method
  method = pEnv->GetStaticMethodID( calType, "getInstance",
                                    ( std::string("(") + TIMEZONE_TYPE + ")" + CALENDAR_TYPE ).c_str() );
  if ( !method ) throw JVMException( "Could not find method getInstance" );
  JVMObject cal( pEnv->CallStaticObjectMethod( calType, method, ( jobject ) zone ) );

  // set date with calendars set function
  method = pEnv->GetMethodID( calType, "set", "(IIIIII)V" );
  if ( !method ) throw JVMException( "Could not find method set" );
  pEnv->CallVoidMethod( cal, method,
                        date.getYear(), date.getMonth() - 1, date.getDate(),
                        date.getHour(), date.getMinute(), date.getSecond() );

  method = pEnv->GetMethodID( calType, "set", "(II)V" );
  if ( !method ) throw JVMException( "Could not find method set" );
  jint MILLISECOND = calType.getInt( "MILLISECOND" );
  pEnv->CallVoidMethod( cal, method, MILLISECOND, 0 );

  // get date out of calendar, thank you SUN!
  method = pEnv->GetMethodID( calType, "getTime", ( std::string("()") + DATE_TYPE ).c_str() );
  if ( !method ) throw JVMException( "Could not find method getTime" );
  JVMObject result( pEnv->CallObjectMethod( cal, method ) );
  zone.deleteLocalRef();
  cal.deleteLocalRef();
  return result;
}

#endif
