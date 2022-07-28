#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * string_nconcat - n concatebation
 *
 * @s1: first string
 * @s2: second string
 * @n: leng of string
 *
 * Description: concatenates two strings
 *
 * Return: pointer shall point to a newly
 * allocated space in memory
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int l_1 = 0;
	unsigned int l_2 = 0;
	char *result;
	unsigned int i = 0;

	if (!s1 && !s2)
	{
		result = (char *)malloc(sizeof(char));
		result[0] = '\0';
		return (0);
	}
	if (s1)
	{
		while (s1[l_1])
			l_1++;
	}

	if (s2 && n > 0)
	{
		while (s2[l_2])
			l_2++;
	}

	if (n < l_2)
		l_2 = n;

	result = (char *)malloc(sizeof(char) * (l_1 + l_2 + 1));

	if (!result)
		return (0);

	i = 0;
	while (s1[i])
	{
		result[i] = s1[i];
		i++;
	}
	i = 0;
	while (s2[i])
	{
		result[i + l_1] = s2[i];
	       i++;
	}
	result[l_1 + l_2] = '\0';
	return (result);
}
