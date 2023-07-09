#!/bin/sh

trap "trap - TERM && kill -- -$$" INT TERM KILL EXIT

DIR=$(dirname "$0")

cd $DIR
./ut -p $1 -f cfg/ut.cfg
RESULT=$?
exit $RESULT
