export CXX=$1
export CXXFLAGS=$2
export LIBS=$3

DIR="$( cd "$( dirname "${BASH_SOURCE[0]}" )" && pwd )"

TEMP=`mktemp -d "../zombie.XXXXXXXXX"`

if [[ ! "$TEMP" || ! -d "$TEMP" ]]; then
  echo "Could not create temp dir"
  exit 1
fi

function cleanup {
  rm -rf "$TEMP"
  echo "Deleted temp working directory $TEMP"
}

trap cleanup EXIT

cp *.cpp $TEMP
cp *.h $TEMP
cp extconf.rb $TEMP
pushd $TEMP
ruby extconf.rb
popd
cp $TEMP/Makefile Makefile.ruby
rm -rf $TEMP

make -f Makefile.ruby
