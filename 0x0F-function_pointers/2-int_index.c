#include "function_pointers.h"

/**
 * int_index - find
 *
 * @array: array of element
 * @size: size of element
 * @cmp: funtion to compare
 *
 * Description: compare
 *
 * Return: index if exist -1 if not
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	int i = 0;

	if (size <= 0)
		return (-1);
	for (i = 0; i < size; i++)
		if (cmp(array[i]) != 0)
			return (i);
	return (-1);
}
