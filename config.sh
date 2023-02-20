#!bin/bash

rm -rf build/*
cd build
cmake .. # -G "MinGW Makefiles" #Uncomment if you are on Windows
cd ../