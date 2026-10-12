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

#ifndef _MSC_VER
#include <mutex>
#endif

namespace FIX {
/// Portable implementation of a mutex.
class Mutex {
public:
  Mutex() {
#ifdef _MSC_VER
    InitializeCriticalSection(&m_mutex);
#endif
  }

#ifndef _MSC_VER
  /// Creates an independent, unlocked mutex.
  Mutex(const Mutex &)
      : Mutex() {}

  /// Preserves this mutex and its current locking state.
  Mutex &operator=(const Mutex &) { return *this; }
#endif

  ~Mutex() {
#ifdef _MSC_VER
    DeleteCriticalSection(&m_mutex);
#endif
  }

  void lock() {
#ifdef _MSC_VER
    EnterCriticalSection(&m_mutex);
#else
    m_mutex.lock();
#endif
  }

  void unlock() {
#ifdef _MSC_VER
    LeaveCriticalSection(&m_mutex);
#else
    m_mutex.unlock();
#endif
  }

private:
#ifdef _MSC_VER
  CRITICAL_SECTION m_mutex;
#else
  std::recursive_mutex m_mutex;
#endif
};

/// Locks/Unlocks a mutex using RAII.
class Locker {
public:
  Locker(Mutex &mutex)
      : m_mutex(mutex) {
    m_mutex.lock();
  }

  ~Locker() { m_mutex.unlock(); }

private:
  Mutex &m_mutex;
};

/// Does the opposite of the Locker to ensure mutex ends up in a locked state.
class ReverseLocker {
public:
  ReverseLocker(Mutex &mutex)
      : m_mutex(mutex) {
    m_mutex.unlock();
  }

  ~ReverseLocker() { m_mutex.lock(); }

private:
  Mutex &m_mutex;
};
} // namespace FIX

#endif
