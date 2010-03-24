#!/bin/sh

DIR=`pwd`
PORT=$1
./setup.sh $PORT

./at -f cfg/atsp1.cfg &
PROCID=$!
cd $DIR
ruby Runner.rb 127.0.0.1 $PORT definitions/server/fix50sp1/*.def
RESULT=$?
kill $PROCID
exit $RESULT
