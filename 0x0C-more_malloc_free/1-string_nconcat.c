#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * string_leng - calcul leng
 *
 * @s: string
 *
 * Description: calcul the leng of string
 *
 * Return: leng of string
 */

unsigned int string_leng(char *s)
{
	if (!s || !s[0])
		return (0);
	return (1 + string_leng((s + 1)));
}

/**
 * string_add - add
 *
 * @s1: first string
 * @s2: seconde string
 * @p: position init
 * @l: leng
 *
 * Description: add s2 in s1
 *
 * Return: void
 */

void string_add(char *s1, char *s2, unsigned int p, unsigned int l)
{
	unsigned int i = 0;

	while (i < l && s2[i])
	{
		s1[i + p] = s2[i];
		i++;
	}
}

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

	if (!s1 && !s2)
	{
		result = (char *)malloc(sizeof(char));
		if (result)
			result[0] = '\0';
		return (result);
	}

	l_1 = string_leng(s1);
	l_2 = string_leng(s2);

	if (n < l_2)
		l_2 = n;

	result = (char *)malloc(sizeof(char) * (l_1 + l_2 + 1));

	if (!result)
		return (0);

	string_add(result, s1, 0, l_1);
	string_add(result, s2, l_1, l_2);
	result[l_1 + l_2] = '\0';
	return (result);
}
