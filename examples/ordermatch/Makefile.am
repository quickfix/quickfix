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

ordermatch_LDADD = ../../src/C++/libquickfix.la -lpthread

all-local:
	rm -f ../../bin/ordermatch
	ln -s ../examples/ordermatch/ordermatch ../../bin/ordermatch
