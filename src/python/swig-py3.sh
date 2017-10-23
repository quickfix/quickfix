#!/bin/sh

swig -I../C++ -threads -python -py3 -c++ -o QuickfixPython.cpp quickfix.i
cat quickfix_fields.py >> quickfix.py
sed -i "s/except Exception/except BaseException/g" quickfix.py
sed -i "s/object.__getattr__/object.__getattribute__/g" quickfix.py
