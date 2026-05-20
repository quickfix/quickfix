#!/bin/sh

trap "trap - TERM && kill -- -$$ 2> /dev/null" INT TERM KILL EXIT

SCRIPT=$(realpath "$0")
DIR=$(dirname "$SCRIPT")

cd $DIR

./pt --quickfix-spec-path $DIR/../spec -# "~[network]" "$@"
./pt --quickfix-spec-path $DIR/../spec -# "[network]" "$@"
RESULT=$?
exit $RESULT
