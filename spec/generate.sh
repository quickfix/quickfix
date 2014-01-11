#!/bin/bash

RUBY_CMD="ruby"
which jruby
if [ $? -eq 0 ]; then
	RUBY_CMD="jruby --server"
fi

set -e
./generate_c++.sh
./generate_net.sh
$RUBY_CMD -I. Generator.rb

