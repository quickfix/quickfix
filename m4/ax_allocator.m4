AC_DEFUN([AX_ALLOCATOR],
[
AC_ARG_WITH(allocator,
    [  --with-allocator=<type> selected allocator, one of 'std' (default),'new','debug','mt','pool','bitmap','boost_fast','boost','tbb'], 
    [if test $withval == "no"
     then
       has_allocator=false
     else
       has_allocator=true
     fi],
    has_allocator=false
)
ALLOCATOR=$with_allocator

AC_LANG_CPLUSPLUS

# check for debug allocator
if test "x$with_allocator" == "xdebug"
then
	AC_MSG_CHECKING(for __gnu_cxx::debug_allocator)
	AC_TRY_COMPILE(
		[#include <ext/debug_allocator.h>
		 #include<vector>],
		[std::vector<int, __gnu_cxx::debug_allocator<int> > x;],
		AC_MSG_RESULT(yes)
		AC_DEFINE(ENABLE_DEBUG_ALLOCATOR, 1,
		__gnu_cxx::debug_allocator exists)
		AC_DEFINE(HAVE_ALLOCATOR_CONFIG, 1,
		custom allocator configured),
		AC_MSG_ERROR(no))
fi

# check for new allocator
if test "x$with_allocator" == "xnew"
then
	AC_MSG_CHECKING(for __gnu_cxx::new_allocator)
	AC_TRY_COMPILE(
		[#include <ext/new_allocator.h>
		 #include<vector>],
		[std::vector<int, __gnu_cxx::new_allocator<int> > x;],
		AC_MSG_RESULT(yes)
		AC_DEFINE(ENABLE_NEW_ALLOCATOR, 1,
		__gnu_cxx::new_allocator exists)
		AC_DEFINE(HAVE_ALLOCATOR_CONFIG, 1),
		AC_MSG_ERROR(no))
fi

# check for boost::pool_allocator
if test "x$with_allocator" == "xboost"
then
	AC_MSG_CHECKING(for boost::pool_allocator)
	AC_TRY_COMPILE(
		[#include <boost/pool/pool_alloc.hpp>
		 #include<vector>],
		[std::vector<int, boost::pool_allocator<int> > x;],
		AC_MSG_RESULT(yes)
		AC_DEFINE(ENABLE_BOOST_POOL_ALLOCATOR, 1,
		boost::pool_allocator exists)
		AC_DEFINE(HAVE_ALLOCATOR_CONFIG, 1),
		AC_MSG_ERROR(no))
fi

# check for boost::fast_pool_allocator
if test "x$with_allocator" == "xboost_fast"
then
	AC_MSG_CHECKING(for boost::fast_pool_allocator)
	AC_TRY_COMPILE(
		[#include <boost/pool/pool_alloc.hpp>
		 #include<vector>],
		[std::vector<int, boost::fast_pool_allocator<int> > x;],
		AC_MSG_RESULT(yes)
		AC_DEFINE(ENABLE_BOOST_FAST_POOL_ALLOCATOR, 1,
		boost::fast_pool_allocator exists)
		AC_DEFINE(HAVE_ALLOCATOR_CONFIG, 1),
		AC_MSG_ERROR(no))	
fi

# check for __gnu_cxx::__pool_alloc
if test "x$with_allocator" == "xpool"
then
	AC_MSG_CHECKING(for __gnu_cxx::__pool_alloc)
	AC_TRY_COMPILE(
		[#include <ext/pool_allocator.h>
		 #include<vector>],
		[std::vector<int, __gnu_cxx::__pool_alloc<int> > x;],
		AC_MSG_RESULT(yes)
		AC_DEFINE(ENABLE_POOL_ALLOCATOR, 1,
		__gnu_cxx::pool_allocator exists)
		AC_DEFINE(HAVE_ALLOCATOR_CONFIG, 1),
		AC_MSG_ERROR(no))
fi

# check for __gnu_cxx::__mt_alloc
if test "x$with_allocator" == "xmt"
then
	AC_MSG_CHECKING(for __gnu_cxx::__mt_alloc)
	AC_TRY_COMPILE(
		[#include <ext/mt_allocator.h>
		 #include<vector>],
		[std::vector<int, __gnu_cxx::__mt_alloc<int> > x;],
		AC_MSG_RESULT(yes)
		AC_DEFINE(ENABLE_MT_ALLOCATOR, 1,
		__gnu_cxx::mt_allocator exists)
		AC_DEFINE(HAVE_ALLOCATOR_CONFIG, 1),
		AC_MSG_ERROR(no))
fi

# check for __gnu_cxx::bitmap_allocator
if test "x$with_allocator" == "xbitmap"
then
	AC_MSG_CHECKING(for __gnu_cxx::bitmap_allocator)
	AC_TRY_COMPILE(
		[#include <ext/bitmap_allocator.h>
		 #include<vector>],
		[std::vector<int, __gnu_cxx::bitmap_allocator<int> > x;],
		AC_MSG_RESULT(yes)
		AC_DEFINE(ENABLE_BITMAP_ALLOCATOR, 1,
		__gnu_cxx::bitmap_allocator exists)
		AC_DEFINE(HAVE_ALLOCATOR_CONFIG, 1),
		AC_MSG_ERROR(no))
fi

# check for tbb::scalable_allocator
if test "x$with_allocator" == "xtbb"
then
	AC_MSG_CHECKING(for tbb::scalable_allocator)
	AC_TRY_COMPILE(
		[#include <tbb/scalable_allocator.h>
		 #include<vector>],
		[std::vector<int, tbb::scalable_allocator<int> > x;],
		AC_MSG_RESULT(yes)
		AC_DEFINE(ENABLE_TBB_ALLOCATOR, 1,
		tbb::scalable_allocator exists)
		AC_DEFINE(HAVE_ALLOCATOR_CONFIG, 1),
		AC_MSG_ERROR(no))
fi
])
