#Disable unit tests on Solaris, AIX
if NO_UNIT_TEST
SUBDIRS = src bin spec test examples doc
else
SUBDIRS = UnitTest++ src bin spec test examples doc
endif

ACLOCAL_AMFLAGS = -I m4

# Install pkgconf definition

pkgconfdir=$(libdir)/pkgconfig
pkgconf_DATA = quickfix.pc

generate:
	cd spec && bash generate.sh
