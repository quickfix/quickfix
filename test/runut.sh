#!/bin/sh

trap "trap - TERM && kill -- -$$ 2> /dev/null" INT TERM KILL EXIT

DIR=$(dirname "$0")

cd $DIR
./ut -f cfg/ut.cfg
RESULT=$?
exit $RESULT
