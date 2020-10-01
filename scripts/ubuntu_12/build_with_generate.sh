#!/bin/bash -l

source $(dirname $0)/env.rc

set -ex

./bootstrap
./configure

echo "run code generator:"
make generate

echo "build with re-generated codes:"
make -j3
make check

