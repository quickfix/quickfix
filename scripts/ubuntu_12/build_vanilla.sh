#!/bin/bash -l

source $(dirname $0)/env.rc

set -ex

echo "vanilla build:"
./bootstrap
./configure
make -j3
make check

