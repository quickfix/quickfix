#!/bin/sh

swig -I../C++ -D__cpp_noexcept_function_type -DHAVE_SSL=1 -DHAVE_MYSQL -ruby -c++ -o QuickfixRuby.cpp quickfix.i
