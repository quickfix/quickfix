#!/bin/sh

./swig.sh

cd ../..

./bootstrap && ./configure --with-python3 --with-postgresql --with-openssl && make && sudo make install
