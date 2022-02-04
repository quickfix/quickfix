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

#ifndef FIX_QUEUE_H
#define FIX_QUEUE_H

#include "Utility.h"
#include "Event.h"
#include "Mutex.h"
#include <queue>

namespace FIX
{
/// A thread safe monitored queue
template < typename T > class Queue
{
public:
  void push( const T& value )
  {
    Locker locker( m_mutex );
    m_queue.push( value );
    signal();
  }

  bool pop( T& value )
  {
    Locker locker( m_mutex );
    if ( !m_queue.size() ) return false;
    value = m_queue.front();
    m_queue.pop();
    return true;
  }

  int size()
  {
    Locker locker( m_mutex );
    return m_queue.size();
  }

  void wait( double s )
  {
    m_event.wait( s );
  }

  void signal()
  {
    m_event.signal();
  }

private:
  Event m_event;
  Mutex m_mutex;
  std::queue < T > m_queue;
};
}

#endif
