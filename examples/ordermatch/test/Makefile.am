AM_CFLAGS = -O0 -g
AM_CXXFLAGS = -O0 -g

noinst_PROGRAMS = ordermatch_ut

ordermatch_ut_SOURCES = \
	ordermatch_ut.cpp \
	TestSuite.h \
	Market.cpp

ordermatch_ut_LDADD = $(top_builddir)/src/C++/libquickfix.la $(top_builddir)/UnitTest++/libunittest.la

INCLUDES = -I$(top_builddir)/include -I.. -I$(top_builddir)/UnitTest++/src

