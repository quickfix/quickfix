/////////////////////////////////////////////////////////////////////////////
// Name:        wx/sharedptr.h
// Purpose:     Shared pointer based on the counted_ptr<> template, which
//              is in the public domain
// Author:      Robert Roebling, Yonat Sharon
// Copyright:   Robert Roebling
// Licence:     wxWindows licence
/////////////////////////////////////////////////////////////////////////////

#ifndef _WX_SHAREDPTR_H_
#define _WX_SHAREDPTR_H_

#if defined (__SUNPRO_CC)

namespace wxWidgets
{

#include <atomic.h>
#include <assert.h>

// TODO
typedef uint32_t wxAtomicInt;
typedef uint32_t wxUint32;

inline void wxAtomicInc (wxUint32 &value)
{
    atomic_add_32 ((uint32_t*)&value, 1);
}

inline wxUint32 wxAtomicDec (wxUint32 &value)
{
    return atomic_add_32_nv ((uint32_t*)&value, (uint32_t)-1);
}


// ----------------------------------------------------------------------------
// shared_ptr: A smart pointer with non-intrusive reference counting.
// ----------------------------------------------------------------------------

template <class T>
class shared_ptr
{
public:
    typedef T element_type;

    explicit shared_ptr( T* ptr = 0 )
        : m_ref(0)
    {
        if (ptr)
            m_ref = new reftype(ptr);
    }

    template<typename Deleter>
    explicit shared_ptr(T* ptr, Deleter d)
        : m_ref(0)
    {
        if (ptr)
            m_ref = new reftype_with_deleter<Deleter>(ptr, d);
    }

    ~shared_ptr()                           { Release(); }
    shared_ptr(const shared_ptr& tocopy)   { Acquire(tocopy.m_ref); }

    shared_ptr& operator=( const shared_ptr& tocopy )
    {
        if (this != &tocopy)
        {
            Release();
            Acquire(tocopy.m_ref);
        }
        return *this;
    }

    shared_ptr& operator=( T* ptr )
    {
        if (get() != ptr)
        {
            Release();
            if (ptr)
                m_ref = new reftype(ptr);
        }
        return *this;
    }

    // test for pointer validity: defining conversion to unspecified_bool_type
    // and not more obvious bool to avoid implicit conversions to integer types
    typedef T *(shared_ptr<T>::*unspecified_bool_type)() const;
    operator unspecified_bool_type() const
    {
        if (m_ref && m_ref->m_ptr)
           return  &shared_ptr<T>::get;
        else
           return 0;
    }

    T& operator*() const
    {
        assert(m_ref != 0);
        assert(m_ref->m_ptr != 0);
        return *(m_ref->m_ptr);
    }

    T* operator->() const
    {
        assert(m_ref != 0);
        assert(m_ref->m_ptr != 0);
        return m_ref->m_ptr;
    }

    T* get() const
    {
        return m_ref ? m_ref->m_ptr : 0;
    }

    void reset( T* ptr = 0 )
    {
        Release();
        if (ptr)
            m_ref = new reftype(ptr);
    }

    template<typename Deleter>
    void reset(T* ptr, Deleter d)
    {
        Release();
        if (ptr)
            m_ref = new reftype_with_deleter<Deleter>(ptr, d);
    }

    bool unique()   const    { return (m_ref ? m_ref->m_count == 1 : true); }
    long use_count() const   { return (m_ref ? (long)m_ref->m_count : 0); }

private:

    struct reftype
    {
        reftype(T* ptr) : m_ptr(ptr), m_count(1) {}
        virtual ~reftype() {}
        virtual void delete_ptr() { delete m_ptr; }

        T*          m_ptr;
        wxAtomicInt m_count;
    };

    template<typename Deleter>
    struct reftype_with_deleter : public reftype
    {
        reftype_with_deleter(T* ptr, Deleter d) : reftype(ptr), m_deleter(d) {}
        virtual void delete_ptr() { m_deleter(this->m_ptr); }

        Deleter m_deleter;
    };

    reftype* m_ref;

    void Acquire(reftype* ref)
    {
        m_ref = ref;
        if (ref)
            wxAtomicInc( ref->m_count );
    }

    void Release()
    {
        if (m_ref)
        {
            if (!wxAtomicDec( m_ref->m_count ))
            {
                m_ref->delete_ptr();
                delete m_ref;
            }
            m_ref = 0;
        }
    }
};

template <class T, class U>
bool operator == (shared_ptr<T> const &a, shared_ptr<U> const &b )
{
    return a.get() == b.get();
}

template <class T, class U>
bool operator != (shared_ptr<T> const &a, shared_ptr<U> const &b )
{
    return a.get() != b.get();
}

}

#endif

#endif // _WX_SHAREDPTR_H_
