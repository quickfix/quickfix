noinst_PROGRAMS = tradeclient

tradeclient_SOURCES = \
	tradeclient.cpp \
	Application.h \
	Application.cpp

tradeclient_LDADD = $(top_builddir)/src/C++/libquickfix.la 

AM_CPPFLAGS = -I$(top_builddir)/include -I..

all-local:
	rm -f $(top_builddir)/bin/tradeclient
	ln -s ../examples/tradeclient/tradeclient $(top_builddir)/bin/tradeclient
