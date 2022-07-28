#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * malloc_checked - check malloc
 *
 * @b: size of memory
 *
 * Description: allocates memory using malloc
 *
 * Return: pointer to the allocated memory
 */

void *malloc_checked(unsigned int b)
{
	void *memoire = 0;

	memoire = malloc(b);

	if (!memoire)
		exit(98);
	return (memoire);
}
