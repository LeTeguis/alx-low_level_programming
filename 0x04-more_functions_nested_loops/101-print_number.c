#include "main.h"

/**
 * print_number - print the number
 * @n: the number we use to print
 * Description: prints an integer
 * Return: Nothing
 */

void print_number(int n)
{
	int d = n;

	if (n < 0)
	{
		_putchar('-');
		d = -n;
	}

	if (d > 9)
	{
		print_number(d / 10);
		_putchar((d % 10) + '0');
	}
	else
		_putchar(d + '0');
}
