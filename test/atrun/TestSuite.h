/* Hello Emacs, we're using -*- C++ -*- */
#include <CPPTest/TestSuite.h>
#include <CPPTest/TestDisplay.h>

#include "test/ProcessTestCase.h"

class TestSuite : public CPPTest::TestSuite
{
public:
  TestSuite(CPPTest::TestDisplay& display)
    :   CPPTest::TestSuite( display )
    {
      add( &m_process );
    }

private:
  
  ATRUN::ProcessTestCase m_process;
};

