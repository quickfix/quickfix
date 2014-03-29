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

#ifndef ATOMIC_COUNT
#define ATOMIC_COUNT

#include "Mutex.h"

namespace FIX
{
  /// Atomic count class - consider using interlocked functions

#ifdef ENABLE_BOOST_ATOMIC_COUNT

#include <boost/smart_ptr/detail/atomic_count.hpp>
typedef boost::detail::atomic_count atomic_count;

#elif _MSC_VER 

  //atomic counter based on interlocked functions for Win32
  class atomic_count
  {
  public:
    explicit atomic_count( long v ): m_counter( v )
    {
    }

    long operator++()
    {
      return ::InterlockedIncrement( &m_counter );
    }

    long operator--()
    {
      return ::InterlockedDecrement( &m_counter );
    }

    operator long() const
    {
      return static_cast<long const volatile &>( m_counter );
    }

  private:

    atomic_count( atomic_count const & );
    atomic_count & operator=( atomic_count const & );

    long volatile m_counter;
  };

#else
  // general purpose atomic counter using mutexes
  class atomic_count
  {
  public:
    explicit atomic_count( long v ): m_counter( v )
    {
    }

    long operator++()
    {
      Locker _lock(m_mutex);
      return ++m_counter;
    }

    long operator--()
    {
      Locker _lock(m_mutex);
      return --m_counter;
    }

    operator long() const
    {
      return static_cast<long const volatile &>( m_counter );
    }

  private:

    atomic_count( atomic_count const & );
    atomic_count & operator=( atomic_count const & );

    Mutex m_mutex;
    long m_counter;
  };

#endif

}

#endif

