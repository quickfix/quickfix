until [ -z "$1" ]
do
  ./copyifnotexist.sh $1 ../../include/$1
  ./copyifnewer.sh $1 ../../include/$1
  shift
done

#ls ${FILES} | xargs -n1 -i echo {}
#ls ${FILES} | xargs -n1 -i ./copyifnotexist.sh {} ../../include/{}
#ls ${FILES} | xargs -n1 -i ./copyifnewer.sh {} ../../include/{}