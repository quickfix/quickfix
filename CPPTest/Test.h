#ifndef I_CPPTEST_TEST_H
#define I_CPPTEST_TEST_H

#include "Exception.h"
#include "TestDisplay.h"
#include <typeinfo>
#if TYPEINFO_IN_STD
using std::type_info;
#endif
#include <vector>

namespace CPPTest
{
  class TestBase
    {
    public:
      TestBase() : m_pException(0) { }
      virtual ~TestBase() { delete m_pException; }
      Exception* getException() const { return m_pException; }

      virtual bool setup( TestDisplay& testDisplay ) = 0;
      virtual void teardown( TestDisplay& testDisplay ) = 0;
      virtual bool run( TestDisplay& ) = 0;

    protected:
      Exception *m_pException;
    };

  template<typename TClass> class Test : public TestBase
    {
    public:
      Test() : m_pObject(0) {}

    private:
      bool setup( TestDisplay& testDisplay )
        {
          bool result = false;
          try
            {
              result = onSetup(m_pObject);
            }
          catch(...) {}

          if( !result )
            {
              const type_info& type = typeid(this);
              m_pException = new Exception
                ( (std::string) type.name(),
                  "no futher information available" );
              testDisplay.onFail( *this );
            }
          return result;
        }
      void teardown( TestDisplay& testDisplay )
        {
          try
            {
              onTeardown(m_pObject);
            }
          catch(...)
            {
              const type_info& type = typeid(this);
              m_pException = new Exception
                ( (std::string) type.name(),
                  "no futher information available" );
            }
        }
      bool run( TestDisplay& testDisplay )
        {
          try
            {
              const type_info& type = typeid(this);
              testDisplay.onRun( type.name() );
              onRun(*m_pObject);
              testDisplay.onPass( *this );
              return true;
            }
          catch(Exception& exception)
            {
              m_pException = new Exception(exception);
            }
          catch(std::exception& exception)
            {
              m_pException = new Exception(exception);
            }
          catch(...)
            {
              const type_info& type = typeid(this);
              m_pException = new Exception
                ( (std::string) type.name(),
                  "no futher information available"  );
              m_pException->setError(true);
            }
          testDisplay.onFail( *this );
          return false;
        }

      operator TClass&()
        {
          return m_pObject;
        }
      operator bool()
        {
          return m_pObject != 0;
        }

      virtual bool onSetup( TClass*& pObject ) = 0;
      virtual void onTeardown( TClass* pObject ) {};
      virtual void onRun( TClass& object ) = 0;

      TClass* m_pObject;
    };

  template<typename TClass> class SimpleTest : public Test<TClass>
    {
      virtual bool onSetup( TClass*& pObject )
        { pObject = &m_object; return true; }
      TClass m_object;
    };

  template<typename TClass> class EmptyTest : public Test<TClass>
    {
      virtual bool onSetup( TClass*& pObject )
        { return true; }
    };

  class VoidTest : public Test<void*>
    {
      bool onSetup( void**& pObject ) { return true; }
    };
}

#endif


