#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * isInteger - it is integer?
 *
 * @s: string
 *
 * Description: determine if s is the big integer
 *
 * Return: 1 if is true 0 if not true
 */

int isInteger(char *s)
{
	if (!s[0])
		return (1);
	if ('0' <= s[0] && s[0] <= '9')
		return (isInteger((s + 1)));
	return (0);
}

/**
 * multiplieByDigit - simple multiplie
 *
 * @s: string
 * @leng: leng of s
 * @c: digit to multiplie
 * @zero: number of zero to add in right result
 * @new_size: the size of result
 *
 * Description: multipli the big integer to one digit
 *
 * Return: result of multiplicatio
 */

char *multiplieByDigit(char *s, unsigned int leng, char c,
		unsigned int zero, unsigned int *new_size)
{
	char *result = 0;
	unsigned int i = 0;
	unsigned int retenu = 0;

	*new_size = 0;
	result = (char *)malloc(sizeof(char) * (leng + zero + 2));
	if (!result)
		return (result);
	for (i = 0; i < leng + zero + 2; i++)
	{
		unsigned int calcul = 0;

		if (i > leng)
			result[i] = '0';
		else if (i < leng)
		{
			if (s[leng - i - 1])
				calcul = (s[leng - i - 1] - '0') * (c - '0') + retenu;
			result[leng - i] = '0' + (calcul % 10);
			retenu = calcul / 10;
		}
	}
	result[0] = '0' + retenu;
	result[leng + zero + 1] = '\0';
	*new_size = leng + zero + 1;
	if (retenu == 0)
	{
		*new_size = leng + zero;
		for (i = 1; i < leng + zero + 2; i++)
			result[i - 1] = result[i];
	}
	return (result);
}

/**
 * addFromPrevious - add function
 *
 * @s1: first string
 * @leng1: leng of s1
 * @s2: second string
 * @leng2: leng of second string
 *
 * Description: add big number (s1 + s2)
 *
 * Return: sum of s1 and s2
 */

char *addFromPrevious(char *s1, unsigned int *leng1,
		char *s2, unsigned int leng2)
{
	char *result = 0;
	unsigned int retenu = 0;
	unsigned int i = 0;
	unsigned int leng = (*leng1 < leng2) ? leng2 : *leng1;

	result = (char *)malloc(sizeof(char) * (leng + 2));
	if (!result)
		return (0);
	for (i = 0; i < leng; i++)
	{
		unsigned int calcul = 0;

		if (i < (*leng1))
			calcul += (s1[(*leng1) - i - 1] - '0');
		if (i < leng2)
			calcul += (s2[leng2 - i - 1] - '0');
		calcul += retenu;
		result[leng - i] = '0' + (calcul % 10);
		retenu = calcul / 10;
	}
	result[0] = '0' + retenu;
	result[leng + 1] = '\0';
	*leng1 = leng + 1;
	if (retenu == 0)
	{
		*leng1 = leng;
		for (i = 1; i < leng + 2; i++)
			result[i - 1] = result[i];
	}

	return (result);
}

/**
 * multiplier - concret
 *
 * @s1: big string
 * @leng_one: leng of s1
 * @s2: simple string better than s1
 * @leng_two: leng of s2
 *
 * Description : the concrete multiplation fonction
 *
 * Return: the result of multiplication
 */

char *multiplier(char *s1, unsigned int leng_one,
		char *s2, unsigned int leng_two)
{
	unsigned int i = 0;
	char *solution = 0;
	unsigned int size_solution = 0;

	for (i = 0; i < leng_two; i++)
	{
		char *mult = 0;
		char *add = 0;
		unsigned int size_mult = 0;

		mult = multiplieByDigit(s1, leng_one, s2[leng_two - i - 1], i, &size_mult);
		if (!mult)
			return (0);
		add = addFromPrevious(solution, &size_solution, mult, size_mult);

		if (!add)
			return (0);
		free(mult);
		if (solution)
			free(solution);
		solution = add;
	}

	return (solution);
}
/**
 * main - entry point
 *
 * @argc: number + 1 parametter
 * @argv: all parametter plus name of program
 *
 * Description: multiplies two positive numbers
 * passed in program
 *
 * Return: 0 or exit(98);
 */

int main(int argc, char **argv)
{
	unsigned int leng_one = 0;
	unsigned int leng_two = 0;
	char *resultat = 0;

	if (argc != 3)
	{
		printf("Error\n");
		exit(98);
	}
	if (!isInteger(argv[1]) || !isInteger(argv[2]))
	{
		printf("Error\n");
		exit(98);
	}
	while (argv[1][leng_one])
		leng_one++;
	while (argv[2][leng_two])
		leng_two++;

	if (leng_one >= leng_two)
		resultat = multiplier(argv[1], leng_one, argv[2], leng_two);
	else
		resultat = multiplier(argv[2], leng_two, argv[1], leng_one);
	if (resultat)
	{
		printf("%s\n", resultat);
		free(resultat);
	}
	return (0);
}
