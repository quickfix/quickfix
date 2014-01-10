#!/bin/bash -l

source $(dirname $0)/env.rc

set -ex

echo "run code generator:"
make generate

echo "build with re-generated code:"
./bootstrap
./configure
make -j3
make check

