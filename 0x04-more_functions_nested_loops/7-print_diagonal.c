#include "main.h"

/**
 * print_diagonal - print the diagonal line
 * @n: number of times the character \ should be printed
 * Description: draws a diagonal line on the terminal
 * Return: Nothing
 */

void print_diagonal(int n)
{
	if (n > 0)
	{
		int d;
		int i;

		for (d = 0; d < n; d++)
		{
			for (i = 0; i < d; i++)
				_putchar(' ');
			_putchar('\\');
			_putchar('\n');
		}
	}
	else
		_putchar('\n');
}
