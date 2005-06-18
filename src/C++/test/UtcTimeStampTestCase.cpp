/****************************************************************************
** Copyright (c) 2001-2005 quickfixengine.org  All rights reserved.
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
