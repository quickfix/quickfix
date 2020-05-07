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

#include <gtest/gtest.h>
#include <FieldTypes.h>

using namespace FIX;

TEST(UtcTimeOnlyTests, compare)
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

  ASSERT_TRUE( lesserObject < object );
  ASSERT_TRUE( lesserObject <= object );
  ASSERT_TRUE( object > lesserObject );
  ASSERT_TRUE( object >= lesserObject );

  UtcTimeOnly greaterObject;
  greaterObject.setHour( 13 );
  greaterObject.setMinute( 10 );
  greaterObject.setSecond( 5 );
  greaterObject.setMillisecond( 0 );
  ASSERT_TRUE( greaterObject > object );
  ASSERT_TRUE( greaterObject >= object );
  ASSERT_TRUE( object < greaterObject );
  ASSERT_TRUE( object <= greaterObject );

  ASSERT_TRUE( object <= object );
  ASSERT_TRUE( object >= object );
  ASSERT_TRUE( object == object );
}
