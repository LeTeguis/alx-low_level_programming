#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * _realloc - reallocation
 *
 * @ptr: last memory
 * @old_size: old size
 * @new_size: new size
 *
 * Description: reallocates a memory block using malloc and free
 *
 * Return: new memory
 */

void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	void *new_memory = 0;
	unsigned int i = 0;
	unsigned int min_ = 0;

	if (!ptr && new_size <= 0)
		return (0);
	if (ptr && new_size <= 0)
	{
		free(ptr);
		return (0);
	}
	if (new_size == old_size)
		return (ptr);

	new_memory = malloc(new_size);

	if (!new_memory)
	{
		free(ptr);
		return (0);
	}

	min_ = (old_size < new_size) ? old_size : new_size;

	for (i = 0; i < min_; i++)
		*((char *)new_memory + i) = *((char *)ptr + i);

	free(ptr);
	ptr = new_memory;

	return (new_memory);
}
