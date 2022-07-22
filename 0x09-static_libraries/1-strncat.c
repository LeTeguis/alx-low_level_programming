#include "main.h"
#include <stdio.h>

/**
 * _strncat - n concatanation
 *
 * @dest: destination
 * @src: source
 * @n: leng in src
 *
 * Description: Concatanate @dest an n caracter in @src
 *
 * Return: @dest result
 */

char *_strncat(char *dest, char *src, int n)
{
	int leng = 0;
	int i = 0;

	if (src == NULL)
		return (dest);

	if (dest == NULL)
		return (src);

	while (dest[leng] != '\0')
		leng++;
	for (i = 0; i < n; i++)
	{
		if (src[i] == '\0')
			break;
		dest[leng + i] = src[i];
	}
	dest[leng + i] = '\0';

	return (dest);
}
