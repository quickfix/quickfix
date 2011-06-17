./generate_c++.sh
./generate_net.sh

which jruby
if [ $? -eq 0 ]; then
	jruby --server Generator.rb
else
	ruby Generator.rb
fi
