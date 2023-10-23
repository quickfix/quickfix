noinst_PROGRAMS = ordermatch

ordermatch_SOURCES = \
	ordermatch.cpp \
	Application.h \
	Application.cpp \
	IDGenerator.h \
	Market.h \
	Market.cpp \
	Order.h \
	OrderMatcher.h

ordermatch_LDADD = $(top_builddir)/src/C++/libquickfix.la 

AM_CPPFLAGS = -I$(top_builddir)/include

all-local:
	rm -f $(top_builddir)/bin/ordermatch
	ln -s ../examples/ordermatch/ordermatch $(top_builddir)/bin/ordermatch
