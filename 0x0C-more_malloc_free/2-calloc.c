#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * _calloc - new allocation
 *
 * @nmemb: elements of size bytes
 * @size: number of bytes
 *
 * Description: allocates memory for an array, using malloc
 *
 * Return: The memory is set to zero
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *memoire = 0;
	unsigned int i = 0;

	if (nmemb == 0 || size == 0)
		return (0);
	memoire = malloc(nmemb * size);

	if (!memoire)
		return (0);
	for (i = 0; i < (nmemb * size); i++)
		*((char *)memoire + i) = 0;
	return (memoire);
}
