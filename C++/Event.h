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

#ifndef FIX_EVENT_H
#define FIX_EVENT_H

#include "Utility.h"
#include <math.h>

#ifndef _MSC_VER
#include <pthread.h>
#include <cmath>
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

  void wait( double s )
  {
#ifdef _MSC_VER
    WaitForSingleObject( m_event, (long)(s * 1000) );
#else
    pthread_mutex_lock( &m_mutex );
    timespec time, remainder;
    double intpart;
    time.tv_nsec = (long)(modf(s, &intpart) * 1e9);
    time.tv_sec = (int)intpart;
    pthread_cond_timedwait( &m_event, &m_mutex, &time );
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
