#!/bin/sh

killall ut at

DIR=`pwd`

./ut -p $1 -f cfg/ut.cfg
RESULT=$?
cd $DIR
exit $RESULT
