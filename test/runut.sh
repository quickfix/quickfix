#!/bin/sh

trap "trap - TERM && kill -- -$$ 2> /dev/null" INT TERM KILL EXIT

killall at ut

SCRIPT=$(realpath "$0")
DIR=$(dirname "$SCRIPT")

cd $DIR

cd ../src/C++/test
./ut --quickfix-config-file $DIR/cfg/ut.cfg --quickfix-spec-path $DIR/../spec "$@"
RESULT=$?
exit $RESULT
