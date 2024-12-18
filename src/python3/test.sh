#!/bin/sh
export LD_LIBRARY_PATH=../C++/.libs
export DYLD_LIBRARY_PATH=../C++/.libs
export PYTHONPATH=../../lib/python3

python3 test/DataDictionaryTestCase.py
python3 test/DictionaryTestCase.py
python3 test/FieldBaseTestCase.py
python3 test/MessageStoreTestCase.py
python3 test/MessageTestCase.py
python3 test/SessionSettingsTestCase.py