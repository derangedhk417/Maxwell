#!/bin/bash
#IMPL_FILES=""
icc -lgsl simpson_test.cpp -o simpson_test -O3 #$IMPL_FILES
#icc -lgsl   min.cpp -o min   -O3 $IMPL_FILES
#icc -lgsl  mgsc.cpp -o mgsc  -O3 $IMPL_FILES