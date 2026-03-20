#!/bin/bash

mkdir -p ../usr/bin
make -C ../src
cp ../src/maxfinder ../usr/bin/