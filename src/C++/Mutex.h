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

#ifndef FIX_MUTEX_H
#define FIX_MUTEX_H

#include "Utility.h"

#if defined( HAVE_CXX17)
#include <atomic>
#endif

namespace FIX
{
/// Portable implementation of a mutex.
class Mutex
{
public:
  Mutex()
  {
#ifdef _MSC_VER
    InitializeCriticalSection( &m_mutex );
#else
    m_count = 0;
    m_threadID = 0;
    //pthread_mutexattr_t attr;
    //pthread_mutexattr_init(&attr);
    //pthread_mutexattr_settype(&attr, PTHREAD_MUTEX_RECURSIVE);
    //pthread_mutex_init(&m_mutex, &attr);
    pthread_mutex_init( &m_mutex, 0 );
#endif
  }

  ~Mutex()
  {
#ifdef _MSC_VER
    DeleteCriticalSection( &m_mutex );
#else
    pthread_mutex_destroy( &m_mutex );
#endif
  }

  void lock()
  {
#ifdef _MSC_VER
    EnterCriticalSection( &m_mutex );
#else
    if( m_threadID != pthread_self())
    {
      pthread_mutex_lock( &m_mutex );
      m_threadID = pthread_self();
    }
    ++m_count;
#endif
  }

  void unlock()
  {
#ifdef _MSC_VER
    LeaveCriticalSection( &m_mutex );
#else
    if( 0 == --m_count)
    {
      m_threadID = 0;
      pthread_mutex_unlock( &m_mutex );
    }
#endif
  }

#ifdef HAVE_CXX17 // C++ 17 onwards
  Mutex( const Mutex & other):
    m_threadID( other.m_threadID.load()),
    m_count( other.m_count),
    m_mutex( other.m_mutex)
  {
  }

  Mutex & operator=( const Mutex & other)
  {
    if( this != &other)
    {
      m_threadID = other.m_threadID.load();
      m_count = other.m_count;
      m_mutex = other.m_mutex;
    }
    return *this;
  }
#endif

private:

#ifdef _MSC_VER
  CRITICAL_SECTION m_mutex;
#else
#ifdef HAVE_CXX17 // C++ 17 onwards
  std::atomic<pthread_t> m_threadID;
#else
  pthread_t m_threadID;
#endif
  int m_count;
  pthread_mutex_t m_mutex;
#endif
};

/// Locks/Unlocks a mutex using RAII.
class Locker
{
public:
  Locker( Mutex& mutex )
  : m_mutex( mutex )
  {
    m_mutex.lock();
  }

  ~Locker()
  {
    m_mutex.unlock();
  }
private:
  Mutex& m_mutex;
};

/// Does the opposite of the Locker to ensure mutex ends up in a locked state.
class ReverseLocker
{
public:
  ReverseLocker( Mutex& mutex )
  : m_mutex( mutex )
  {
    m_mutex.unlock();
  }

  ~ReverseLocker()
  {
    m_mutex.lock();
  }
private:
  Mutex& m_mutex;
};
}

#endif
