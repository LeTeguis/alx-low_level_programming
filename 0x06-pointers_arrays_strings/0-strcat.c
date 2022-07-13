#include "main.h"
#include <stdio.h>

/**
 * _strcat - concatanation
 *
 * @dest: destination of concatanation
 * @src: source of concatanation
 *
 * Description: concatenates two strings
 *
 * Return: pointer to the resulting string dest
 */

char *_strcat(char *dest, char *src)
{
	int leng = 0;
	int i = 0;

	if (dest == NULL)
		return (src);
	if (src == NULL)
		return (dest);

	while (dest[leng] != '\0')
		leng++;
	while (src[i] != '\0')
	{
		dest[leng + i] = src[i];
		i++;
	}
	dest[leng + i] = '\0';

	return (dest);
}
