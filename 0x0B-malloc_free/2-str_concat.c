#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * str_concat - concatanation
 *
 * @s1: first string
 * @s2: second string
 *
 * Description: concatenates two strings
 *
 * Return: the result of concatanation of s1 and s2
 */

char *str_concat(char *s1, char *s2)
{
	int lengOne = 0;
	int lengTwo = 0;
	char *concatain = 0;
	int i = 0;

	while (s1 != 0 && s1[lengOne++])
		;
	while (s2 != 0 && s2[lengTwo++])
		;
	lengOne = (lengOne == 0) ? 0 : lengOne - 1;
	lengTwo = (lengTwo == 0) ? 0 : lengTwo - 1;

	concatain = (char *)malloc(sizeof(char) * (lengOne + lengTwo + 1));

	if (concatain)
	{
		for (i = 0; i < (lengOne + lengTwo); i++)
		{
			if (i < lengOne)
				concatain[i] = s1[i];
			else
				concatain[i] = s2[i - lengOne];
		}
		concatain[lengOne + lengTwo] = '\0';
	}
	return (concatain);
}
