/* src/C++/config.h.  Generated from config.h.in by configure.  */
/* src/C++/config.h.in.  Generated from configure.ac by autoheader.  */

/* __gnu_cxx::bitmap_allocator exists */
/* #undef ENABLE_BITMAP_ALLOCATOR */

/* boost::fast_pool_allocator exists */
/* #undef ENABLE_BOOST_FAST_POOL_ALLOCATOR */

/* boost::pool_allocator exists */
/* #undef ENABLE_BOOST_POOL_ALLOCATOR */

/* __gnu_cxx::debug_allocator exists */
/* #undef ENABLE_DEBUG_ALLOCATOR */

/* __gnu_cxx::mt_allocator exists */
/* #undef ENABLE_MT_ALLOCATOR */

/* __gnu_cxx::new_allocator exists */
/* #undef ENABLE_NEW_ALLOCATOR */

/* __gnu_cxx::pool_allocator exists */
/* #undef ENABLE_POOL_ALLOCATOR */

/* tbb::scalable_allocator exists */
/* #undef ENABLE_TBB_ALLOCATOR */

/* The system has gethostbyname_r which takes a result as a pass-in param */
#define GETHOSTBYNAME_R_INPUTS_RESULT 1

/* custom allocator configured */
/* #undef HAVE_ALLOCATOR_CONFIG */

/* Define if you have boost framework */
/* #undef HAVE_BOOST */

/* The system supports boost::shared_ptr */
/* #undef HAVE_BOOST_SHARED_PTR */

/* Define if clock_gettime exists. */
#define HAVE_CLOCK_GETTIME 1

/* whether or not we have to demangle names */
/* #undef HAVE_CPLUS_DEMANGLE */

/* define if the compiler supports basic C++17 syntax */
#define HAVE_CXX17 1

/* Define to 1 if you have the <dlfcn.h> header file. */
#define HAVE_DLFCN_H 1

/* found ftime */
#define HAVE_FTIME 1

/* Define to 1 if you have the <inttypes.h> header file. */
#define HAVE_INTTYPES_H 1

/* Define if you have java */
/* #undef HAVE_JAVA */

/* Define to 1 if you have the `compat' library (-lcompat). */
/* #undef HAVE_LIBCOMPAT */

/* Define to 1 if you have the `c_r' library (-lc_r). */
/* #undef HAVE_LIBC_R */

/* Define to 1 if you have the `nsl' library (-lnsl). */
/* #undef HAVE_LIBNSL */

/* Define to 1 if you have the `pthread' library (-lpthread). */
#define HAVE_LIBPTHREAD 1

/* Define to 1 if you have the `rt' library (-lrt). */
/* #undef HAVE_LIBRT */

/* Define to 1 if you have the `socket' library (-lsocket). */
/* #undef HAVE_LIBSOCKET */

/* Define to 1 if you have the <memory.h> header file. */
#define HAVE_MEMORY_H 1

/* Define if you have sql library (-lmysqlclient) */
/* #undef HAVE_MYSQL */

/* Define to 1 if you have the <openssl/ssl.h> header file. */
/* #undef HAVE_OPENSSL_SSL_H */

/* Define to 1 if PostgreSQL libraries are available */
/* #undef HAVE_POSTGRESQL */

/* Define if you have python2 */
/* #undef HAVE_PYTHON2 */

/* Define if you have python3 */
/* #undef HAVE_PYTHON3 */

/* Define if you have ruby */
/* #undef HAVE_RUBY */

/* Define if you have SSL */
/* #undef HAVE_SSL */

/* Define to 1 if you have the <stdint.h> header file. */
#define HAVE_STDINT_H 1

/* Define to 1 if you have the <stdio.h> header file. */
#define HAVE_STDIO_H 1

/* Define to 1 if you have the <stdlib.h> header file. */
#define HAVE_STDLIB_H 1

/* The system supports std::shared_ptr */
#define HAVE_STD_SHARED_PTR 1

/* The system supports std::tr1::shared_ptr */
#define HAVE_STD_TR1_SHARED_PTR_FROM_TR1_MEMORY_HEADER 1

/* The system supports std::unique_ptr */
#define HAVE_STD_UNIQUE_PTR 1

/* Define if you have stlport library */
/* #undef HAVE_STLPORT */

/* Define to 1 if you have the <strings.h> header file. */
#define HAVE_STRINGS_H 1

/* Define to 1 if you have the <string.h> header file. */
#define HAVE_STRING_H 1

/* Define to 1 if you have the <sys/stat.h> header file. */
#define HAVE_SYS_STAT_H 1

/* Define to 1 if you have the <sys/types.h> header file. */
#define HAVE_SYS_TYPES_H 1

/* Define if you have Intel TBB framework */
/* #undef HAVE_TBB */

/* Define to 1 if you have the <unistd.h> header file. */
#define HAVE_UNISTD_H 1

/* Define to the sub-directory where libtool stores uninstalled libraries. */
#define LT_OBJDIR ".libs/"

/* Name of package */
#define PACKAGE "quickfix"

/* Define to the address where bug reports for this package should be sent. */
#define PACKAGE_BUGREPORT "ask@quickfixengine.org"

/* Define to the full name of this package. */
#define PACKAGE_NAME "QuickFIX"

/* Define to the full name and version of this package. */
#define PACKAGE_STRING "QuickFIX 1.14.3"

/* Define to the one symbol short name of this package. */
#define PACKAGE_TARNAME "quickfix"

/* Define to the home page for this package. */
#define PACKAGE_URL ""

/* Define to the version of this package. */
#define PACKAGE_VERSION "1.14.3"

/* select statement decrements timeval parameter if interupted */
#define SELECT_MODIFIES_TIMEVAL 1

/* Define to 1 if you have the ANSI C header files. */
#define STDC_HEADERS 1

/* For location of set_terminate */
#define TERMINATE_IN_STD 1

/* Whether or not we are using the new-style typeinfo header */
#define TYPEINFO_IN_STD 1

/* The system supports AT&T STREAMS */
/* #undef USING_STREAMS */

/* Version number of package */
#define VERSION "1.14.3"

/* Define to 1 if `lex' declares `yytext' as a `char *' by default, not a
   `char[]'. */
/* #undef YYTEXT_POINTER */

/* enable reentrant system calls */
#define _REENTRANT 1

/* Define if clock_get_time exists. */
/* #undef __MACH__ */

/* socklen_t needs to be defined if the system doesn't define it */
/* #undef socklen_t */
