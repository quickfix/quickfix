AC_DEFUN([AX_LIB_POSTGRESQL],
[
has_postgresql=false
AC_ARG_WITH(postgresql,
    [  --with-postgresql=<path> prefix of PostgreSQL installation. e.g. /usr/local/pgsql or /usr/pgsql],
    [if test $withval == "no"
     then
       has_postgresql=false
     else
       has_postgresql=true
     fi],
    has_postgresql=false
)
POSTGRESQL_PREFIX=$with_postgresql
AC_SUBST(POSTGRESQL_PREFIX)

if test $has_postgresql = true
then
    POSTGRESQL_CFLAGS="-I${POSTGRESQL_PREFIX}/include -I${POSTGRESQL_PREFIX}/include/postgresql"
    AC_SUBST(POSTGRESQL_CFLAGS)
    POSTGRESQL_LIBS="-L${POSTGRESQL_PREFIX}/lib -lpq"
    AC_SUBST(POSTGRESQL_LIBS)
    AC_DEFINE(HAVE_POSTGRESQL, 1, Define if you have sql library (-lpq))
fi
])
