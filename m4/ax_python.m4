AC_DEFUN([AX_PYTHON],
[
PYTHON=${PYTHON:-"python"}

has_python=false
AC_ARG_WITH(python,
    [  --with-python           will use $PYTHON to find python], 
    [if test $withval == "no"
     then
       has_python=false
     else
       has_python=true
     fi],
    has_python=false
)
PYTHON_PREFIX=$with_python
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
