#ifndef I_CPPTEST_TESTSTANDARDOUTPUTDISPLAY_H
#define I_CPPTEST_TESTSTANDARDOUTPUTDISPLAY_H

#include "TestDisplay.h"
#include <iostream>

namespace CPPTest
{
  class TestStandardOutputDisplay : public TestDisplay
    {
    public:
      TestStandardOutputDisplay()
        : m_passing(0), m_failing(0), m_total(0)
        {
        }

    private:
      void onRun( const char* name )
        {
        }

      void onPass( const TestBase& )
        {
          m_total++;
          m_passing++;
          std::cout << ".";
          std::cout.flush();
        }

      void onFail( const TestBase& t )
        {
          m_total++;
          m_failing++;
          std::cout << "F";
          std::cout.flush();
        }

      void onResults( const Exceptions& exceptions )
        {
          CPPTest::Exceptions::const_iterator iException;
          for( iException = exceptions.begin();
               iException != exceptions.end(); iException++ )
            {
              std::cout
                << std::endl
                << iException->getFile() << ":"
                << iException->getLine()<< ":" << std::endl
                << "\t" << iException->getTest() << " ";
              if(iException->isError())
                std:: cout << iException->what();
              else
                std:: cout << "assert( " << iException->what() << " )";
            }

          if( m_total )
            {
              std::cout
                << std::endl
                << std::endl
                << m_passing << " out of " << m_total << " tests passing ("
                << static_cast<double>(m_passing) /
                static_cast<double>(m_total) * 100 << "%)"
                << std::endl;
            }
          else
            {
              std::cout
                << std::endl
                << "No Tests Run"
                << std::endl;
            }
          std::cout.flush();
        }

      int m_passing;
      int m_failing;
      int m_total;
    };
}

#endif
