AC_DEFUN([_MYSQL_CONFIG],[
  AC_ARG_WITH([mysql-config],
  AS_HELP_STRING([--with-mysql-config=PATH], [Path to mysql_config program]),
                 [mysql_config="$withval"], [mysql_config=mysql_config])
])

AC_DEFUN([_MYSQL_CHECK],[
    AC_REQUIRE([_MYSQL_CONFIG])
    AC_SUBST(MYSQL_CFLAGS)
    AC_SUBST(MYSQL_LIBS)
])


AC_DEFUN([AX_LIB_MYSQL], [
    has_mysql=false
    AC_ARG_WITH(mysql,
        [  --with-mysql           will use mysql_config to find mysql], 
        [if test $withval == "no"
         then
           has_mysql=false
         else
           has_mysql=true
         fi],
        has_mysql=false
    )

    if test $has_mysql = true
    then
        AC_REQUIRE([_MYSQL_CHECK])
        AC_DEFINE(HAVE_MYSQL, 1, Define if you have sql library (-lmysqlclient))
        MYSQL_CFLAGS=`$mysql_config --cflags`
        MYSQL_LIBS=`$mysql_config --libs`
    fi
    AM_CONDITIONAL(HAVE_MYSQL, $has_mysql)
])

