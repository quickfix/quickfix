/* ====================================================================
* The QuickFIX Software License, Version 1.0
*
* Copyright (c) 2001 ThoughtWorks, Inc.  All rights
* reserved.
*
* Redistribution and use in source and binary forms, with or without
* modification, are permitted provided that the following conditions
* are met:
*
* 1. Redistributions of source code must retain the above copyright
*    notice, this list of conditions and the following disclaimer.
*
* 2. Redistributions in binary form must reproduce the above copyright
*    notice, this list of conditions and the following disclaimer in
*    the documentation and/or other materials provided with the
*    distribution.
*
* 3. The end-user documentation included with the redistribution,
*    if any, must include the following acknowledgment:
*       "This product includes software developed by
*        ThoughtWorks, Inc. (http://www.thoughtworks.com/)."
*    Alternately, this acknowledgment may appear in the software itself,
*    if and wherever such third-party acknowledgments normally appear.
*
* 4. The names "QuickFIX" and "ThoughtWorks, Inc." must
*    not be used to endorse or promote products derived from this
*    software without prior written permission. For written
*    permission, please contact quickfix-users@lists.sourceforge.net.
*
* 5. Products derived from this software may not be called "QuickFIX",
*    nor may "QuickFIX" appear in their name, without prior written
*    permission of ThoughtWorks, Inc.
*
* THIS SOFTWARE IS PROVIDED ``AS IS'' AND ANY EXPRESSED OR IMPLIED
* WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE IMPLIED WARRANTIES
* OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE ARE
* DISCLAIMED.  IN NO EVENT SHALL THOUGHTWORKS INC OR
* ITS CONTRIBUTORS BE LIABLE FOR ANY DIRECT, INDIRECT, INCIDENTAL,
* SPECIAL, EXEMPLARY, OR CONSEQUENTIAL DAMAGES (INCLUDING, BUT NOT
* LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS OR SERVICES; LOSS OF
* USE, DATA, OR PROFITS; OR BUSINESS INTERRUPTION) HOWEVER CAUSED AND
* ON ANY THEORY OF LIABILITY, WHETHER IN CONTRACT, STRICT LIABILITY,
* OR TORT (INCLUDING NEGLIGENCE OR OTHERWISE) ARISING IN ANY WAY OUT
* OF THE USE OF THIS SOFTWARE, EVEN IF ADVISED OF THE POSSIBILITY OF
* SUCH DAMAGE.
* ====================================================================
*/

#ifdef _MSC_VER
#include "stdafx.h"
#else
#include "config.h"
#endif

#include "Conversions.h"

jobject newDate( const FIX::UtcTimeStamp& date )
{
  JNIEnv * pEnv = ENV::get();
  JVMClass calType( JVM::calendarType.c_str() );
  JVMClass zoneType( JVM::timezoneType.c_str() );

  // get timezone from static instance method
  jmethodID method = pEnv->GetStaticMethodID( zoneType, "getTimeZone",
                     ( "(" + JVM::stringType + ")" + JVM::timezoneType ).c_str() );
  if ( !method ) throw JVMException( "Could not find method getTimeZone" );
  jobject zoneStr = newString( "GMT+0" );
  JVMObject zone( pEnv->CallStaticObjectMethod( zoneType, method, zoneStr ) );
  pEnv->DeleteLocalRef( zoneStr );

  // get calendar from static instance method
  method = pEnv->GetStaticMethodID( calType, "getInstance",
                                    ( "(" + JVM::timezoneType + ")" + JVM::calendarType ).c_str() );
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
  method = pEnv->GetMethodID( calType, "getTime", ( "()" + JVM::dateType ).c_str() );
  if ( !method ) throw JVMException( "Could not find method getTime" );
  JVMObject result( pEnv->CallObjectMethod( cal, method ) );
  zone.deleteLocalRef();
  cal.deleteLocalRef();
  return result;
}
