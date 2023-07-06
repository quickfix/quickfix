#!/bin/sh

swig -I../C++ -D__cpp_noexcept_function_type -ruby -DHAVE_SSL=1 -c++ -o QuickfixRuby.cpp quickfix.i
