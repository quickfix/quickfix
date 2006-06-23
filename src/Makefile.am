if HAVE_JAVA
JAVA_DIR = java
endif

if HAVE_PYTHON
PYTHON_DIR = python
endif

if HAVE_RUBY
RUBY_DIR = ruby
endif

SUBDIRS = C++ ${JAVA_DIR} ${PYTHON_DIR} ${RUBY_DIR}

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
	rm -f ../test/ut ../test/pt ../test/at
	ln -s ../src/ut ../test/ut
	ln -s ../src/pt ../test/pt
	ln -s ../src/at ../test/at
if HAVE_JAVA
	bash ./build.sh
endif

clean-local:
if HAVE_JAVA
	bash ./build.sh clean
endif