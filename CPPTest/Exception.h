#ifndef I_CPPTEST_EXCEPTION_H
#define I_CPPTEST_EXCEPTION_H

#include <stdexcept>
#include <string>
#undef assert
#include <vector>
#include <typeinfo>
#include <sstream>

namespace CPPTest
{
  class Exception : public std::exception
    {
    public:

      Exception()
        : m_test("unknown"),  m_file("unknown"), m_line(0), m_isError(false)
        {
        }

      Exception( const std::exception& exception )
        : m_test("unknown"),  m_file("unknown"), m_line(0),
        m_what(exception.what()), m_isError(false)
        {
        }

      Exception( std::string test, std::string message, int line = 0,
                 std::string file = "unknown" )
        : m_test(test),  m_file(file), m_line(line), m_what(message.c_str()),
        m_isError(false)
        {
        }

      Exception( const Exception& exception )
        : m_test(exception.m_test),  m_file(exception.m_file),
        m_line(exception.m_line), m_what(exception.what()),
        m_isError(exception.m_isError)
        {
        }

      int getLine() const
        {
          return m_line;
        }

      const std::string& getTest() const
        {
          return m_test;
        }

      const std::string& getFile() const
        {
          return m_file;
        }

      virtual const char* what() const throw()
        {
          return m_what.c_str();
        }

      const bool isError() const { return m_isError; }
      void setError(bool e) { m_isError = e; }

      virtual ~Exception() throw() {}

    private:
      std::string m_test;
      std::string m_file;
      int m_line;
      std::string m_what;

      bool m_isError;
    };

  typedef std::vector<Exception> Exceptions;
} // namespace CPPTest

extern "C"
const char*
cplus_demangle(const char*, int);

namespace CPPTest {

inline std::string typeName( const std::type_info& type )
{
  std::string result;

#if defined(HAVE_CPLUS_DEMANGLE)
  std::string stypename("_Z");
  stypename += type.name();
  const char* dmtypename = cplus_demangle(type.name(), 0);
  if (!dmtypename)
    dmtypename = cplus_demangle(stypename.c_str(), 0);
  result = std::string(dmtypename? dmtypename: stypename + " [demangle failed]");
#else
    result = type.name();
#endif

  return result;
}

#define assert(condition) \
  if(!(condition)) \
    throw CPPTest::Exception(CPPTest::typeName(typeid(*this)), (#condition), __LINE__, __FILE__);

#define assertEquals(value1, value2) \
  if( (value1) != (value2) ) \
  { \
    std::stringstream __stream; \
    __stream << "Expected: " << value1 << ", but received: " << value2; \
    throw CPPTest::Exception(CPPTest::typeName(typeid(*this)), __stream.str(), __LINE__, __FILE__); \
  }

} // namespace CPPTest

#endif //I_CPPTEST_EXCEPTION_H
