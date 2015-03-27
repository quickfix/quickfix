#!/bin/sh

./swig.sh

cd ../..

./bootstrap && ./configure --with-python3 --with-postgresql --with-openssql="/usr/bin/openssl" && make && sudo make install
