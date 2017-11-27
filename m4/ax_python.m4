AC_DEFUN([AX_PYTHON],
[
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
    ],
    has_python3=false
)

if test $has_python2 = true
then
  PYTHON2_PREFIX=$with_python2
  #AC_DEFINE(PYTHON_MAJOR_VERSION, 2, Define the major version of python)
  AC_DEFINE(HAVE_PYTHON2, 1, Define if you have python2)
fi

if test $has_python3 = true
then
  PYTHON3_PREFIX=$with_python3
  #AC_DEFINE(PYTHON_MAJOR_VERSION, 3, Define the major version of python)
  AC_DEFINE(HAVE_PYTHON3, 1, Define if you have python3)
fi

AC_SUBST(PYTHON2_PREFIX)
AC_SUBST(PYTHON3_PREFIX)

if test $has_python2 = true
then
    PYTHON2_INCLUDE_PATH=[`python2 -c 'from distutils import sysconfig; print( sysconfig.get_python_inc(1) )'`]
    PYTHON2_CFLAGS="-I${PYTHON2_INCLUDE_PATH}"
    AC_SUBST(PYTHON2_CFLAGS)
    PYTHON2_SITE_PACKAGES=[`python2 -c 'from distutils import sysconfig; print( sysconfig.get_python_lib(1) )'`]
    AC_SUBST(PYTHON2_SITE_PACKAGES)
    AC_DEFINE(HAVE_PYTHON2, 1, Define if you have python2)
fi

if test $has_python3 = true
then
    PYTHON3_INCLUDE_PATH=[`python3 -c 'from distutils import sysconfig; print( sysconfig.get_python_inc(1) )'`]
    PYTHON3_CFLAGS="-I${PYTHON3_INCLUDE_PATH}"
    AC_SUBST(PYTHON3_CFLAGS)
    PYTHON3_SITE_PACKAGES=[`python3 -c 'from distutils import sysconfig; print( sysconfig.get_python_lib(1) )'`]
    AC_SUBST(PYTHON3_SITE_PACKAGES)
    AC_DEFINE(HAVE_PYTHON3, 1, Define if you have python3)
fi

AM_CONDITIONAL(HAVE_PYTHON, $has_python)
AM_CONDITIONAL(HAVE_PYTHON2, $has_python2)
AM_CONDITIONAL(HAVE_PYTHON3, $has_python3)
])
