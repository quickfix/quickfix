SUBDIRS = test

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

ordermatch_LDADD = -L$(top_builddir)/src/C++ -lquickfix -lstdc++

INCLUDES = -I$(top_builddir)/include

all-local:
	rm -f ../../bin/ordermatch
	ln -s ../examples/ordermatch/ordermatch ../../bin/ordermatch
