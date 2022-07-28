#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * array_range - array
 *
 * @min: min value
 * @max: max value
 *
 * Description: The array created should contain all the
 * values from min (included) to max (included), ordered
 * from min to max
 *
 * Return: the pointer to the newly created array
 */

int *array_range(int min, int max)
{
	int *table = 0;
	int i = 0;

	if (min > max)
		return (0);

	table = (int *)malloc(sizeof(int) * (max - min + 1));

	if (!table)
		return (0);

	for (i = 0; i < (max - min + 1); i++)
		table[i] = min + i;

	return (table);
}
