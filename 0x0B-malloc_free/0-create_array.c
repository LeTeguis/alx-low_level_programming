#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * create_array - create alloc array
 *
 * @size: size of array
 * @c: initialise value
 *
 * Description: creates an array of chars,
 * and initializes it with a specific char
 *
 * Return: Returns NULL if size = 0 or
 * a pointer to the array, or NULL if it fails
 */

char *create_array(unsigned int size, char c)
{
	if (size > 0)
	{
		unsigned int i = 0;
		char *array = (char *)malloc(sizeof(char) * size);

		if (array != 0)
		{
			for (i = 0; i < size; i++)
				array[i] = c;
		}
		return (array);
	}
	return (0);
}
