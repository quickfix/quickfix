#/bin/sh

if [ -e $2 ]; then
  exit 0
else
  cp $1 $2
fi