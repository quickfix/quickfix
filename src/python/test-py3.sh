#!/bin/sh
export LD_LIBRARY_PATH=../../src/C++/.libs
export DYLD_LIBRARY_PATH=../../src/C++/.libs
export PYTHONPATH=../../lib/python

python3 test/DataDictionaryTestCase-py3.py
python3 test/DictionaryTestCase-py3.py
python3 test/FieldBaseTestCase-py3.py
python3 test/SessionSettingsTestCase-py3.py
python3 test/MessageTestCase-py3.py
