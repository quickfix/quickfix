AC_DEFUN([AX_LIB_MYSQL],
[
has_mysql=false
AC_ARG_WITH(mysql,
    [  --with-mysql=<path>     prefix of MySQL installation. e.g. /usr/local or /usr], 
    [if test $withval == "no"
     then
       has_mysql=false
     else
       has_mysql=true
     fi],
    has_mysql=false
)
MYSQL_PREFIX=$with_mysql
AC_SUBST(MYSQL_PREFIX)

if test $has_mysql = true
then
    MYSQL_CFLAGS="-I${MYSQL_PREFIX}/include/mysql -I${MYSQL_PREFIX}/mysql/include"
    AC_SUBST(MYSQL_CFLAGS)
    MYSQL_LIBS="-L${MYSQL_PREFIX}/lib/mysql -L${MYSQL_PREFIX}/mysql/lib -lmysqlclient"
    AC_SUBST(MYSQL_LIBS)
    AC_DEFINE(HAVE_MYSQL, 1, Define if you have sql library (-lmysqlclient))
fi
])
