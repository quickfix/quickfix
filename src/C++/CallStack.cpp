#ifdef _MSC_VER
#include "stdafx.h"
#else
#include "config.h"
#endif
#include "CallStack.h"

#include <sstream>
#include <typeinfo>

namespace FIX
{
  std::map<unsigned, CallStack::Context> CallStack::s_stack;
  std::map<unsigned, CallStack::Context> CallStack::s_error;
  Mutex CallStack::s_mutex;
  int CallStack::Ignore::s_count = 0;

  CallStack::CallStack(const std::string& name, const std::string& file, int line)
  {
    Locker locker(s_mutex);

    #if TERMINATE_IN_STD
      std::set_terminate(FIX::CallStack::terminate);  
    #else
      set_terminate(FIX::CallStack::terminate);  
    #endif

    std::set_terminate(FIX::CallStack::terminate);
    Context& c = getContext();
    if( !c.ignore )
    {
      c.push(Method(name, file, line));
      getErrorContext() = c;
    }
  }

  CallStack::~CallStack()
  { 
    Locker locker(s_mutex);
    Context& c = getContext();
    if( !c.ignore )
      c.pop();
  }

  void CallStack::output()
  {
    Locker locker(s_mutex);
    std::map<unsigned, CallStack::Context>::iterator i;
    for( i = s_error.begin(); i != s_error.end(); ++i )
    {
      Context& c = i->second;
      if(c.size())
        std::cerr << "thread(" << i->first << "):" << c.exception << std::endl;
      while(c.size())
      {
        std::cerr << "  at " << c.top() << std::endl;
        c.pop();
      }
    }
  }

  void CallStack::ignore(bool value)
  {
    Locker locker(s_mutex);
    getContext().ignore = value;
  }

  void CallStack::caught( std::exception& e )
  {
    Locker locker(s_mutex);
    Context& c = getErrorContext();
    if( c.ignore ) return;
    c.caught(e);
  }

  void CallStack::caught()
  {
    Locker locker(s_mutex);
    Context& c = getErrorContext();
    if( c.ignore ) return;
    c.caught();
  }

  CallStack::Context& CallStack::getContext()
  {    
    Locker locker(s_mutex);
    return s_stack[thread_self()];
  }

  CallStack::Context& CallStack::getErrorContext()
  {
    Locker locker(s_mutex);
    return s_error[thread_self()];
  }

  void CallStack::terminate()
  {
    Locker locker(s_mutex);
    CallStack::output();
    abort();
  }

  void CallStack::Context::caught( std::exception& e )
  {
    Locker locker(s_mutex);
#if TYPEINFO_IN_STD
    const std::type_info&
#else
    const type_info&
#endif
    type = typeid(e);

    std::stringstream s;
    s << type.name() << ": " << std::string(e.what());
    exception = s.str();
  }

  void CallStack::Context::caught()
  {
    Locker locker(s_mutex);
    exception = "unknown exception";
  }
}
