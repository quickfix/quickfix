DIR=$1
FILE1=$2
FILE2=$3

echo $DIR/$FILE1
if [ -e $DIR/$FILE1 ]; then
	ln -sf $FILE1 $DIR/$FILE2
elif [ -e $DIR/$FILE2 ]; then
	ln -sf $FILE2 $DIR/$FILE1
fi
