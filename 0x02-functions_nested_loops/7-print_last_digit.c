#include "main.h"
#include <limits.h>

/**
 * print_last_digit - digit
 * @n : the integer value
 * Description: determine the last digit of number
 * Return: last digit of @n
 */

int print_last_digit(int n)
{
	int d;

	if (n > 0)
		d = n % 10;
	else
	{
		if (INT_MIN == n)
			d = (-n + 1) % 10;
		else
			d = (-n) % 10;
	}

	_putchar(d + '0');
	return (d);
}
