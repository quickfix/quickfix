AC_DEFUN([AX_PYTHON],
[
has_python=false
has_python3=false
AC_ARG_WITH(python3,
    [  --with-python3           will use $PYTHON to find python],
    [
       has_python=true
       has_python3=true
    ],
    has_python3=false
)

if test $has_python3 = true
then
  PYTHON3_PREFIX=$with_python3
  #AC_DEFINE(PYTHON_MAJOR_VERSION, 3, Define the major version of python)
  AC_DEFINE(HAVE_PYTHON3, 1, Define if you have python3)
fi

AC_SUBST(PYTHON3_PREFIX)

if test $has_python3 = true
then
    # If the following python command returns an error, the python dev environment 
    # is misconfigured and the build will fail during `make`.
    #
    # Make sure `pip` is installed and try `pip install setuptools` to resolve this.
    #

    can_import=false
    py_output=$( (python3 -c 'from distutils import sysconfig;') 2>&1 )
    if echo "$py_output" | grep -q "Traceback"; then
      can_import=true
    fi
    AC_MSG_CHECKING([whether python3 modules are available])
    AS_IF([test $can_import = true], [
      AC_MSG_RESULT([no])
      AC_MSG_ERROR([$py_output])
    ], [
      AC_MSG_RESULT([yes])
    ])

    PYTHON3_INCLUDE_PATH=[`python3 -c 'from distutils import sysconfig; print( sysconfig.get_python_inc(1) )'`]
    PYTHON3_CFLAGS="-I${PYTHON3_INCLUDE_PATH}"
    AC_SUBST(PYTHON3_CFLAGS)
    PYTHON3_SITE_PACKAGES=[`python3 -c 'from distutils import sysconfig; print( sysconfig.get_python_lib(1) )'`]
    AC_SUBST(PYTHON3_SITE_PACKAGES)
    AC_DEFINE(HAVE_PYTHON3, 1, Define if you have python3)
fi

AM_CONDITIONAL(HAVE_PYTHON, $has_python)
AM_CONDITIONAL(HAVE_PYTHON3, $has_python3)
])
