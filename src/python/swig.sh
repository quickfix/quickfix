#!/bin/sh

swig -threads -python -c++ -o QuickfixPython.cpp ../quickfix.i
cat quickfix_fields.py >> quickfix.py
