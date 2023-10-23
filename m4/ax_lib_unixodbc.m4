AC_DEFUN([_UNIXODBC_CONFIG],[
  AC_ARG_WITH([odbc-config],
  AS_HELP_STRING([--with-odbc-config=PATH], [Path to odbc_config program]),
                 [odbc_config="$withval"], [odbc_config=odbc_config])
])

AC_DEFUN([_UNIXODBC_CHECK],[
    AC_REQUIRE([_UNIXODBC_CONFIG])
    AC_SUBST(UNIXODBC_CFLAGS)
    AC_SUBST(UNIXODBC_LIBS)
])

AC_DEFUN([AX_LIB_UNIXODBC], [
    has_unixodbc=false
    AC_ARG_WITH(unixodbc,
        [  --with-unixodbc           will use odbc_config to find unixodbc], 
        [if test $withval == "no"
         then
           has_unixodbc=false
         else
           has_unixodbc=true
         fi],
        has_unixodbc=false
    )

    if test $has_unixodbc = true
    then
        AC_REQUIRE([_UNIXODBC_CHECK])
        AC_DEFINE(HAVE_ODBC, 1, Define if you have odbc library)
        UNIXODBC_CFLAGS=`$odbc_config --cflags`
        UNIXODBC_LIBS=`$odbc_config --libs`
    fi
    AM_CONDITIONAL(HAVE_ODBC, $has_unixodbc)
])

