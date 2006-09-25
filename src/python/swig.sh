#!/bin/sh

swig -python -c++ -o QuickfixPython.cpp ../quickfix.i
cat quickfix_fields.py >> quickfix.py
