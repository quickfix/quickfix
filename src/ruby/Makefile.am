lib_LTLIBRARIES = librbquickfix.la
librbquickfix_la_SOURCES = QuickFix.c

librbquickfix_la_LDFLAGS = -no-undefined -L@RUBYDIR@ -lstdc++ -lgcc -lruby
librbquickfix_la_LIBADD = ../C/quickfix_api.lo
INCLUDES = -I@RUBYDIR@
