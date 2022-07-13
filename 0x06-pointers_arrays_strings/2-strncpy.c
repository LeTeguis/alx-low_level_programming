#include "main.h"
#include <stdio.h>

/**
 * _strncpy - copues string
 *
 * @dest: destination
 * @src: source
 * @n: leng of src copy
 *
 * Description: copy n caracter of src in the dest
 *
 * Return: dest resul
 */

char *_strncpy(char *dest, char *src, int n)
{
	int i = 0;

	if (src == NULL)
		return (NULL);
	if (dest == NULL || n <= 0)
		return (src);

	for (i = 0; i < n; i++)
	{
		if (src[i] == '\0')
			break;
		dest[i] = src[i];
	}

	for ( ; i < n; i++)
		dest[i] = '\0';

	return (dest);
}
