#include "main.h"
#include <stdio.h>

/**
 * reverse_array - reverse the integer array
 *
 * @a: the array of interger
 * @n: size of array
 *
 * Description: reverse the array
 *
 * Return: Nothing
 */

void reverse_array(int *a, int n)
{
	int i = 0;

	while (i < (n / 2) - 1)
	{
		int tmp = a[i];

		a[i] = a[n - i - 1];
		a[n - i - 1] = tmp;
		i++;
	}
}
