if HAVE_JAVA
JAVA_DIR = java
endif

if HAVE_PYTHON
PYTHON_DIR = python
endif

SUBDIRS = C++ ${JAVA_DIR} ${PYTHON_DIR}

noinst_PROGRAMS = at ut pt

at_SOURCES = at.cpp at_application.h
ut_SOURCES = ut.cpp
pt_SOURCES = pt.cpp

EXTRA_DIST = getopt.c getopt-repl.h

at_LDADD = C++/libquickfix.la
ut_LDADD = C++/test/libquickfixcpptest.la C++/libquickfix.la
pt_LDADD = C++/libquickfix.la

INCLUDES =-IC++

all-local:
	rm -f ../bin/ut ../bin/pt ../bin/at
	ln -s ../src/ut ../bin/ut
	ln -s ../src/pt ../bin/pt
	ln -s ../src/at ../bin/at
if HAVE_JAVA
	bash ./build.sh
endif

clean-local:
if HAVE_JAVA
	bash ./build.sh clean
endif