#!/bin/sh

trap "trap - TERM && kill -- -$$" INT TERM KILL EXIT

RUBY="ruby -I."
DIR=`pwd`
PORT=$1
./setup.sh $PORT

./at -f cfg/at.cfg &
PROCID=$!
cd $DIR
$RUBY Runner.rb 127.0.0.1 $PORT definitions/server/fix4*/*.def definitions/server/fix50/*.def definitions/server/fix50sp1/*.def definitions/server/fix50sp2/*.def

RESULT=$?
kill $PROCID
exit $RESULT
