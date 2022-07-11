#include "main.h"
#include <stdio.h>

/**
 * print_rev - print the reverse of string
 *
 * @s: string our print
 *
 * Description:  prints a string, in reverse, followed by a new line
 *
 * Return: Nothing
 */

void print_rev(char *s)
{
	if (s != NULL)
	{
		int leng = 0;
		int i;

		while (s[leng] != '\0')
			leng++;

		i = leng - 1;

		while (i >= 0)
		{
			_putchar(s[i]);
			i--;
		}
		_putchar('\n');
	}
}
