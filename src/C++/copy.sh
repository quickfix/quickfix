#!/bin/sh

until [ -z "$1" ]
do
  ./copyifnotexist.sh $1 ../../include/quickfix/$1
  ./copyifnewer.sh $1 ../../include/quickfix/$1
  shift
done
