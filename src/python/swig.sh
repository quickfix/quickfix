#!/bin/sh

swig -I../C++ -threads -python -py3 -c++ -o QuickfixPython.cpp quickfix.i
cat quickfix_fields.py >> quickfix.py
