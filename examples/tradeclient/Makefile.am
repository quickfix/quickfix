noinst_PROGRAMS = tradeclient

tradeclient_SOURCES = \
	tradeclient.cpp \
	Application.h \
	Application.cpp

tradeclient_LDADD = ../../src/C++/libquickfix.la -lpthread

all-local:
	rm -f ../../bin/tradeclient
	ln -s ../examples/tradeclient/tradeclient ../../bin/tradeclient