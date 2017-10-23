#!/bin/sh

DIR=`pwd`

cd ../src/python
./test-py3.sh
RESULT=$?
cd $DIR
exit $RESULT
