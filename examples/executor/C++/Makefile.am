noinst_PROGRAMS = executor

executor_SOURCES = \
	executor.cpp \
	Application.h \
	Application.cpp

executor_LDADD = -lquickfix

all-local:
	rm -f ../../../bin/executor
	ln -s ../examples/executor/C++/executor ../../../bin/executor
