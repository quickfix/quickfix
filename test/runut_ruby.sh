#!/bin/sh

DIR=`pwd`

cd ../src/ruby
./test.sh
RESULT=$?
cd $DIR
exit $RESULT
