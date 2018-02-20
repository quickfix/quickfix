#!/bin/sh

trap "trap - TERM && kill -- -$$" INT TERM KILL EXIT

DIR=`pwd`

./ut -p $1 -f cfg/ut.cfg
RESULT=$?
cd $DIR
exit $RESULT
