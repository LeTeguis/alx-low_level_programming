#include "main.h"
#include <stdio.h>

/**
 * puts_half - print half
 *
 * @str: string
 *
 * Description: prints half of a string, followed by a new line
 *
 * Return: Nothing
 */

void puts_half(char *str)
{
	if (str != NULL)
	{
		int leng = 0;
		int half = 0;

		while (str[leng] != '\0')
			leng++;

		half = leng / 2;
		
		if (leng % 2 == 1)
			half = (leng - 1) / 2;

		while (str[half] != '\0')
		{
			_putchar(str[half]);
			half++;
		}
		_putchar('\n');
	}
}
