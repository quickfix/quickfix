/****************************************************************************
** Copyright (c) 2001-2014
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

#include <UnitTest++.h>
#include <FieldTypes.h>

using namespace FIX;

SUITE(UtcTimeStampTests)
{

TEST(compare)
{
  UtcTimeStamp object;
  object.setHour( 12 );
  object.setMinute( 20 );
  object.setSecond( 10 );
  object.setMillisecond( 10 );

  UtcTimeStamp lesserObject;
  lesserObject.setHour( 12 );
  lesserObject.setMinute( 10 );
  lesserObject.setSecond( 5 );
  lesserObject.setMillisecond( 0 );
  CHECK( lesserObject < object );
  CHECK( lesserObject <= object );
  CHECK( object > lesserObject );
  CHECK( object >= lesserObject );

  UtcTimeStamp greaterObject;
  greaterObject.setHour( 13 );
  greaterObject.setMinute( 10 );
  greaterObject.setSecond( 5 );
  greaterObject.setMillisecond( 0 );
  CHECK( greaterObject > object );
  CHECK( greaterObject >= object );
  CHECK( object < greaterObject );
  CHECK( object <= greaterObject );

  CHECK( object <= object );
  CHECK( object >= object );
  CHECK( object == object );
}

TEST(subtract)
{
  UtcTimeStamp sm( 10, 10, 10, 10, 10, 2000 );
  UtcTimeStamp lg( 10, 10, 20, 10, 10, 2000 );
  UtcTimeStamp mid( 10, 10, 15, 10, 10, 2000 );

  CHECK_EQUAL( 0, ( sm - sm ) );
  CHECK_EQUAL( -10, ( sm - lg ) );
  CHECK_EQUAL( -5, ( sm - mid ) );

  CHECK_EQUAL( 5, ( mid - sm ) );
  CHECK_EQUAL( -5, ( mid - lg ) );
  CHECK_EQUAL( 0, ( mid - mid ) );

  CHECK_EQUAL( 10, ( lg - sm ) );
  CHECK_EQUAL( 0, ( lg - lg ) );
  CHECK_EQUAL( 5, ( lg - mid ) );
}

TEST(addSeconds)
{
  UtcTimeStamp time( 10, 10, 10, 10, 10, 2000 );
  time += DateTime::SECONDS_PER_DAY;
  CHECK_EQUAL( 10, time.getHour() );
  CHECK_EQUAL( 10, time.getMinute() );
  CHECK_EQUAL( 10, time.getSecond() );
  CHECK_EQUAL( 11, time.getDate() );
  CHECK_EQUAL( 10, time.getMonth() );
  CHECK_EQUAL( 2000, time.getYear() );
}

}
