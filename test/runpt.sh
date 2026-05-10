#!/bin/sh

trap "trap - TERM && kill -- -$$ 2> /dev/null" INT TERM KILL EXIT

SCRIPT=$(realpath "$0")
DIR=$(dirname "$0")

cd $DIR

# Run non-network benchmarks at full sample count, then network benchmarks
# with reduced samples (each sample spins up a real socket stack + 1s sleep).
./pt --quickfix-spec-path $DIR/../spec -# "~[network]" "$@"
./pt --quickfix-spec-path $DIR/../spec -# "[network]" --benchmark-samples 5 "$@"
RESULT=$?
exit $RESULT
