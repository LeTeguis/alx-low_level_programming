#include "main.h"
#include <stdio.h>

/**
 * cap_string - capitalise word
 *
 * @c: array of char
 *
 * Descripion: capitalizes all words of a string
 *
 * Return: result of capitalisation
 */

char *cap_string(char *c)
{
	int i = 0;

	if (c == NULL)
		return (c);

	while (c[i] != '\0')
	{
		if (i == 0 || c[i - 1] == '\n' || c[i - 1] == '\t' || c[i - 1] == ' '
			       || c[i - 1] == ',' || c[i - 1] == ';' || c[i - 1] == '.'
			       || c[i - 1] == '!' || c[i - 1] == '?' || c[i - 1] == '"'
			       || c[i - 1] == '(' || c[i - 1] == ')' || c[i - 1] == '{'
			       || c[i - 1] == '}')
		{
			if ('a' <= c[i] && c[i] <= 'z')
				c[i] = 'A' + (c[i] - 'a');
		}
		i++;
	}

	return (c);
}
