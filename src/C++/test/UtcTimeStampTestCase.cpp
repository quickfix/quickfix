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
#pragma warning( disable : 4503 4355 4786 )
#include "stdafx.h"
#else
#include "config.h"
#endif

#include "UtcTimeStampTestCase.h"

namespace FIX
{
bool UtcTimeStampTestCase::compare::onSetup( UtcTimeStamp*& pObject )
{
  m_object.setHour( 12 );
  m_object.setMinute( 20 );
  m_object.setSecond( 10 );
  m_object.setMillisecond( 10 );
  pObject = &m_object;
  return true;
}

void UtcTimeStampTestCase::compare::onRun( UtcTimeStamp& object )
{
  UtcTimeStamp lesserObject;
  lesserObject.setHour( 12 );
  lesserObject.setMinute( 10 );
  lesserObject.setSecond( 5 );
  lesserObject.setMillisecond( 0 );
  assert( lesserObject < object );
  assert( lesserObject <= object );
  assert( object > lesserObject );
  assert( object >= lesserObject );

  UtcTimeStamp greaterObject;
  greaterObject.setHour( 13 );
  greaterObject.setMinute( 10 );
  greaterObject.setSecond( 5 );
  greaterObject.setMillisecond( 0 );
  assert( greaterObject > object );
  assert( greaterObject >= object );
  assert( object < greaterObject );
  assert( object <= greaterObject );

  assert( object <= object );
  assert( object >= object );
  assert( object == object );
}

void UtcTimeStampTestCase::subtract::onRun( UtcTimeStamp& object )
{
  UtcTimeStamp sm( 10, 10, 10, 10, 10, 2000 );
  UtcTimeStamp lg( 10, 10, 20, 10, 10, 2000 );
  UtcTimeStamp mid( 10, 10, 15, 10, 10, 2000 );

  assert( ( sm - sm ) == 0 );
  assert( ( sm - lg ) == -10 );
  assert( ( sm - mid ) == -5 );

  assert( ( mid - sm ) == 5 );
  assert( ( mid - lg ) == -5 );
  assert( ( mid - mid ) == 0 );

  assert( ( lg - sm ) == 10 );
  assert( ( lg - lg ) == 0 );
  assert( ( lg - mid ) == 5 );
}

void UtcTimeStampTestCase::addSeconds::onRun( UtcTimeStamp& object )
{
  UtcTimeStamp time( 10, 10, 10, 10, 10, 2000 );
  time += UTC_DAY;
  assert( time.getHour() == 10 );
  assert( time.getMinute() == 10 );
  assert( time.getSecond() == 10 );
  assert( time.getDate() == 11 );
  assert( time.getMonth() == 10 );
  assert( time.getYear() == 2000 );
}
}
