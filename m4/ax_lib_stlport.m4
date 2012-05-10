AC_DEFUN([AX_LIB_STLPORT],
[
has_stlport=false
AC_ARG_WITH(stlport,
    [  --with-stlport=<path>   prefix of stlport installation. e.g. /usr/local or /usr], 
    [if test $withval == "no"
     then
       has_stlport=false
     else
       has_stlport=true
     fi],
   has_stlport=false
)
STLPORT_PREFIX=$with_stlport
AC_SUBST(STLPORT_PREFIX)

if test $has_stlport = true
then
    AC_CHECK_FILE($STLPORT_PREFIX/include/stlport/stdio.h,
        [ 
          STLPORT_CFLAGS="-I${STLPORT_PREFIX}/include/stlport -pthread"
          STLPORT_LIBS="-L${STLPORT_PREFIX}/lib -lstlport -pthread"
        ],
        [
          STLPORT_CFLAGS="-I${STLPORT_PREFIX}/stlport/include"
          STLPORT_LIBS="-L${STLPORT_PREFIX}/lib -lstlport_gcc"
        ] )
    AC_SUBST(STLPORT_LIBS)
    AC_SUBST(STLPORT_CFLAGS)

    AC_DEFINE(HAVE_STLPORT, 1, Define if you have stlport library)
fi
])
