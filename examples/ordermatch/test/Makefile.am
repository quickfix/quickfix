noinst_PROGRAMS = ordermatch_ut

ordermatch_ut_SOURCES = \
	ordermatch_ut.cpp \
	TestSuite.h \
	Market.cpp

ordermatch_ut_LDADD = -L$(top_builddir)/src/C++ -lquickfix 

AM_CPPFLAGS = -I$(top_builddir)/include -I.. -I$(top_builddir)/UnitTest++/src
AM_LDFLAGS = -L$(top_builddir)/UnitTest++ -lUnitTest++