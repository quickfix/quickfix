#!/bin/sh

killall ut at

DIR=`pwd`
PORT=$1
./setup.sh $PORT

./at -f cfg/at.cfg -t &
PROCID=$!
cd $DIR
ruby Runner.rb 127.0.0.1 $PORT definitions/server/fix4*/*.def definitions/server/fix50/*.def
RESULT1=$?
kill $PROCID

./at -f cfg/atsp1.cfg &
PROCID=$!
cd $DIR
ruby Runner.rb 127.0.0.1 $PORT definitions/server/fix50sp1/*.def
RESULT2=$?
kill $PROCID

./at -f cfg/atsp2.cfg &
PROCID=$!
cd $DIR
ruby Runner.rb 127.0.0.1 $PORT definitions/server/fix50sp2/*.def
RESULT3=$?
kill $PROCID

RESULT=$(( $RESULT1 + $RESULT2 + $RESULT3 ))
exit $RESULT
