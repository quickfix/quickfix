#ifndef I_CPPTEST_TESTXMLFILEOUTPUTDISPLAY_H
#define I_CPPTEST_TESTXMLFILEOUTPUTDISPLAY_H

#include "TestDisplay.h"
#include <fstream>

namespace CPPTest
{
  class TestXMLFileOutputDisplay : public TestDisplay
    {
    public:
      TestXMLFileOutputDisplay()
        : m_passing(0), m_failing(0), m_total(0)
        {
          std::cout << "<ut>" << std::endl;
          std::cout << "  <output>" << std::endl;
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
          std::cout << std::endl << "  </output>" << std::endl;
          std::cout << "  <results total=\"" << m_total << "\" "
                    << "failures=\"" << m_failing << "\">"
                    << std::endl;

          CPPTest::Exceptions::const_iterator iException;
          for( iException = exceptions.begin();
               iException != exceptions.end(); iException++ )
            {
              if(iException->isError())
                {
                  std::cout
                    << "    <error"
                    << " line= \"" << iException->getLine() << "\""
                    << " file= \"" << iException->getFile() << "\""
                    << ">" << std::endl
                    << "      <test>" << std::endl
                    << "        <![CDATA[ " << iException->getTest()
                    << "]]>" << std::endl
                    << "      </test>" << std::endl
                    << "      <text>" << std::endl
                    << "        <![CDATA[ " << iException->what()
                    << "]]>" << std::endl
                    << "      </text>" << std::endl
                    << "    </error>" << std::endl;
                }
              else
                {
                  std::cout
                    << "    <failure "
                    << " line= \"" << iException->getLine() << "\""
                    << " file= \"" << iException->getFile() << "\""
                    << ">" << std::endl
                    << "      <test>" << std::endl
                    << "        <![CDATA[ " << iException->getTest()
                    << "]]>" << std::endl
                    << "      </test>" << std::endl
                    << "      <text>" << std::endl
                    << "        <![CDATA[ " << "assert("
                    << iException->what() << ")" << "]]>" << std::endl
                    << "      </text>" << std::endl
                    << "    </failure>" << std::endl;
                }
            }

          std::cout << "  </results>" << std::endl;
          std::cout << "</ut>" << std::endl;

        }
      int m_passing;
      int m_failing;
      int m_total;
    };
}

#endif //I_CPPTEST_TESTXMLFILEOUTPUTDISPLAY_H
