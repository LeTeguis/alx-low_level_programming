#!/bin/bash

for file in ./*.c
do
   gcc -fPIC -c $file
done

gcc -shared -Wl,-soname,liball.so -o liball.so *.o
