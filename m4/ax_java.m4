AC_DEFUN([AX_JAVA],
[
has_java=false
AC_ARG_WITH(java,
    [  --with-java             will use $JAVA_HOME to find java],
    [if test $withval == "no"
     then
       has_java=false
     else
       has_java=true
     fi],
    has_java=false
)

if test $has_java = true
then
  jarlib=$libdir

  AC_SUBST(jarlib)
  AC_SUBST(JAVA_CFLAGS)
  AC_DEFINE(HAVE_JAVA, 1, Define if you have java)
fi
AM_CONDITIONAL(HAVE_JAVA, $has_java)
])
