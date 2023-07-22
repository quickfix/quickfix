#!/bin/bash

set -e
./generate_c++.sh
ruby -I. Generator.rb

