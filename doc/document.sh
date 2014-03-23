#!/bin/bash

WHICH_TIDY=$(which tidy)
if [ $? == 0 ] ; then
    find html "*.html" | xargs -n1 tidy -config tidy.config -m
fi

WHICH_DOXYGEN=$(which doxygen)
if [ $? == 0 ] ; then
    doxygen
fi

cp doxygen.css html