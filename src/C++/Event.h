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

#ifndef FIX_EVENT_H
#define FIX_EVENT_H

#include "Utility.h"

#ifndef _MSC_VER
#include <pthread.h>
#endif

namespace FIX
{
/// Portable implementation of an event/conditional mutex
class Event
{
public:
  Event()
  {
#ifdef _MSC_VER
    m_event = CreateEvent( 0, false, false, 0 );
#else
pthread_mutex_init( &m_mutex, 0 );
    pthread_cond_init( &m_event, 0 );
#endif
  }

  ~Event()
  {
#ifdef _MSC_VER
    CloseHandle( m_event );
#else
pthread_cond_destroy( &m_event );
    pthread_mutex_destroy( &m_mutex );
#endif
  }

  void signal()
  {
#ifdef _MSC_VER
    SetEvent( m_event );
#else
    pthread_mutex_lock( &m_mutex );
    pthread_cond_broadcast( &m_event );
    pthread_mutex_unlock( &m_mutex );
#endif
  }

  void wait()
  {
#ifdef _MSC_VER
    WaitForSingleObject( m_event, 100 );
#else
    pthread_mutex_lock( &m_mutex );
    timespec ts;
    ts.tv_sec = time( NULL ) + 1;
    ts.tv_nsec = 0;
    pthread_cond_timedwait( &m_event, &m_mutex, &ts );
    pthread_mutex_unlock( &m_mutex );
#endif
  }

private:
#ifdef _MSC_VER
  HANDLE m_event;
#else
  pthread_cond_t m_event;
  pthread_mutex_t m_mutex;
#endif
};
}

#endif
