#include "main.h"
#include <stdio.h>
#include <limits.h>

/**
 * _atoi - convert string to number
 *
 * @s: string that content the integer
 *
 * Return: the integer value that detect or 0 if can  containt int
 */

int _atoi(char *s)
{
	int number = 0;
	int i = 0;
	int signe = 1;
	int is_number = -1;

	if (s == NULL)
		return (number);

	while (s[i] != '\0')
	{
		if (s[i] == '-')
			signe *= -1;
		else if ('0' <= s[i] && s[i] <= '9')
		{
			if (is_number == 0)
				break;
			else if (is_number == -1)
				is_number = 1;

			if ((number * 10) >= INT_MAX - (s[i] - '0'))
				number = INT_MAX;
			else
				number = (number * 10) + (s[i] - '0');
		}
		else if (is_number == 1)
			is_number = 0;
		i++;
	}

	if (number == INT_MAX && signe == -1)
		number = (-number) - 1;

	return (number);
}
