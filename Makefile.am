SUBDIRS = UnitTest++ src bin spec test examples doc

ACLOCAL_AMFLAGS = -I m4

# Install pkgconf definition

pkgconfdir=$(libdir)/pkgconfig
pkgconf_DATA = quickfix.pc

generate:
	cd spec && bash generate.sh

