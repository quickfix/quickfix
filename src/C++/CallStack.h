/* ====================================================================
* The QuickFIX Software License, Version 1.0
*
* Copyright (c) 2001 ThoughtWorks, Inc.  All rights
* reserved.
*
* Redistribution and use in source and binary forms, with or without
* modification, are permitted provided that the following conditions
* are met:
*
* 1. Redistributions of source code must retain the above copyright
*    notice, this list of conditions and the following disclaimer.
*
* 2. Redistributions in binary form must reproduce the above copyright
*    notice, this list of conditions and the following disclaimer in
*    the documentation and/or other materials provided with the
*    distribution.
*
* 3. The end-user documentation included with the redistribution,
*    if any, must include the following acknowledgment:
*       "This product includes software developed by
*        ThoughtWorks, Inc. (http://www.thoughtworks.com/)."
*    Alternately, this acknowledgment may appear in the software itself,
*    if and wherever such third-party acknowledgments normally appear.
*
* 4. The names "QuickFIX" and "ThoughtWorks, Inc." must
*    not be used to endorse or promote products derived from this
*    software without prior written permission. For written
*    permission, please contact quickfix-users@lists.sourceforge.net.
*
* 5. Products derived from this software may not be called "QuickFIX",
*    nor may "QuickFIX" appear in their name, without prior written
*    permission of ThoughtWorks, Inc.
*
* THIS SOFTWARE IS PROVIDED ``AS IS'' AND ANY EXPRESSED OR IMPLIED
* WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE IMPLIED WARRANTIES
* OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE ARE
* DISCLAIMED.  IN NO EVENT SHALL THOUGHTWORKS INC OR
* ITS CONTRIBUTORS BE LIABLE FOR ANY DIRECT, INDIRECT, INCIDENTAL,
* SPECIAL, EXEMPLARY, OR CONSEQUENTIAL DAMAGES (INCLUDING, BUT NOT
* LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS OR SERVICES; LOSS OF
* USE, DATA, OR PROFITS; OR BUSINESS INTERRUPTION) HOWEVER CAUSED AND
* ON ANY THEORY OF LIABILITY, WHETHER IN CONTRACT, STRICT LIABILITY,
* OR TORT (INCLUDING NEGLIGENCE OR OTHERWISE) ARISING IN ANY WAY OUT
* OF THE USE OF THIS SOFTWARE, EVEN IF ADVISED OF THE POSSIBILITY OF
* SUCH DAMAGE.
* ====================================================================
*/

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
class CallStack
{
public:
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

  class Context : public std::stack<Method>
  {
  public:
    Context() : ignore(false) {}
    void caught( std::exception& );
    void caught();

    std::string exception;
    bool ignore;
  };

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

  static std::map<unsigned, Context> s_stack;
  static std::map<unsigned, Context> s_error;
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

#ifdef _MSC_VER
  #define QF_METHOD_EXISTS(name) \
  &name;
#else
  #define QF_METHOD_EXISTS(name)
#endif

#ifdef ENABLE_CALLSTACK
#define QF_STACK_PUSH(name) \
  QF_METHOD_EXISTS(name) \
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
