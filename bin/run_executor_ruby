#!/bin/sh
export LD_LIBRARY_PATH=../src/C++/.libs
export DYLD_LIBRARY_PATH=$LD_LIBRARY_PATH
export RUBYLIB=../lib/ruby

ruby -I ../lib/ruby ../examples/executor/ruby/executor.rb cfg/executor.cfg
