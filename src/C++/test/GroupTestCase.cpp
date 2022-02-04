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

TEST(replace)
{
  Group parent(5, 100);

  Group child(1, 10);
  child.setField(1, "1");
  child.setField(2, "2");
  parent.addGroup(child);

  Group replacementChild(1, 10);
  replacementChild.setField(1, "replace_1");
  replacementChild.setField(2, "replace_2");

  parent.replaceGroup(1, replacementChild);

  Group actualChild(1, 10);
  parent.getGroup(1, actualChild);

  CHECK_EQUAL("replace_1", actualChild.getField(1));
  CHECK_EQUAL("replace_2", actualChild.getField(2));

}

TEST(removeGroup)
{
  Group parent(5, 100);

  Group child(1, 10);
  child.setField(1, "1");
  child.setField(2, "2");
  parent.addGroup(child);

  parent.removeGroup(child);

  CHECK_EQUAL(0, (int) parent.groupCount(1));

}

TEST(removeGroupByNum)
{
  Group parent(5, 100);

  Group childA(1, 10);
  childA.setField(1, "childA_1");
  childA.setField(2, "childA_2");
  parent.addGroup(childA);

  Group childB(1, 10);
  childB.setField(1, "childB_1");
  childB.setField(2, "childB_2");
  parent.addGroup(childB);

  parent.removeGroup(1, childA);

  CHECK_EQUAL(1, (int) parent.groupCount(1));

  Group actualChild(1, 10);
  parent.getGroup(1, actualChild);
  CHECK_EQUAL("childB_1", actualChild.getField(1));
  CHECK_EQUAL("childB_2", actualChild.getField(2));

}

TEST(hasGroup)
{
  Group parent(5, 100);

  Group child(1, 10);
  child.setField(1, "1");
  child.setField(2, "2");
  parent.addGroup(child);

  CHECK(parent.hasGroup(child));

  Group missingChild(2, 10);
  CHECK(!parent.hasGroup(missingChild));
}

TEST(hasGroupByNum)
{
  Group parent(5, 100);

  Group childA(1, 10);
  childA.setField(1, "childA_1");
  childA.setField(2, "childA_2");
  parent.addGroup(childA);

  Group childB(1, 10);
  childB.setField(1, "childB_1");
  childB.setField(2, "childB_2");
  parent.addGroup(childB);

  CHECK(parent.hasGroup(1, childA));
  CHECK(parent.hasGroup(2, childB));

  Group missingChild(1, 10);
  CHECK(!parent.hasGroup(3, missingChild));
}



}
