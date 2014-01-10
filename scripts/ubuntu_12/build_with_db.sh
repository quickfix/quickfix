#!/bin/bash -l

source $(dirname $0)/env.rc

set -ex

echo "build with db support:"
./bootstrap
./configure --with-mysql --with-postgresql # --with-ruby --with-python
make  -j3
make check

