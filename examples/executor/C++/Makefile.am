noinst_PROGRAMS = executor

executor_SOURCES = \
	executor.cpp \
	Application.h \
	Application.cpp

executor_LDADD = -L$(top_builddir)/src/C++ -lquickfix -lstdc++

INCLUDES = -I$(top_builddir)/include

all-local:
	rm -f ../../../bin/executor
	ln -s ../examples/executor/C++/executor ../../../bin/executor
