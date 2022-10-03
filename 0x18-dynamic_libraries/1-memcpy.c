#include "main.h"

/**
 * _memcpy - copies
 *
 * @dest: memory destination
 * @src: memory source
 * @n: the number of bytes from src area
 *
 * Description: copies memory area
 *
 * Return: pointer to @dest
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i = 0;

	if (dest == 0 || src == 0)
		return (dest);

	for (i = 0; i < n; i++)
		*(dest + i) = *(src + i);

	return (dest);
}
