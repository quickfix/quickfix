#ifndef I_CPPTEST_TESTCASE_H
#define I_CPPTEST_TESTCASE_H

#include "Test.h"
#include "TestDisplay.h"
#include <vector>
#include <algorithm>
#include <memory>

namespace CPPTest
{
  class TestCaseBase : protected std::vector<TestBase*>
    {
    public:
      Exceptions getExceptions() { return m_exceptions; }

      virtual void run( TestDisplay& ) = 0;
      virtual ~TestCaseBase() {}

    protected:
      Exceptions m_exceptions;
    };

  template<typename TClass> class TestCase : public TestCaseBase
    {
    public:
      TestCase() { }

      void add( Test<TClass>* pTest )
        {
          push_back(pTest);
        }

      void run( TestDisplay& testDisplay )
        {
          iterator i;
          TestBase *pTest = 0;

          for( i = begin(); i != end(); ++i )
            {
              pTest = *i;

              if( pTest->setup( testDisplay ) )
                pTest->run( testDisplay );
              pTest->teardown( testDisplay );

              if( pTest->getException() )
                addException( *pTest->getException() );
            }
        }

    private:
      void addException( const Exception& exception )
        {
          m_exceptions.push_back(exception);
        }
    };
}

#endif
