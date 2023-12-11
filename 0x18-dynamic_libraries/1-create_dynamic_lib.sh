#!/bin/bash
gcc -c fPIC *.c
gcc -share -o liball.so *.o
