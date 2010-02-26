/****************************************************************************
** Copyright (c) quickfixengine.org  All rights reserved.
**
** This file is part of the QuickFIX FIX Engine
**
** This file may be distributed under the terms of the quickfixengine.org
** license as defined by quickfixengine.org and appearing in the file
** LICENSE included in the packaging of this file.
**
** This file is provided AS IS with NO WARRANTY OF ANY KIND, INCLUDING THE
** WARRANTY OF DESIGN, MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE.
**
** See http://www.quickfixengine.org/LICENSE for licensing information.
**
** Contact ask@quickfixengine.org if any conditions of this licensing are
** not clear to you.
**
****************************************************************************/

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
  std::map<thread_id, CallStack::Context> CallStack::s_stack;
  std::map<thread_id, CallStack::Context> CallStack::s_error;
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
    std::map<thread_id, CallStack::Context>::iterator i;
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
    exception = "unknown exception";
  }
}
