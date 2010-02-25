#!/bin/sh

DIR=`pwd`

./pt -p $1 -c 50000
RESULT=$?
cd $DIR
exit $RESULT
