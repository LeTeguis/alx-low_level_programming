#include "function_pointers.h"
#include <stddef.h>

/**
 * array_iterator - array iterator
 *
 * @array: the array
 * @size: size of array
 * @action: pointer to a action function
 *
 * Description: realise the action to array
 *
 * Return: nothing
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t i = 0;

	if (array == 0 || action == 0)
		return;
	for (i = 0; i < size; i++)
		action(array[i]);
}
