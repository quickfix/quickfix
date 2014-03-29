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
#include <Group.h>

using namespace FIX;

SUITE(GroupTests)
{

TEST(copy)
{
  Group object(1, 10, message_order(10, 9, 8, 7, 0));
  object.setField(10, "10");
  object.setField(9, "9");
  object.setField(8, "8");
  object.setField(7, "7");

  std::string originalString;
  object.calculateString( originalString );
  
  Group copy = object;

  std::string copyString;
  copy.calculateString( copyString );

  CHECK_EQUAL( originalString, copyString );
}

}