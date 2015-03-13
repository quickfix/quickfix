AC_DEFUN([AX_LIB_SSL],
[
########################################
# openssl 
########################################
have_ssl=false
AC_MSG_CHECKING([for SSL support (openssl)])
AC_ARG_WITH(openssl, [  --with-openssl=<path>   enable openssl])

if test "$with_openssl" == "yes"
then
	AC_MSG_NOTICE([openssl enabled])
  have_ssl=true
  # Check for OpenSSL headers
	AC_CHECK_HEADERS([openssl/ssl.h],,AC_MSG_ERROR([Unable to find the OpenSSL headers]))
	# Check for OpenSSL library
  LIBS_SAVED="$LIBS"
	LIBS="$LIBS_SAVED -lssl -lcrypto"
	AC_MSG_CHECKING(linking with openssl)
	AC_TRY_LINK([#include "openssl/ssl.h"],[ SSL_library_init(); return(0); ],
		[ AC_MSG_RESULT(ok) ],
		[ AC_MSG_RESULT(failed)
		  AC_MSG_ERROR(Unable to link with the openssl library; use --without-openssl to disable)
		])
  LIBS="$LIBS_SAVED"
	OPENSSL_LIBS="-lssl -lcrypto"
	# Found the OpenSSL library
	AC_MSG_NOTICE(Building QuickFIX with support for SSL (using OpenSSL))
  AC_DEFINE(HAVE_SSL, 1, [Define if you have SSL])
elif test "$with_openssl" != ""
then
	AC_MSG_NOTICE([openssl enabled - $with_openssl])
  have_ssl=true
  # alternative location provided
  CPPFLAGS="$CPPFLAGS -I$with_openssl/include"
  LDFLAGS="$LDFLAGS -L$with_openssl/lib"
  # Check for OpenSSL headers
	AC_CHECK_HEADERS([$with_openssl/include/openssl/ssl.h],,AC_MSG_ERROR([Unable to find the OpenSSL headers]))
	# Check for OpenSSL library
  LIBS_SAVED="$LIBS"
	LIBS="$LIBS_SAVED -lssl -lcrypto"
	AC_MSG_CHECKING(linking with openssl)
	AC_TRY_LINK([#include "$with_openssl/include/openssl/ssl.h"],[ SSL_library_init(); return(0); ],
		[ AC_MSG_RESULT(ok) ],
		[ AC_MSG_RESULT(failed)
		  AC_MSG_ERROR(Unable to link with the openssl library; use --without-openssl to disable)
		])
  LIBS="$LIBS_SAVED"
	OPENSSL_LIBS="-lssl -lcrypto"
	# Found the OpenSSL library
	AC_MSG_NOTICE(Building QuickFIX with support for SSL (using OpenSSL))
  AC_DEFINE(HAVE_SSL, 1, [Define if you have SSL])
else
	AC_MSG_NOTICE([openssl disabled])
  have_ssl=false
fi

AC_SUBST(OPENSSL_LIBS)
AM_CONDITIONAL(HAVE_SSL, $have_ssl)
])
