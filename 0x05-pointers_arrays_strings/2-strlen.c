#include "main.h"
#include <stdio.h>

/**
 * _strlen - determine the leng of string
 *
 * @s: the array of char
 *
 * Description: determine the leng of @s
 *
 * Return: leng of @s or 0 if @s is null
 */

int _strlen(char *s)
{
	int i = 0;

	if (s == NULL)
		return (0);

	while (s[i] != '\0')
	{
		i++;
	}

	return (i);
}
