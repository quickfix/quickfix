#!/bin/sh

export LD_LIBRARY_PATH=../src/C++/.libs
export DYLD_LIBRARY_PATH=$LD_LIBRARY_PATH
export RUBYLIB=../lib/ruby

DIR=`pwd`
PORT=$1
./setup.sh $PORT

ruby -I ../lib/ruby ../src/at.rb cfg/at.cfg &
PROCID=$!
cd $DIR
ruby Runner.rb 127.0.0.1 $PORT definitions/server/fix4*/*.def
RESULT1=$?
kill $PROCID

ruby -I ../lib/ruby ../src/at.rb cfg/atsp1.cfg &
PROCID=$!
cd $DIR
ruby Runner.rb 127.0.0.1 $PORT definitions/server/fix50sp1/*.def
RESULT2=$?
kill $PROCID

ruby -I ../lib/ruby ../src/at.rb cfg/atsp2.cfg &
PROCID=$!
cd $DIR
ruby Runner.rb 127.0.0.1 $PORT definitions/server/fix50sp2/*.def
RESULT3=$?
kill $PROCID

RESULT=$(( $RESULT1 + $RESULT2 + $RESULT3 ))
exit $RESULT
