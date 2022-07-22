#!/bin/bash

for file in ./*.c
do
   gcc -g -O -c -Wall -pedantic -Werror -Wextra -std=gnu89 $file
done

for file in ./*.o
do
	ar rc liball.a $file
done

ranlib liball.a
