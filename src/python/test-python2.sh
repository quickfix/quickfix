#!/bin/sh
export LD_LIBRARY_PATH=../../src/C++/.libs
export DYLD_LIBRARY_PATH=../../src/C++/.libs
export PYTHONPATH=../../lib/python2

python2 test/DataDictionaryTestCase.py
python2 test/DictionaryTestCase.py
python2 test/FieldBaseTestCase.py
python2 test/SessionSettingsTestCase.py
python2 test/MessageTestCase.py
