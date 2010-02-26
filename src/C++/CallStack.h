/* -*- C++ -*- */

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

#ifndef FIX_CALLSTACK_H
#define FIX_CALLSTACK_H

#ifdef _MSC_VER
#pragma warning( disable : 4297 4550 4551 4552 4786 )
#endif

#include <iostream>
#include <exception>
#include <map>
#include <stack>
#include <string>
#include "Mutex.h"

namespace FIX
{
/// Keeps track of callstacks for multiple threads.
class CallStack
{
public:
  /// Represents a method in the CallStack.
  struct Method
  {
    Method() {}
    Method(const std::string& n, const std::string& f, int l)
    : name(n), file(f), line(l) {}

    std::string name;
    std::string file;
    int line;

    Method& operator=( const Method& rhs )
    {
      name = rhs.name;
      file = rhs.file;
      line = rhs.line;
      return *this;
    }

    friend bool operator==( const Method& lhs, const Method& rhs );
    friend std::ostream& operator<<( std::ostream&, const Method& );
  };

  /// A single CallStack context (thread of execution).
  class Context : public std::stack<Method>
  {
  public:
    Context() : ignore(false) {}
    void caught( std::exception& );
    void caught();

    std::string exception;
    bool ignore;
  };

  /// Use this in a code block that should ignore CallStack traces.
  class Ignore
  {
  public:
    Ignore()
    { s_count++;
      CallStack::ignore(true);
    }
    ~Ignore()
    { s_count--;
      if( s_count == 0 )
        CallStack::ignore(false);
    }

  private:
    static int s_count;
  };

  CallStack(const std::string& name, const std::string& file, int line);
  ~CallStack();

  static void output();
  static void ignore( bool );
  static void caught( std::exception& e );
  static void caught();
  static void terminate();

private:
  static Context& getContext();
  static Context& getErrorContext();

  static std::map<thread_id, Context> s_stack;
  static std::map<thread_id, Context> s_error;
  static Mutex s_mutex;
};

inline std::ostream& operator<<
( std::ostream& ostream, const CallStack::Method& method )
{
  return ostream
         << method.name.c_str()
         << "(" << method.file.c_str() << ":" << method.line << ")";
}

inline bool operator==( const CallStack::Method& rhs, const CallStack::Method& lhs )
{
  return lhs.name == rhs.name
         && lhs.file == rhs.file
         && lhs.line == rhs.line;
}
}

#ifdef ENABLE_CALLSTACK
#define QF_STACK_PUSH(name) \
  CallStack cs_(#name, __FILE__, __LINE__); \
  try \
  {
#define QF_STACK_POP \
  } \
  catch( std::exception& e ) \
  { \
    CallStack::caught(e); \
    throw; \
  } \
  catch( ... ) \
  { \
    CallStack::caught(); \
    throw; \
  }

#define QF_STACK_IGNORE_BEGIN \
  { CallStack::Ignore ignore_;
#define QF_STACK_IGNORE_END \
  }

#define QF_STACK_TRY \
  try {
#define QF_STACK_CATCH \
  } catch( ... ) { FIX::CallStack::output(); throw; }
#else //ENABLE_CALLSTACK
#define QF_STACK_PUSH(name)
#define QF_STACK_POP
#define QF_STACK_IGNORE_BEGIN
#define QF_STACK_IGNORE_END
#define QF_STACK_TRY
#define QF_STACK_CATCH
#endif //ENABLE_CALLSTACK

#endif
