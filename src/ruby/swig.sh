#!/bin/sh

swig -I../C++ -D__cpp_noexcept_function_type -ruby -c++ -o QuickfixRuby.cpp quickfix.i
