#!/bin/sh

trap "trap - TERM && kill -- -$$ 2 &&> /dev/null" INT TERM KILL EXIT

killall ut at

RUBY="ruby -I."
DIR=`pwd`
PORT=$1
./setup.sh $PORT

./at -f cfg/at.cfg &
PROCID=$!
cd $DIR
$RUBY Runner.rb 127.0.0.1 $PORT definitions/server/fix4*/*.def definitions/server/fix50/*.def definitions/server/fix50sp1/*.def definitions/server/fix50sp2/*.def definitions/server/validate/*.def

RESULT=$?
exit $RESULT