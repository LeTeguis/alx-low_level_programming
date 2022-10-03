#!/bin/bash

for file in ./*.c
do
   gcc -fPIC -c $file
done

for file in ./*.o
do
	gcc -shared -Wl,-soname,liball.so -o liball.so $file
done
