#include "main.h"
#include <stdio.h>

/**
 * _strcmp - compare two string
 *
 * @s1: first string
 * @s2: second string
 *
 * Description: compare s1 and s2
 *
 * Return: 1 if s1 > s2, -1 if s1 < s2 or 0 if s1 == s2
 */

int _strcmp(char *s1, char *s2)
{
	int i = 0;
	int r = 0;

	while (s1[i] != '\0' && s2[i] != '\0')
	{
		if (s1[i] != s2[i])
		{
			return (s1[i] - s2[i]);
		i++;
	}

	return (s1[i] - s2[i]);
}
