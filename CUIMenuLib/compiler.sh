#!/bin/bash

#Usage: ./compiler.sh task_name

gcc -c $1.c
gcc -c getch.c
gcc -c CUIMenuLib.c
gcc $1.o getch.o CUIMenuLib.c -o $1
