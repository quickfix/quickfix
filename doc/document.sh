#!/bin/bash

WHICH_DOXYGEN=$(which doxygen)
if [ $? == 0 ] ; then
    doxygen
fi

cp doxygen.css html