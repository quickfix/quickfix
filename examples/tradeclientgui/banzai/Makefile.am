if NO_UNIT_TEST
SUBDIRS = src
else
SUBDIRS = src test
endif

EXTRA_DIST = *.bat *.xml

all-local:
	./build.sh
clean-local:
	./build.sh clean
