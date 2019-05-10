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
#include <FieldMap.h>
#include <Message.h>
#include <vector>

using namespace FIX;

SUITE(FieldMapTests)
{

TEST(setMessageOrder)
{
  int order[] = {1, 2, 3};
  FieldMap fieldMap(order);
  fieldMap.setField(3, "account");
  fieldMap.setField(1, "adv_id");
  fieldMap.setField(2, "adv_ref_id");

  int pos1 = 0, pos2 = 0, pos3 = 0;
  int iterationCount = 0;
  for( FieldMap::iterator itr = fieldMap.begin(); itr != fieldMap.end(); itr++, iterationCount++) {
    if(iterationCount == 0) {
      pos1 = itr->getTag();
    } else if (iterationCount == 1 ) {
      pos2 = itr->getTag();
    } else if (iterationCount == 2) {
      pos3 = itr->getTag();
    }
  }

  CHECK_EQUAL(1, pos1);
  CHECK_EQUAL(2, pos2);
  CHECK_EQUAL(3, pos3);

}

TEST(addGroupPtr_nullptr)
{
  FieldMap fieldMap;
  fieldMap.addGroupPtr(1, nullptr);
  CHECK_EQUAL(0, fieldMap.groupCount(0));
}

TEST(removeGroup_allGroupsWithSameTag)
{
  FieldMap fieldMap;
  FieldMap group1;
  group1.setField(2, "field2");

  FieldMap group2;
  group2.setField(2, "field2");

  fieldMap.addGroup(1, group1);
  fieldMap.addGroup(1, group2);
  fieldMap.removeGroup(2, 1);
  fieldMap.removeGroup(1, 1);

  CHECK_EQUAL(0, fieldMap.groupCount(1));
}

TEST(hasGroup_groupExists)
{
  FieldMap fieldMap;
  FieldMap group;
  fieldMap.addGroup(1, group);

  CHECK_EQUAL(true, fieldMap.hasGroup(1));
}

TEST(hasGroup_groupDoesNotExist)
{
  FieldMap fieldMap;
  FieldMap group;
  fieldMap.addGroup(1, group);

  CHECK_EQUAL(false, fieldMap.hasGroup(2));
}

TEST(totalFields)
{
  FieldMap fieldMap;
  fieldMap.setField(1, "field1");
  fieldMap.setField(2, "field2");
  fieldMap.setField(3, "field3");

  FieldMap group1;
  group1.setField(4, "field4");
  fieldMap.addGroup(10, group1);
  FieldMap group2;
  group2.setField(5, "field5");
  group2.setField(6, "field6");
  fieldMap.addGroup(20, group2);

  CHECK_EQUAL(8, fieldMap.totalFields());
}

TEST(setField_16FieldsAlreadyExist_fieldSet)
{
    FieldMap fieldMap;
    fieldMap.setField(1, "field1");
    fieldMap.setField(2, "field2");
    fieldMap.setField(3, "field3");
    fieldMap.setField(4, "field4");
    fieldMap.setField(5, "field5");
    fieldMap.setField(6, "field6");

    fieldMap.setField(7, "field7");
    fieldMap.setField(8, "field8");
    fieldMap.setField(9, "field9");
    fieldMap.setField(10, "field10");
    fieldMap.setField(11, "field11");
    fieldMap.setField(12, "field12");
    fieldMap.setField(13, "field13");
    fieldMap.setField(14, "field14");
    fieldMap.setField(15, "field15");
    fieldMap.setField(16, "field16");
    fieldMap.setField(17, "field17");
    fieldMap.setField(18, "field18");

    FieldBase expectedTag18(18, "field18_new");

    fieldMap.setField(expectedTag18);

    FieldBase actualTag18(18, "");
    fieldMap.getFieldIfSet(actualTag18);

    CHECK_EQUAL(18, actualTag18.getTag());
    CHECK_EQUAL("field18_new", actualTag18.getString());
}

}



