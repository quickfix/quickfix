#!/bin/sh

DIR=`pwd`
PORT=$1
./setup.sh $PORT

../at -f cfg/at.cfg &
PROCID=$!
cd $DIR
ruby Runner.rb 127.0.0.1 $PORT definitions/server/future/*.def
RESULT=$?
kill $PROCID
exit $RESULT