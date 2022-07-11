#include "main.h"
#include <stdio.h>

/**
 * _strcpy - copy the string
 *
 * @dest: destination of copy
 * @src: source of copy
 *
 * Description: copies the string pointed to by src, including the
 * terminating null byte (\0), to the buffer pointed to by dest
 *
 * Return: return value of @dts
 */

char *_strcpy(char *dest, char *src)
{
	if (dest != NULL && src != NULL)
	{
		int leng = 0;

		while (src[leng] != '\0')
		{
			dest[leng] = src[leng];
			leng++;
		}

		while (dest[leng] != '\0')
		{
			dest[leng] = '\0';
			leng++;
		}

		return (dest);
	}
	return (NULL);
}
