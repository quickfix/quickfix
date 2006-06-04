#ifndef I_CPPTEST_TESTDISPLAY_H
#define I_CPPTEST_TESTDISPLAY_H

#include <iostream>

namespace CPPTest
{
  class TestBase;
  class TestDisplay
    {
    public:
      virtual ~TestDisplay() {};
      virtual void onRun( const char* ) = 0;
      virtual void onPass( const TestBase& ) = 0;
      virtual void onFail( const TestBase& ) = 0;
      virtual void onResults( const Exceptions& ) = 0;
    };
}

#endif
