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

SUITE(UtcTimeOnlyTests)
{

TEST(compare)
{
  UtcTimeOnly object;
  object.setHour( 12 );
  object.setMinute( 20 );
  object.setSecond( 10 );
  object.setMillisecond( 0 );

  UtcTimeOnly lesserObject;
  lesserObject.setHour( 12 );
  lesserObject.setMinute( 10 );
  lesserObject.setSecond( 5 );
  lesserObject.setMillisecond( 0 );

  CHECK( lesserObject < object );
  CHECK( lesserObject <= object );
  CHECK( object > lesserObject );
  CHECK( object >= lesserObject );

  UtcTimeOnly greaterObject;
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

}
