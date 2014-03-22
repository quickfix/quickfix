#!/bin/sh
sleep 1

QUICKFIX_TEST_PORT=11111

./runut.sh $QUICKFIX_TEST_PORT
RESULT=$?
if [ $RESULT != 0 ]
then 
  exit $RESULT
fi

if [ $? != 0 ]
then 
  exit $?
fi

./runat.sh $QUICKFIX_TEST_PORT
RESULT=$?
if [ $RESULT != 0 ]
then 
  exit $RESULT
fi

sleep 1