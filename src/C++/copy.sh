until [ -z "$1" ]
do
  bash ./copyifnotexist.sh $1 ../../include/$1
  bash ./copyifnewer.sh $1 ../../include/$1
  shift
done
