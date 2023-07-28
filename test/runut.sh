#!/bin/sh

trap "trap - TERM && kill -- -$$ 2> /dev/null" INT TERM KILL EXIT

SCRIPT=$(realpath "$0")
DIR=$(dirname "$SCRIPT")

cd $DIR/../src/C++/test
./ut --quickfix-config-file $DIR/cfg/ut.cfg
RESULT=$?
exit $RESULT
