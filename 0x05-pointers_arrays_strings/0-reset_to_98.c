#include "main.h"
#include <stdio.h>

/**
 * reset_to_98 - reset pointer
 * @n: pointer of int
 *
 * Description: update the value of poiter to to @n
 *
 * Return: Nothing
 */

void reset_to_98(int *n)
{
	if (n != NULL)
		*n = 98;
}
