/* -*- C++ -*- */
#ifndef <CLASS>:UTESTCASE_H
#define <CLASS>:UTESTCASE_H

#include <CPPTest/TestCase.h>
#include "../<CLASS>.h"

namespace FIX
{
  class <CLASS>TestCase : public CPPTest::TestCase<<CLASS>>
    {
    public:
      <CLASS>TestCase()
        {
          add(&m_test);
        }

    private:
      typedef CPPTest::Test<<CLASS>> Test;

      class test : public Test
        {
        public:
          bool onSetup( <CLASS>*& pObject );
          void onRun( <CLASS>& object );
          // void onTeardown( <CLASS>* pObject );
      } m_test;
  };
}

#endif //<CLASS>:UTESTCASE_H
