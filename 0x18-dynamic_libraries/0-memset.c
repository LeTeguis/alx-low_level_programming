#include "main.h"

/**
 * _memset - constant file memory
 *
 * @s: begin of memory
 * @b: value of constant byte
 * @n: number of byte
 *
 * Description: fills memory with a constant byte
 *
 * Return: pointer to memory area s
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i = 0;

	if (s == 0)
		return (s);

	for (i = 0; i < n; i++)
		*(s + i) = b;

	return (s);
}
