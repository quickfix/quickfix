#/bin/sh

if [ $1 -nt $2 ]; then
  cp -f $1 $2
else
  exit 0
fi