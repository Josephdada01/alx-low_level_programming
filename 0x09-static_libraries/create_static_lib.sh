#!/bin/bash

SOURCE_FILES=$(ls *.c)

gcc -c $SOURCE_FILES
ar rcs liball.a *.o
rm *.o
