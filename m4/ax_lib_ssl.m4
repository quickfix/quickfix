AC_DEFUN([AX_LIB_SSL],
[
########################################
# openssl 
########################################
have_ssl=false
AC_MSG_CHECKING([for SSL support (openssl)])
AC_ARG_WITH([openssl], AC_HELP_STRING([--with-openssl@<:@=DIR@:>@],[location of OpenSSL library (enables SSL support); use --without-openssl to disable]),
    [ openssl_location=$withval ], [ openssl_location=yes ])
# Check if openssl location is specified
if test "x_$openssl_location" != "x_no"; 
then
  AC_MSG_RESULT(yes)
  if test "x_$openssl_location" != "x_yes"; 
  then
		# alternative location provided
		CPPFLAGS="$CPPFLAGS -I$openssl_location/include"
		LDFLAGS="$LDFLAGS -L$openssl_location/lib"
	fi
	# Check for OpenSSL headers
	AC_CHECK_HEADERS([$openssl_location/include/openssl/ssl.h],,AC_MSG_ERROR([Unable to find the OpenSSL headers]))
	# Check for OpenSSL library
  LIBS_SAVED="$LIBS"
	LIBS="$LIBS_SAVED -lssl -lcrypto"
	AC_MSG_CHECKING(linking with openssl)
	AC_TRY_LINK([#include "$openssl_location/include/openssl/ssl.h"],[ SSL_library_init(); return(0); ],
		[ AC_MSG_RESULT(ok) ],
		[ AC_MSG_RESULT(failed)
		  AC_MSG_ERROR(Unable to link with the openssl library; use --without-openssl to disable)
		])
  LIBS="$LIBS_SAVED"
	OPENSSL_LIBS="-lssl -lcrypto"
	# Found the OpenSSL library
	AC_MSG_NOTICE(Building QuickFIX with support for SSL (using OpenSSL))
  have_ssl=true
  AC_DEFINE(HAVE_SSL, 1, [Define if you have SSL])
else
	# SSL is disabled
	AC_MSG_RESULT(no)
  have_ssl=false
fi
AC_SUBST(OPENSSL_LIBS)
AM_CONDITIONAL(HAVE_SSL, $have_ssl)
])
