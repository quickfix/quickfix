#!/bin/sh
CLASS=$1
HEADERFILE=$1TestCase.h
SOURCEFILE=$1TestCase.cpp
ruby templategen.rb templates/template_TestCase.h $HEADERFILE "<CLASS>" $1 
ruby templategen.rb templates/template_TestCase.cpp $SOURCEFILE "<CLASS>" $1 