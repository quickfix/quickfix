/* -*- C++ -*- */
#ifndef FIELDBASETESTCASE_H
#define FIELDBASETESTCASE_H

#include <CPPTest/TestCase.h>
#include "../Field.h"

namespace FIX
{
class FieldBaseTestCase : public CPPTest::TestCase<FieldBase>
{
  public:
    FieldBaseTestCase()
    {
      add(&m_set);
    }

  private:
    typedef CPPTest::Test<FieldBase> Test;

class set : public Test
  {
  public:
    set() : m_object( 12, "VALUE" ) {}
    bool onSetup( FieldBase*& pObject ) { pObject = &m_object; return true; }
    void onRun( FieldBase& object );
    FieldBase m_object;
  } m_set;
};
}

#endif //FIELDBASETESTCASE_H
