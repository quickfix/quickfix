#!/bin/sh
DEFAULTPYTHONVERSION="$(python -c 'import sys; print(sys.version_info.major);')"
export PYTHONPATH="../lib/python${DEFAULTPYTHONVERSION}"

python ../examples/executor/python/executor.py cfg/executor.cfg
