#include "main.h"
#include <stdio.h>

/**
 * print_array - print the array
 *
 * @a: the pointer of array
 * @n: the len of array
 *
 * Description: print the value of the array
 *
 * Return: Nothing
 */

void print_array(int *a, int n)
{
	if (a != NULL && n > 0)
	{
		int i;

		for (i = 0; i < n; i++)
		{
			printf("%d", a[i]);
			if (i != n - 1)
				printf(", ");
		}
	}
	printf("\n");
}
