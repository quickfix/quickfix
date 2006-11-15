#!/bin/bash

usage() {
  echo "usage: $(basename $0) CONFIG_FILE"
  exit 1
}

CFG_FILE=""
LIB_DIR="../../lib"
CP="$LIB_DIR/quickfix.jar:$LIB_DIR/junit.jar:$LIB_DIR/log4j.jar:banzai/build:."
APP="Banzai"

if [ $1 ]; then
  CFG_FILE="$1"
else
  usage
fi

java -Djava.library.path=$LIB_DIR -classpath "$CP" "$APP" "$CFG_FILE"
