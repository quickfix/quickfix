#!/bin/sh

trap "trap - TERM && kill -- -$$ 2> /dev/null" INT TERM KILL EXIT

killall at ut

SCRIPT=$(realpath "$0")
DIR=$(dirname "$0")
PWD=$(pwd)
ABSOLUTE_DIR=$PWD

cd $DIR

cd ../src/C++/test
./ut --quickfix-config-file $ABSOLUTE_DIR/cfg/ut.cfg --quickfix-spec-path $ABSOLUTE_DIR/../spec "$@"
RESULT=$?
exit $RESULT
