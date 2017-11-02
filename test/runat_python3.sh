#!/bin/sh

export PYTHONPATH=../lib/python

DIR=`pwd`
PORT=$1
./setup.sh $PORT

python3  ../src/at.py cfg/at.cfg &
PROCID=$!
cd $DIR
ruby Runner.rb 127.0.0.1 $PORT definitions/server/fix4*/*.def
RESULT1=$?
kill $PROCID

python3  ../src/at.py cfg/atsp1.cfg &
PROCID=$!
cd $DIR
ruby Runner.rb 127.0.0.1 $PORT definitions/server/fix50sp1/*.def
RESULT2=$?
kill $PROCID

python3  ../src/at.py cfg/atsp2.cfg &
PROCID=$!
cd $DIR
ruby Runner.rb 127.0.0.1 $PORT definitions/server/fix50sp2/*.def
RESULT3=$?
kill $PROCID

RESULT=$(( $RESULT1 + $RESULT2 + $RESULT3 ))
exit $RESULT
 
