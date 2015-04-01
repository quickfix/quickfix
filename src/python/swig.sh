#!/bin/sh

swig -I../C++ -modern -nomodernargs -fastunpack -threads -python -py3 -c++ -safecstrings -o QuickfixPython.cpp quickfix.i
cat quickfix_fields.py >> quickfix.py
