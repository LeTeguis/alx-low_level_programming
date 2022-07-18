#include "main.h"

/**
 * _strchr - search
 *
 * @s: array of char
 * @c: character you find
 *
 * Description: locates a character in a string
 *
 * Return: a pointer of a first occurence of @c
 */

char *_strchr(char *s, char c)
{
	int i = 0;

	if (s == 0)
		return (0);

	while (s[i] != '\0')
	{
		if (s[i] == c)
			return (s + i);
		i++;
	}
	return (0);
}
