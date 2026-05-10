#!/bin/sh

trap "trap - TERM && kill -- -$$ 2 &&> /dev/null" INT TERM KILL EXIT

killall ut at

RUBY="ruby -I."
DIR=`pwd`
PORT=$1
./setup.sh $PORT

./at -f cfg/at.cfg >/dev/null 2>&1 &
cd $DIR

TMPDIR=$(mktemp -d)

# fix50/sp1/sp2 each have distinct FIXT.1.1 sessions — run in parallel
$RUBY Runner.rb 127.0.0.1 $PORT definitions/server/fix50/*.def    > "$TMPDIR/fix50.out"    2>&1 & PID_FIX50=$!
$RUBY Runner.rb 127.0.0.1 $PORT definitions/server/fix50sp1/*.def > "$TMPDIR/fix50sp1.out" 2>&1 & PID_FIX50SP1=$!
$RUBY Runner.rb 127.0.0.1 $PORT definitions/server/fix50sp2/*.def > "$TMPDIR/fix50sp2.out" 2>&1 & PID_FIX50SP2=$!

# all groups have distinct sessions — run fully in parallel
$RUBY Runner.rb 127.0.0.1 $PORT definitions/server/fix40/*.def    > "$TMPDIR/fix40.out"    2>&1 & PID_FIX40=$!
$RUBY Runner.rb 127.0.0.1 $PORT definitions/server/fix41/*.def    > "$TMPDIR/fix41.out"    2>&1 & PID_FIX41=$!
$RUBY Runner.rb 127.0.0.1 $PORT definitions/server/fix42/*.def    > "$TMPDIR/fix42.out"    2>&1 & PID_FIX42=$!
$RUBY Runner.rb 127.0.0.1 $PORT definitions/server/fix43/*.def    > "$TMPDIR/fix43.out"    2>&1 & PID_FIX43=$!
$RUBY Runner.rb 127.0.0.1 $PORT definitions/server/fix44/*.def    > "$TMPDIR/fix44.out"    2>&1 & PID_FIX44=$!
$RUBY Runner.rb 127.0.0.1 $PORT definitions/server/validate/*.def > "$TMPDIR/validate.out" 2>&1 & PID_VAL=$!

RESULT=0
for PID in $PID_FIX50 $PID_FIX50SP1 $PID_FIX50SP2 $PID_FIX40 $PID_FIX41 $PID_FIX42 $PID_FIX43 $PID_FIX44 $PID_VAL; do
  wait $PID || RESULT=$?
done

for OUT in "$TMPDIR"/fix40.out "$TMPDIR"/fix41.out "$TMPDIR"/fix42.out \
           "$TMPDIR"/fix43.out "$TMPDIR"/fix44.out "$TMPDIR"/fix50.out \
           "$TMPDIR"/fix50sp1.out "$TMPDIR"/fix50sp2.out "$TMPDIR"/validate.out; do
  cat "$OUT"
done

rm -rf "$TMPDIR"
exit $RESULT
