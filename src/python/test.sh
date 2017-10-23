#!/bin/sh
export LD_LIBRARY_PATH=../../src/C++/.libs
export DYLD_LIBRARY_PATH=../../src/C++/.libs
export PYTHONPATH=../../lib/python

python test/DataDictionaryTestCase.py
python test/DictionaryTestCase.py
python test/FieldBaseTestCase.py
python test/SessionSettingsTestCase.py
python test/MessageTestCase.py
