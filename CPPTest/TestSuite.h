#ifndef I_CPPTEST_TESTSUITE_H
#define I_CPPTEST_TESTSUITE_H

#include "TestCase.h"
#include "TestDisplay.h"
#include <vector>
#include <algorithm>
#include <list>

namespace CPPTest
{
  class TestSuite : protected std::vector<TestCaseBase*>
    {
    public:
      TestSuite( TestDisplay& testDisplay )
        :m_testDisplay( testDisplay )
        {
        }

      void add( TestCaseBase* pTestCase )
        {
          push_back(pTestCase);
        }

      void run()
        {
          iterator i;
          TestCaseBase *pTestCase = 0;

          for( i = begin(); i != end(); ++i )
            {
              pTestCase = *i;
              pTestCase->run( m_testDisplay );
            } pTestCase = 0;

          for( i = begin(); i != end(); ++i )
            {
              pTestCase = *i;
              Exceptions exceptions = pTestCase->getExceptions();
              addExceptions(exceptions);
            }
          m_testDisplay.onResults( m_exceptions );
        }

      Exceptions getExceptions()
        {
          return m_exceptions;
        }

    private:
      void addExceptions( Exceptions& exceptions )
        {
          Exceptions::iterator i;
          for( i = exceptions.begin(); i != exceptions.end(); i++ )
            m_exceptions.push_back(*i);
        }

      Exceptions m_exceptions;
      TestDisplay& m_testDisplay;
    };
}

#endif
