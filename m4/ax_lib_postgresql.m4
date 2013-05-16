AC_DEFUN([_POSTGRESQL_CONFIG],[
  AC_ARG_WITH([postgresql-config],
  AS_HELP_STRING([--with-postgresql-config=PATH], [Path to pg_config program]),
                 [postgresql_config="$withval"], [postgresql_config=pg_config])
])

AC_DEFUN([_POSTGRESQL_CHECK],[
    AC_REQUIRE([_POSTGRESQL_CONFIG])
    POSTGRESQL_INCLUDEDIR=`$postgresql_config --includedir`
    POSTGRESQL_CFLAGS="-I${POSTGRESQL_INCLUDEDIR}"
    POSTGRESQL_LIBDIR=`$postgresql_config --libdir`
    POSTGRESQL_LIBS="-L${POSTGRESQL_LIBDIR} -lpq"
    AC_SUBST(POSTGRESQL_CFLAGS)
    AC_SUBST(POSTGRESQL_LIBS)
])


AC_DEFUN([AX_LIB_POSTGRESQL], [
    has_postgresql=false
    AC_ARG_WITH(postgresql,
        [  --with-postgresql	    will use pg_config to find postgresql], 
        [if test $withval == "no"
         then
           has_postgresql=false
         else
           has_postgresql=true
         fi],
        has_postgresql=false
    )

    if test $has_postgresql = true
    then
        AC_REQUIRE([_POSTGRESQL_CHECK])
        AC_DEFINE(HAVE_POSTGRESQL, 1, Define if you have sql library (-lpq))
    fi
    AM_CONDITIONAL(HAVE_POSTGRESQL, $has_postgresql)
])

