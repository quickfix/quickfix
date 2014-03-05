#!/bin/sh
export LD_LIBRARY_PATH=../C++/.libs
export DYLD_LIBRARY_PATH=$LD_LIBRARY_PATH
export RUBYLIB=../../lib/ruby

ruby -I ./ -I ../../lib/ruby test/TestSuite.rb
