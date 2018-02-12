#!/bin/sh

DIR=`pwd`

cd ../src/python
./test-python3.sh
RESULT=$?
cd $DIR
exit $RESULT
