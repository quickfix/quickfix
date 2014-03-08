#!/bin/sh

DIR=`pwd`

./pt -p $1 -c 500000
RESULT=$?
cd $DIR
exit $RESULT
