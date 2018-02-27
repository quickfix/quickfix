noinst_PROGRAMS = tradeclient

tradeclient_SOURCES = \
	tradeclient.cpp \
	Application.h \
	Application.cpp

tradeclient_LDADD = $(top_builddir)/src/C++/libquickfix.la 

INCLUDES = -I$(top_builddir)/include -I..

all-local:
	rm -f ../../bin/tradeclient
	ln -s ../examples/tradeclient/tradeclient ../../bin/tradeclient
