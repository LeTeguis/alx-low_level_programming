#include "main.h"
#include <stdio.h>

/**
 * puts2 - put the string
 *
 * @str: string variable
 *
 * Description: prints every other character of a string,
 * starting with the first character, followed by a new line
 *
 * Return: Nothing
 */

void puts2(char *str)
{
	if (str != NULL)
	{
		int i = 0;

		while (str[i] != '\0')
		{
			if (i % 2 == 0)
				_putchar(str[i]);
			i++;
		}
		_putchar('\n');
	}
}
