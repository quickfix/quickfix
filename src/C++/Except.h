/* -*- C++ -*- */

/****************************************************************************
** Copyright (c) 2001-2014
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

#ifndef FIX_EXCEPT_H
#define FIX_EXCEPT_H

#ifdef __cpp_noexcept_function_type
#define NOEXCEPT noexcept
#define EXCEPT(...) noexcept(false)
#else
#define NOEXCEPT throw()
#define EXCEPT(...) throw(__VA_ARGS__)
#endif

#if __cplusplus <= 199711L
/// Workaround missing std::to_string in C++03 and less 
namespace FIX
{
  namespace std
  {
    template <class T>
    static inline std::string to_string(T const & t)
    {
      std::stringstream ss;
      ss << t;
      return ss.str();
    }
  }
}
#endif

#endif
