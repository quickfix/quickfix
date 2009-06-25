CFLAGS += -O0 -g
CXXFLAGS += -O0 -g

noinst_PROGRAMS = ordermatch_ut

ordermatch_ut_SOURCES = \
	ordermatch_ut.cpp \
	TestSuite.h \
	Market.cpp

ordermatch_ut_LDADD = -L$(top_builddir)/src/C++ -lquickfix 

INCLUDES = -I$(top_builddir)/include -I.. -I../../../UnitTest++/src
LDFLAGS = -L../../../UnitTest++ -lUnitTest++