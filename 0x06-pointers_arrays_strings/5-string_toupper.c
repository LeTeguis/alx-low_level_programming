#include "main.h"
#include <stdio.h>

/**
 * string_toupper - upper letter
 *
 * @c: array of char
 *
 * Description: transform all alpha carter in upper case
 *
 * Return: the result of transformation
 */

char *string_toupper(char *c)
{
	int i = 0;

	while (c[i] != '\0')
	{
		if ('a' <= c[i] && c[i] <= 'z')
			c[i] = 'A' + (c[i] - 'a');
		i++;
	}

	return (c);
}
