#                                               -*- Autoconf -*-
# Process this file with autoconf to produce a configure script.

AC_PREREQ([2.59])

AC_INIT([QuickFIX], [1.14.3], [ask@quickfixengine.org])
AC_CONFIG_MACRO_DIR([m4])
m4_include([m4/ax_lib_mysql.m4])
m4_include([m4/ax_lib_postgresql.m4])
m4_include([m4/ax_lib_boost.m4])
m4_include([m4/ax_lib_stlport.m4])
m4_include([m4/ax_allocator.m4])
m4_include([m4/ax_python.m4])
m4_include([m4/ax_ruby.m4])
m4_include([m4/ax_java.m4])
AC_CONFIG_SRCDIR([src/ut.cpp])
AC_CONFIG_HEADERS([config.h])
AC_CONFIG_AUX_DIR([config])
AM_INIT_AUTOMAKE

# Checks for programs.
AC_PROG_CXX
AC_PROG_CC
AC_PROG_CPP
AC_DISABLE_STATIC
AC_LIBTOOL_WIN32_DLL
AM_PROG_LIBTOOL
AM_PROG_LEX

AX_LIB_MYSQL()
AX_LIB_POSTGRESQL()
AX_LIB_BOOST()
AX_LIB_STLPORT()
AX_ALLOCATOR()
AX_PYTHON()
AX_RUBY()
AX_JAVA()

########################################
# TBB 
########################################
has_tbb=false
AC_ARG_WITH(tbb,
    [  --with-tbb=<path>       prefix of Intel Thread Building Blocks (TBB) installation. e.g. /opt/intel/tbb/3.0], 
    [if test $withval == "no"
     then
       has_tbb=false
     else
       has_tbb=true
     fi],
    has_tbb=false
)
TBB_PREFIX=$with_tbb
AC_SUBST(TBB_PREFIX)

has_tbb_arch=false
AC_ARG_WITH(tbb-arch,
    [  --with-tbb-arch=<arch>  TBB arch subdir, e.g. intel64/cc4.1.0_libc2.4_kernel2.6.16.21 ], 
    [if test $withval == "no"
     then
       has_tbb_arch=false
     else
       has_tbb_arch=true
     fi],
    has_tbb_arch=false
)
TBB_ARCH=$with_tbb_arch
AC_SUBST(TBB_ARCH)

if test $has_tbb = true
then
    TBB_CFLAGS="-I${TBB_PREFIX}"
    AC_SUBST(TBB_CFLAGS)
    TBB_LIBS="-L${TBB_PREFIX}/${TBB_ARCH} -ltbbmalloc"
    AC_SUBST(TBB_LIBS)
    AC_DEFINE(HAVE_TBB, 1, Define if you have Intel TBB framework)
fi
########################################

# libs
LIBS="$STLPORT_LIBS $XML_LIBS $MYSQL_LIBS $POSTGRESQL_LDFLAGS $TBB_LIBS $LIBS"
# gcc flags
if test `uname` == SunOS; then
   	SHAREDFLAGS="$TBB_CFLAGS $BOOST_CFLAGS $STLPORT_CFLAGS $MYSQL_CFLAGS $POSTGRESQL_CFLAGS $XML_CPPFLAGS $XML_CFLAGS $JAVA_CFLAGS $PYTHON_CFLAGS $RUBY_CFLAGS"
else
	SHAREDFLAGS="-Wall -ansi -Wpointer-arith -Wwrite-strings -Wno-overloaded-virtual $TBB_CFLAGS $BOOST_CFLAGS $STLPORT_CFLAGS $MYSQL_CFLAGS $POSTGRESQL_CFLAGS $XML_CPPFLAGS $XML_CFLAGS $PYTHON_CFLAGS $RUBY_CFLAGS"
fi

CFLAGS="$CFLAGS $SHAREDFLAGS"
AC_SUBST(CFLAGS)
CXXFLAGS="$CXXFLAGS $SHAREDFLAGS -std=c++0x"
AC_SUBST(CXXFLAGS)


