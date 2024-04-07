#!/bin/sh
export LD_LIBRARY_PATH=./quickfix/src/C++/.libs
export DYLD_LIBRARY_PATH=./quickfix/src/C++/.libs
export PYTHONPATH=./quickfix/lib/python3

python3 test/DataDictionaryTestCase.py
python3 test/DictionaryTestCase.py
python3 test/FieldBaseTestCase.py
python3 test/SessionSettingsTestCase.py
python3 test/MessageTestCase.py
