#include "main.h"
#include <stdio.h>
#include <limits.h>

/**
 * print_number - print the integer number
 *
 * @n: number are print
 *
 * Description: prints an integer
 *
 * Return: Nothing
 */

void print_number(int n)
{
	if (n < 0)
	{
		_putchar('-');
		print_number((n == INT_MIN) ? -(n / 10) : -n);
		if (n == INT_MIN)
			_putchar((-(n - ((n / 10) * 10))) + '0');
	}
	else if (0 <= n && n <= 9)
	{
		_putchar(n + '0');
	}
	else
	{
		print_number(n / 10);
		_putchar((n % 10) + '0');
	}
}
