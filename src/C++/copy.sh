#!/bin/bash

until [ -z "$1" ]
do
  ./copyifnotexist.sh $1 ../../include/$1
  ./copyifnewer.sh $1 ../../include/$1
  shift
done