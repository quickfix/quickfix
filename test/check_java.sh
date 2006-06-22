#!/bin/sh
sleep 1

QUICKFIX_TEST_PORT=5001

./runat_java $QUICKFIX_TEST_PORT
RESULT=$?
if [ $RESULT != 0 ]
then 
  exit $RESULT
fi

sleep 1