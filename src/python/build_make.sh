#!/bin/sh

./swig.sh

cd ../..

./bootstrap && ./configure --with-python3 --with-postgresql && make && sudo make install
