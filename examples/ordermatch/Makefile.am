if NO_UNIT_TEST
SUBDIRS =
else
SUBDIRS = test
endif

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

INCLUDES = -I$(top_builddir)/include/quickfix

all-local:
	rm -f ../../bin/ordermatch
	ln -s ../examples/ordermatch/ordermatch ../../bin/ordermatch
