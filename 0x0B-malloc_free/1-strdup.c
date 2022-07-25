#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * _strdup - str dup
 *
 * @str: array of char
 *
 * Description: create a pointer to a newly allocated
 * space in memory, which contains a copy of the string
 * given as a parameter
 *
 * Return: the result of new allocation or NULL
 */

char *_strdup(char *str)
{
	int leng = 0;

	while (str[leng++])
		;
	leng--;

	if (leng > 0)
	{
		char *copy = (char *)malloc(sizeof(char) * leng);

		if (copy)
		{
			while (--leng >= 0)
				copy[leng] = str[leng];
		}
		return (copy);
	}
	return (0);
}
