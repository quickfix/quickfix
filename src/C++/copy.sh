DEST=$1
shift

until [ -z "$1" ]
do
  bash ./copyifnotexist.sh $1 $DEST/$1
  bash ./copyifnewer.sh $1 $DEST/$1
  shift
done
