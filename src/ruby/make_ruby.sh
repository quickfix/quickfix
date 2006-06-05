export CXX=$1
export CXXFLAGS=$2
export LIBS=$3

rm -rf ../temp
mkdir ../temp
cp *.cpp ../temp
cp *.h ../temp
cp extconf.rb ../temp
pushd ../temp
ruby extconf.rb
popd
cp ../temp/Makefile Makefile.ruby
rm -rf ../temp

make -f Makefile.ruby