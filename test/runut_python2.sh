#!/bin/sh

DIR=`pwd`

cd ../src/python
./test-python2.sh
RESULT=$?
cd $DIR
exit $RESULT
