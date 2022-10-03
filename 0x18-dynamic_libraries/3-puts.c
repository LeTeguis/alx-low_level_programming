#include "main.h"
#include <stdio.h>

/**
 * _puts - put the string in the standart input
 *
 * @str: the pointer of char
 *
 * Description: prints a string, followed by a new line, to stdout
 *
 * Return: Nothing
 */

void _puts(char *str)
{
	if (str != NULL)
	{
		int p = 0;

		while (str[p] != '\0')
		{
			_putchar(str[p]);
			p++;
		}
		_putchar('\n');
	}
}
