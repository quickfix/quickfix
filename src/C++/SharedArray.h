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

#ifndef SHARED_ARRAY
#define SHARED_ARRAY

#include "AtomicCount.h"

namespace FIX
{
  /// Shared array with atomic reference count
  template<typename T>
  class shared_array
  {
  public:
    shared_array()
    : m_size(0)
    , m_buffer(0)
    {}

    shared_array(const shared_array& rhs)
    : m_size(rhs.m_size)
    , m_buffer(rhs.m_buffer)
    {
      rhs.attach();
    }

    ~shared_array()
    { release(); }

    shared_array& operator=(const shared_array& rhs)
    {
      if( &rhs == this )
        return *this;

      rhs.attach();
      release();

      m_size = rhs.m_size;
      m_buffer = rhs.m_buffer;

      return *this;
    }

    std::size_t size() const
    { return m_size; }

    bool empty() const
    { return m_buffer == 0; }

    operator T* () const
    { return m_buffer; }

    //optimized function to allocate storage for buffer and counter object at once
    static shared_array create(const std::size_t nSize)
    {
      if(nSize <= 0)
        return shared_array();

      //verify the needed buffer size to allocate counter object and nSize elements
      const std::size_t sizeToAllocate = nSize + ( sizeof(atomic_count) / sizeof(T) + 1 );

      //allocate and zero-fill the buffer
      T* storage = new T[ sizeToAllocate ];
      memset(storage, 0, sizeToAllocate * sizeof(T));

      // create the counter object at the end of the storage
      // with initial reference count set to 1
      new (&storage[nSize]) atomic_count( 1 );

      return shared_array(storage, nSize);
    }

  private:

    shared_array( T * buff, std::size_t nSize )
    : m_size(nSize)
    , m_buffer(buff)
    {

    }

    atomic_count* get_counter() const
    {
      return reinterpret_cast<atomic_count*>( &m_buffer[ size() ] );
    }

    void increment_reference_count() const
    {
      atomic_count* counter = get_counter();
      ++(*counter);
    }

    long decrement_reference_count() 
    {
      atomic_count* counter = get_counter();
      return --(*counter);
    }

    void attach() const
    {
      if( !empty() )
        increment_reference_count();
    }

    void release()
    {
      if( empty() )
        return;

      //free object if reference count has decreased to zero
      if( decrement_reference_count() == 0)
      {
        T * tmpBuff = m_buffer;
        atomic_count* tmpCounter = get_counter();

        m_buffer = 0;
        m_size = 0;

        //explicitly call destructor for the counter object
        tmpCounter->~atomic_count();

        delete [] tmpBuff;
      }
    }

    std::size_t m_size;
    T * m_buffer;
  };
}

#endif
