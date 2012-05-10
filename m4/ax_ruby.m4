AC_DEFUN([AX_RUBY],
[
RUBY=${RUBY:-"ruby"}

RUBY_PREFIX=[`$RUBY -e 'require "rbconfig"; print Config::CONFIG["archdir"], "\n"'`]
AC_SUBST(RUBY_PREFIX)

has_ruby=false
AC_ARG_WITH(ruby,
    [  --with-ruby             will use $RUBY to find ruby], 
    [if test $withval == "no"
     then
       has_ruby=false
     else
       has_ruby=true
     fi],
    has_ruby=false
)

if test $has_ruby = true
then
    RUBY_CFLAGS="-I${RUBY_PREFIX}" 
    AC_SUBST(RUBY_CFLAGS)
    RUBY_SITE_PACKAGES=[`ruby -e 'require "rbconfig"; print Config::CONFIG["sitedir"], "\n"'`]
    AC_SUBST(RUBY_SITE_PACKAGES)
    AC_DEFINE(HAVE_RUBY, 1, Define if you have ruby)
fi
AM_CONDITIONAL(HAVE_RUBY, $has_ruby)
])
