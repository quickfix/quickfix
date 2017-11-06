AC_DEFUN([AX_PYTHON],
[
PYTHON=${PYTHON2:-"python2"}

has_python=false

has_python2=false
AC_ARG_WITH(python2,
    [  --with-python2           will use $PYTHON2 to find python],
    [if test $withval == "no"
     then
       has_python2=false
     else
       has_python=true
       has_python2=true
     fi],
    has_python2=false
)

has_python3=false
AC_ARG_WITH(python3,
    [  --with-python3           will use $PYTHON to find python],
    [
       has_python=true
       has_python3=true
       PYTHON="python3"
    ],
    has_python3=false
)

if test $has_python2 = true
then
  PYTHON_PREFIX=$with_python2
  AC_DEFINE(PYTHON_MAJOR_VERSION, 2, Define the major version of python)
fi

if test $has_python3 = true
then
  PYTHON_PREFIX=$with_python3
  AC_DEFINE(PYTHON_MAJOR_VERSION, 3, Define the major version of python)
fi

AC_SUBST(PYTHON_PREFIX)

if test $has_python = true
then
    PYTHON_INCLUDE_PATH=[`$PYTHON -c 'from distutils import sysconfig; print( sysconfig.get_python_inc(1) )'`]
    PYTHON_CFLAGS="-I${PYTHON_INCLUDE_PATH}"
    AC_SUBST(PYTHON_CFLAGS)
    PYTHON_SITE_PACKAGES=[`$PYTHON -c 'from distutils import sysconfig; print( sysconfig.get_python_lib(1) )'`]
    AC_SUBST(PYTHON_SITE_PACKAGES)
    AC_DEFINE(HAVE_PYTHON, 1, Define if you have python)
fi
AM_CONDITIONAL(HAVE_PYTHON, $has_python)
])
