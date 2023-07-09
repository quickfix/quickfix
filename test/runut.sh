#!/bin/sh

trap "trap - TERM && kill -- -$$" INT TERM KILL EXIT

DIR=$(dirname "$0")

cd $DIR
./ut -f cfg/ut.cfg
RESULT=$?
exit $RESULT
