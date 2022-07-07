#include "main.h"

/**
 * print_line - print one line
 * @n: number of times the character _ should be printed
 * Description:  draws a straight line in the terminal
 * Return: Nothing
 */

void print_line(int n)
{
	if (n > 0)
	{
		int d;

		for (d = 0; d < n; d++)
			_putchar('_');
	}
	_putchar('\n');
}
