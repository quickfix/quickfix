/* -*- C++ -*- */
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

#ifndef FIX_MUTEX_H
#define FIX_MUTEX_H

#include "Utility.h"

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
    if ( m_count && m_threadID == pthread_self() )
    { ++m_count; return ; }
    pthread_mutex_lock( &m_mutex );
    ++m_count;
    m_threadID = pthread_self();
#endif
  }

  void unlock()
  {
#ifdef _MSC_VER
    LeaveCriticalSection( &m_mutex );
#else
    if ( m_count > 1 )
    { m_count--; return ; }
    --m_count;
    m_threadID = 0;
    pthread_mutex_unlock( &m_mutex );
#endif
  }

private:

#ifdef _MSC_VER
  CRITICAL_SECTION m_mutex;
#else
  pthread_mutex_t m_mutex;
  pthread_t m_threadID;
  int m_count;
#endif
};

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