# Checks for libraries.
AC_CHECK_LIB(c,shutdown,true,AC_CHECK_LIB(socket,shutdown))
AC_CHECK_LIB(c,inet_addr,true,AC_CHECK_LIB(nsl,inet_addr))
AC_CHECK_LIB(c,nanosleep,true,AC_CHECK_LIB(rt,nanosleep))
AC_CHECK_LIB(compat,ftime)

AC_MSG_CHECKING([which threading environment to use])
# each host OS needs special threading flags
case $build_os in
	freebsd*|netbsd*)
		LIBS="-pthread $LIBS"
		AC_MSG_RESULT([-pthread])
		;;
	linux-*) 
		AC_MSG_RESULT([-lpthread])
		AC_CHECK_LIB(pthread, pthread_create)
		;;
	solaris*) 
		AC_MSG_RESULT([-lpthread])
		AC_CHECK_LIB(pthread, pthread_create)
		;;
	*)
		# maybe we have a usable libc for other OSes
		AC_MSG_RESULT([-lc_r])
		AC_CHECK_LIB(c_r, pthread_create)
		;;
esac

# Checks for header files.
AC_CHECK_HEADERS([stdio.h])

# Checks for typedefs, structures, and compiler characteristics.


AC_LANG_SAVE
AC_LANG_CPLUSPLUS

