#include "main.h"
#include <stdio.h>

/**
 * swap_int - swap value of pointer
 *
 * @a: first integer pointer
 * @b: second integer pointer
 *
 * Description: swap a value of pointer to to @a and @b
 *
 * Return: Nothing
 */

void swap_int(int *a, int *b)
{
	if (a != NULL && b != NULL)
	{
		int c = *a;
		*a = *b;
		*b = c;
	}
}
