#!/bin/sh
sleep 1

QUICKFIX_TEST_PORT=5001

./runut $QUICKFIX_TEST_PORT
RESULT=$?
if [ $RESULT != 0 ]
then 
  exit $RESULT
fi

if [ $? != 0 ]
then 
  exit $?
fi

./runat $QUICKFIX_TEST_PORT
RESULT=$?
if [ $RESULT != 0 ]
then 
  exit $RESULT
fi

sleep 1