AC_MSG_CHECKING(for STREAMS ioctl)
AC_TRY_COMPILE(
	[#include <sys/types.h>
	 #include <stropts.h>
	 #include <sys/conf.h>],
	[ioctl(1,I_NREAD);],
	AC_MSG_RESULT(yes)
	AC_DEFINE(USING_STREAMS, 1,
	The system supports AT&T STREAMS, presumably standard),
	AC_MSG_RESULT(no))

AC_MSG_CHECKING(for socklen_t)
AC_TRY_COMPILE(
	[#include <unistd.h>
         #include <sys/types.h>
         #include <sys/socket.h>],
	[socklen_t t = 1;],
	AC_MSG_RESULT(yes),
	AC_MSG_RESULT(no)
	AC_DEFINE(socklen_t, int,
	socklen_t needs to be defined if the system doesn't define it))

AC_MSG_CHECKING(for ftime)
AC_TRY_COMPILE(
	[#include <sys/timeb.h>],
	[timeb tb;
         ftime(&tb)],
	has_ftime=true, has_ftime=false)

if test $has_ftime = true
then AC_MSG_RESULT(yes)
     AC_DEFINE(HAVE_FTIME, 1, found ftime)
else AC_MSG_RESULT(no)
fi
AM_CONDITIONAL(HAVE_FTIME, $has_ftime)

AC_MSG_CHECKING(for set_terminate in the global namespace)
AC_TRY_COMPILE(
	[#include <exception>
	 void term() {}],
	[set_terminate(term);],
         set_terminate_is_global=true, set_terminate_is_global=false)

if test $set_terminate_is_global = true
then AC_MSG_RESULT(yes)
else AC_MSG_RESULT(no)
    AC_MSG_CHECKING(for set_terminate in the std namespace)
    AC_TRY_COMPILE(
    [#include <exception>
     void term() {}],
    [std::set_terminate(term);],
    AC_MSG_RESULT(yes)
    AC_DEFINE(TERMINATE_IN_STD, 1, 
    For location of set_terminate),
    AC_MSG_RESULT(no)
    AC_MSG_ERROR(unable to find set_terminate in std or global namespace))
fi

AC_MSG_CHECKING(for typeinfo in the global namespace)
AC_TRY_COMPILE(
	[#include <typeinfo>],
	[const typeinfo& ty = typeid(typeinfo);],
	typeinfo_is_global=true, typeinfo_is_global=false)

AC_MSG_CHECKING(for std::tr1::shared_ptr)
AC_TRY_COMPILE(
	[#include <tr1/memory>],
	[std::tr1::shared_ptr<int> ptr;],
	AC_MSG_RESULT(yes)
	AC_DEFINE(HAVE_STD_TR1_SHARED_PTR, 1,
	The system supports std::tr1::shared_ptr),
	AC_MSG_RESULT(no))

AC_MSG_CHECKING(for std::shared_ptr)
AC_TRY_COMPILE(
	[#include <memory>],
	[std::shared_ptr<int> ptr;],
	AC_MSG_RESULT(yes)
	AC_DEFINE(HAVE_STD_SHARED_PTR, 1,
	The system supports std::shared_ptr),
	AC_MSG_RESULT(no))

if test $typeinfo_is_global = true
then AC_MSG_RESULT(yes)
else AC_MSG_RESULT(no)
    AC_MSG_CHECKING(for typeinfo in the std namespace)
    AC_TRY_COMPILE(
    [#include <typeinfo>],
    [const std::type_info& ty = typeid(std::type_info);],
    AC_MSG_RESULT(yes)
    AC_DEFINE(TYPEINFO_IN_STD, 1, 
    Whether or not we are using the new-style typeinfo header),
    AC_MSG_RESULT(no)
    AC_MSG_ERROR(type_info is required by the test library))
fi

# check for gethostbyname_r
AC_MSG_CHECKING(for gethostbyname_r with input result)
AC_TRY_COMPILE(
	[#include <netdb.h>],
	[const char* name = "localhost";
         hostent host;
         char buf[1024];
         hostent* host_ptr;
         int error;
         gethostbyname_r( name, &host, buf, sizeof(buf), &host_ptr, &error );
	 return 0;],
	 AC_MSG_RESULT(yes)
	 AC_DEFINE(GETHOSTBYNAME_R_INPUTS_RESULT, 1,
	 The system has gethostbyname_r which takes a result as a pass-in param),
	 AC_MSG_RESULT(no))

AC_DEFINE(_REENTRANT, 1, enable reentrant system calls)

# Checks for library functions.
AC_LANG_RESTORE

AC_CHECK_LIB(iberty, cplus_demangle,    
  AC_DEFINE(HAVE_CPLUS_DEMANGLE,1,whether or not we have to demangle names)
  LIBS="$LIBS -liberty")

# Checks for runtime behavior
AC_MSG_CHECKING(if select modifies timeval parameter)
AC_TRY_RUN(
[
#include <unistd.h>
#include <sys/types.h>
#include <sys/time.h>
int main(int argc, char** argv)
{
  struct timeval tv;
  tv.tv_sec = 0;
  tv.tv_usec = 1;
  select(0,0,0,0,&tv);
  return tv.tv_usec != 1 ? 0 : 1;
}
],
AC_MSG_RESULT(yes)
AC_DEFINE(SELECT_MODIFIES_TIMEVAL, 1, 
select statement decrements timeval parameter if interupted),
AC_MSG_RESULT(no),
AC_MSG_RESULT(unable to determine, assuming no...))

AC_CONFIG_FILES([
    quickfix.pc
    Makefile
    src/Makefile
    src/C++/Makefile
    src/C++/test/Makefile
    src/python/Makefile
    src/ruby/Makefile
    bin/Makefile
    bin/cfg/Makefile
    spec/Makefile
    test/Makefile
    test/atrun/Makefile
    test/cfg/Makefile
    test/definitions/Makefile
    test/definitions/server/Makefile
    test/definitions/server/future/Makefile
    examples/Makefile
    examples/executor/Makefile
    examples/executor/C++/Makefile
    examples/ordermatch/Makefile
    examples/ordermatch/test/Makefile
    examples/tradeclient/Makefile
    examples/tradeclientgui/Makefile
    examples/tradeclientgui/banzai/Makefile
    examples/tradeclientgui/banzai/test/Makefile
    examples/tradeclientgui/banzai/src/Makefile
    examples/tradeclientgui/banzai/src/quickfix/Makefile
    examples/tradeclientgui/banzai/src/quickfix/banzai/Makefile
    examples/tradeclientgui/banzai/src/quickfix/banzai/ui/Makefile
    doc/Makefile
    doc/html/Makefile ])
AC_OUTPUT
